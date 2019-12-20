	shift_sp 1
	push_const EXIT
	push_reg fp
	push_reg sp
	pop_reg fp
	jump main
EXIT:
	exit
main:
	shift_sp 234
main_start:
str_0. string "testing for pointer +/- int operator. 5 b 50 / 6 c 60 / 4 a 40 / 777 x 888 999\n"
	push_const str_0
	write_string
	push_reg fp
	push_const 232
	add
	push_reg sp
	fetch
	push_reg fp
	push_const 1
	add
	push_const 5
	add
	assign
	fetch
	shift_sp -1
	push_reg fp
	push_const 233
	add
	push_reg sp
	fetch
	push_reg fp
	push_const 11
	add
	push_const 5
	add
	assign
	fetch
	shift_sp -1
	push_reg fp
	push_const 234
	add
	push_reg sp
	fetch
	push_reg fp
	push_const 21
	add
	push_const 5
	push_const 21
	mul
	add
	assign
	fetch
	shift_sp -1
	push_reg fp
	push_const 1
	add
	push_const 5
	add
	push_reg sp
	fetch
	push_const 5
	assign
	fetch
	shift_sp -1
	push_reg fp
	push_const 1
	add
	push_const 6
	add
	push_reg sp
	fetch
	push_const 6
	assign
	fetch
	shift_sp -1
	push_reg fp
	push_const 1
	add
	push_const 4
	add
	push_reg sp
	fetch
	push_const 4
	assign
	fetch
	shift_sp -1
	push_reg fp
	push_const 11
	add
	push_const 5
	add
	push_reg sp
	fetch
	push_const 98
	assign
	fetch
	shift_sp -1
	push_reg fp
	push_const 11
	add
	push_const 4
	add
	push_reg sp
	fetch
	push_const 97
	assign
	fetch
	shift_sp -1
	push_reg fp
	push_const 11
	add
	push_const 6
	add
	push_reg sp
	fetch
	push_const 99
	assign
	fetch
	shift_sp -1
	push_reg fp
	push_const 21
	add
	push_const 5
	push_const 21
	mul
	add
	push_const 11
	add
	push_const 0
	add
	push_reg sp
	fetch
	push_const 50
	assign
	fetch
	shift_sp -1
	push_reg fp
	push_const 21
	add
	push_const 6
	push_const 21
	mul
	add
	push_const 11
	add
	push_const 0
	add
	push_reg sp
	fetch
	push_const 60
	assign
	fetch
	shift_sp -1
	push_reg fp
	push_const 21
	add
	push_const 4
	push_const 21
	mul
	add
	push_const 11
	add
	push_const 0
	add
	push_reg sp
	fetch
	push_const 40
	assign
	fetch
	shift_sp -1
	push_reg fp
	push_const 232
	add
	fetch
	fetch
	write_int
str_1. string "\n"
	push_const str_1
	write_string
	push_reg fp
	push_const 233
	add
	fetch
	fetch
	write_char
str_2. string "\n"
	push_const str_2
	write_string
	push_reg fp
	push_const 234
	add
	fetch
	push_const 11
	add
	push_const 0
	add
	fetch
	write_int
str_3. string "\n"
	push_const str_3
	write_string
	push_reg fp
	push_const 232
	add
	push_reg sp
	fetch
	push_reg fp
	push_const 232
	add
	fetch
	push_const 1
	push_reg fp
	push_const 233
	add
	push_reg sp
	fetch
	push_reg fp
	push_const 233
	add
	fetch
	push_const 1
	push_reg fp
	push_const 234
	add
	push_reg sp
	fetch
	push_reg fp
	push_const 234
	add
	fetch
	push_const 1
	push_reg fp
	push_const 232
	add
	fetch
	fetch
	write_int
str_4. string "\n"
	push_const str_4
	write_string
	push_reg fp
	push_const 233
	add
	fetch
	fetch
	write_char
str_5. string "\n"
	push_const str_5
	write_string
	push_reg fp
	push_const 234
	add
	fetch
	push_const 11
	add
	push_const 0
	add
	fetch
	write_int
str_6. string "\n"
	push_const str_6
	write_string
	push_reg fp
	push_const 232
	add
	push_reg sp
	fetch
	push_reg fp
	push_const 232
	add
	fetch
	push_const 2
	push_reg fp
	push_const 233
	add
	push_reg sp
	fetch
	push_reg fp
	push_const 233
	add
	fetch
	push_const 2
	push_reg fp
	push_const 234
	add
	push_reg sp
	fetch
	push_reg fp
	push_const 234
	add
	fetch
	push_const 2
	push_reg fp
	push_const 232
	add
	fetch
	fetch
	write_int
str_7. string "\n"
	push_const str_7
	write_string
	push_reg fp
	push_const 233
	add
	fetch
	fetch
	write_char
str_8. string "\n"
	push_const str_8
	write_string
	push_reg fp
	push_const 234
	add
	fetch
	push_const 11
	add
	push_const 0
	add
	fetch
	write_int
str_9. string "\n"
	push_const str_9
	write_string
	push_reg fp
	push_const 232
	add
	fetch
	push_reg sp
	fetch
	push_const 777
	assign
	fetch
	shift_sp -1
	push_reg fp
	push_const 233
	add
	fetch
	push_reg sp
	fetch
	push_const 120
	assign
	fetch
	shift_sp -1
	push_reg fp
	push_const 234
	add
	fetch
	push_const 11
	add
	push_const 0
	add
	push_reg sp
	fetch
	push_const 888
	assign
	fetch
	shift_sp -1
	push_reg fp
	push_const 234
	add
	fetch
	push_const 1
	push_const 0
	push_reg sp
	fetch
	push_const