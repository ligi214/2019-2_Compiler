	shift_sp 1
	push_const EXIT
	push_reg fp
	push_reg sp
	pop_reg fp
	jump main
EXIT:
	exit
goo:
	shift_sp 12
goo_start:
	push_reg fp
	push_const 4
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
	push_const 4
	add
	push_const 4
	add
	push_reg sp
	fetch
	push_reg fp
	push_const 3
	add
	fetch
	assign
	fetch
	shift_sp -1
	push_reg fp
	push_const 4
	add
	push_const 4
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
	push_const 4
	add
	push_const 1
	add
	push_const 0
	add
	push_reg sp
	fetch
	push_const 120
	assign
	fetch
	shift_sp -1
	push_reg fp
	push_const 4
	add
	push_const 1
	add
	push_const 1
	add
	push_reg sp
	fetch
	push_const 121
	assign
	fetch
	shift_sp -1
	push_reg fp
	push_const 4
	add
	push_const 1
	add
	push_const 2
	add
	push_reg sp
	fetch
	push_const 122
	assign
	fetch
	shift_sp -1
	push_reg fp
	push_const -1
	add
	push_const -6
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
	jump goo_final
goo_final:
	push_reg fp
	pop_reg sp
	pop_reg fp
	pop_reg pc
goo_end:
foo:
foo_start:
str_0. string "Entered foo\n"
	push_const str_0
	write_string
str_1. string "The answer is : 10 101 h f\n"
	push_const str_1
	write_string
	push_reg fp
	push_const 1
	add
	fetch
	write_int
str_2. string "\n"
	push_const str_2
	write_string
	push_reg fp
	push_const 3
	add
	fetch
	write_int
str_3. string "\n"
	push_const str_3
	write_string
	push_reg fp
	push_const 3
	add
	push_const 1
	add
	fetch
	write_char
str_4. string "\n"
	push_const str_4
	write_string
	push_reg fp
	push_const 5
	add
	fetch
	write_char
str_5. string "\n"
	push_const str_5
	write_string
	push_reg fp
	push_const -1
	add
	push_const -1
	add
	push_reg sp
	fetch
	push_reg fp
	push_const 2
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
hoo:
hoo_start:
	push_reg fp
	push_const -1
	add
	push_const -1
	add
	push_reg sp
	fetch
	shift_sp 6
	push_const label_0
	push_reg fp
	push_const 21
	push_const 104
	push_const 31
	push_reg sp
	push_const -3
	add
	pop_reg fp
	jump goo
label_0:
	push_reg sp
	push_const -5
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
	shift_sp -4
	push_const 1
	push_reg sp
	push_const -3
	add
	push_reg sp
	fetch
	push_reg sp
	fetch
	push_reg sp
	push_const -3
	add
	fetch
	push_const 1
	mul
	add
	fetch
	assign
	push_const 1
	add
	shift_sp -4
	assign
	jump hoo_final
hoo_final:
	push_reg fp
	pop_reg sp
	pop_reg fp
	pop_reg pc
hoo_end:
main:
	shift_sp 8
main_start:
	push_reg fp
	push_const 1
	add
	push_reg sp
	fetch
	shift_sp 6
	push_const label_1
	push_reg fp
	push_const 1
	push_const 97
	push_const 2
	push_reg sp
	push_const -3
	add
	pop_reg fp
	jump goo
label_1:
	push_reg sp
	push_const -7
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
str_6. string "1. Answer is : 1 z 2\n"
	push_const str_6
	write_string
	push_reg fp
	push_const 1
	add
	fetch
	write_int
str_7. string "\n"
	push_const str_7
	write_string
	push_reg fp
	push_const 1
	add
	push_const 1
	add
	push_const 2
	add
	fetch
	write_char
str_8. string "\n"
	push_const str_8
	write_string
	push_reg fp
	push_const 1
	add
	push_const 4
	add
	fetch
	write_int
str_9. string "\n"
	push_const str_9
	write_string
	push_reg fp
	push_const 7
	add
	push_reg sp
	fetch
	shift_sp 1
	push_const label_2
	push_reg fp
	push_const 10
	push_const 11
	shift_sp 6
	push_const label_3
	push_reg fp
	push_const 100
	push_const 104
	push_const 101
	push_reg sp
	push_const -3
	add
	pop_reg fp
	jump goo
label_3:
	push_reg sp
	push_const -5
	add
	push_reg sp
	fetch
	push_reg sp
	fetch
	push_const 4
	add
	fetch
	assign
	push_const 1
	add
	push_reg sp
	fetch
	push_reg sp
	fetch
	push_const 4
	add
	fetch
	assign
	push_const 1
	add
	shift_sp -5
	push_const 102
	push_reg sp
	push_const -5
	add
	pop_reg fp
	jump foo
label_2:
	assign
	fetch
	shift_sp -1
str_10. string "Safely came back from foo and print 11\n"
	push_const str_10
	write_string
	push_reg fp
	push_const 7
	add
	fetch
	write_int
str_11. string "\n"
	push_const str_11
	write_string
	push_reg fp
	push_const 8
	add
	push_reg sp
	fetch
	shift_sp 1
	push_const label_4
	push_reg fp
	push_reg sp
	pop_reg fp
	jump hoo
label_4:
	assign
	fetch
	shift_sp -1
str_12. string "Safely came back from hoo and print y\n"
	push_const str_12
	write_string
	push_reg fp
	push_const 8
	add
	fetch
	write_char
str_13. string "\n"
	push_const str_13
	write_string
main_final:
	push_reg fp
	pop_reg sp
	pop_reg fp
	pop_reg pc
main_end:
Lglob. data 15
