%{
/**************************************************************
* File Name   : subc.l
*
* Description
*	This is a skeleton input file to lex.
*
* Which tool to use
*	The GNU lex-clone, flex/flex++ is recommended to use.
*	It supports a C++ mode.
*	For any information about flex, refer to flex.man.
*
*	Good Luck!
*
***************************************************************/

/**************************************************************/
/* This section will appear at the head of lex.yy.c/lex.yy.cc */
/**************************************************************/

#include "subc.h"
/***************************************************************
{Other useful code segments can be here.}
***************************************************************/
int commentdepth=0;
%}

letter				[A-Za-z_]
digit				[0-9]
alnum				{letter}|{digit}
id					{letter}({letter}|{digit})*
delim				[ \n\t]
ws					{delim}+
int_const			([1-9]+{digit}*)|0
float_const			{digit}+\.{digit}*([eE][+-]?{digit}+)?
operator			("("|")"|"["|"]"|"{"|"}"|"->"|"."|","|".."|"!"|"~"|"++"|"--"|"*"|"/"|"%"|"+"|"-"|"<<"|">>"|"<"|"<="|">"|">="|"=="|"!="|"&"|"^"|"|"|"&&"|"||"|"?"|":"|";"|"="|"+="|"-="|"*="|"/="|"%="|"&="|"^="|"|="|"<<="|">>=")
cmtstart			"/*"
cmtend				"*/"


%start normal comment

%%
<normal>{id}	{ 
	// keyword or id lex
	char* name = yytext;
	int length = yyleng;
	int hashval = getHashValue(name, length);
	id* current_id = enter(ID, name, length);
	int keyword = isKeyword(name, hashval);  // 0 if id is identifier, 1 if id is keyword
	int count = ++current_id->count;
	if(keyword){
		printf("KEY\t%s\t%d\n",name,count);
	}
	else{
		printf("ID\t%s\t%d\n",name,count);
	}
}

{ws} {;}

<normal>{operator} {
	char* op = yytext;
	printf("OP\t%s\n",op);
}

<normal>{float_const} {
	char* constFloat = yytext;
	printf("F\t%s\n", constFloat);
}

<normal>{int_const} {
	char* constInteger = yytext;
	printf("INT\t%s\n", constInteger);
}

<normal>{int_const}/".." {
	// should deem the lex as int_const if ".." follows
	char* constInteger = yytext;
	printf("INT\t%s\n", constInteger);
}

<normal>{cmtstart} {
	BEGIN comment;  // change conditon to comment
	commentdepth++;
}

<comment>{cmtstart} {
	commentdepth++;
}

<comment>{cmtend} {
	commentdepth--;
	if(commentdepth==0) BEGIN normal;
}

<comment>. {;}

. {;}

%%
#define KEYWORD 1
#define ID 0

void initHash() 
{
	int i;

	char* keyWord[]={
		"auto", "break", "case", "char", "continue", "default", "do",
		"double", "else", "extern", "float", "for", "goto", "if", "int",
		"long", "register", "return", "short", "sizeof", "static", "struct",
		"switch", "typedef", "union", "unsigned", "void", "while", "\0"
	};

	/* Initilize Hash Tabel with Keywords */
	for (i = 0; strcmp(keyWord[i], "\0") !=0; i++) {
		enter(KEYWORD, keyWord[i], strlen(keyWord[i]));
	}
}

int main(int argc, char** argv)
{
	id* temp;

	++argv;
	--argc;

	if (argc > 0) {
		yyin = fopen(argv[0], "r");
	} else {
		yyin = stdin;
	}

	initHash();

	BEGIN normal;
	yylex ();

	return 0;
}

