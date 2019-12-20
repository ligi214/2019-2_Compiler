%{
/*
 * File Name   : subc.l
 * Description : a skeleton flex input
 */

#include "subc.h"
#include "subc.tab.h"
static int comment_depth = 0;
static int lineno = 1;
scope* globalscope = NULL;

%}

/* regular definitions */
letter		[A-Za-z_]
digit		[0-9]
id		{letter}({letter}|{digit})*
integer_const	([1-9]{digit}*)|"0"
white-space	[ \t]+
special-char	\\[nt]
unary-op	"!"|"+"|"-"|"*"|"/"|"%"|"&"|"="|"("|")"|"["|"]"|"{"|"}"|"."

%x COMMENT
%%
"int" | 
"char"			{
				yylval.idptr = enter(TYPE, yytext, yyleng);
				return TYPE; 			
				}

"struct"		{ 
				yylval.idptr = enter(STRUCT, yytext, yyleng);
				return STRUCT; 
				}

{id}			{
				yylval.idptr = enter(ID, yytext, yyleng);
				return (yylval.idptr->tokenType);
				}

{integer_const}	{
				yylval.intVal = atoi(yytext);
				return INTEGER_CONST;
				}

"||"			{
				return LOGICAL_OR; 
				}

"&&"			{
				return LOGICAL_AND;
				}

"<" |
"<=" |
">" |
">="			{
				if(!strcmp(yytext, "<"))	{ yylval.intVal = _LT; }
				if(!strcmp(yytext, "<="))	{ yylval.intVal = _LTE; }
				if(!strcmp(yytext, ">"))	{ yylval.intVal = _GT; }
				if(!strcmp(yytext, ">="))	{ yylval.intVal = _GTE; }
				return RELOP;
				}

"==" |
"!="			{
				if(!strcmp(yytext, "=="))	{ yylval.intVal = _EQ; }
				if(!strcmp(yytext, "!="))	{ yylval.intVal = _NEQ; }
				return EQUOP;
				}

{unary-op}		{ return yytext[0]; }

\"({special-char}|[^\\\"\n])*\"	{
			/* String Variable */
				yylval.stringVal = yytext;
				return STRING;
				}

'({special-char}|[^\\'\n])'	{
			/* Character Variable */
				yylval.charVal = yytext[1];
				return CHAR_CONST;
				}

"++"			{
				return INCOP;
				}

"--"			{ 
				return DECOP;
				}

"->"			{
				return STRUCTOP;
				}

","				{ return ','; }

";"				{ return yytext[0]; }

{white-space}
<*>\n		   { ++lineno; error_msg=1; }
<INITIAL,COMMENT>"/*"	{
		   ++comment_depth;
		   BEGIN (COMMENT);
		}
<COMMENT>"*/"	   if(--comment_depth == 0) BEGIN (INITIAL);
<COMMENT>.		 {}


%%
int read_line(){
	return lineno;
}

void init_type(){
	scope_num = 0;
	error_msg = 1;
	str_index = 0;
	label_index = 0;
	isStruct = 0;
	push_scope();
	globalscope = scopestack;

	voidtype = maketypedecl(_VOID);
	inttype = maketypedecl(_INT);
	chartype = maketypedecl(_CHAR);
	nulltype = maketypedecl(_NULL);
	declare(enter(VOID, "void", 4), voidtype);
	declare(enter(TYPE, "int", 3), inttype);
	declare(enter(TYPE, "char", 4), chartype);
	declare(enter(NULL_TOKEN, "NULL", 4), nulltype);
	returnid = enter(ID, "*return", 7);
}
   
int main(int argc, char* argv[])
{

	static char *keyword[] = { "int", "char", "void", "NULL", "struct", "return", "if", "else", "while", "for", "break", "continue", "write_int", "write_char", "write_string",  NULL}; 
	static int tokentype[] = { TYPE, TYPE, VOID, NULL_TOKEN, STRUCT, RETURN, IF, ELSE, WHILE, FOR, BREAK, CONTINUE, WRITE_INT, WRITE_CHAR, WRITE_STRING,  0 };
	int i;
	for(i = 0; keyword[i] != NULL; i++)
		enter(tokentype[i], keyword[i], strlen(keyword[i]));
   
	init_type();

	if(argc >= 2) {
		yyin = fopen(argv[1], "r");
		strcpy(filename, argv[1]);
		char *token = strtok(filename, "/");
		char *prev_token = NULL;
		while(token){
			prev_token = token;
			token = strtok(NULL, "/");
		}
		strcpy(filename, prev_token);
	}
	else yyin = stdin;

	if(!yyin) {
		printf("Can't open input stream!\n");
		exit(1);
	}

	if(argc >= 3){
		strcpy(fname, argv[2]);
	}
	else{
		strcpy(fname, argv[1]);
		strcat(fname, ".s");
	}
	
	fp = fopen(fname, "w");

	print_init();
	yyparse();
	print_globals();
	fclose(yyin);
	return 0;
}
