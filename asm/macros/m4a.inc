	.macro song label, music_player, volume, speed
	.4byte \label
	.byte \music_player
	.byte \volume
	.2byte \speed
	.endm

	.macro music_player info_struct, track_struct, unknown_1, unknown_2
	.4byte \info_struct
	.4byte \track_struct
	.byte \unknown_1
	.space 1
	.2byte \unknown_2
	.endm
