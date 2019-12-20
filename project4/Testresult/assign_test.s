	push_const EXIT
	push_reg fp
	push_reg sp
	pop_reg fp
	jump main
EXIT:
	exit
main:
	shift_sp 342
main_start:
	push_reg fp
	push_const 10
	add
	push_reg sp
	fetch
	push_reg fp
	push_const 2
	add
	assign
	fetch
	shift_sp -1
	push_reg fp
	push_const 2
	add
	push_reg sp
	fetch
	push_const 10
	assign
	fetch
	shift_sp -1
	push_reg fp
	push_const 2
	add
	push_const 1
	add
	push_reg sp
	fetch
	push_const 20
	assign
	fetch
	shift_sp -1
	push_reg fp
	push_const 10
	add
	fetch
	push_const 2
	add
	push_reg sp
	fetch
	push_const 65
	assign
	fetch
	shift_sp -1
	push_reg fp
	push_const 10
	add
	fetch
	push_const 3
	add
	push_reg sp
	fetch
	push_reg fp
	push_const 10
	add
	fetch
	push_const 0
	add
	assign
	fetch
	shift_sp -1
str_0. string "simple assignments... ans : 10 20 A 10\n"
	push_const str_0
	write_string
	push_reg fp
	push_const 2
	add
	fetch
	write_int
str_1. string "\n"
	push_const str_1
	write_string
	push_reg fp
	push_const 2
	add
	push_const 1
	add
	fetch
	write_int
str_2. string "\n"
	push_const str_2
	write_string
	push_reg fp
	push_const 2
	add
	push_const 2
	add
	fetch
	write_char
str_3. string "\n"
	push_const str_3
	write_string
	push_reg fp
	push_const 2
	add
	push_const 3
	add
	fetch
	fetch
	write_int
str_4. string "\n"
	push_const str_4
	write_string
str_5. string "\n"
	push_const str_5
	write_string
str_6. string "simple struct assignment... ans : 10 20 A 10\n"
	push_const str_6
	write_string
	push_const Lglob+0
	push_reg sp
	fetch
	push_reg fp
	push_const 2
	add
	fetch
	push_reg fp
	push_const 3
	add
	fetch
	push_reg fp
	push_const 4
	add
	fetch
	push_reg fp
	push_const 5
	add
	fetch
	push_reg sp
	push_const -5
	add
	fetch
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
	shift_sp -4
	push_const Lglob+0
	fetch
	write_int
str_7. string "\n"
	push_const str_7
	write_string
	push_const Lglob+0
	push_const 1
	add
	fetch
	write_int
str_8. string "\n"
	push_const str_8
	write_string
	push_const Lglob+0
	push_const 2
	add
	fetch
	write_char
str_9. string "\n"
	push_const str_9
	write_string
	push_const Lglob+0
	push_const 3
	add
	fetch
	fetch
	write_int
str_10. string "\n"
	push_const str_10
	write_string
str_11. string "\n"
	push_const str_11
	write_string
	push_reg fp
	push_const 6
	add
	push_reg sp
	fetch
	push_reg fp
	push_const 2
	add
	fetch
	push_reg fp
	push_const 3
	add
	fetch
	push_reg fp
	push_const 4
	add
	fetch
	push_reg fp
	push_const 5
	add
	fetch
	push_reg sp
	push_const -5
	add
	fetch
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
	shift_sp -4
	push_reg fp
	push_const 6
	add
	fetch
	write_int
str_12. string "\n"
	push_const str_12
	write_string
	push_reg fp
	push_const 6
	add
	push_const 1
	add
	fetch
	write_int
str_13. string "\n"
	push_const str_13
	write_string
	push_reg fp
	push_const 6
	add
	push_const 2
	add
	fetch
	write_char
str_14. string "\n"
	push_const str_14
	write_string
	push_reg fp
	push_const 6
	add
	push_const 3
	add
	fetch
	fetch
	write_int
str_15. string "\n"
	push_const str_15
	write_string
str_16. string "\n"
	push_const str_16
	write_string
	push_reg fp
	push_const 6
	add
	push_reg sp
	fetch
	push_reg fp
	push_const 10
	add
	fetch
	fetch
	push_reg fp
	push_const 3
	add
	fetch
	push_reg fp
	push_const 4
	add
	fetch
	push_reg fp
	push_const 5
	add
	fetch
	push_reg sp
	push_const -5
	add
	fetch
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
	shift_sp -4
	push_reg fp
	push_const 6
	add
	fetch
	write_int
str_17. string "\n"
	push_const str_17
	write_string
	push_reg fp
	push_const 6
	add
	push_const 1
	add
	fetch
	write_int
str_18. string "\n"
	push_const str_18
	write_string
	push_reg fp
	push_const 6
	add
	push_const 2
	add
	fetch
	write_char
str_19. string "\n"
	push_const str_19
	write_string
	push_reg fp
	push_const 6
	add
	push_const 3
	add
	fetch
	fetch
	write_int
str_20. string "\n"
	push_const str_20
	write_string
str_21. string "\n"
	push_const str_21
	write_string
str_22. string "array in struct... ans : 0 1 ... 9 10 20 \n"
	push_const str_22
	write_string
	push_reg fp
	push_const 11
	add
	push_reg sp
	fetch
	push_const 10
	assign
	fetch
	shift_sp -1
	push_reg fp
	push_const 11
	add
	push_const 11
	add
	push_reg sp
	fetch
	push_const 20
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
	push_const 11
	add
	push_const 1
	add
	push_reg fp
	push_const 1
	add
	fetch
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
	jump label_2
label_4:
	push_reg fp
	push_const 23
	add
	push_reg sp
	fetch
	push_reg fp
	push_const 11
	add
	fetch
	push_reg fp
	push_const 12
	add
	fetch
	push_reg fp
	push_const 13
	add
	fetch
	push_reg fp
	push_const 14
	add
	fetch
	push_reg fp
	push_const 15
	add
	fetch
	push_reg fp
	push_const 16
	add
	fetch
	push_reg fp
	push_const 17
	add
	fetch
	push_reg fp
	push_const 18
	add
	fetch
	push_reg fp
	push_const 19
	add
	fetch
	push_reg fp
	push_const 20
	add
	fetch
	push_reg fp
	push_const 21
	add
	fetch
	push_reg fp
	push_const 22
	add
	fetch
	push_reg sp
	push_const -13
	add
	fetch
	push_reg sp
	fetch
	push_reg sp
	push_const -1
	add
	push_const -12
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
	push_const -11
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
	push_const -10
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
	push_const -9
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
	push_const -8
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
	push_const -7
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
	shift_sp -12
label_5:
	push_reg fp
	push_const 1
	add
	push_reg sp
	fetch
	push_const 0
	assign
	fetch
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
	jump label_6
label_8:
	push_reg fp
	push_const 23
	add
	push_const 1
	add
	push_reg fp
	push_const 1
	add
	fetch
	add
	fetch
	write_int
str_23. string "\n"
	push_const str_23
	write_string
	jump label_7
label_9:
	push_reg fp
	push_const 23
	add
	fetch
	write_int
str_24. string "\n"
	push_const str_24
	write_string
	push_reg fp
	push_const 23
	add
	push_const 11
	add
	fetch
	write_int
str_25. string "\n"
	push_const str_25
	write_string
str_26. string "struct in struct... ans : 1 2 10 11 ... 19 100 101 ... 109 \n"
	push_const str_26
	write_string
	push_reg fp
	push_const 35
	add
	push_reg sp
	fetch
	push_const 1
	assign
	fetch
	shift_sp -1
	push_reg fp
	push_const 35
	add
	push_const 143
	add
	push_const 9
	add
	push_reg sp
	fetch
	push_const 2
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
	push_reg fp
	push_const 1
	add
	fetch
	push_const 10
	less
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
	push_const 35
	add
	push_const 11
	add
	push_const 1
	add
	push_reg fp
	push_const 1
	add
	fetch
	add
	push_reg sp
	fetch
	push_const 10
	push_reg fp
	push_const 1
	add
	fetch
	add
	assign
	fetch
	shift_sp -1
	push_reg fp
	push_const 35
	add
	push_const 23
	add
	push_const 5
	push_const 12
	mul
	add
	push_const 1
	add
	push_reg fp
	push_const 1
	add
	fetch
	add
	push_reg sp
	fetch
	push_const 100
	push_reg fp
	push_const 1
	add
	fetch
	add
	assign
	fetch
	shift_sp -1
	jump label_12
label_14:
	push_reg fp
	push_const 189
	add
	push_reg sp
	fetch
	push_reg fp
	push_const 35
	add
	fetch
	push_reg fp
	push_const 36
	add
	fetch
	push_reg fp
	push_const 37
	add
	fetch
	push_reg fp
	push_const 38
	add
	fetch
	push_reg fp
	push_const 39
	add
	fetch
	push_reg fp
	push_const 40
	add
	fetch
	push_reg fp
	push_const 41
	add
	fetch
	push_reg fp
	push_const 42
	add
	fetch
	push_reg fp
	push_const 43
	add
	fetch
	push_reg fp
	push_const 44
	add
	fetch
	push_reg fp
	push_const 45
	add
	fetch
	push_reg fp
	push_const 46
	add
	fetch
	push_reg fp
	push_const 47
	add
	fetch
	push_reg fp
	push_const 48
	add
	fetch
	push_reg fp
	push_const 49
	add
	fetch
	push_reg fp
	push_const 50
	add
	fetch
	push_reg fp
	push_const 51
	add
	fetch
	push_reg fp
	push_const 52
	add
	fetch
	push_reg fp
	push_const 53
	add
	fetch
	push_reg fp
	push_const 54
	add
	fetch
	push_reg fp
	push_const 55
	add
	fetch
	push_reg fp
	push_const 56
	add
	fetch
	push_reg fp
	push_const 57
	add
	fetch
	push_reg fp
	push_const 58
	add
	fetch
	push_reg fp
	push_const 59
	add
	fetch
	push_reg fp
	push_const 60
	add
	fetch
	push_reg fp
	push_const 61
	add
	fetch
	push_reg fp
	push_const 62
	add
	fetch
	push_reg fp
	push_const 63
	add
	fetch
	push_reg fp
	push_const 64
	add
	fetch
	push_reg fp
	push_const 65
	add
	fetch
	push_reg fp
	push_const 66
	add
	fetch
	push_reg fp
	push_const 67
	add
	fetch
	push_reg fp
	push_const 68
	add
	fetch
	push_reg fp
	push_const 69
	add
	fetch
	push_reg fp
	push_const 70
	add
	fetch
	push_reg fp
	push_const 71
	add
	fetch
	push_reg fp
	push_const 72
	add
	fetch
	push_reg fp
	push_const 73
	add
	fetch
	push_reg fp
	push_const 74
	add
	fetch
	push_reg fp
	push_const 75
	add
	fetch
	push_reg fp
	push_const 76
	add
	fetch
	push_reg fp
	push_const 77
	add
	fetch
	push_reg fp
	push_const 78
	add
	fetch
	push_reg fp
	push_const 79
	add
	fetch
	push_reg fp
	push_const 80
	add
	fetch
	push_reg fp
	push_const 81
	add
	fetch
	push_reg fp
	push_const 82
	add
	fetch
	push_reg fp
	push_const 83
	add
	fetch
	push_reg fp
	push_const 84
	add
	fetch
	push_reg fp
	push_const 85
	add
	fetch
	push_reg fp
	push_const 86
	add
	fetch
	push_reg fp
	push_const 87
	add
	fetch
	push_reg fp
	push_const 88
	add
	fetch
	push_reg fp
	push_const 89
	add
	fetch
	push_reg fp
	push_const 90
	add
	fetch
	push_reg fp
	push_const 91
	add
	fetch
	push_reg fp
	push_const 92
	add
	fetch
	push_reg fp
	push_const 93
	add
	fetch
	push_reg fp
	push_const 94
	add
	fetch
	push_reg fp
	push_const 95
	add
	fetch
	push_reg fp
	push_const 96
	add
	fetch
	push_reg fp
	push_const 97
	add
	fetch
	push_reg fp
	push_const 98
	add
	fetch
	push_reg fp
	push_const 99
	add
	fetch
	push_reg fp
	push_const 100
	add
	fetch
	push_reg fp
	push_const 101
	add
	fetch
	push_reg fp
	push_const 102
	add
	fetch
	push_reg fp
	push_const 103
	add
	fetch
	push_reg fp
	push_const 104
	add
	fetch
	push_reg fp
	push_const 105
	add
	fetch
	push_reg fp
	push_const 106
	add
	fetch
	push_reg fp
	push_const 107
	add
	fetch
	push_reg fp
	push_const 108
	add
	fetch
	push_reg fp
	push_const 109
	add
	fetch
	push_reg fp
	push_const 110
	add
	fetch
	push_reg fp
	push_const 111
	add
	fetch
	push_reg fp
	push_const 112
	add
	fetch
	push_reg fp
	push_const 113
	add
	fetch
	push_reg fp
	push_const 114
	add
	fetch
	push_reg fp
	push_const 115
	add
	fetch
	push_reg fp
	push_const 116
	add
	fetch
	push_reg fp
	push_const 117
	add
	fetch
	push_reg fp
	push_const 118
	add
	fetch
	push_reg fp
	push_const 119
	add
	fetch
	push_reg fp
	push_const 120
	add
	fetch
	push_reg fp
	push_const 121
	add
	fetch
	push_reg fp
	push_const 122
	add
	fetch
	push_reg fp
	push_const 123
	add
	fetch
	push_reg fp
	push_const 124
	add
	fetch
	push_reg fp
	push_const 125
	add
	fetch
	push_reg fp
	push_const 126
	add
	fetch
	push_reg fp
	push_const 127
	add
	fetch
	push_reg fp
	push_const 128
	add
	fetch
	push_reg fp
	push_const 129
	add
	fetch
	push_reg fp
	push_const 130
	add
	fetch
	push_reg fp
	push_const 131
	add
	fetch
	push_reg fp
	push_const 132
	add
	fetch
	push_reg fp
	push_const 133
	add
	fetch
	push_reg fp
	push_const 134
	add
	fetch
	push_reg fp
	push_const 135
	add
	fetch
	push_reg fp
	push_const 136
	add
	fetch
	push_reg fp
	push_const 137
	add
	fetch
	push_reg fp
	push_const 138
	add
	fetch
	push_reg fp
	push_const 139
	add
	fetch
	push_reg fp
	push_const 140
	add
	fetch
	push_reg fp
	push_const 141
	add
	fetch
	push_reg fp
	push_const 142
	add
	fetch
	push_reg fp
	push_const 143
	add
	fetch
	push_reg fp
	push_const 144
	add
	fetch
	push_reg fp
	push_const 145
	add
	fetch
	push_reg fp
	push_const 146
	add
	fetch
	push_reg fp
	push_const 147
	add
	fetch
	push_reg fp
	push_const 148
	add
	fetch
	push_reg fp
	push_const 149
	add
	fetch
	push_reg fp
	push_const 150
	add
	fetch
	push_reg fp
	push_const 151
	add
	fetch
	push_reg fp
	push_const 152
	add
	fetch
	push_reg fp
	push_const 153
	add
	fetch
	push_reg fp
	push_const 154
	add
	fetch
	push_reg fp
	push_const 155
	add
	fetch
	push_reg fp
	push_const 156
	add
	fetch
	push_reg fp
	push_const 157
	add
	fetch
	push_reg fp
	push_const 158
	add
	fetch
	push_reg fp
	push_const 159
	add
	fetch
	push_reg fp
	push_const 160
	add
	fetch
	push_reg fp
	push_const 161
	add
	fetch
	push_reg fp
	push_const 162
	add
	fetch
	push_reg fp
	push_const 163
	add
	fetch
	push_reg fp
	push_const 164
	add
	fetch
	push_reg fp
	push_const 165
	add
	fetch
	push_reg fp
	push_const 166
	add
	fetch
	push_reg fp
	push_const 167
	add
	fetch
	push_reg fp
	push_const 168
	add
	fetch
	push_reg fp
	push_const 169
	add
	fetch
	push_reg fp
	push_const 170
	add
	fetch
	push_reg fp
	push_const 171
	add
	fetch
	push_reg fp
	push_const 172
	add
	fetch
	push_reg fp
	push_const 173
	add
	fetch
	push_reg fp
	push_const 174
	add
	fetch
	push_reg fp
	push_const 175
	add
	fetch
	push_reg fp
	push_const 176
	add
	fetch
	push_reg fp
	push_const 177
	add
	fetch
	push_reg fp
	push_const 178
	add
	fetch
	push_reg fp
	push_const 179
	add
	fetch
	push_reg fp
	push_const 180
	add
	fetch
	push_reg fp
	push_const 181
	add
	fetch
	push_reg fp
	push_const 182
	add
	fetch
	push_reg fp
	push_const 183
	add
	fetch
	push_reg fp
	push_const 184
	add
	fetch
	push_reg fp
	push_const 185
	add
	fetch
	push_reg fp
	push_const 186
	add
	fetch
	push_reg fp
	push_const 187
	add
	fetch
	push_reg fp
	push_const 188
	add
	fetch
	push_reg sp
	push_const -155
	add
	fetch
	push_reg sp
	fetch
	push_reg sp
	push_const -1
	add
	push_const -154
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
	push_const -153
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
	push_const -152
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
	push_const -151
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
	push_const -150
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
	push_const -149
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
	push_const -148
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
	push_const -147
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
	push_const -146
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
	push_const -145
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
	push_const -144
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
	push_const -143
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
	push_const -142
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
	push_const -141
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
	push_const -140
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
	push_const -139
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
	push_const -138
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
	push_const -137
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
	push_const -136
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
	push_const -135
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
	push_const -134
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
	push_const -133
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
	push_const -132
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
	push_const -131
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
	push_const -130
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
	push_const -129
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
	push_const -128
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
	push_const -127
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
	push_const -126
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
	push_const -125
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
	push_const -124
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
	push_const -123
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
	push_const -122
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
	push_const -121
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
	push_const -120
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
	push_const -119
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
	push_const -118
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
	push_const -117
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
	push_const -116
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
	push_const -115
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
	push_const -114
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
	push_const -113
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
	push_const -112
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
	push_const -111
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
	push_const -110
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
	push_const -109
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
	push_const -108
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
	push_const -107
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
	push_const -106
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
	push_const -105
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
	push_const -104
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
	push_const -103
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
	push_const -102
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
	push_const -101
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
	push_const -100
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
	push_const -99
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
	push_const -98
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
	push_const -97
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
	push_const -96
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
	push_const -95
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
	push_const -94
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
	push_const -93
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
	push_const -92
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
	push_const -91
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
	push_const -90
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
	push_const -89
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
	push_const -88
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
	push_const -87
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
	push_const -86
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
	push_const -85
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
	push_const -84
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
	push_const -83
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
	push_const -82
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
	push_const -81
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
	push_const -80
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
	push_const -79
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
	push_const -78
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
	push_const -77
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
	push_const -76
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
	push_const -75
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
	push_const -74
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
	push_const -73
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
	push_const -72
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
	push_const -71
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
	push_const -70
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
	push_const -69
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
	push_const -68
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
	push_const -67
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
	push_const -66
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
	push_const -65
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
	push_const -64
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
	push_const -63
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
	push_const -62
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
	push_const -61
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
	push_const -60
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
	push_const -59
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
	push_const -58
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
	push_const -57
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
	push_const -56
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
	push_const -55
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
	push_const -54
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
	push_const -53
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
	push_const -52
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
	push_const -51
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
	push_const -50
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
	push_const -49
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
	push_const -48
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
	push_const -47
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
	push_const -46
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
	push_const -45
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
	push_const -44
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
	push_const -43
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
	push_const -42
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
	push_const -41
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
	push_const -40
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
	push_const -39
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
	push_const -38
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
	push_const -37
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
	push_const -36
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
	push_const -35
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
	push_const -34
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
	push_const -33
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
	push_const -32
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
	push_const -31
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
	push_const -30
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
	push_const -29
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
	push_const -28
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
	push_const -27
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
	push_const -26
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
	push_const -25
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
	push_const -24
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
	push_const -23
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
	push_const -22
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
	push_const -21
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
	push_const -20
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
	push_const -19
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
	push_const -18
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
	push_const -17
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
	push_const -16
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
	push_const -15
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
	push_const -14
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
	push_const -13
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
	push_const -12
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
	push_const -11
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
	push_const -10
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
	push_const -9
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
	push_const -8
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
	push_const -7
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
	shift_sp -154
	push_reg fp
	push_const 189
	add
	fetch
	write_int
str_27. string "\n"
	push_const str_27
	write_string
	push_reg fp
	push_const 189
	add
	push_const 143
	add
	push_const 9
	add
	fetch
	write_int
str_28. string "\n"
	push_const str_28
	write_string
label_15:
	push_reg fp
	push_const 1
	add
	push_reg sp
	fetch
	push_const 0
	assign
	fetch
label_16:
	push_reg fp
	push_const 1
	add
	fetch
	push_const 10
	less
	branch_false label_19
	jump label_18
label_17:
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
	jump label_16
label_18:
	push_reg fp
	push_const 189
	add
	push_const 11
	add
	push_const 1
	add
	push_reg fp
	push_const 1
	add
	fetch
	add
	fetch
	write_int
str_29. string "\n"
	push_const str_29
	write_string
	jump label_17
label_19:
label_20:
	push_reg fp
	push_const 1
	add
	push_reg sp
	fetch
	push_const 0
	assign
	fetch
label_21:
	push_reg fp
	push_const 1
	add
	fetch
	push_const 10
	less
	branch_false label_24
	jump label_23
label_22:
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
	jump label_21
label_23:
	push_reg fp
	push_const 189
	add
	push_const 23
	add
	push_const 5
	push_const 12
	mul
	add
	push_const 1
	add
	push_reg fp
	push_const 1
	add
	fetch
	add
	fetch
	write_int
str_30. string "\n"
	push_const str_30
	write_string
	jump label_22
label_24:
main_final:
	push_reg fp
	pop_reg sp
	pop_reg fp
	pop_reg pc
main_end:
Lglob. data 4
