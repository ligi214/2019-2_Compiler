%{
/*
 * File Name   : subc.y
 * Description : a skeleton bison input
 */

#include "subc.h"

int		yylex ();
int		yyerror (char* s);
void 	REDUCE(char* s);
void	raise(char* message);


%}

/* yylval types */
%union {
	int		intVal;
	char	charVal;
	char	*stringVal;
	struct id *idptr;
	struct decl *declptr;
	struct ste *steptr;
}

/* Precedences and Associativities */
%left		','
%right		ASSIGNOP '='
%left		LOGICAL_OR
%left		LOGICAL_AND
%left		'&'
%left		EQUOP
%left		RELOP
%left		'+' '-'
%left		'*' '/' '%'
%right		'!' INCOP DECOP 
%left 		STRUCTOP '[' ']' '(' ')' '.'

/* Token and Types */
%token<idptr>			TYPE VOID NULL_TOKEN 
%token<idptr>			WRITE_INT WRITE_CHAR WRITE_STRING
%token<idptr>			STRUCT RETURN WHILE FOR BREAK CONTINUE
%nonassoc				IF
%nonassoc				ELSE
%token<intVal>			LOGICAL_OR LOGICAL_AND INCOP DECOP STRUCTOP
%token<idptr>			ID
%token<intVal>			INTEGER_CONST
%token<charVal>			CHAR_CONST
%token<stringVal>		STRING
%token<intVal>			RELOP EQUOP

%type<declptr>			program
%type<declptr>			ext_def_list ext_def type_specifier param_type_specifier struct_specifier
%type<declptr>			func_decl
%type<intVal>			pointers
%type<declptr>			param_list param_decl
%type<declptr>			def_list def
%type<declptr>			compound_stmt func_compound_stmt local_defs stmt_list stmt
%type<declptr>			expr_e expr
%type<declptr>			const_expr
%type<declptr>			or_expr or_list and_expr and_list
%type<declptr>			binary unary
%type<declptr>			args

%%
program
		: ext_def_list {}
		;

ext_def_list
		: ext_def_list ext_def {}
		| /* empty */ {}
		;

ext_def
		: type_specifier pointers ID ';' {
			if(!$1 || !$3) { $$ = NULL; }
			else if($2) {
				decl *temp = findcurrentdecl($3);
				if(temp && temp->scope == scopestack){
					raise("redeclaration");
				}
				else{
					declare($3, makevardecl(makeptrdecl($1)));
				}
			}
			else {
				decl *temp = findcurrentdecl($3);
				if(temp && temp->scope == scopestack){
					raise("redeclaration");
				}
				else{
					declare($3, makevardecl($1));
				}
			}
		}
		| type_specifier pointers ID '[' const_expr ']' ';' {
			if(!$1 || !$3 || !$5) { $$ = NULL; }
			else if($2) {
				decl *temp = findcurrentdecl($3);
				if(temp && temp->scope == scopestack){
					raise("redeclaration");
				}
				else if(!check_is_const($5) || !check_is_int_type($5->type)){
					raise("none integer constant index in array");
				}
				else{
					declare($3,makeconstdecl(makearraydecl($5->int_value,makevardecl(makeptrdecl($1)))));
				}
			}
			else {
				decl *temp = findcurrentdecl($3);
				if(temp && temp->scope == scopestack){
					raise("redeclaration");
				}
				else if(!check_is_const($5) || !check_is_int_type($5->type)){
					raise("none integer constant index in array");
				}
				else{
					declare($3, makeconstdecl(makearraydecl($5->int_value, makevardecl($1))));
				}
			}
		}
		| func_decl ';' {}
		| type_specifier ';' {}
		| func_decl func_compound_stmt {
			fprintf(fp, "%s_final:\n", current_func_name);
			codegen("push_reg fp");
			codegen("pop_reg sp");
			codegen("pop_reg fp");
			codegen("pop_reg pc");
			fprintf(fp, "%s_end:\n", current_func_name);
			current_func_actuals_size = 0;
			pop_scope();
		}

type_specifier
		: TYPE {
			decl *typedecl = findcurrentdecl($1);
			$$ = typedecl;
		}
		| VOID {
			decl *voiddecl = findcurrentdecl($1);
			$$ = voiddecl;
		}
		| struct_specifier {
			$$ = $1;
		}

struct_specifier
		: STRUCT ID '{' {
			decl *structdecl = findcurrentdecl($2);
			if(structdecl){
				raise("redeclaration");
			}
			push_scope();
			isStruct++;
		}
		def_list '}' {
			ste *fields = pop_scope();
			decl *structdecl = findcurrentdecl($2);
			if(!structdecl){
				structdecl = makestructdecl(fields);
				declare($2, structdecl);
				if(scopestack != globalscope){
					ste *struct_ste = symboltable;
					ste *temp = symboltable;
					while(temp && temp->prev!=globalscope->topste){
						temp = temp->prev;
					}
					if(!temp){
						// debug("abnormal accident happened while defining struct"); // not the case
					}
					else{
						if(struct_ste->prev == globalscope->topste){
							symboltable = struct_ste;
						}
						else{
							symboltable = struct_ste->prev;
						}
						temp->prev = struct_ste;
						struct_ste -> prev = globalscope->topste;
						globalscope->topste = struct_ste;
						structdecl->scope = globalscope;
						scopestack->topste = symboltable;
					}
				}
			}
			$$ = structdecl;
			isStruct--;
		}
		| STRUCT ID {
			decl *structdecl = findcurrentdecl($2);
			if(!structdecl){
				raise("incomplete type");
				$$ = NULL;
			}
			else{
				if(!check_is_struct_type(structdecl)){
					raise("incomplete type"); // not the case here
					$$ = NULL;
				}
				else{
					$$ = structdecl;
				}
			}
		}

func_decl
		: type_specifier pointers ID '(' {
			decl *funcdecl = finddecl_in_current_scope($3);
			if(funcdecl) { 
				raise("redeclaration");
				$<declptr>$ = NULL; 
				push_scope();
				if(!$2){
					declare(returnid, $1);
				}
				else{
					declare(returnid, makeptrdecl($1));
				}
				ste *formals = pop_scope();
				push_scope();
				pushstelist(formals);
			}
			else{
				fprintf(fp, "%s:\n", $3->name);
				funcdecl = makefuncdecl();
				declare($3, funcdecl);
				push_scope();
				if(!$2){
					declare(returnid, $1);
				}
				else{
					declare(returnid, makeptrdecl($1));
				}
				ste *formals = pop_scope();
				funcdecl->returntype = formals->decl;
				returntype = formals->decl;
				funcdecl->formals = NULL;
				$<declptr>$ = funcdecl;
				push_scope();
				pushstelist(formals);
				current_func_name = $3->name;
				current_func_decl = funcdecl;
			}
		}
		')' {
			$<declptr>$ = $<declptr>5;
			current_func_actuals_size = 0;
		}
		| type_specifier pointers ID '(' {
			decl *funcdecl = finddecl_in_current_scope($3);
			if(funcdecl){
				raise("redeclaration");
				push_scope();
				if(!$2){
					declare(returnid, $1);
				}
				else{
					declare(returnid, makeptrdecl($1));
				}
				ste *formals = pop_scope();
				push_scope();
				pushstelist(formals);
				$<declptr>$ = NULL;
			}
			else{
				fprintf(fp, "%s:\n", $3->name);
				funcdecl = makefuncdecl();
				declare($3, funcdecl);
				push_scope();
				if(!$2){
					declare(returnid, $1);
				}
				else{
					declare(returnid, makeptrdecl($1));
				}
				ste *formals = pop_scope();
				funcdecl->returntype = formals->decl;
				returntype = formals->decl;
				funcdecl->formals = NULL;
				$<declptr>$ = funcdecl;
				push_scope();
				pushstelist(formals);
				current_func_name = $3->name;
				current_func_decl = funcdecl;
			}
		}
		VOID ')' {
			$<declptr>$ = $<declptr>5;
			current_func_actuals_size = 0;
		}
		| type_specifier pointers ID '(' {
			decl *funcdecl = finddecl_in_current_scope($3);
			if(funcdecl){
				push_scope();
				if(!$2){
					declare(returnid, $1);
				}
				else{
					declare(returnid, makeptrdecl($1));
				}
				$<declptr>$ = NULL;
			}
			else{
				decl *funcdecl = makefuncdecl();
				declare($3, funcdecl);
				push_scope();
				if(!$2){
					declare(returnid, $1);
				}
				else{
					declare(returnid, makeptrdecl($1));
				}
				$<declptr>$ = funcdecl;
				current_func_name = $3->name;
				current_func_decl = funcdecl;
				current_func_actuals_size = 0;
			}
		}
		param_list ')' {
			decl *funcdecl = $<declptr>5;
			if($6 && funcdecl){
				fprintf(fp, "%s:\n", $3->name);
				ste *formals = pop_scope();
				funcdecl->returntype = formals->decl;
				returntype = formals->decl;
				funcdecl->formals = copy_ste(formals->prev);
				push_scope();
				pushstelist(formals);
				$$ = funcdecl;
			}
			else if($6){
				raise("redeclaration");
				ste *formals = pop_scope();
				push_scope();
				pushstelist(formals);
				$$ = NULL;
			}
			else{
				ste *formals = pop_scope();
				push_scope();
				pushstelist(formals);
				$$ = NULL;
			}
		}

pointers
		: '*' {
			$$ = 1;  // 1 if pointer
		}
		| /* empty */ {
			$$ = 0;  // 0 if not
		}

param_list  /* list of formal parameter declaration */
		: param_decl { $$ = $1; } 
		| param_list ',' param_decl { 
			if($1&&$3) { $$ = $1; }
			else { $$=NULL; } 
		}

param_type_specifier
		: TYPE {
			decl *typedecl = findcurrentdecl($1);
			$$ = typedecl;
		}
		| struct_specifier {
			$$ = $1;
		}

param_decl  /* formal parameter declaration */
		: param_type_specifier pointers ID {
			if(!$1 || !$3) { $$ = NULL; }
			else if($2) { 
				decl *paramdecl = finddecl_in_current_scope($3);
				if(paramdecl){
					raise("redeclaration");
					$$ = NULL;
				}
				else{
					decl *vardecl = makevardecl(makeptrdecl($1));
					vardecl->is_param = 1;
					declare($3, vardecl);
					current_func_actuals_size++;
				}
			}
			else {
				decl *paramdecl = finddecl_in_current_scope($3);
				if(paramdecl){
					raise("redeclaration");
					$$ = NULL;
				}
				else {
					decl *vardecl = makevardecl($1);
					vardecl->is_param = 1;
					declare($3, vardecl);
					current_func_actuals_size += (vardecl->size);
				}
			}
		}
		| param_type_specifier pointers ID '[' const_expr ']' {
			if(!$1 || !$3 || !$5) { $$ = NULL; }
			else if($2) {
				decl *paramdecl = finddecl_in_current_scope($3);
				if(paramdecl){
					raise("redeclaration");
					$$ = NULL;
				}
				else if(!check_is_const($5) || !check_is_int_type($5->type)){
					raise("none integer constant index in array");
					$$ = NULL;
				}
				else{
					decl *constdecl = makeconstdecl(makearraydecl($5->int_value,makevardecl(makeptrdecl($1))));
					constdecl->is_param = 1;
					declare($3, constdecl);
					current_func_actuals_size += (constdecl->size);
				}
			}
			else {
				decl *paramdecl = finddecl_in_current_scope($3);
				if(paramdecl){
					raise("redeclaration");
					$$ = NULL;
				}
				else if(!check_is_const($5) || !check_is_int_type($5->type)){
					raise("none integer constant index in array");
					$$ = NULL;
				}
				else{
					decl *constdecl = makeconstdecl(makearraydecl($5->int_value, makevardecl($1)));
					constdecl->is_param = 1;
					declare($3, constdecl);
					current_func_actuals_size += (constdecl->size);
				}
			}
		}

def_list    /* list of definitions, definition can be type(struct), variable, function */
		: def_list def {}
		| /* empty */ {}

def
		: type_specifier pointers ID ';' {
			if(!$1 || !$3){
				$$ = NULL;
			}
			else if(!check_is_type($1)){
				// debug("not type"); // not the case here
				$$ = NULL;
			}
			else{
				decl *paramdecl = finddecl_in_current_scope($3);
				if(paramdecl){
					raise("redeclaration");
					$$ = NULL;
				}
				else if($2) {
					declare($3, makevardecl(makeptrdecl($1)));
				}
				else {
					declare($3, makevardecl($1));
				}
			}
		}
		| type_specifier pointers ID '[' const_expr ']' ';' {
			if(!$1 || !$3){
				$$ = NULL;
			}
			decl *paramdecl = finddecl_in_current_scope($3);
			if(paramdecl){
				raise("redeclaration");
				$$ = NULL;
			}
			else if($2) {
				if(!check_is_const($5) || !check_is_int_type($5->type)){
					raise("none integer constant index in array");
					$$ = NULL;
				}
				else{
					declare($3,makeconstdecl(makearraydecl($5->int_value,makevardecl(makeptrdecl($1)))));
				}
			}
			else {
				if(!check_is_const($5) || !check_is_int_type($5->type)){
					raise("none integer constant index in array");
					$$ = NULL;
				}
				else{
					// printf("%d\n", scopestack->size);
					declare($3, makeconstdecl(makearraydecl($5->int_value, makevardecl($1))));
				}
			}
		}
		| type_specifier ';' {}
		| func_decl ';' {}

func_compound_stmt
		: '{' local_defs {
			if(scopestack->size>0){
				fprintf(fp, "\tshift_sp %d\n", scopestack->size);
			}
			fprintf(fp, "%s_start:\n", current_func_name);
		}
		stmt_list '}' 

compound_stmt
		: '{' local_defs stmt_list '}' 

local_defs  /* local definitions, of which scope is only inside of compound statement */
		:	def_list 

stmt_list
		: stmt_list stmt { $$ = NULL; }
		| /* empty */  { $$ = NULL; }

stmt
		: expr ';' {
			if($1){
				if($1->size > 0){
					if(assign){
						fprintf(fp, "\tshift_sp -%d\n", $1->size+2);
						assign = 0;
					}
					else{
						fprintf(fp, "\tshift_sp -%d\n", $1->size);
					}
				}
				else{
					fprintf(fp, "\tshift_sp -1\n");
				}
			}
		}
		| { push_scope(); } compound_stmt { pop_scope(); }
		| RETURN ';' {
		// Return type compatibility check
			ste *formals = pop_scope(); // get return type
			// if(formals->decl==voidtype){
			if(returntype==voidtype){
				$$ = formals->decl;
			}
			else{
				raise("incompatible return types");
				$$ = NULL;
			}
			push_scope();
			pushstelist(formals);
			fprintf(fp, "\tjump %s_final\n", current_func_name);
		}
		| RETURN {
			int func_return_size = current_func_decl->returntype->size;
			returning = 1;
			return_size = func_return_size;
			codegen("push_reg fp");
			codegen("push_const -1");
			codegen("add");
			fprintf(fp, "\tpush_const -%d\n", func_return_size);
			codegen("add");
			codegen("push_reg sp");
			codegen("fetch");
		}
		expr ';' {
			// Return type compatibility check
			if(!$3) { $$ = NULL; }
			else{
				int offset;
				ste *formals = pop_scope();
				if(check_sametype(returntype, $3->type)){
					$$ = formals->decl;
					codegen("assign");
					return_size--;
					while(return_size > 0){
						// codegen("push_reg sp");
						// codegen("fetch");
						codegen("push_const 1");
						codegen("add");
						codegen("push_reg sp");
						codegen("fetch");
						codegen("push_reg fp");
						if($3->is_param==0) offset = $3->offset+current_func_actuals_size+$3->size-return_size;
						else offset = $3->offset + $3->size - return_size;
						if(offset != 0){
							fprintf(fp, "\tpush_const %d\n", offset);
							codegen("add");
						}
						codegen("fetch");
						codegen("assign");
						return_size--;
					}
					fprintf(fp, "\tjump %s_final\n", current_func_name);
				}
				else{
					raise("incompatible return types");
					$$ = NULL;
				}
				push_scope();
				pushstelist(formals);
				returning = 0;
			}
		}
		| ';'
		| before_if IF '(' expr ')' after_if stmt {
			int not_label = $<intVal>6;
			fprintf(fp, "label_%d:\n", not_label);
		}
		| before_if IF '(' expr ')' after_if  stmt ELSE {
			int else_label = $<intVal>6;
			int if_end = else_label + 1;
			fprintf(fp, "\tjump label_%d\n", if_end);
			fprintf(fp, "label_%d:\n", else_label);
			$<intVal>$ = if_end;
		}
		stmt{
			int if_end = $<intVal>9;
			fprintf(fp, "label_%d:\n", if_end);
			label_index++;
		}
		| {
			$<intVal>$ = while_end;
		} WHILE {
			while_cond = label_index++;
			while_end = label_index++;
			break_label = while_end;
			continue_label = while_cond;
			fprintf(fp, "label_%d:\n", while_cond);
			$<intVal>$ = while_end;
		} '(' expr ')'{
			fprintf(fp, "\tbranch_false label_%d\n", while_end);
		} stmt{
			while_end = $<intVal>3;
			while_cond = while_end - 1;
			fprintf(fp, "\tjump label_%d\n", while_cond);
			fprintf(fp, "label_%d:\n", while_end);
			break_label = $<intVal>1;
			continue_label = break_label - 1;
		}
		| FOR {
			for_init = label_index++;
			for_cond = label_index++;
			for_update = label_index++;
			for_internal = label_index++;
			for_end = label_index++;
			break_label = for_end;
			continue_label = for_update;
			fprintf(fp, "label_%d:\n", for_init);
		} '(' expr_e ';' {
			fprintf(fp, "label_%d:\n", for_cond);
		} expr_e ';' {
			fprintf(fp, "\tbranch_false label_%d\n", for_end);
			fprintf(fp, "\tjump label_%d\n", for_internal);
			fprintf(fp, "label_%d:\n", for_update);
		} expr_e ')' {
			fprintf(fp, "\tjump label_%d\n", for_cond);
			fprintf(fp, "label_%d:\n", for_internal);
		} stmt {
			fprintf(fp, "\tjump label_%d\n", for_update);
			fprintf(fp, "label_%d:\n", for_end);
		}
		| BREAK ';' {
			fprintf(fp, "\tjump label_%d\n", break_label);
		}
		| CONTINUE ';' {
			fprintf(fp, "\tjump label_%d\n", continue_label);
		}
		| WRITE_INT '(' expr ')'{
			codegen("write_int");
		}
		| WRITE_CHAR '(' expr ')'{
			codegen("write_char");
		}
		| WRITE_STRING '(' expr ')'{
			codegen("write_string");
		}

before_if
		: /* empty */ {
			//fprintf(fp, "label_%d:\n", label_index);
			//label_index++;
		}

after_if
		: /* empty */ {
			int not_label = label_index++;
			label_index++; // for if_end label
			fprintf(fp, "\tbranch_false label_%d\n", not_label);
			$<intVal>$ = not_label;
		}

expr_e
		: expr { $$ = $1; }
		| /* empty */ { 
			codegen("push_const 1");
			$$ = NULL;
		}

const_expr
		: INTEGER_CONST {
			$$ = makenumconstdecl(inttype, $1);
		}

expr
		: unary{
			assign = 1;
			codegen("push_reg sp");
			codegen("fetch");
		}
		'=' expr {
			// check if unary is declared (if not, not declared error) :done in  unary : ID
			// check if unary is variable
			// check if type of unary and expr are the same
			if(!$1 || !$4) { $$ = NULL; }
			else if(check_is_var($1)){
				if(check_sametype($1->type, $4->type)){
					if(check_is_pointer_type($1->type)==0 && check_is_null_type($4->type)){
						$$ = NULL;
						raise("RHS is not a const or variable");
					}
					else{
						unary_size_while_assign = $1->size;
						if(unary_size_while_assign==1){
							codegen("assign");
							codegen("fetch");
							unary_size_while_assign--;
						}
						else{
							codegen("push_reg sp");
							fprintf(fp, "\tpush_const -%d\n", unary_size_while_assign+1);
							codegen("add");
							codegen("fetch");
							codegen("push_reg sp");
							codegen("fetch");
							codegen("push_reg sp");
							codegen("push_const -1");
							codegen("add");
							fprintf(fp, "\tpush_const -%d\n", unary_size_while_assign);
							codegen("add");
							codegen("fetch");
							codegen("assign");
							unary_size_while_assign--;
							while(unary_size_while_assign > 0){
								codegen("push_const 1");
								codegen("add");
								codegen("push_reg sp");
								codegen("fetch");
								codegen("push_reg sp");
								codegen("push_const -1");
								codegen("add");
								fprintf(fp, "\tpush_const -%d\n", unary_size_while_assign);
								codegen("add");
								codegen("fetch");
								codegen("assign");
								unary_size_while_assign--;
							}
						}
						$$ = copy_decl($1);
						$1->type->offset = $4->offset;
					}
				}
				else{
					raise("LHS and RHS are not same type");
					$$ = NULL;
				}
			}
			else{
				raise("LHS is not a variable");
				$$ = NULL;
			}
			assign = 0;
		}
		| or_expr { $$ = $1; }

or_expr
		: or_list { $$ = $1; }

or_list
		: or_list LOGICAL_OR and_expr {
			// check if both or_list and and_expr have inttype
			if(!$1 || !$3){ $$ = NULL; }
			else{
				if(check_is_int_type($1->type) && check_is_int_type($3->type)){
					$$ = makeconstdecl(inttype);
					if(check_is_const($1) && check_is_const($3)){
						$$->int_value = ($1->int_value || $3->int_value);
					}
					else{
						$$->declclass = _EXPR;
					}
					codegen("or");
				}
				else{
					raise("not computable");
					$$ = NULL;
				}
			}
		}
		| and_expr { $$ = $1; }

and_expr
		: and_list { $$ = $1; }

and_list
		: and_list LOGICAL_AND binary {
			// check if both and_list and binary have inttype
			if(!$1 || !$3){ $$ = NULL; }
			else{
				if(check_is_int_type($1->type) && check_is_int_type($3->type)){
					$$ = makeconstdecl(inttype);
					if(check_is_const($1) && check_is_const($3)){
						$$->int_value = ($1->int_value && $3->int_value);
					}
					else{
						$$->declclass = _EXPR;
					}
					codegen("and");
				}
				else{
					raise("not computable");
					$$ = NULL;
				}
			}
		}
		| binary { $$ = $1; }

binary
		: binary RELOP binary {
			if(!$1 || !$3){ $$ = NULL; }
			else if(check_relop_compatible($1, $3)){
				$$ = makevardecl(inttype);
				if(check_is_const($1) && check_is_const($3)){
					if($2==_LT){ $$->int_value = ($1->int_value < $3->int_value); }
					else if($2==_LTE){ $$->int_value = ($1->int_value <= $3->int_value); }
					else if($2==_GT){ $$->int_value = ($1->int_value > $3->int_value); }
					else if($2==_GTE){ $$->int_value = ($1->int_value >= $3->int_value); }
					$$->declclass = _CONST;
				}
				else{
					$$->declclass = _EXPR;
				}
				if($2==_LT){
					codegen("less");
				}
				else if($2==_LTE){
					codegen("less_equal"); 
				}
				else if($2==_GT){
					codegen("greater"); 
				}
				else if($2==_GTE){ 
					codegen("greater_equal"); 
				}
			}
			else{
				raise("not comparable");
				$$ = NULL;
			}
		}
		| binary EQUOP binary {
			if(!$1 || !$3){ $$ = NULL; }
			else if(check_equop_compatible($1, $3)){
				$$ = makevardecl(inttype);
				if(check_is_const($1) && check_is_const($3)){
					if($2==_EQ){ $$->int_value = ($1->int_value == $3->int_value); }
					else if($2==_NEQ){ $$->int_value = ($1->int_value != $3->int_value); }
					$$->declclass = _CONST;
				}
				else{
					$$->declclass = _EXPR;
				}
				if($2==_EQ) { 
					codegen("equal"); 
				}
				else if($2==_NEQ) { 
					codegen("not_equal"); 
				}
			}
			else{
				raise("not comparable");
				$$ = NULL;
			}
		}
		| binary '+' binary {
			if(!$1 || !$3) { $$ = NULL; }
			else if(check_plus_minus_compatible($1, $3)){
				$$ = makevardecl(inttype);
				if(check_is_const($1) && check_is_const($3)){
					$$->int_value = $1->int_value + $3->int_value;
				}
				else{
					$$->declclass = _EXPR;
				}
				codegen("add");
			}
			else{
				raise("not computable");
				$$ = NULL;
			}
		}
		| binary '-' binary {
			if(!$1 || !$3){ $$ = NULL; }
			else if(check_plus_minus_compatible($1, $3)){
				$$ = makevardecl(inttype);
				if(check_is_const($1) && check_is_const($3)){
					$$->int_value = $1->int_value - $3->int_value;
				}
				else{
					$$->declclass = _EXPR;
				}
				codegen("sub");
			}
			else{
				raise("not computable");
				$$ = NULL;
			}
		}
		| unary %prec '=' {
			$$ = $1;
			print_get_unary_val($1);
		}

unary
		: '(' expr ')' {
			$$ = $2;
		}
		| '(' unary ')' {
			$$ = $2;
		}
		| INTEGER_CONST {
			$$ = makenumconstdecl(inttype, $1);
			// fprintf(fp, "\tpush_const %d\n", $1);
		}
		| CHAR_CONST {
			$$ = makecharconstdecl(chartype, $1);
			// fprintf(fp, "\tpush_const %d\n", $1);
		}
		| STRING {
			$$ = makevardecl(makeptrdecl(chartype));
			$$->declclass = _EXPR;
			fprintf(fp, "str_%d. string %s\n", str_index, $1);
			fprintf(fp, "\tpush_const str_%d\n", str_index);
			str_index++;
		}
		| NULL_TOKEN {
			$$ = makevardecl(makeptrdecl(nulltype));
			$$->declclass = _EXPR;
		}
		| ID {
			// $1 is idptr
			decl *iddecl = findcurrentdecl($1);
			if(iddecl){
				$$ = iddecl;
				char *s = $1->name;
				if(iddecl->declclass == _VAR){
					print_get_var_addr(iddecl);
				}
				else if(iddecl->declclass == _CONST && iddecl->type->typeclass == _ARRAY){
					print_get_array_addr(iddecl);
				}
				else if(check_is_func_type(iddecl)){
					func_return_size = iddecl->returntype->size;
				}
			}
			else{
				raise("not declared");
				$$ = NULL;
			}
		}
		| '-' unary	%prec '!'{
			if(!$2) { $$ = NULL; }
			else if(check_is_int_type($2->type)){
				$$ = makeconstdecl(inttype);
				if(check_is_const($2)){
					$$->int_value = -($2->int_value);
				}
				else{
					$$->declclass = _EXPR;
					print_get_unary_val($2);
					codegen("negate");
				}
			}
			else{
				raise("not computable");
				$$ = NULL;
			}
		}
		| '!' unary {
			if($2==NULL){ $$=NULL; }
			else if(check_is_int_type($2->type)){
				$$ = makeconstdecl(inttype);
				if(check_is_const($2)){
					$$->int_value = !($2->int_value);
				}
				else{
					$$->declclass=_EXPR;
				}
				print_get_unary_val($2);
				codegen("not");
			}
			else{
				raise("not computable");
				$$ = NULL;
			}
		}
		| unary INCOP{
			if(!$1){ $$=NULL; }
			else if(check_is_int_type($1->type) || check_is_char_type($1->type)){
				if(check_is_const($1)){ raise("not computable"); $$=NULL; }
				else if(check_is_int_type($1->type)){
					$$ = copy_decl($1);
					$$->int_value = $$->int_value + 1;
					$$->declclass = _EXPR;
				}
				else if(check_is_char_type($1->type)){
					$$ = copy_decl($1);
					$$->char_value = $$->char_value + 1;
					$$->declclass = _EXPR;
				}
				print_INC_DEC($1, 1, 0);
			}
			else{
				raise("not computable");
				$$ = NULL;
			}
		}
		| unary DECOP{
			if(!$1){ $$=NULL; }
			else if(check_is_int_type($1->type) || check_is_char_type($1->type)){
				if(check_is_const($1)){ raise("not computable"); $$=NULL; }
				else if(check_is_int_type($1->type)){
					$$ = copy_decl($1);
					$$->int_value = $$->int_value - 1;
					$$->declclass = _EXPR;
				}
				else if(check_is_char_type($1->type)){
					$$ = copy_decl($1);
					$$->char_value = $$->char_value - 1;
					$$->declclass = _EXPR;
				}
				print_INC_DEC($1, 0, 0);
			}
			else{
				raise("not computable");
				$$ = NULL;
			}
		}
		| INCOP unary{
			if(!$2){ $$=NULL; }
			else if(check_is_int_type($2->type) || check_is_char_type($2->type)){
				if(check_is_const($2)){ raise("not computable"); $$=NULL; }
				else if(check_is_int_type($2->type)){
					$$ = copy_decl($2);
					$$->int_value = $$->int_value + 1;
					$$->declclass = _EXPR;
				}
				else if(check_is_char_type($2->type)){
					$$ = copy_decl($2);
					$$->char_value = $$->char_value + 1;
					$$->declclass = _EXPR;
				}
				print_INC_DEC($2, 1, 1);
			}
			else{
				raise("not computable");
				$$ = NULL;
			}
		}
		| DECOP unary{
			if(!$2){ $$=NULL; }
			else if(check_is_int_type($2->type) || check_is_char_type($2->type)){
				if(check_is_const($2)){ raise("not computable"); $$=NULL; }
				else if(check_is_int_type($2->type)){
					$$ = copy_decl($2);
					$$->int_value = $$->int_value - 1;
					$$->declclass = _EXPR;
				}
				else if(check_is_char_type($2->type)){
					$$ = copy_decl($2);
					$$->char_value = $$->char_value - 1;
					$$->declclass = _EXPR;
				}
				print_INC_DEC($2, 0, 1);
			}
			else{
				raise("not computable");
				$$ = NULL;
			}
		}
		| '&' unary	%prec '!'{
			if(!$2){ $$ = NULL; }
			else if(check_is_var($2)){
				// make pointer declaration with the given type
				// return type to _EXPR
				$$ = makevardecl(makeptrdecl($2->type));
				$$->type->offset = $2->offset;
				$$->offset = $2->offset;
				$$->declclass = _EXPR;
			}
			else{
				// error case
				raise("not a variable");
				$$ = NULL;
			}
		}
		| '*' unary	%prec '!' {
			if(!$2){ $$ = NULL; }
			else if(check_is_pointer_type($2->type)){
				$$ = makevardecl($2->type->ptrto);
				$$->offset = $2->type->offset;
				if($2->declclass!=_EXPR) codegen("fetch");
			}
			else{
				raise("not a pointer");
				$$ = NULL;
			}
		}
		| unary '[' expr ']' {
			if(!$1 || !$3){ $$ = NULL; }
			else if(check_is_array_type($1->type)){
				if(check_is_int_type($3->type)){
					$$ = copy_decl($1->type->elementvar);
					if($1->type->elementvar->size != 1){
						fprintf(fp, "\tpush_const %d\n", $1->type->elementvar->size);
						codegen("mul");
					}
					codegen("add");
				}
				else{
					$$ = NULL;
				}
			}
			else{
				raise("not an array type");
				$$ = NULL;
			}
		}
		| unary '.' ID {
			if(!$1){ $$ = NULL; }
			else if(check_is_struct_type($1->type)){
				decl* temp = finddecl($3, $1->type->fieldlist);
				if(!temp){
					raise("struct not have same name field");
					$$ = NULL;
				}
				else{
					$$ = makevardecl(temp->type);
					$$->type = $1->type;
					if($1->type == _EXPR){
						codegen("push_reg sp");
						code
						fprintf(fp,);
					}
					if(temp->offset > 0){
						fprintf(fp, "\tpush_const %d\n", temp->offset);
						codegen("add");
					}
				}
			}
			else{
				raise("not a struct");
				$$ = NULL;
			}
		}
		| unary STRUCTOP ID{
			if(!$1){ $$ = NULL; }
			else if(check_is_pointer_type($1->type) && check_is_struct_type($1->type->ptrto)){
				decl* temp = finddecl($3, $1->type->ptrto->fieldlist);
				if(!temp){
					raise("struct not have same name field");
					$$ = NULL;
				}
				else{
					if(check_is_var($1)) codegen("fetch");
					$$ = makevardecl(temp->type);
					fprintf(fp, "\tpush_const %d\n", temp->offset);
					codegen("add");
				}
			}
			else{
				raise("not a struct pointer");
				$$ = NULL;
			}
		}
		| unary '(' while_func_call args ')'{
			if(!$1 || !$4){ $$ = NULL; }
			else if(check_is_func_type($1)){
				decl *temp = check_function_call($1, $4);
				if(temp){
					temp = makevardecl(temp);
					temp->declclass = _EXPR;
					temp->size = temp->type->size;
					$$ = temp;
				}
				else{
					raise("actual args are not equal to formal args");
					$$ = NULL;
				}
			}
			else{
				raise("not a function");
				$$ = NULL;
			}
			if($$){
				int actual_size = 0;
				ste* temp = $1->formals;
				while(temp){
					actual_size += temp->decl->size;
					temp = temp->prev;
				}
				codegen("push_reg sp");
				if(actual_size > 0){
					fprintf(fp, "\tpush_const -%d\n", actual_size);
					codegen("add");
				}
				codegen("pop_reg fp");
				char* name = findid($1)->name;
				fprintf(fp, "\tjump %s\n", name);
				fprintf(fp, "label_%d:\n", $<intVal>3);
				label_index++;
			}
		}
		| unary '(' while_func_call ')'{
			if(!$1){ $$ = NULL; }
			else if(check_is_func_type($1)){
				decl *temp = check_function_call($1, NULL);
				if(temp){
					temp = makevardecl(temp);
					$$ = temp;
					$$->declclass = _EXPR;
					$$->size = $$->type->size;
				}
				else{
					raise("actual args are not equal to formal args");
					$$ = NULL;
				}
			}
			else{
				raise("not a function");
				$$ = NULL;
			}
			if($$){
				codegen("push_reg sp");
				codegen("pop_reg fp");
				char* name = findid($1)->name;
				fprintf(fp, "\tjump %s\n", name);
				fprintf(fp, "label_%d:\n", $<intVal>3);
				label_index++;
			}
		}

while_func_call
		: /* empty */ {
			if(func_return_size > 0){
				fprintf(fp, "\tshift_sp %d\n", func_return_size);
			}
			else{
				codegen("shift_sp 1"); // for safety zone
			}
			fprintf(fp, "\tpush_const label_%d\n", label_index++);
			codegen("push_reg fp");
			$<intVal>$ = label_index-1;
		}

args    /* actual parameters(function arguments) transferred to function */
		: expr {
			if(!$1) { $$ = NULL; }
			else{
				$$ = $1;
				$$->next = NULL;
			}
		}
		| args ',' expr {
			if(!$1 || !$3) { $$ = NULL; }
			else{
				$3->next = $1;
				$$ = $3;
			}
		}


%%

/*  Additional C Codes  */

int    yyerror (char* s)
{
	fprintf (stderr, "%s\n", s);
}

void 	REDUCE( char* s)
{
	printf("%s\n",s);
}

void raise(char *message){
	int lineno = read_line();
	if(error_msg){
		printf("%s:%d: error:%s\n",filename, lineno, message);
		error_msg = 0;
	}
}

void debug(char *message){
	int lineno = read_line();
	printf("line %d, %s\n",lineno, message);
}

