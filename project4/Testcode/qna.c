int glob_a;
char glob_c;
struct s{
	char c;
	struct str {
		struct strstr{
			int a;
			char c;
		} ss;
		int a;
		char c;
	}sss;
	int b;
} s1;

struct strstr strfoo(){
	struct strstr temp;
	temp.a = 101;
	temp.c = 'g';
	return temp;
}

int main(){
	/*
	int *a;
	int b;
	int c;
	int arr[10];
	struct str strarr[5];
	struct strstr strstrarr[3];
	strstrarr[2] = strfoo();
	write_char(strstrarr[2].c);
	write_string("\n");
	*/
	write_char(strfoo().c);
	write_string("\n");
	/*
	strstrarr[2].a = 1000;
	s1.b = 1;
	s1.sss.a = 2;
	strarr[1].c = 'c';
	s1.c = 's';
	s1.sss.ss.c = 'd';
	write_int(s1.b);
	write_string("\n");
	write_int(++s1.sss.a);
	write_string("\n");
	write_char(s1.sss.ss.c);
	write_string("\n");
	write_char(strarr[1].c);
	write_string("\n");
	write_int(strstrarr[2].a);
	write_string("\n");
	write_char(s1.c);
	write_string("\n");
	*/
	return 1;
}

