	shift_sp 1
	push_const EXIT
	push_reg fp
	push_reg sp
	pop_reg fp
	jump main
EXIT:
	exit
foo:
foo_start:
	push_reg fp
	push_const 1
	add
	fetch
	push_const 0
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
	push_const 1
	add
	fetch
	push_const 11
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
	push_const 1
	add
	fetch
	push_const 1
	add
	push_const 0
	add
	push_reg sp
	fetch
	push_reg fp
	push_const 4
	add
	fetch
	assign
	fetch
	shift_sp -1
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
	assign
	jump foo_final
foo_final:
	push_reg fp
	pop_reg sp
	pop_reg fp
	pop_reg pc
foo_end:
main:
	shift_sp 16
main_start:
	push_reg fp
	push_const 1
	add
	push_reg sp
	fetch
	push_const 1
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
	push_reg fp
	push_const 14
	add
	push_reg sp
	fetch
	push_reg fp
	push_const 4
	add
	push_const 0
	add
	assign
	fetch
	shift_sp -1
	push_reg fp
	push_const 15
	add
	push_reg sp
	fetch
	push_reg fp
	push_const 4
	add
	push_const 0
	add
	assign
	fetch
	shift_sp -1
	push_reg fp
	push_const 16
	add
	push_reg sp
	fetch
	push_reg fp
	push_const 4
	add
	push_const 1
	add
	assign
	fetch
	shift_sp -1
str_0. string "Basic bool op : 0 1 0 1 / 1 0 0 0 / 1 1 1 0 / 0 1/ -1 1 -1 1\n"
	push_const str_0
	write_string
	push_reg fp
	push_const 1
	add
	fetch
	push_reg fp
	push_const 2
	add
	fetch
	and
	write_int
str_1. string "\n"
	push_const str_1
	write_string
	push_reg fp
	push_const 1
	add
	fetch
	push_reg fp
	push_const 2
	add
	fetch
	or
	write_int
str_2. string "\n"
	push_const str_2
	write_string
	push_reg fp
	push_const 1
	add
	fetch
	not
	write_int
str_3. string "\n"
	push_const str_3
	write_string
	push_reg fp
	push_const 2
	add
	fetch
	not
	write_int
str_4. string "\n"
	push_const str_4
	write_string
str_5. string "\n"
	push_const str_5
	write_string
	push_const 1
	push_const 1
	and
	push_const 1
	write_int
str_6. string "\n"
	push_const str_6
	write_string
	push_const 1
	push_const 0
	and
	push_const 0
	write_int
str_7. string "\n"
	push_const str_7
	write_string
	push_const 0
	push_const 1
	and
	push_const 0
	write_int
str_8. string "\n"
	push_const str_8
	write_string
	push_const 0
	push_const 0
	and
	push_const 0
	write_int
str_9. string "\n"
	push_const str_9
	write_string
str_10. string "\n"
	push_const str_10
	write_string
	push_const 1
	push_const 1
	or
	push_const 1
	write_int
str_11. string "\n"
	push_const str_11
	write_string
	push_const 1
	push_const 0
	or
	push_const 1
	write_int
str_12. string "\n"
	push_const str_12
	write_string
	push_const 0
	push_const 1
	or
	push_const 1
	write_int
str_13. string "\n"
	push_const str_13
	write_string
	push_const 0
	push_const 0
	or
	push_const 0
	write_int
str_14. string "\n"
	push_const str_14
	write_string
str_15. string "\n"
	push_const str_15
	write_string
	push_const 1
	not
	push_const 0
	write_int
str_16. string "\n"
	push_const str_16
	write_string
	push_const 0
	not
	push_const 1
	write_int
str_17. string "\n"
	push_const str_17
	write_string
	push_reg fp
	push_const 1
	add
	fetch
	negate
	write_int
str_18. string "\n"
	push_const str_18
	write_string
	push_reg fp
	push_const 1
	add
	fetch
	negate
	negate
	write_int
str_19. string "\n"
	push_const str_19
	write_string
	push_const -1
	write_int
str_20. string "\n"
	push_const str_20
	write_string
	push_const 1
	write_int
str_21. string "\n"
	push_const str_21
	write_string
str_22. string "Basic equrel op : 0 1 1 0 1 1 X2 / 1 0 0 1\n"
	push_const str_22
	write_string
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
	push_const 1
	assign
	fetch
	shift_sp -1
str_23. string "\n"
	push_const str_23
	write_string
	push_reg fp
	push_const 1
	add
	fetch
	push_reg fp
	push_const 2
	add
	fetch
	equal
	write_int
str_24. string "\n"
	push_const str_24
	write_string
	push_reg fp
	push_const 1
	add
	fetch
	push_reg fp
	push_const 2
	add
	fetch
	not_equal
	write_int
str_25. string "\n"
	push_const str_25
	write_string
	push_reg fp
	push_const 1
	add
	fetch
	push_reg fp
	push_const 2
	add
	fetch
	less
	write_int
str_26. string "\n"
	push_const str_26
	write_string
	push_reg fp
	push_const 1
	add
	fetch
	push_reg fp
	push_const 2
	add
	fetch
	greater
	write_int
str_27. string "\n"
	push_const str_27
	write_string
	push_reg fp
	push_const 1
	add
	fetch
	push_reg fp
	push_const 1
	add
	fetch
	less_equal
	write_int
str_28. string "\n"
	push_const str_28
	write_string
	push_reg fp
	push_const 1
	add
	fetch
	push_reg fp
	push_const 1
	add
	fetch
	greater_equal
	write_int
str_29. string "\n"
	push_const str_29
	write_string
str_30. string "\n"
	push_const str_30
	write_string
	push_const 0
	push_const 1
	equal
	push_const 0
	write_int
str_31. string "\n"
	push_const str_31
	write_string
	push_const 0
	push_const 1
	not_equal
	push_const 1
	write_int
str_32. string "\n"
	push_const str_32
	write_string
	push_const 0
	push_const 1
	less
	push_const 1
	write_int
str_33. string "\n"
	push_const str_33
	write_string
	push_const 0
	push_const 1
	greater
	push_const 0
	write_int
str_34. string "\n"
	push_const str_34
	write_string
	push_const 0
	push_const 0
	less_equal
	push_const 1
	write_int
str_35. string "\n"
	push_const str_35
	write_string
	push_const 1
	push_const 1
	greater_equal
	push_const 1
	write_int
str_36. string "\n"
	push_const str_36
	write_string
str_37. string "\n"
	push_const str_37
	write_string
	push_reg fp
	push_const 14
	add
	fetch
	push_reg fp
	push_const 15
	add
	fetch
	equal
	write_int
str_38. string "\n"
	push_const str_38
	write_string
	push_reg fp
	push_const 14
	add
	fetch
	push_reg fp
	push_const 15
	add
	fetch
	not_equal
	write_int
str_39. string "\n"
	push_const str_39
	write_string
	push_reg fp
	push_const 14
	add
	fetch
	push_reg fp
	push_const 16
	add
	fetch
	equal
	write_int
str_40. string "\n"
	push_const str_40
	write_string
	push_reg fp
	push_const 14
	add
	fetch
	push_reg fp
	push_const 16
	add
	fetch
	not_equal
	write_int
str_41. string "\n"
	push_const str_41
	write_string
main_final:
	push_reg fp
	pop_reg sp
	pop_reg fp
	pop_reg pc
main_end:
Lglob. data 1
