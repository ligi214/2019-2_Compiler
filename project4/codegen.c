#include <stdlib.h>
#include "subc.h"


void print_init(){
	codegen("shift_sp 1");
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
}

void print_get_var_addr(decl* vardecl){
	if(vardecl->scope == globalscope){
		fprintf(fp, "\tpush_const Lglob+%d\n", vardecl->offset);
	}
	else if(vardecl->is_param==0){
		codegen("push_reg fp");
		fprintf(fp, "\tpush_const %d\n", vardecl->offset+current_func_actuals_size);
		codegen("add");
	}
	else if(vardecl->is_param==1){
		codegen("push_reg fp");
		fprintf(fp, "\tpush_const %d\n", vardecl->offset);
		codegen("add");
	}
}

void print_get_array_addr(decl* arrdecl){
	if(arrdecl->scope == globalscope){
		fprintf(fp, "\tpush_const Lglob+%d\n", arrdecl->offset);
	}
	else if(arrdecl->is_param==0){
		codegen("push_reg fp");
		fprintf(fp, "\tpush_const %d\n", arrdecl->offset+current_func_actuals_size);
		codegen("add");
	}
	else if(arrdecl->is_param==1){
		codegen("push_reg fp");
		fprintf(fp, "\tpush_const %d\n", arrdecl->offset);
		codegen("add");
	}
}

void print_get_unary_val(decl* unarydecl){
	if(unarydecl->declclass == _VAR && unarydecl->type->typeclass != _STRUCT){
		codegen("fetch");
	}
	else if(unarydecl->declclass == _VAR && returning){
		codegen("fetch");
	}
	else if(unarydecl->declclass == _VAR && unarydecl->type->typeclass == _STRUCT){
		int size = unarydecl->type->size;
		// fprintf(fp, "\toffset of unary decl is %d\n", unarydecl->offset); // debug
		// codegen("push_reg sp");
		// codegen("fetch");
		for(int i=1;i<size;i++){
			codegen("fetch");
			if(unarydecl->scope == globalscope){
				fprintf(fp, "\tpush_const Lglob+%d\n", unarydecl->offset+i);
			}
			else if(unarydecl->is_param == 0){
				codegen("push_reg fp");
				fprintf(fp, "\tpush_const %d\n", unarydecl->offset+i+current_func_actuals_size);
				codegen("add");
				/*
				codegen("push_reg sp");
				fprintf(fp, "\tpush_const -%d\n", i);
				codegen("add");
				codegen("fetch");
				fprintf(fp, "\tpush_const %d\n", i);
				codegen("add");
				*/
			}
			else if(unarydecl->is_param == 1){
				codegen("push_reg fp");
				fprintf(fp, "\tpush_const %d\n", unarydecl->offset+i);
				codegen("add");
			}
		}
		codegen("fetch");
	}
	else if(unarydecl->declclass == _CONST){
		if(unarydecl->type == inttype){
			fprintf(fp, "\tpush_const %d\n", unarydecl->int_value);
		}
		else if(unarydecl->type == chartype){
			fprintf(fp, "\tpush_const %d\n", unarydecl->char_value);
		}
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
