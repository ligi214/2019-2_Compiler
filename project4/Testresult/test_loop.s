	shift_sp 1
	push_const EXIT
	push_reg fp
	push_reg sp
	pop_reg fp
	jump main
EXIT:
	exit
main:
	shift_sp 2
main_start:
str_0. string "1. for loop : 10 11 12 ... 19\n"
	push_const str_0
	write_string
label_0:
	push_reg fp
	push_const 1
	add
	push_reg sp
	fetch
	push_const 0
	assign
	fetch
label_1:
	push_reg fp
	push_const 1
	add
	fetch
	push_const 10
	less
	branch_false label_4
	jump label_3
label_2:
	push_reg fp
	push_const 1
	add
	push_reg sp
	fetch
	push_reg sp
	fetch
	fetch
	push_const 1
	add
	assign
	fetch
	push_const 1
	sub
	jump label_1
label_3:
	push_reg fp
	push_const 1
	add
	fetch
	push_const 10
	add
	write_int
str_1. string "\n"
	push_const str_1
	write_string
	jump label_2
label_4:
	push_reg fp
	push_const 2
	add
	push_reg sp
	fetch
	push_const 1
	assign
	fetch
	shift_sp -1
str_2. string "2. nested while loop : 1 1 2 2 1 3 3 2 1\n"
	push_const str_2
	write_string
label_5:
	push_reg fp
	push_const 2
	add
	fetch
	push_const 4
	not_equal
	branch_false label_6
	push_reg fp
	push_const 2
	add
	fetch
	write_int
str_3. string "\n"
	push_const str_3
	write_string
	push_reg fp
	push_const 1
	add
	push_reg sp
	fetch
	push_reg fp
	push_const 2
	add
	fetch
	assign
	fetch
	shift_sp -1
	push_reg fp
	push_const 2
	add
	push_reg sp
	fetch
	push_reg sp
	fetch
	fetch
	push_const 1
	add
	assign
	fetch
	push_const 1
	sub
	shift_sp -1
label_7:
	push_reg fp
	push_const 1
	add
	fetch
	push_const 0
	not_equal
	branch_false label_8
	push_reg fp
	push_const 1
	add
	fetch
	write_int
str_4. string "\n"
	push_const str_4
	write_string
	push_reg fp
	push_const 1
	add
	push_reg sp
	fetch
	push_reg sp
	fetch
	fetch
	push_const 1
	sub
	assign
	fetch
	push_const 1
	add
	shift_sp -1
	jump label_7
label_8:
	jump label_5
label_6:
str_5. string "3. loop break : 10 9 6 5 4\n"
	push_const str_5
	write_string
	push_const Lglob+0
	push_reg sp
	fetch
	push_const 10
	assign
	fetch
	shift_sp -1
label_9:
	push_const 1
	branch_false label_10
	push_const Lglob+0
	fetch
	push_const 3
	equal
	branch_false label_11
	jump label_10
label_11:
	push_const Lglob+0
	fetch
	push_const 8
	equal
	branch_false label_13
	push_const Lglob+0
	push_reg sp
	fetch
	push_const Lglob+0
	fetch
	push_const 2
	sub
	assign
	fetch
	shift_sp -1
	jump label_9
label_13:
	push_reg fp
	push_const 2
	add
	push_reg sp
	fetch
	push_const Lglob+0
	fetch
	assign
	fetch
	shift_sp -1
	push_reg fp
	push_const 2
	add
	fetch
	write_int
str_6. string "\n"
	push_const str_6
	write_string
	push_const Lglob+0
	push_reg sp
	fetch
	push_reg sp
	fetch
	fetch
	push_const 1
	sub
	assign
	fetch
	shift_sp -1
	jump label_9
label_10:
main_final:
	push_reg fp
	pop_reg sp
	pop_reg fp
	pop_reg pc
main_end:
Lglob. data 1
