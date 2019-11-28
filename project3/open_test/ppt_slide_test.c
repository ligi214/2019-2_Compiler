int main(){
	int b;
	a = 0; /* error : not declared */
	{ int a; }
	a = 0; /* error : not declared */
	aaaaaaaaa(); /* error : not declared */
	{
		int a;
		int a; /* error : redeclaration */
		char a; /* error : redeclaration */
	}
	{ int a; { int a; } }
}

int goo(){
	int a;
	char b;
	int *ap;
	int brr[10];
	a = b; /* error : LHS and RHS type */
	5 = a; /* error : LHS not var */
	a = 5;
	a = NULL; /* error : RHS is not a const or var */ /* error : LHS and RHS type might be fine tho */
	ap = brr; /* error : LHS and RHS type */
	brr = ap; /* error : LHS not var */
	return 0;
}

int foo(){
	int *a[5];
	int *b;
	int c[10];
	struct temp1 {int a;} *s1;
	struct temp1 s2;
	struct temp2 {int b;} *s3;
	struct temp3 {
		struct temp1 {char c;} x; /* error : redeclaration */
	} s4;
	a = b; /* error : LHS is not var */
	b = c; /* error : LHS and RHS type */
	s1 = s3; /* error : LHS and RHS type */
	s1 = s2; /* error : LHS and RHS type */
	s1 = &s2;
	return 'c'; /* error : return type incompatible */
}

void operations(){
	int a;
	char b;
	int *c;
	char d[10];
	struct temp {int a;} e;
	a = 10;
	b = 'a';
	a = -a;
	b = -b; /* error : not computable */
	a++;
	--a;
	b++;
	c++; /* error : not computable */
	--d; /* error : not computable */
	++e; /* error : not computable */
}

void operations2(){
	int result;
	int a;
	int b;
	int* ap;
	int *bp;
	char *cp;
	result = (a<5) || (a>=b);
	result = (a < *bp);
	result = (*cp > *cp); /* error : not comparable */
	result = (a==b);
	result = (ap==bp);
	result = (*ap == *bp);
	result = (ap == cp); /* error : not comparable */
	return;
	return 1; /* error : return type */
}

void pointers(){
	int *a;
	int b;
	int c[10];
	a = 0; /* error : LHS and RHS type */
	a = NULL;
	a = &b; 
	a = *b; /* error : not a pointer */
	&b = a; /* error : LHS is not a variable */
	b = &c; /* error : not a variable */
	b = 0;
	b = *a;
}

void structures(){
	struct str1 {int i; char c;};
	struct aaaaa {
		struct bbbbb* p; /* error : incomplete type */
		struct bbbb {int s;} y;
	};
	struct bbbb {int x;}; /* error : redeclaration */

}

void structures1(){
	int i;
	struct str1 st1;
	struct str1 *pst1;
	struct bbbb {} x; /* error : redeclaration */
	i = st1.i;
	i = st1.i2; /* error : struct have not same name field */
	i = st1->i; /* error : not a struct pointer */
	i = pst1->i;
	i = pst1.i; /* error : not a struct */
}

char array1(){
	int a[5];
	int b;
	char c[6];
	b = a[1];
	a[1] = b;
	a[1] = b[1]; /* error : not an array type */
	return c[2];
}

int func1(int a, char b) { return 0; }
int func2(int a, char b) { return 'c'; } /* error : incompatible return type */
int func1(int a, char a){ return 0; } /* error : redeclaration */
int func1() { return; } /* error : redeclaration */
int func(){
	int a;
	int b;
	char c;
	char *cp;
	b = func1(a,b); /* error : args are not the same */
	b = func1(a,c);
	c = func1(a,c); /* error : LHS and RHS type */
	b = func1(a, *cp);
	b = a(); /* error : not a function */
}
