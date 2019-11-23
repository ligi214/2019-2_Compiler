/* test regarding function operations - arguments */
int func(){
	return; /* error : incompatible return type */
}

char* func2(int x){
	return 1; /* error : incompatible return type */
}

char func3(int x, int* y, char z){
	return z;
}

int func4(char* x){
	int y;
	return 1;
}

void main(){
	int x;
	int* y;
	char z;

	/* empty call */
	x(); /* error : not a function */
	y(); /* error : not a function */
	func();
	func2(); /* error : not equal args */
	func3(); /* error : not equal args */
										
	/* parameter call */
	func(x, y); /* error : not equal args */
	func2(x); 
	func2(x, y); /* error : not equal args */
	func2(x, y, z); /* error : not equal args */
	func3(x); /* error : not equal args */
	func3(x, y); /* error : not equal args */
	func3(x, y, z); 
	func3(x, y, z, x); /* error : not equal args */


	func2(y); /* error : not equal args */
	func2(z); /* error : not equal args */
	func2(*y);

	func3(z, y, x); /* error : not equal args */
	func3(x, &x, z);

	func4(y); /* error : not equal args */
	func4(&z);
	func4(func2(x)); 
	&(func()); /* error : not variable */
	&(func2(x)); /* error : not variable */

}
