#include "subc.h"
#include <stdlib.h>

ste *symboltable = NULL;
scope *scopestack = NULL;

void declare(id* name, decl *decl){
	ste *temp = (ste *)malloc(sizeof(ste));
	temp->name = name;
	temp->decl = decl;
	temp->prev = symboltable;
	temp->size = decl->size;
	if(scopestack == globalscope || isStruct > 0){
		temp->offset = scopestack->size;
		decl->offset = scopestack->size;
	}
	else{
		temp->offset = scopestack->size + 1;
		decl->offset = scopestack->size + 1;
	}
	if(scopestack) {
		scopestack->topste = temp;
		if(decl->declclass == _VAR){
			scopestack->size += temp->size;
		}
		else if(decl->declclass == _CONST && decl->type->typeclass == _ARRAY){
			scopestack->size += temp->size;
		}
	}
	symboltable = temp;
}

void add_type_to_var(decl *typedecl, decl *vardecl){
	if(check_is_type(typedecl)){
		vardecl->type = typedecl;
	}
}

decl* findcurrentdecl(id *name){
	ste *temp = symboltable;
	while(temp && temp->name != name){
		temp = temp->prev;
	}
	if(!temp) return NULL;
	if(temp->name==name) return (temp->decl);
	return NULL;
}

void push_scope(){
	scope *temp = (scope *)malloc(sizeof(scope));
	temp->prev = scopestack;
	temp->size = 0;
	if(!scopestack) { temp->topste = NULL; }
	else { temp->topste = scopestack->topste; }
	scopestack = temp;
}

ste* pop_scope(){
	if(!scopestack){
		return NULL;
	}
	ste *top = scopestack->topste;
	ste *temp = top;
	ste *bottom = top;
	if(!top){
		return NULL;
	}
	scope *prev = scopestack->prev;
	scopestack = prev;
	if(!prev){
		while(top->prev != NULL){
			temp = top->prev;
			top->prev = temp->prev;
			temp->prev = bottom;
			bottom = temp;
		}
		symboltable = top->prev;
		return bottom;
	}
	if(top==prev->topste){
		return NULL;
	}
	while(top->prev != NULL && top->prev != prev->topste){
		temp = top->prev;
		top->prev = temp->prev;
		temp->prev = bottom;
		bottom = temp;
	}
	if(!bottom) { return NULL; }
	top->prev = NULL;
	symboltable = prev->topste;
	return bottom;
}

id* findid(decl *funcdecl){
	ste* temp = symboltable;
	while(temp){
		if(temp->decl == funcdecl){ return temp->name; }
		temp = temp->prev;
	}
	return NULL;
}

decl* finddecl(id *name, ste *field){
	// Find decl with the given name in the given field
	// If exists, return the declaration
	// If not, return NULL
	ste *temp = field;
	while(temp){
		if(temp->name == name) return temp->decl;
		temp = temp->prev;
	}
	return NULL;
}

decl* finddecl_in_current_scope(id *name){
	// Find decl with the given name in current scope
	// IF exists, return the declaration
	// If not, return NULL
	scope *current = scopestack;
	if(!current) return NULL;
	ste *temp = current->topste;
	scope *prev = current->prev;
	if(!prev){
		while(temp){
			if(temp->name==name) { return (temp->decl); }
			temp = temp->prev;
		}
	}
	else{
		while(temp && temp!= prev->topste){
			if(temp->name==name) {return (temp->decl); }
			temp = temp->prev;
		}
	}
	return NULL;
}

decl* arrayaccess(decl* arraydecl, decl* idxdecl){
	// check if arraydecl has type array
	// check if idxdecl has type int
	// if so, return the type of entry that the array holds
	// if not, return NULL
	if(!check_is_array_type(arraydecl->type)) return NULL;
	if(!check_is_int_type(idxdecl->type)) return NULL;
	return arraydecl->type->elementvar->type;
}

decl* structaccess(decl* structdecl, id *fieldid){
	// check if structdecl has type struct
	// check if the struct has field with fieldid
	// if so, return the type of the entry with the given fieldid
	// if not return NULL
	if(!check_is_struct_type(structdecl->type)) return NULL;
	return finddecl(fieldid, structdecl->fieldlist);
}

ste* copy_ste(ste *targetste){
	if(!targetste) return NULL;
	ste *newste = (ste *)malloc(sizeof(ste));
	newste->prev = copy_ste(targetste->prev);
	newste->name = targetste->name;
	newste->decl = copy_decl(targetste->decl);
}

decl* copy_decl(decl *targetdecl){
	if(!targetdecl) return NULL;
	decl* newdecl = (decl *)malloc(sizeof(decl));
	newdecl->declclass = targetdecl->declclass;
	newdecl->type = targetdecl->type;
	newdecl->int_value = targetdecl->int_value;
	newdecl->char_value = targetdecl->char_value;
	newdecl->formals = targetdecl->formals;
	newdecl->returntype = targetdecl->returntype;
	newdecl->typeclass = targetdecl->typeclass;
	newdecl->elementvar = targetdecl->elementvar;
	newdecl->num_index = targetdecl->num_index;
	newdecl->fieldlist = targetdecl->fieldlist;
	newdecl->ptrto = targetdecl->ptrto;
	newdecl->size = targetdecl->size;
	newdecl->scope = targetdecl->scope;
	newdecl->next = targetdecl->next;
	return newdecl;
}

void pushstelist(ste *formals){
	ste *temp = formals;
	ste *t = temp;
	while(temp){
		t = temp->prev;
		temp->prev = symboltable;
		symboltable = temp;
		temp = t;
	}
	scopestack->topste = symboltable;
}

void print_symbol_table(){ // for debugging
	ste *temp = symboltable;
	while(temp){
		printf("symbol name : %s\n", temp->name->name);
		temp = temp->prev;
	}
}
