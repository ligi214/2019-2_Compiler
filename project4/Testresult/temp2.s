	push_const EXIT
	push_reg fp
	push_reg sp
	pop_reg fp
	jump main
EXIT:
	exit
main:
	shift_sp 18
main_start:
	push_reg fp
	push_const 3
	add
	push_const 1
	push_reg sp
	push_const -1
	add
	fetch
	push_reg sp
	fetch
	push_reg sp
	push_const -1
	add
	push_const -1
	add
	fetch
	assign
	shift_sp -1
	push_reg fp
	push_const 3
	add
	push_const 1
	add
	push_const 10
	push_reg sp
	push_const -1
	add
	fetch
	push_reg sp
	fetch
	push_reg sp
	push_const -1
	add
	push_const -1
	add
	fetch
	assign
	shift_sp -1
	push_reg fp
	push_const 5
	add
	push_reg fp
	push_const 3
	add
	fetch
	push_reg fp
	push_const 4
	add
	fetch
	push_reg sp
	push_const -2
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
	push_reg fp
	push_const 3
	add
	fetch
	write_int
str_0. string "\n-1\n"
	push_const str_0
	write_string
	push_reg fp
	push_const 3
	add
	push_const 1
	add
	fetch
	write_int
str_1. string "\n-10\n"
	push_const str_1
	write_string
	push_reg fp
	push_const 5
	add
	fetch
	write_int
str_2. string "\n-1\n"
	push_const str_2
	write_string
	push_reg fp
	push_const 5
	add
	push_const 1
	add
	fetch
	write_int
str_3. string "\n-10\n"
	push_const str_3
	write_string
	push_reg fp
	push_const 7
	add
	push_const 2
	push_reg sp
	push_const -1
	add
	fetch
	push_reg sp
	fetch
	push_reg sp
	push_const -1
	add
	push_const -1
	add
	fetch
	assign
	shift_sp -1
	push_reg fp
	push_const 7
	add
	push_const 1
	add
	push_reg fp
	push_const 3
	add
	fetch
	push_reg fp
	push_const 4
	add
	fetch
	push_reg sp
	push_const -2
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
	push_reg fp
	push_const 10
	add
	push_reg fp
	push_const 7
	add
	fetch
	push_reg fp
	push_const 8
	add
	fetch
	push_reg fp
	push_const 9
	add
	fetch
	push_reg sp
	push_const -3
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
	push_const 13
	add
	push_const 5
	add
	push_const 0
	push_reg sp
	push_const -1
	add
	fetch
	push_reg sp
	fetch
	push_reg sp
	push_const -1
	add
	push_const -1
	add
	fetch
	assign
	shift_sp -1
	push_const Lglob+0
	push_const 5
	add
	push_const 0
	push_reg sp
	push_const -1
	add
	fetch
	push_reg sp
	fetch
	push_reg sp
	push_const -1
	add
	push_const -1
	add
	fetch
	assign
	shift_sp -1
	push_const Lglob+0
	push_reg fp
	push_const 5
	add
	fetch
	push_reg fp
	push_const 6
	add
	fetch
	push_reg sp
	push_const -2
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
	push_const Lglob+0
	push_const 2
	add
	push_reg fp
	push_const 10
	add
	fetch
	push_reg fp
	push_const 11
	add
	fetch
	push_reg fp
	push_const 12
	add
	fetch
	push_reg sp
	push_const -3
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
	push_const 13
	add
	push_const Lglob+0
	fetch
	push_const Lglob+1
	fetch
	push_const Lglob+2
	fetch
	push_const Lglob+3
	fetch
	push_const Lglob+4
	fetch
	push_const Lglob+5
	fetch
	push_reg sp
	push_const -6
	add
	fetch
	push_reg sp
	fetch
	push_reg sp
	push_const -1
	add
	push_const -6
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
	push_const -5
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
	push_const -4
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
	shift_sp -6
	push_reg fp
	push_const 13
	add
	fetch
	write_int
str_4. string "\n"
	push_const str_4
	write_string
str_5. string "-1"
	push_const str_5
	write_string
str_6. string "\n"
	push_const str_6
	write_string
	push_reg fp
	push_const 13
	add
	push_const 2
	add
	push_const 1
	add
	push_const 1
	add
	fetch
	write_int
str_7. string "\n"
	push_const str_7
	write_string
str_8. string "-10"
	push_const str_8
	write_string
str_9. string "\n"
	push_const str_9
	write_string
main_final:
	push_reg fp
	pop_reg sp
	pop_reg fp
	pop_reg pc
main_end:
Lglob. data 6
