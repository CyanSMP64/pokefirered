	.align 2
voicegroup215:: @ BW level up
	voice_directsound 60, 0, DirectSoundWaveData_e_piano_wb_c5_22, 255, 251, 0, 208	@ 127/ 60/  1/116/ 64
	voice_keysplit BW_Harp_s1, KeySplitTable_2oct + 5
	voice_directsound 60, 0, DirectSoundWaveData_piccolo_flute_f5_22, 255, 246, 127, 197	@ 127/ 90/ 90/118/ 64
