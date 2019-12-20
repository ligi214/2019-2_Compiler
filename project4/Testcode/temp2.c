struct st1{
	int a;
	int b;
};

struct st2{
	int x;
	struct st1 s;
};

struct st3{
	struct st1 stst1;
	struct st2 stst2;
	char c;
} a;

int main(){
	int x;
	int y;
	struct st1 s1;
	struct st1 s11;
	struct st2 s2;
	struct st2 s22;

	struct st3 b;

	s1.a = 1;
	s1.b = 10;
	s11 = s1;
	write_int(s1.a);
	write_string("\n-1\n");
	write_int(s1.b);
	write_string("\n-10\n");
	write_int(s11.a);
	write_string("\n-1\n");
	write_int(s11.b);
	write_string("\n-10\n");


	s2.x = 2;
	s2.s = s1;
	s22 = s2;

	b.c = 'a';
	a.c = 'b';
	a.stst1 = s11;
	a.stst2 = s22;
	b = a;
	write_int(b.stst1.a);
	write_string("\n");
	write_string("-1");
	write_string("\n");
	write_int(b.stst2.s.b);
	write_string("\n");
	write_string("-10");
	write_string("\n");
}
