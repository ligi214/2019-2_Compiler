	shift_sp 1
	push_const EXIT
	push_reg fp
	push_reg sp
	pop_reg fp
	jump main
EXIT:
	exit
strfoo:
	shift_sp 2
strfoo_start:
	push_reg fp
	push_const 1
	add
	push_reg sp
	fetch
	push_const 101
	assign
	fetch
	shift_sp -1
	push_reg fp
	push_const 1
	add
	push_const 1
	add
	push_reg sp
	fetch
	push_const 103
	assign
	fetch
	shift_sp -1
	push_reg fp
	push_const -1
	add
	push_const -2
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
	jump strfoo_final
strfoo_final:
	push_reg fp
	pop_reg sp
	pop_reg fp
	pop_reg pc
strfoo_end:
main:
main_start:
	shift_sp 2
	push_const label_0
	push_reg fp
	push_reg sp
	pop_reg fp
	jump strfoo
label_0:
	push_const 1
	add
	fetch
	write_char
str_0. string "\n"
	push_const str_0
	write_string
	push_reg fp
	push_const -1
	add
	push_const -1
	add
	push_reg sp
	fetch
	push_const 1
	assign
	jump main_final
main_final:
	push_reg fp
	pop_reg sp
	pop_reg fp
	pop_reg pc
main_end:
Lglob. data 8
