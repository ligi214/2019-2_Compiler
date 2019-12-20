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

int scope_num;

typedef struct id {
	char *name;
	int tokenType;
} id;

typedef struct ste{
	struct id *name;
	struct decl *decl;
	struct ste *prev;
	int size;
	int offset;
} ste;

typedef struct scope{
	struct ste *topste;
	struct scope *prev;
	int size;
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
	int size;					/* ALL : size in words */
	int offset;					/* offset from Lglob or fp */
	int is_param;				/* to distinguish function parameters from local vars */
	struct scope* scope;		/* VAR : scope when VAR declared */
	struct decl *next;			/* For list_of_variables declarations */
} decl;

/* Defined in subc.l init_type() */
decl* voidtype;
decl* inttype;
decl* chartype;
decl* nulltype;
id* returnid;
decl* returntype;

int error_msg;
char filename[100];
char fname[100];
FILE* fp;
int isStruct;
int func_return_size;

int str_index;
int label_index;
int local_offset;
int current_func_actuals_size;
char* current_func_name;
decl* current_func_decl;
int assign;
int unary_size_while_assign;
int returning;
int return_size;

int for_init;
int for_cond;
int for_update;
int for_internal;
int for_end;

int while_cond;
int while_end;

int break_label;
int continue_label;

/* Defined in utils.c */
ste *symboltable;
scope *scopestack;
scope *globalscope;

/* For hash table */
unsigned hash(char *name);
id *enter(int tokenType, char *name, int length);
int read_line();

/* For semantic analysis */
/* Defined in utils.c */
void declare(id *name, decl *decl);
void add_type_to_var(decl *typedecl, decl *vardecl);
decl* findcurrentdecl(id *name);
id* findid(decl *funcdecl);
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
int check_equop_compatible(decl *x, decl *y);
int check_is_const(decl *targetdecl);
int check_is_var(decl *targetdecl);
int check_plus_minus_compatible(decl *x, decl *y);
int check_is_null_type(decl *x);


/* Debugging */
void debug(char *message);

/* Code generating */
void print_init();
void print_globals();
void print_get_var_addr(decl* vardecl);
void print_get_array_addr(decl* arrdecl);
void print_get_unary_val(decl* vardecl);
void print_INC_DEC(decl* vardecl, int INC, int prefix);

/* Code generating basic blocks */
/* Defined in codegen.c */
void codegen(char *message);
void codegen_label(char *message);
void d_codegen(char *message);
void d_codegen_label(char *message);
#endif
