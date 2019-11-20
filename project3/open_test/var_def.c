/* variable redefine */
int a;


int main() {
    int a;
    char a;  /* error : redeclaration */
    int b;
    int b;  /* error : redeclaration */
    int c;
    char d;

	a = b;
    a = e;	/* error : not declared */
	f = a; /* error : not declared */

    return 0;
}

