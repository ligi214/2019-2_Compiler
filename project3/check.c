#include "subc.h"
#include <stdio.h>
#include <stdlib.h>

int check_is_type(decl *targetdecl){
	if (targetdecl->declclass==_TYPE) return 1;
	return 0;
}

int check_is_struct_type(decl *targetdecl){
	if(targetdecl->declclass==_TYPE && targetdecl->typeclass==_STRUCT) return 1;
	return 0;
}

int check_is_int_type(decl *targetdecl){
	if(targetdecl==inttype) return 1;
	return 0;
}

int check_is_char_type(decl *targetdecl){
	if(targetdecl->declclass==_TYPE && targetdecl->typeclass==_CHAR) return 1;
	return 0;
}

int check_is_func_type(decl *targetdecl){
	if(targetdecl->declclass==_FUNC) return 1;
	return 0;
}

int check_is_array_type(decl *targetdecl){
	if(targetdecl->declclass==_TYPE && targetdecl->typeclass==_ARRAY) return 1;
	return 0;
}

int check_is_pointer_type(decl *targetdecl){
	if(targetdecl->declclass==_TYPE && targetdecl->typeclass==_POINTER) return 1;
	return 0;
}

int check_sametype(decl *x, decl *y){
	if(x->declclass!=_TYPE || y->declclass!=_TYPE) return 0;
	if(x->typeclass == y->typeclass){
		if(check_is_int_type(x) || check_is_char_type(y)) return 1;
		else if(check_is_pointer_type(x)){
			if(check_is_same_type_pointer(x, y)) return 1;
			else return 0;
		}
		else if(check_is_struct_type(x)){
			if(x==y) return 1;
			else return 0;
		}
		else if(check_is_array_type(x)){
			if(check_sametype(x->elementvar->type, y->elementvar->type)) return 1;
			else return 0;
		}
	}
	return 0;
}

int check_is_same_type_pointer(decl *x, decl *y){
	if(x->declclass != _TYPE || y->declclass != _TYPE) return 0;
	if(x->typeclass != _POINTER || y->typeclass != _POINTER) return 0;
	if(x->ptrto == y->ptrto) return 1;
	return 0;
}

decl* check_function_call(decl *func, decl *formals){
	// Compare function's formals and given formals and if invalid, return NULL
	// If valid, return returnid
	ste *temp_func = func->formals;
	decl *temp_actual = formals;
	decl *prev = NULL;
	decl *t;
	while(temp_actual){
		t = temp_actual->next;
		temp_actual->next = prev;
		prev = temp_actual;
		temp_actual = t;
	}
	temp_actual = prev;
	while(temp_func != NULL && temp_actual != NULL){
		if(check_sametype(temp_func->decl->type, temp_actual->type)==0) return NULL;
		temp_func = temp_func->prev;
		temp_actual = temp_actual->next;
	}
	if(temp_func != NULL || temp_actual != NULL) return NULL;
	return func->returntype;
}

int check_relop_compatible(decl *x, decl *y){
	if(check_is_int_type(x->type) && check_is_int_type(y->type)) return 1;
	if(check_is_char_type(x->type) && check_is_char_type(y->type)) return 1;
	return 0;
}

int check_equop_compatible(decl *x, decl *y){
	if(check_is_int_type(x->type) && check_is_int_type(y->type)) return 1;
	if(check_is_char_type(x->type) && check_is_char_type(y->type)) return 1;
	if(check_is_same_type_pointer(x, y)) return 1;
	return 0;
}

int check_is_const(decl *targetdecl){
	if(targetdecl->declclass==_CONST) return 1;
	return 0;
}

int check_is_var(decl *targetdecl){
	if(targetdecl->declclass==_VAR) return 1;
	return 0;
}

int check_plus_minus_compatible(decl *x, decl *y){
	if(check_is_int_type(x->type) && check_is_int_type(y->type)) return 1;
	return 0;
}


