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
str_0. string "for basics... ans : 10 45 10 35\n"
	push_const str_0
	write_string
	push_reg fp
	push_const 2
	add
	push_reg sp
	fetch
	push_const 0
	assign
	fetch
	shift_sp -1
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
	push_const 2
	add
	push_reg sp
	fetch
	push_reg fp
	push_const 2
	add
	fetch
	push_reg fp
	push_const 1
	add
	fetch
	add
	assign
	fetch
	shift_sp -1
	jump label_2
label_4:
	push_reg fp
	push_const 1
	add
	fetch
	write_int
str_1. string "\n"
	push_const str_1
	write_string
	push_reg fp
	push_const 2
	add
	fetch
	write_int
str_2. string "\n"
	push_const str_2
	write_string
	push_reg fp
	push_const 1
	add
	push_reg sp
	fetch
	push_const 5
	assign
	fetch
	shift_sp -1
	push_reg fp
	push_const 2
	add
	push_reg sp
	fetch
	push_const 0
	assign
	fetch
	shift_sp -1
label_5:
	push_const 1
label_6:
	push_reg fp
	push_const 1
	add
	fetch
	push_const 10
	less
	branch_false label_9
	jump label_8
label_7:
	push_const 1
	jump label_6
label_8:
	push_reg fp
	push_const 2
	add
	push_reg sp
	fetch
	push_reg fp
	push_const 2
	add
	fetch
	push_reg fp
	push_const 1
	add
	fetch
	add
	assign
	fetch
	shift_sp -1
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
	shift_sp -1
	jump label_7
label_9:
	push_reg fp
	push_const 1
	add
	fetch
	write_int
str_3. string "\n"
	push_const str_3
	write_string
	push_reg fp
	push_const 2
	add
	fetch
	write_int
str_4. string "\n"
	push_const str_4
	write_string
str_5. string "for w/ break/continue... ans : 6 21 41 60 60\n"
	push_const str_5
	write_string
	push_reg fp
	push_const 2
	add
	push_reg sp
	fetch
	push_const 0
	assign
	fetch
	shift_sp -1
label_10:
	push_reg fp
	push_const 1
	add
	push_reg sp
	fetch
	push_const 0
	assign
	fetch
label_11:
	push_const 1
	branch_false label_14
	jump label_13
label_12:
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
	jump label_11
label_13:
	push_reg fp
	push_const 2
	add
	push_reg sp
	fetch
	push_reg fp
	push_const 2
	add
	fetch
	push_reg fp
	push_const 1
	add
	fetch
	add
	assign
	fetch
	shift_sp -1
	push_reg fp
	push_const 2
	add
	fetch
	push_const 20
	greater
	branch_false label_15
	jump label_14
label_15:
	jump label_12
label_14:
	push_reg fp
	push_const 1
	add
	fetch
	write_int
str_6. string "\n"
	push_const str_6
	write_string
	push_reg fp
	push_const 2
	add
	fetch
	write_int
str_7. string "\n"
	push_const str_7
	write_string
	push_reg fp
	push_const 2
	add
	push_reg sp
	fetch
	push_const 0
	assign
	fetch
	shift_sp -1
label_17:
	push_reg fp
	push_const 1
	add
	push_reg sp
	fetch
	push_const 0
	assign
	fetch
label_18:
	push_reg fp
	push_const 1
	add
	fetch
	push_const 100
	less
	branch_false label_21
	jump label_20
label_19:
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
	jump label_18
label_20:
	push_reg fp
	push_const 1
	add
	fetch
	push_const 60
	equal
	branch_false label_22
	jump label_21
label_22:
	push_reg fp
	push_const 1
	add
	fetch
	push_const 41
	equal
	branch_false label_24
	push_reg fp
	push_const 1
	add
	fetch
	write_int
str_8. string "\n"
	push_const str_8
	write_string
label_24:
	push_reg fp
	push_const 1
	add
	fetch
	push_const 20
	not_equal
	push_reg fp
	push_const 1
	add
	fetch
	push_const 40
	not_equal
	and
	branch_false label_26
	jump label_19
label_26:
	push_reg fp
	push_const 2
	add
	push_reg sp
	fetch
	push_reg fp
	push_const 2
	add
	fetch
	push_reg fp
	push_const 1
	add
	fetch
	add
	assign
	fetch
	shift_sp -1
	jump label_19
label_21:
	push_reg fp
	push_const 1
	add
	fetch
	write_int
str_9. string "\n"
	push_const str_9
	write_string
	push_reg fp
	push_const 2
	add
	fetch
	write_int
str_10. string "\n"
	push_const str_10
	write_string
main_final:
	push_reg fp
	pop_reg sp
	pop_reg fp
	pop_reg pc
main_end:
Lglob. data 0
