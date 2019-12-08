#include <stdlib.h>
#include "subc.h"


void print_init(){
	d_codegen("push_const EXIT");
	d_codegen("push_reg fp");
	d_codegen("push_reg sp");
	d_codegen("pop_reg fp");
	d_codegen("jump main");
	d_codegen_label("EXIT");
	d_codegen("exit");
	//codegen("shift_sp 1");
	codegen("push_const EXIT");
	codegen("push_reg fp");
	codegen("push_reg sp");
	codegen("pop_reg fp");
	codegen("jump main");
	codegen_label("EXIT");
	codegen("exit");
	str_index = 0;
}


void print_globals(){
	fprintf(fp, "Lglob. data %d\n", globalscope->size);
	printf("Lglob. data %d\n", globalscope->size); // debug
}

void print_get_var_addr(decl* vardecl){
	if(vardecl->scope == globalscope){
		fprintf(fp, "\tpush_const Lglob+%d\n", vardecl->offset);
		printf("\tpush_const Lglob+%d\n", vardecl->offset); // debug
	}
	else{
		codegen("push_reg fp");
		fprintf(fp, "\tpush_const %d\n", vardecl->offset);
		codegen("add");
		d_codegen("push_reg fp"); // debug
		printf("\tpush_const %d\n", vardecl->offset); // debug
		d_codegen("add"); //debug
	}
}

void print_get_array_addr(decl* arrdecl){
	if(arrdecl->scope == globalscope){
		fprintf(fp, "\tpush_const Lglob+%d\n", arrdecl->offset);
		printf("\tpush_const Lglob+%d\n", arrdecl->offset); // debug
	}
	else{
		codegen("push_reg fp");
		fprintf(fp, "\tpush_const %d\n", arrdecl->offset);
		codegen("add");
		d_codegen("push_reg fp"); // debug
		printf("\tpush_const %d\n", arrdecl->offset); // debug
		d_codegen("add"); //debug
	}
}

void print_get_unary_val(decl* unarydecl){
	if(unarydecl->declclass == _VAR && unarydecl->type->typeclass != _STRUCT){
		codegen("fetch");
		d_codegen("fetch"); // debug
	}
	else if(unarydecl->declclass == _CONST){
		fprintf(fp, "\tpush_const %d\n", unarydecl->int_value);
		printf("\tpush_const %d\n", unarydecl->int_value); // debug
	}
}

void print_INC_DEC(decl* vardecl, int INC, int prefix){
	if(INC && prefix){			// prefix INC op
		codegen("push_reg sp");
		codegen("fetch");
		codegen("push_reg sp");
		codegen("fetch");
		codegen("fetch");
		codegen("push_const 1");
		codegen("add");
		codegen("assign");
		codegen("fetch");
	}	
	else if(!INC && prefix){	// prefix DEC op
		codegen("push_reg sp");
		codegen("fetch");
		codegen("push_reg sp");
		codegen("fetch");
		codegen("fetch");
		codegen("push_const 1");
		codegen("sub");
		codegen("assign");
		codegen("fetch");
	}
	else if(INC && !prefix){	// postfix INC op
		codegen("push_reg sp");
		codegen("fetch");
		codegen("push_reg sp");
		codegen("fetch");
		codegen("fetch");
		codegen("push_const 1");
		codegen("add");
		codegen("assign");
		codegen("fetch");
		codegen("push_const 1");
		codegen("sub");
	}
	else if(!INC && !prefix){	// postfix DEC op
		codegen("push_reg sp");
		codegen("fetch");
		codegen("push_reg sp");
		codegen("fetch");
		codegen("fetch");
		codegen("push_const 1");
		codegen("sub");
		codegen("assign");
		codegen("fetch");
		codegen("push_const 1");
		codegen("add");
	}
}

void codegen(char *message){
	fprintf(fp, "\t%s\n", message);
}

void codegen_label(char *message){
	fprintf(fp, "%s:\n", message);
}

void d_codegen(char *message){
	printf("\t%s\n", message);
}

void d_codegen_label(char *message){
	printf("%s:\n", message);
}
