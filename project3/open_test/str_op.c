/* struct operation */
struct str1 {
	int i;
	char c;
};

struct str2 {
	int *i;
	char *c;

	struct str3 {
		int *i;
		char *c;
	} st;
};

struct str3 { /* error : redeclaration */
	int *i;
	char *c;
};

int main(void) {
	int i1;
	char c1;

	struct str1 st1;
	struct str2 st2;

	struct str1 *pst1;
	struct str2 *pst2;

	st1 = st2; /* error */
	pst1 = pst2; /* error */
	st1 = st1;
	st1 = *pst1;

	pst1 = &st1;
	pst2 = st1; /* error : LHS and RHS type */
	pst2 = &st2;

	i1 = st1.i;
	c1 = st1.i; /* error : LHS and RHS type */
	c1 = st1.c;

	i1 = *st2.c; /* error : LHS and RHS type */

	i1 = *(pst2->st.i);
	i1 = *(pst2->st.c); /* error : LHS and RHS type */

	return 0;
}

