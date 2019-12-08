#include "subc.h"
#include <stdlib.h>

decl* maketypedecl(int typeclass){
	decl *typedecl = (decl *)malloc(sizeof(decl));
	typedecl->declclass = _TYPE;
	typedecl->typeclass = typeclass;
	if(typeclass==_INT || typeclass==_CHAR){
		typedecl->size = 1;
	}
	return typedecl;
}

decl* makevardecl(decl *typedecl){
	decl *vardecl = (decl *)malloc(sizeof(decl));
	vardecl->declclass = _VAR;
	vardecl->type = typedecl;
	vardecl->size = typedecl->size;
	vardecl->offset = scopestack->size;
	vardecl->scope = scopestack;
	return vardecl;
}

decl* makearraydecl(int num_index, decl *vardecl){
	decl *arraydecl = (decl *)malloc(sizeof(decl));
	arraydecl->declclass = _TYPE;
	arraydecl->typeclass = _ARRAY;
	arraydecl->elementvar = copy_decl(vardecl);
	arraydecl->num_index = num_index;
	arraydecl->size = num_index * vardecl->size;
	arraydecl->offset = scopestack->size;
	arraydecl->scope = scopestack;
	return arraydecl;
}

decl* makeconstdecl(decl *consttypedecl){
	decl *constdecl = (decl *)malloc(sizeof(decl));
	constdecl->declclass = _CONST;
	constdecl->type = consttypedecl;
	constdecl->size = consttypedecl->size;
	constdecl->scope = scopestack;
	constdecl->offset = scopestack->size;
	return constdecl;
}

decl* makeptrdecl(decl *pointertodecl){
	decl *ptrdecl = (decl *)malloc(sizeof(decl));
	ptrdecl->declclass = _TYPE;
	ptrdecl->typeclass = _POINTER;
	ptrdecl->ptrto = pointertodecl;
	ptrdecl->size = 1;
	return ptrdecl;
}

decl* makestructdecl(ste *fields){
	decl *structdecl = (decl *)malloc(sizeof(decl));
	structdecl->declclass = _TYPE;
	structdecl->typeclass = _STRUCT;
	structdecl->fieldlist = fields;
	structdecl->size = 0;
	ste* temp = fields;
	while(temp){
		structdecl->size = structdecl->size + temp->decl->size;
		temp = temp->prev;
	}
	return structdecl;
}

decl* makenumconstdecl(decl *typedecl, int value){
	if(!check_is_int_type(typedecl)){
		return NULL;
	}
	decl *numdecl = (decl *)malloc(sizeof(decl));
	numdecl->declclass = _CONST;
	numdecl->type = typedecl;
	numdecl->int_value = value;
	numdecl->size = 1;
	return numdecl;
}

decl* makecharconstdecl(decl *typedecl, char value){
	if(!check_is_char_type(typedecl)){
		return NULL;
	}
	decl *chardecl = (decl *)malloc(sizeof(decl));
	chardecl->declclass = _CONST;
	chardecl->type = typedecl;
	chardecl->char_value = value;
	chardecl->size = 1;
	return chardecl;
}

decl* makefuncdecl(){
	decl *funcdecl = (decl *)malloc(sizeof(decl));
	funcdecl->declclass = _FUNC;
	return funcdecl;
}

