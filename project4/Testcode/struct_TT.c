int glob_a;
int a;
char glob_c;
struct str{
	struct strstr{
		int a;
		char crr[3];
		struct strstrstr{
			int a;
			char c;
		} sss;
	} ss;
	char* c;
	int arr[5];
} s;

struct strstr goo(int a, char b, int c){
	struct str newww;
	newww.ss.a = a;
	newww.ss.sss.a = c;
	newww.ss.sss.c = b;
	newww.ss.crr[0] = 'x';
	newww.ss.crr[1] = 'y';
	newww.ss.crr[2] = 'z';
	return newww.ss;
}

int foo(int a, int b, struct strstrstr s, char c){
	write_string("Entered foo\n");
	write_string("The answer is : 10 101 h f\n");
	write_int(a);
	write_string("\n");
	write_int(s.a);
	write_string("\n");
	write_char(s.c);
	write_string("\n");
	write_char(c);
	write_string("\n");
	return b;
}

char hoo(){
	return goo(21, 'h', 31).crr[1];
}

int main(){
	struct strstr s1;
	int x;
	char c;
	s1 = goo(1, 'a', 2);
	write_string("1. Answer is : 1 z 2\n");
	write_int(s1.a);
	write_string("\n");
	write_char(s1.crr[2]);
	write_string("\n");
	write_int(s1.sss.a);
	write_string("\n");

	x = foo(10, 11, goo(100, 'h', 101).sss, 'f');
	write_string("Safely came back from foo and print 11\n");
	write_int(x);
	write_string("\n");

	c = hoo();
	write_string("Safely came back from hoo and print y\n");
	write_char(c);
	write_string("\n");
}
