struct st {
	int a[3];
} f() {
	struct st s1;
	s1.a[0] = 111;
	s1.a[1] = 222;
	s1.a[2] = 333;
	return s1;
}

int boo(struct st s) {
	return s.a[0];
}

void goo(){
	write_int(1);
	write_string("\nyesyes\n");
}

void main() {
	struct st s1;
	int c;
	s1 = f();
	/*
	s1.a[0] = 111, s1.a[1] = 222, a1.a[2] = 333
	*/
	write_int(s1.a[0]);
	write_string("\n");
	write_int(s1.a[1]);
	write_string("\n");
	write_int(s1.a[2]);
	write_string("\n");
	c = boo(f()) + 1;
	write_int(c);
	write_string("\n");
	goo();
}
