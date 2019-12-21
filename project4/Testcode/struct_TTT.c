struct str{
	int a;
	char c;
}s;

struct strstr{
	int a;
	struct str strarr[5];
	int b;
};

struct strstr foo(){
	struct strstr newww;
	newww.strarr[1].c = 'b';
	newww.strarr[1].a = 200;
	/*
	newww.a = 1;
	newww.b = 2;
	newww.strarr[0].c = 'a';
	newww.strarr[2].c = 'c';
	newww.strarr[3].c = 'd';
	newww.strarr[4].c = 'e';
	newww.strarr[0].a = 100;
	newww.strarr[2].a = 300;
	newww.strarr[3].a = 400;
	newww.strarr[4].a = 500;
	*/
	return newww;
}

struct str goo(int x, int y, char z){
	return foo().strarr[1];
}

int main(){
	struct str sss;
	sss = goo(1, 2, 'z');
	write_string("The answer is : 200 b\n");
	write_int(sss.a);
	write_string("\n");
	write_char(sss.c);
	write_string("\n");
}

