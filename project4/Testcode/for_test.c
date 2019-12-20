int foo(int i){
	write_string("Here i am in foo\n");
	write_int(i);
	write_string(" ");
	write_int(i+3);
	write_string("\n");
	return i+1;
}

int main(){
	int i;
	int j;
	int k;
	write_string("foo entering message - 100 103 - foo entering message - 101 104\n 102\n");
	write_string("0 4 6 8 106\n");
	i = 0;
	j = 100;
	k = foo(foo(j));
	write_int(k);
	write_string("\n");
	while(i<10){
		write_int(i);
		write_string(" ");
		i++;
		while(1){
			i++;
			j++;
			if(i>3) { break; }
		}
		if(i > 8) { break; }
	}
	write_int(j);
	write_string("\n");
}
