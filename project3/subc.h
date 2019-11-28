/******************************************************
 * File Name   : subc.h
 * Description
 *    This is a header file for the subc program.
 ******************************************************/

#ifndef __SUBC_H__
#define __SUBC_H__

#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

#define IDENTIFIER 	0
#define KEYWORD		1


/* For RELOP */
#define _LT			0
#define _LTE		1
#define _GT			2
#define _GTE		3

/* For EQUOP */
#define _EQ			0
#define _NEQ		1

/* For declclass in struct decl */
#define _VAR		0
#define _CONST		1
#define _FUNC		2
#define _TYPE		3
#define _EXPR		4

/* For typeclass in struct decl */
#define _VOID		0
#define _INT		1
#define _CHAR		2
#define _STRING		3
#define _ARRAY		4
#define _STRUCT		5
#define _POINTER	6
#define _NULL		7

typedef struct id {
	char *name;
	int tokenType;
} id;

typedef struct ste{
	struct id *name;
	struct decl *decl;
	struct ste *prev;
} ste;

typedef struct scope{
	struct ste *topste;
	struct scope *prev;
} scope;

typedef struct decl{
	int declclass;				/* DECL class : VAR, CONST, FUNC, TYPE */
	struct decl *type;			/* VAR, CONST : pointer to its type decl */
	int int_value;				/* CONST : value of integer constant */
	char char_value;			/* CONST : value of character constant */
	struct ste *formals;		/* FUNC : pointer to formals list */
	struct decl *returntype;	/* FUNC : pointer to return TYPE decl */
	int typeclass;				/* TYPE : type class. VOID, INT, CHAR, STRING, ARRAY, STRUCT, POINTER */
	struct decl *elementvar;	/* TYPE(array) : pointer to element VAR decl */
	int num_index;				/* TYPE(array) : number of elements */
	struct ste *fieldlist;		/* TYPE(struct) : pointer to field list */
	struct decl *ptrto;			/* TYPE(pointer) : type of the pointer */
	int size;					/* ALL : size in bytes */
	struct scope* scope;		/* VAR : scope when VAR declared */
	struct decl *next;			/* For list_of_variables declarations */
} decl;

/* Defined in subc.l init_type() */
decl* voidtype;
decl* inttype;
decl* chartype;
decl* nulltype;
id* returnid;

int error_msg;
char *filename;

/* Defined in utils.c */
ste *symboltable;
scope *scopestack;
scope *globalscope;

/* For hash table */
unsigned hash(char *name);
id *enter(int tokenType, char *name, int length);

/* For semantic analysis */
/* Defined in utils.c */
void declare(id *name, decl *decl);
void add_type_to_var(decl *typedecl, decl *vardecl);
decl* findcurrentdecl(id *name);
decl* finddecl(id *name, ste *field);
decl* finddecl_in_current_scope(id *name);
decl* arrayaccess(decl* arraydecl, decl *idxdecl);
decl* structaccess(decl* structdecl, id *fieldid);
void raise(char *message);
ste* copy_ste(ste *targetste);
decl* copy_decl(decl *targetdecl);
void pushstelist(ste *formals);
void print_symbol_table(); // for debugging

/* Scope stack operations */
void push_scope();
ste* pop_scope();

/* Defined in makedecl.c */
decl* maketypedecl(int typeclass);
decl* makevardecl(decl *typedecl);
decl* makearraydecl(int num_index, decl *vardecl);
decl* makeconstdecl(decl *consttypedecl);
decl* makeptrdecl(decl *pointertodecl);
decl* makestructdecl(ste *fields);
decl* makenumconstdecl(decl *typedecl, int value);
decl* makecharconstdecl(decl *typedecl, char value);
decl* makefuncdecl();
decl* makenulldecl();

/* Checking functions */
/* Defined in check.c */
int check_is_type(decl *targetdecl);
int check_is_struct_type(decl *targetdecl);
int check_is_int_type(decl *targetdecl);
int check_is_char_type(decl *targetdecl);
int check_is_func_type(decl *targetdecl);
int check_is_array_type(decl *targetdecl);
int check_is_pointer_type(decl *targetdecl);
int check_sametype(decl *x, decl *y);
int check_is_same_type_pointer(decl *x, decl *y);
decl* check_function_call(decl *func, decl *formals);
int check_relop_compatible(decl *x, decl *y);
int check_is_const(decl *targetdecl);
int check_is_var(decl *targetdecl);
int check_plus_minus_compatible(decl *x, decl *y);

/* Debugging */
void debug(char *message);
#endif
