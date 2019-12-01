int foo(){
	struct s{
		struct t{char c;} y;
	} xx;
	struct t{int a;} b; /* error : redeclaration */
	struct u{
		int x;
		char y;
		int* ip;
		char* cp;
		struct s* sp;
		struct t tt;
		struct q qq; /* error : incomplete type */
	};
	int xx; /* error : redeclaration */
	int x;
	char y;
	struct b xx; /* error : incomplete type */
	struct u xx; /* error : redeclaration */
	{
		int a;
		char *b;
		a = 5; 
		a = NULL; /* error : LHS and RHS type */
		b = NULL;
		2 = NULL; /* error : LHS not var */
		2++; /* error : not var */
	}
	goo(); /* error : not declared */
	a = 'a'; /* error : not declared */
	x = 1;
	x = 'a'; /* error : LHS and RHS type */
	y = 1; /* error : LHS and RHS type */
	y = 'c';
	2++; /* error : not computable */
	'c'++; /* error : not computable */
	return 1;
	return 'c'; /* error : return type */
	return NULL; /* error : return type */
}

int main(){
	{
		struct t{int x;} b; /* error : redeclaration */
		struct u* up;
		struct u us;
		int a;
		int a; /* error : redeclaration */
		char a; /* error : redeclaration */
		char *cp;
		char c;
		int arr[10];
		char crr[20];

		a = NULL; /* error : LHS and RHS type */
		cp = NULL;
		cp = &crr; /* error : crr not variable */
		cp = &c;
		arr[1] = a;
		arr[1] = c; /* error : LHS and RHS type */
		up->x = 1;
		up->x = 'c'; /* error : LHS and RHS type */
		up.x =  1; /* error : not a struct */
		us.y = 'c';
		us.ip = &a;
		*us.ip = 10;
		*up->cp = 'd';
	}

	{
		int a;
		{
			int a;
			struct t{} x1; /* error : redeclaration */
		}
	}
	while(1){
		int a; 
	}
	return 0;
}

int user_func(int a, char a){ /* error : redeclaration */
	return 'c'; /* error : incompatible return types */
}

int aa(){
	int *a;
	user_func(1, 'c');
	user_func(1);
	user_func();
	if(1){
		return;
	} else {
		return 0;
	}
	return 0;
}
