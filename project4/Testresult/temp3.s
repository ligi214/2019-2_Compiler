	shift_sp 1
	push_const EXIT
	push_reg fp
	push_reg sp
	pop_reg fp
	jump main
EXIT:
	exit
func1:
	shift_sp 3
func1_start:
	push_reg fp
	push_const 3
	add
	push_reg sp
	fetch
	push_reg fp
	push_const 1
	add
	fetch
	assign
	fetch
	shift_sp -1
	push_reg fp
	push_const 3
	add
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
	push_const 3
	add
	push_const 2
	add
	push_reg sp
	fetch
	push_const 120
	assign
	fetch
	shift_sp -1
	push_reg fp
	push_const -1
	add
	push_const -3
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
	jump func1_final
func1_final:
	push_reg fp
	pop_reg sp
	pop_reg fp
	pop_reg pc
func1_end:
main:
	shift_sp 4
main_start:
	push_reg fp
	push_const 4
	add
	push_reg sp
	fetch
	push_const 100
	assign
	fetch
	shift_sp -1
	push_reg fp
	push_const 1
	add
	push_reg sp
	fetch
	shift_sp 3
	push_const label_0
	push_reg fp
	push_const 10
	push_const 100
	push_reg sp
	push_const -2
	add
	pop_reg fp
	jump func1
label_0:
	push_reg sp
	push_const -4
	add
	fetch
	push_reg sp
	fetch
	push_reg sp
	push_const -1
	add
	push_const -3
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
	shift_sp -3
	push_reg fp
	push_const 1
	add
	fetch
	write_int
str_0. string "\n"
	push_const str_0
	write_string
str_1. string "-10"
	push_const str_1
	write_string
str_2. string "\n"
	push_const str_2
	write_string
	push_reg fp
	push_const 1
	add
	push_const 1
	add
	fetch
	write_int
str_3. string "\n"
	push_const str_3
	write_string
str_4. string "-100"
	push_const str_4
	write_string
str_5. string "\n"
	push_const str_5
	write_string
	push_reg fp
	push_const 1
	add
	push_const 2
	add
	fetch
	write_char
str_6. string "\nx\n"
	push_const str_6
	write_string
main_final:
	push_reg fp
	pop_reg sp
	pop_reg fp
	pop_reg pc
main_end:
Lglob. data 0
