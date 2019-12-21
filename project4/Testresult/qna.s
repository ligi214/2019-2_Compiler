	shift_sp 1
	push_const EXIT
	push_reg fp
	push_reg sp
	pop_reg fp
	jump main
EXIT:
	exit
f:
	shift_sp 3
f_start:
	push_reg fp
	push_const 1
	add
	push_const 0
	add
	push_reg sp
	fetch
	push_const 111
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
	push_const 222
	assign
	fetch
	shift_sp -1
	push_reg fp
	push_const 1
	add
	push_const 2
	add
	push_reg sp
	fetch
	push_const 333
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
	jump f_final
f_final:
	push_reg fp
	pop_reg sp
	pop_reg fp
	pop_reg pc
f_end:
boo:
boo_start:
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
	push_const 0
	add
	fetch
	assign
	jump boo_final
boo_final:
	push_reg fp
	pop_reg sp
	pop_reg fp
	pop_reg pc
boo_end:
goo:
goo_start:
	push_const 1
	write_int
str_0. string "\nyesyes\n"
	push_const str_0
	write_string
goo_final:
	push_reg fp
	pop_reg sp
	pop_reg fp
	pop_reg pc
goo_end:
main:
	shift_sp 4
main_start:
	push_reg fp
	push_const 1
	add
	push_reg sp
	fetch
	shift_sp 3
	push_const label_0
	push_reg fp
	push_reg sp
	pop_reg fp
	jump f
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
str_1. string "The answer is : 111 222 333 112 1 yesyes\n"
	push_const str_1
	write_string
	push_reg fp
	push_const 1
	add
	push_const 0
	add
	fetch
	write_int
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
	push_reg fp
	push_const 1
	add
	push_const 2
	add
	fetch
	write_int
str_4. string "\n"
	push_const str_4
	write_string
	push_reg fp
	push_const 4
	add
	push_reg sp
	fetch
	shift_sp 1
	push_const label_1
	push_reg fp
	shift_sp 3
	push_const label_2
	push_reg fp
	push_reg sp
	pop_reg fp
	jump f
label_2:
	push_reg sp
	push_const -3
	add
	pop_reg fp
	jump boo
label_1:
	push_const 1
	add
	assign
	fetch
	shift_sp -1
	push_reg fp
	push_const 4
	add
	fetch
	write_int
str_5. string "\n"
	push_const str_5
	write_string
	shift_sp 1
	push_const label_3
	push_reg fp
	push_reg sp
	pop_reg fp
	jump goo
label_3:
	shift_sp -1
main_final:
	push_reg fp
	pop_reg sp
	pop_reg fp
	pop_reg pc
main_end:
Lglob. data 0
