	shift_sp 1
	push_const EXIT
	push_reg fp
	push_reg sp
	pop_reg fp
	jump main
EXIT:
	exit
foo:
	shift_sp 12
foo_start:
	push_reg fp
	push_const 1
	add
	push_const 1
	add
	push_const 1
	push_const 2
	mul
	add
	push_const 1
	add
	push_reg sp
	fetch
	push_const 98
	assign
	fetch
	shift_sp -1
	push_reg fp
	push_const 1
	add
	push_const 1
	add
	push_const 1
	push_const 2
	mul
	add
	push_reg sp
	fetch
	push_const 200
	assign
	fetch
	shift_sp -1
	push_reg fp
	push_const -1
	add
	push_const -12
	add
	push_reg sp
	fetch
	push_reg fp
	push_const 1
	add
	fetch
	assign
	push_const 1
	add
	push_reg sp
	fetch
	push_reg fp
	push_const 2
	add
	fetch
	assign
	push_const 1
	add
	push_reg sp
	fetch
	push_reg fp
	push_const 3
	add
	fetch
	assign
	push_const 1
	add
	push_reg sp
	fetch
	push_reg fp
	push_const 4
	add
	fetch
	assign
	push_const 1
	add
	push_reg sp
	fetch
	push_reg fp
	push_const 5
	add
	fetch
	assign
	push_const 1
	add
	push_reg sp
	fetch
	push_reg fp
	push_const 6
	add
	fetch
	assign
	push_const 1
	add
	push_reg sp
	fetch
	push_reg fp
	push_const 7
	add
	fetch
	assign
	push_const 1
	add
	push_reg sp
	fetch
	push_reg fp
	push_const 8
	add
	fetch
	assign
	push_const 1
	add
	push_reg sp
	fetch
	push_reg fp
	push_const 9
	add
	fetch
	assign
	push_const 1
	add
	push_reg sp
	fetch
	push_reg fp
	push_const 10
	add
	fetch
	assign
	push_const 1
	add
	push_reg sp
	fetch
	push_reg fp
	push_const 11
	add
	fetch
	assign
	push_const 1
	add
	push_reg sp
	fetch
	push_reg fp
	push_const 12
	add
	fetch
	assign
	jump foo_final
foo_final:
	push_reg fp
	pop_reg sp
	pop_reg fp
	pop_reg pc
foo_end:
goo:
goo_start:
	push_reg fp
	push_const -1
	add
	push_const -2
	add
	push_reg sp
	fetch
	shift_sp 12
	push_const label_0
	push_reg fp
	push_reg sp
	pop_reg fp
	jump foo
label_0:
	push_reg sp
	push_const -11
	add
	push_reg sp
	fetch
	push_reg sp
	fetch
	push_const 1
	add
	fetch
	assign
	push_const 1
	add
	push_reg sp
	fetch
	push_reg sp
	fetch
	push_const 1
	add
	fetch
	assign
	push_const 1
	add
	push_reg sp
	fetch
	push_reg sp
	fetch
	push_const 1
	add
	fetch
	assign
	push_const 1
	add
	push_reg sp
	fetch
	push_reg sp
	fetch
	push_const 1
	add
	fetch
	assign
	push_const 1
	add
	push_reg sp
	fetch
	push_reg sp
	fetch
	push_const 1
	add
	fetch
	assign
	push_const 1
	add
	push_reg sp
	fetch
	push_reg sp
	fetch
	push_const 1
	add
	fetch
	assign
	push_const 1
	add
	push_reg sp
	fetch
	push_reg sp
	fetch
	push_const 1
	add
	fetch
	assign
	push_const 1
	add
	push_reg sp
	fetch
	push_reg sp
	fetch
	push_const 1
	add
	fetch
	assign
	push_const 1
	add
	push_reg sp
	fetch
	push_reg sp
	fetch
	push_const 1
	add
	fetch
	assign
	push_const 1
	add
	push_reg sp
	fetch
	push_reg sp
	fetch
	push_const 1
	add
	fetch
	assign
	push_const 1
	add
	shift_sp -3
	push_const 1
	push_reg sp
	push_const -10
	add
	push_reg sp
	fetch
	push_reg sp
	fetch
	push_reg sp
	push_const -3
	add
	fetch
	push_const 2
	mul
	add
	fetch
	assign
	push_const 1
	add
	push_reg sp
	fetch
	push_reg sp
	fetch
	push_reg sp
	push_const -3
	add
	fetch
	push_const 2
	mul
	add
	fetch
	assign
	push_const 1
	add
	shift_sp -10
	push_reg sp
	push_const -2
	add
	fetch
	push_reg sp
	fetch
	push_reg sp
	push_const -3
	add
	fetch
	assign
	push_const 1
	add
	push_reg sp
	fetch
	push_reg sp
	push_const -2
	add
	fetch
	assign
	push_const 1
	add
	jump goo_final
goo_final:
	push_reg fp
	pop_reg sp
	pop_reg fp
	pop_reg pc
goo_end:
main:
	shift_sp 2
main_start:
	push_reg fp
	push_const 1
	add
	push_reg sp
	fetch
	shift_sp 2
	push_const label_1
	push_reg fp
	push_const 1
	push_const 2
	push_const 122
	push_reg sp
	push_const -3
	add
	pop_reg fp
	jump goo
label_1:
	push_reg sp
	push_const -3
	add
	fetch
	push_reg sp
	fetch
	push_reg sp
	push_const -1
	add
	push_const -2
	add
	fetch
	assign
	push_const 1
	add
	push_reg sp
	fetch
	push_reg sp
	push_const -1
	add
	push_const -1
	add
	fetch
	assign
	shift_sp -2
str_0. string "The answer is : 200 b\n"
	push_const str_0
	write_string
	push_reg fp
	push_const 1
	add
	fetch
	write_int
str_1. string "\n"
	push_const str_1
	write_string
	push_reg fp
	push_const 1
	add
	push_const 1
	add
	fetch
	write_char
str_2. string "\n"
	push_const str_2
	write_string
main_final:
	push_reg fp
	pop_reg sp
	pop_reg fp
	pop_reg pc
main_end:
Lglob. data 2
