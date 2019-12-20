struct st1{
	int a;
	int b;
	char c;
};

struct st1 func1(int x, int y){
	struct st1 s;
	s.a = x;
	s.b = y;
	s.c = 'x';
	return s;
}

int main(){
	struct st1 ss;
	int a;

	a = 100;
	ss = func1(10, 100);

	write_int(ss.a);
	write_string("\n");
	write_string("-10");
	write_string("\n");
	write_int(ss.b);
	write_string("\n");
	write_string("-100");
	write_string("\n");
	write_char(ss.c);
	write_string("\nx\n");
}
