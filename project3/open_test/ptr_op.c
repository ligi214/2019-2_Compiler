/* pointer operation */

int main(void) {
	int a[10];
	int *b;
	char c[20];
	char *d;
	int e;
	int f;

	e = 10;
	a = b;		/* error : LHS and RHS type (or a is const) */
	a[0] = 0;
	c[5] = 'a';

	b = &a;		/* error : a is const */
	b = &a[10];
	b = &b;		/* error : LHS and RHS type */
	b = &*(a+5);/* error : + with non-integer */
	b = &(b++);	/* error : ++ with non-integer/char */
	b = &*(b++);	/* error : ++ with non-integer */
	f = e++;
	e = ++f;

	d = b;		/* error : LHS and RHS type */
	d = c;		/* error : LHS and RHS type */

	c[1] = a[2]; /* error : LHS and RHS type */
	d = &(++d); /* error : ++ to pointer */
	d = &*(++d); /* error : ++ to pointer & * to non-pointer */
	a[3] = e;

	if (b < d) { /* error : not comparable*/
		return -1;
	}

	return 0;
}

