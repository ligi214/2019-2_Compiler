int glob_a;

int main(){
	int i;
	int j;
	write_string("1. for loop : 10 11 12 ... 19\n");
	for(i=0;i<10;i++){
		write_int(i+10);
		write_string("\n");
	}
	j = 1;
	write_string("2. nested while loop : 1 1 2 2 1 3 3 2 1\n");
	while(j!=4){
		write_int(j);
		write_string("\n");
		i = j;
		j++;
		while(i!=0){
			write_int(i);
			write_string("\n");
			i--;
		}
	}

	write_string("3. loop break : 10 9 6 5 4\n");
	glob_a = 10;
	while(1){
		if(glob_a == 3){
			break;
		}
		if(glob_a == 8){
			glob_a = glob_a -2;
			continue;
		}
		j = glob_a;
		write_int(j);
		write_string("\n");
		--glob_a;
	}
}
