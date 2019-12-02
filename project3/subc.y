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
%right		'!' INCOP DECOP UNARY_OP
%left 		STRUCTOP '[' ']' '(' ')' '.'

/* Token and Types */
%token<idptr>			TYPE VOID NULL_TOKEN 
%token<idptr>			STRUCT RETURN IF ELSE WHILE FOR BREAK CONTINUE
%token<intVal>			LOGICAL_OR LOGICAL_AND INCOP DECOP STRUCTOP
%token<idptr>			ID
%token<intVal>			INTEGER_CONST
%token<charVal>			CHAR_CONST
%token<stringVal>		STRING
%token<intVal>			RELOP, EQUOP

%type<declptr>			program
%type<declptr>			ext_def_list, ext_def, type_specifier, struct_specifier
%type<declptr>			func_decl
%type<intVal>			pointers
%type<declptr>			param_list, param_decl
%type<declptr>			def_list, def
%type<declptr>			compound_stmt, local_defs, stmt_list, stmt
%type<declptr>			expr_e, const_expr, expr
%type<declptr>			or_expr, or_list, and_expr, and_list
%type<declptr>			binary, unary
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
		| func_decl compound_stmt { pop_scope(); }

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
						symboltable = struct_ste->prev;
						temp->prev = struct_ste;
						struct_ste -> prev = globalscope->topste;
						globalscope->topste = struct_ste;
						structdecl->scope = globalscope;
						scopestack->topste = symboltable;
					}
				}
			}
			$$ = structdecl;
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
		: type_specifier pointers ID '(' ')' {
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
			}
		}
		| type_specifier pointers ID '(' VOID ')' {
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
			}
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
			}
		}
		param_list ')' {
			decl *funcdecl = $<declptr>5;
			if($6 && funcdecl){
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

param_decl  /* formal parameter declaration */
		: type_specifier pointers ID {
			if(!$1 || !$3) { $$ = NULL; }
			else if($2) { 
				decl *paramdecl = finddecl_in_current_scope($3);
				if(paramdecl){
					raise("redeclaration");
					$$ = NULL;
				}
				else{
					decl *vardecl = makevardecl(makeptrdecl($1));
					declare($3, vardecl);
				}
			}
			else {
				decl *paramdecl = finddecl_in_current_scope($3);
				if(paramdecl){
					raise("redeclaration");
					$$ = NULL;
				}
				else { declare($3, makevardecl($1)); }
			}
		}
		| type_specifier pointers ID '[' const_expr ']' {
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
					declare($3,makeconstdecl(makearraydecl($5->int_value,makevardecl(makeptrdecl($1)))));
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
					declare($3, makeconstdecl(makearraydecl($5->int_value, makevardecl($1))));
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
					declare($3, makeconstdecl(makearraydecl($5->int_value, makevardecl($1))));
				}
			}
		}
		| type_specifier ';' {}
		| func_decl ';' {}

compound_stmt
		: '{' local_defs stmt_list '}' 

local_defs  /* local definitions, of which scope is only inside of compound statement */
		:	def_list 

stmt_list
		: stmt_list stmt 
		| /* empty */ 

stmt
		: expr ';' 
		| { push_scope(); } compound_stmt { pop_scope(); }
		| RETURN ';' {
		// Return type compatibility check
			ste *formals = pop_scope(); // get return type
			// if(formals->decl==voidtype){
			if(returntype==voidtype){
				$$ = formals;
			}
			else{
				raise("incompatible return types");
				$$ = NULL;
			}
			push_scope();
			pushstelist(formals);
		}
		| RETURN expr ';' {
			// Return type compatibility check
			if(!$2) { $$ = NULL; }
			else{
				ste *formals = pop_scope();
				if(check_sametype(returntype, $2->type)){
					$$ = formals;
				}
				else{
					raise("incompatible return types");
					$$ = NULL;
				}
				push_scope();
				pushstelist(formals);
			}
		}
		| ';'
		| IF '(' expr ')' stmt
		| IF '(' 
		expr 
		')' stmt ELSE stmt
		| WHILE '(' expr ')' stmt
		| FOR '(' expr_e ';' expr_e ';' expr_e ')' stmt
		| BREAK ';'
		| CONTINUE ';'

expr_e
		: expr { $$ = $1; }
		| /* empty */

const_expr
		: expr { $$ = $1; }

expr
		: unary '=' expr {
			// check if unary is declared (if not, not declared error) :done in  unary : ID
			// check if unary is variable
			// check if type of unary and expr are the same
			if(!$1 || !$3) { $$ = NULL; }
			else if(check_is_var($1)){
				if(check_sametype($1->type, $3->type)){
					if(check_is_pointer_type($1->type)==0 && check_is_null_type($3->type)){
						raise("RHS is not a const or variable");
					}
					else{
						$$ = $1;
					}
				}
				else{
					raise("LHS and RHS are not same type");
				}
			}
			else{
				raise("LHS is not a variable");
				$$ = NULL;
			}
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
			}
			else{
				raise("not computable");
				$$ = NULL;
			}
		}
		| unary %prec '=' {
			$$ = $1;
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
		}
		| CHAR_CONST {
			$$ = makecharconstdecl(chartype, $1);
		}
		| STRING {
			$$ = makevardecl(makeptrdecl(chartype));
			$$->declclass = _EXPR;
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
				else{ $$->declclass = _EXPR; }
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
			}
			else{
				raise("not a pointer");
				$$ = NULL;
			}
		}
		| unary '[' expr ']' {
			if(!$1 || !$3){ $$ = NULL; }
			else if(check_is_array_type($1->type)){
				if(check_is_const($3) && check_is_int_type($3->type)){
					$$ = makevardecl($1->type->elementvar->type);
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
					$$ = makevardecl(temp->type);
				}
			}
			else{
				raise("not a struct pointer");
				$$ = NULL;
			}
		}
		| unary '(' args ')'{
			if(!$1 || !$3){ $$ = NULL; }
			else if(check_is_func_type($1)){
				decl *temp = check_function_call($1, $3);
				if(temp){
					temp = makevardecl(temp);
					temp->declclass = _EXPR;
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
		}
		| unary '(' ')'{
			if(!$1){ $$ = NULL; }
			else if(check_is_func_type($1)){
				decl *temp = check_function_call($1, NULL);
				if(temp){
					temp = makevardecl(temp);
					$$ = temp;
					$$->declclass = _EXPR;
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
