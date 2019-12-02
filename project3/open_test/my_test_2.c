struct p{
    int a;
    int b;
} pa[20];

int foo(int a, char b){
    return b; /* incompatible return types */
    return a;
}

void poo(struct p a, int b, char c){
    a = b; /* LHS and RHS are not same type */
    a.a = b;
    b = c; /* LHS and RHS are not same type */
    c = 'a';

    return 0; /* incompatible return types */
}

void pooh(void){
	return a; /* incompatible or undeclared */
	return;
	return 1; /* incompatible return type */
}

int main(){
    int a;
    char a; /* redeclaration */
    char b;
    struct p* pp;
    struct p ppp;
    int c;
    struct q qq; /* incomplete type */
    1 = a; /* LHS is not a variable */
    a = 'a'; /* LHS and RHS are not same type */
    a = NULL; /* RHS is not a const or variable */

    b = 'b';
    b = b + 1; /* not computable */
    a = a - 1;
    if(a == 1){
        int x;
        int b;
		if(b >= x) {
		    foo(x,b); /* actual args are not equal to formal args */
	    }
	    else{
	        char c;
	        poo(pa[1],b,c);
	    }
	}

    pp = &a; /* LHS and RHS are not same type */
	pp = &ppp;
    ppp = *pp;
    a = pp->a;
    b = pp->b; /* LHS and RHS are not same type */
    a = pp->c; /*struct have not same name field */
    a = c[1]; /* not an array type */

    poo(ppp, c); /* actual args are note equal to formal args */
    a = foo(a,b);
    b = foo(a,b); /* LHS and RHS are not same type */
    c = ffoo(a,b); /* not declared */

    return 1;
}

int foofoo(){
	int x;
	while(1){
		if(1){
			return 1;
		} else {
			return 0;
		}
		if(1){
			if(2){
				return 9;
			}
		}
		break;
	}
	foofoo();
	x = foofoo();
	return 1;
}
