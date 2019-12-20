	shift_sp 1
	push_const EXIT
	push_reg fp
	push_reg sp
	pop_reg fp
	jump main
EXIT:
	exit
main:
main_start:
	push_const 0
	branch_false label_0
	push_const 1
	write_int
str_0. string "\n"
	push_const str_0
	write_string
	push_const 0
	branch_false label_2
	push_const 2
	write_int
str_1. string "\n"
	push_const str_1
	write_string
	jump label_3
label_2:
	push_const 3
	write_int
str_2. string "\n"
	push_const str_2
	write_string
label_3:
	push_const 4
	write_int
str_3. string "\n"
	push_const str_3
	write_string
	jump label_1
label_0:
	push_const 11
	write_int
str_4. string "\n"
	push_const str_4
	write_string
	push_const 1
	branch_false label_5
	push_const 12
	write_int
str_5. string "\n"
	push_const str_5
	write_string
	jump label_6
label_5:
	push_const 13
	write_int
str_6. string "\n"
	push_const str_6
	write_string
label_6:
	push_const 14
	write_int
str_7. string "\n"
	push_const str_7
	write_string
label_1:
	push_reg fp
	push_const -1
	add
	push_const -1
	add
	push_reg sp
	fetch
	push_const 0
	assign
	jump main_final
main_final:
	push_reg fp
	pop_reg sp
	pop_reg fp
	pop_reg pc
main_end:
Lglob. data 0
