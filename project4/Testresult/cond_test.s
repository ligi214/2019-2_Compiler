	push_const EXIT
	push_reg fp
	push_reg sp
	pop_reg fp
	jump main
EXIT:
	exit
main:
	shift_sp 3
main_start:
str_0. string "only-if statement... ans : 1 1\n"
	push_const str_0
	write_string
	push_const 1
	branch_false label_0
	push_const 1
	branch_false label_2
	push_const 1
	write_int
str_1. string "\n"
	push_const str_1
	write_string
label_2:
	push_const 0
	branch_false label_4
	push_const 2
	write_int
str_2. string "\n"
	push_const str_2
	write_string
label_4:
label_0:
	push_const 0
	branch_false label_6
	push_const 1
	branch_false label_8
	push_const 3
	write_int
str_3. string "\n"
	push_const str_3
	write_string
label_8:
	push_const 0
	branch_false label_10
	push_const 4
	write_int
str_4. string "\n"
	push_const str_4
	write_string
label_10:
label_6:
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
	push_reg fp
	push_const 2
	add
	fetch
	branch_false label_12
	push_reg fp
	push_const 2
	add
	fetch
	branch_false label_14
	push_const 1
	write_int
str_5. string "\n"
	push_const str_5
	write_string
label_14:
	push_reg fp
	push_const 1
	add
	fetch
	branch_false label_16
	push_const 2
	write_int
str_6. string "\n"
	push_const str_6
	write_string
label_16:
label_12:
	push_reg fp
	push_const 1
	add
	fetch
	branch_false label_18
	push_reg fp
	push_const 2
	add
	fetch
	branch_false label_20
	push_const 3
	write_int
str_7. string "\nhere"
	push_const str_7
	write_string
str_8. string "\n"
	push_const str_8
	write_string
label_20:
	push_reg fp
	push_const 1
	add
	fetch
	branch_false label_22
	push_const 4
	write_int
str_9. string "\n"
	push_const str_9
	write_string
label_22:
label_18:
str_10. string "if-else statement... ans: 1 4 5 8\n"
	push_const str_10
	write_string
	push_const 1
	branch_false label_24
	push_const 1
	branch_false label_26
	push_const 1
	write_int
str_11. string "\n"
	push_const str_11
	write_string
	jump label_27
label_26:
	push_const 2
	write_int
str_12. string "\n"
	push_const str_12
	write_string
label_27:
	push_const 0
	branch_false label_29
	push_const 3
	write_int
str_13. string "\n"
	push_const str_13
	write_string
	jump label_30
label_29:
	push_const 4
	write_int
str_14. string "\n"
	push_const str_14
	write_string
label_30:
label_24:
	push_const 0
	branch_false label_32
	push_const 1
	branch_false label_34
	push_const 1
	write_int
str_15. string "\n"
	push_const str_15
	write_string
	jump label_35
label_34:
	push_const 2
	write_int
str_16. string "\n"
	push_const str_16
	write_string
label_35:
	push_const 0
	branch_false label_37
	push_const 3
	write_int
str_17. string "\n"
	push_const str_17
	write_string
	jump label_38
label_37:
	push_const 4
	write_int
str_18. string "\n"
	push_const str_18
	write_string
label_38:
	jump label_33
label_32:
	push_const 1
	branch_false label_40
	push_const 5
	write_int
str_19. string "\n"
	push_const str_19
	write_string
	jump label_41
label_40:
	push_const 6
	write_int
str_20. string "\n"
	push_const str_20
	write_string
label_41:
	push_const 0
	branch_false label_43
	push_const 7
	write_int
str_21. string "\n"
	push_const str_21
	write_string
	jump label_44
label_43:
	push_const 8
	write_int
str_22. string "\n"
	push_const str_22
	write_string
label_44:
label_33:
str_23. string "while statement... ans : 10 45 2 1 10 45\n"
	push_const str_23
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
	push_const 0
	assign
	fetch
	shift_sp -1
label_47:
	push_reg fp
	push_const 1
	add
	fetch
	push_const 10
	less
	branch_false label_48
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
	push_const 1
	sub
	shift_sp -1
	jump label_47
label_48:
	push_reg fp
	push_const 1
	add
	fetch
	write_int
str_24. string "\n"
	push_const str_24
	write_string
	push_reg fp
	push_const 2
	add
	fetch
	write_int
str_25. string "\n"
	push_const str_25
	write_string
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
label_49:
	push_reg fp
	push_const 1
	add
	fetch
	push_const 1
	equal
	branch_false label_50
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
	push_const 1
	sub
	shift_sp -1
	jump label_49
label_50:
	push_reg fp
	push_const 1
	add
	fetch
	write_int
str_26. string "\n"
	push_const str_26
	write_string
	push_reg fp
	push_const 2
	add
	fetch
	write_int
str_27. string "\n"
	push_const str_27
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
	push_const 0
	assign
	fetch
	shift_sp -1
label_51:
	push_reg fp
	push_const 1
	add
	fetch
	push_const 10
	not_equal
	branch_false label_52
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
	push_const 1
	sub
	shift_sp -1
	jump label_51
label_52:
	push_reg fp
	push_const 1
	add
	fetch
	write_int
str_28. string "\n"
	push_const str_28
	write_string
	push_reg fp
	push_const 2
	add
	fetch
	write_int
str_29. string "\n"
	push_const str_29
	write_string
str_30. string "while statement w/ b/c... ans : 7 21 70 30\n"
	push_const str_30
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
	push_const 0
	assign
	fetch
	shift_sp -1
label_53:
	push_reg fp
	push_const 1
	add
	fetch
	push_const 10
	less
	branch_false label_54
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
	push_const 1
	sub
	shift_sp -1
	push_reg fp
	push_const 2
	add
	fetch
	push_const 20
	greater
	branch_false label_55
	jump label_54
label_55:
	jump label_53
label_54:
	push_reg fp
	push_const 1
	add
	fetch
	write_int
str_31. string "\n"
	push_const str_31
	write_string
	push_reg fp
	push_const 2
	add
	fetch
	write_int
str_32. string "\n"
	push_const str_32
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
	push_const 0
	assign
	fetch
	shift_sp -1
label_57:
	push_reg fp
	push_const 1
	add
	fetch
	push_const 100
	less_equal
	branch_false label_58
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
	push_const 1
	add
	fetch
	push_const 70
	equal
	branch_false label_59
	jump label_58
label_59:
	push_const 5
	push_reg fp
	push_const 1
	add
	fetch
	greater_equal
	push_reg fp
	push_const 1
	add
	fetch
	push_const 10
	greater_equal
	or
	branch_false label_61
	jump label_57
label_61:
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
	jump label_57
label_58:
	push_reg fp
	push_const 1
	add
	fetch
	write_int
str_33. string "\n"
	push_const str_33
	write_string
	push_reg fp
	push_const 2
	add
	fetch
	write_int
str_34. string "\n"
	push_const str_34
	write_string
str_35. string "double_loop\n"
	push_const str_35
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
	push_const 0
	assign
	fetch
	shift_sp -1
label_63:
	push_reg fp
	push_const 1
	add
	fetch
	push_const 10
	less
	branch_false label_64
	push_reg fp
	push_const 2
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
label_65:
	push_reg fp
	push_const 2
	add
	fetch
	push_const 10
	less
	branch_false label_66
	push_reg fp
	push_const 2
	add
	fetch
	write_int
str_36. string " "
	push_const str_36
	write_string
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
	shift_sp -1
	jump label_65
label_66:
str_37. string "\n"
	push_const str_37
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
	jump label_63
label_64:
main_final:
	push_reg fp
	pop_reg sp
	pop_reg fp
	pop_reg pc
main_end:
Lglob. data 0
