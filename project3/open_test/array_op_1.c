int main() {
	int x[10];
	int a;
	int *xp[10];
	int *p;
	char* q;

	x++; /* error : not computable */
	a+x; /* error : not computable */
	x-a; /* error : not computable */
	!x; /* error : not computable */
	-x; /* error : not computable */
	x++; /* error : not computable */
	--x; /* error : not computable */
	x&&a; /* error : not computable */
	a&&x; /* error : not computable */
	x||a; /* error : not computable */
	a||x; /* error : not computable */
	a&&!x||a; /* error : not computable */

	cp[10]; /* error : not declared */
	a[10]; /* error : not array */

	x[1]==a;
	x[1]==1;
	x[2]++;
	(*xp[2])++; /* check if parenthesis is necessary. must not be error */
	x[2]&&*xp[2];
	xp[2]==p;
	xp[2]==q; /* error : not comparable */
	xp[2]==&a;
	xp[2]==&(xp[3]); /* error : not comparable */
	*(xp[1])==a;
	*(xp[1])==1;
	**(&xp[a]) == a;
	&xp[1];
	**(&xp[x[1]]) == 1;

	**(&xp[1]) == a;
	**(&xp[2]) == 1;

	x[x[x[x[2]]]]; /* error : not constant integer */
	x[*p]; /* error : not contant integer */

	xp==a; /* error : not comparable */
	xp==p; /* error : not comparable */
	p==xp; /* error : not comparable */
	*q==*xp; /* error : not a pointer */
	*xp[2] == *q; /* error : not comparable */
	x[*q]; /* error : not const int as index -> not included in the test case */
	x[p]; /* error : not const int as index -> not included in the test case */

	&x; /* error : x not variable */
	&xp; /* error : xp not variable */

    return 0;
}
