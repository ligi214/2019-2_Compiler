	push_const EXIT
	push_reg fp
	push_reg sp
	pop_reg fp
	jump main
EXIT:
	exit
foo:
foo_start:
str_0. string "Here i am in foo\n"
	push_const str_0
	write_string
	push_reg fp
	push_const 1
	add
	fetch
	write_int
str_1. string " "
	push_const str_1
	write_string
	push_reg fp
	push_const 1
	add
	fetch
	push_const 3
	add
	write_int
str_2. string "\n"
	push_const str_2
	write_string
	push_reg fp
	push_const -1
	add
	push_const -1
	add
	push_reg sp
	fetch
	push_reg fp
	push_const 1
	add
	fetch
	push_const 1
	add
	assign
	jump foo_final
foo_final:
	push_reg fp
	pop_reg sp
	pop_reg fp
	pop_reg pc
foo_end:
main:
	shift_sp 3
main_start:
	push_reg fp
	push_const 1
	add
	push_reg sp
	fetch
	push_const 0
	assign
	fetch
	shift_sp -1
	push_reg fp
	push_const 2
	add
	push_reg sp
	fetch
	push_const 100
	assign
	fetch
	shift_sp -1
	push_reg fp
	push_const 3
	add
	push_reg sp
	fetch
	shift_sp 1
	push_const label_0
	push_reg fp
	shift_sp 1
	push_const label_1
	push_reg fp
	push_reg fp
	push_const 2
	add
	fetch
	push_reg sp
	push_const -1
	add
	pop_reg fp
	jump foo
label_1:
	push_reg sp
	push_const -1
	add
	pop_reg fp
	jump foo
label_0:
	assign
	fetch
	shift_sp -1
	push_reg fp
	push_const 3
	add
	fetch
	write_int
str_3. string "\n"
	push_const str_3
	write_string
label_4:
	push_reg fp
	push_const 1
	add
	fetch
	push_const 10
	less
	branch_false label_5
	push_reg fp
	push_const 1
	add
	fetch
	write_int
str_4. string " "
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
	add
	assign
	fetch
	push_const 1
	sub
	shift_sp -1
label_6:
	push_const 1
	branch_false label_7
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
	push_reg fp
	push_const 1
	add
	fetch
	push_const 3
	greater
	branch_false label_8
	jump label_7
label_8:
	jump label_6
label_7:
	push_reg fp
	push_const 1
	add
	fetch
	push_const 8
	greater
	branch_false label_10
	jump label_5
label_10:
	jump label_4
label_5:
	push_reg fp
	push_const 2
	add
	fetch
	write_int
str_5. string "\n"
	push_const str_5
	write_string
main_final:
	push_reg fp
	pop_reg sp
	pop_reg fp
	pop_reg pc
main_end:
Lglob. data 0
