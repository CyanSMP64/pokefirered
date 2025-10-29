	.align 2
voicegroup241:: @ BW gate
	voice_keysplit BW_Grand_Piano_s3, KeySplitTable_int_7_5_7 + 1
	voice_keysplit BW_Electric_Piano_Short, KeySplitTable_2oct + 22
	voice_keysplit BW_Electric_Bass, KeySplitTable_int_7_5 + 37
	voice_keysplit HGSS_Strings, KeySplitTable_int_9_9 + 6
	voice_keysplit_all BW_Gate_Drumset80 - 0xc * 33

	.align 2
BW_Gate_Drumset80::
	voice_directsound 60, 64, DirectSoundWaveData_bassdr1_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 61, 64, DirectSoundWaveData_bassdr1_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 62, 64, DirectSoundWaveData_bassdr1_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 63, 64, DirectSoundWaveData_bassdr1_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 60, 58, DirectSoundWaveData_rimshot_btry_gm_32, 255, 0, 227, 208	@ 127/127/120/116/ 58
	voice_directsound 61, 58, DirectSoundWaveData_rimshot_btry_gm_32, 255, 0, 227, 208	@ 127/127/120/116/ 58
	voice_directsound 62, 58, DirectSoundWaveData_rimshot_btry_gm_32, 255, 0, 227, 208	@ 127/127/120/116/ 58
	voice_directsound 63, 58, DirectSoundWaveData_rimshot_btry_gm_32, 255, 0, 227, 208	@ 127/127/120/116/ 58
	voice_directsound 64, 58, DirectSoundWaveData_rimshot_btry_gm_32, 255, 0, 227, 208	@ 127/127/120/116/ 58
	voice_directsound 60, 80, DirectSoundWaveData_hihat_closed_22, 255, 112, 0, 208	@ 127/124/  0/116/ 80
	voice_directsound 61, 80, DirectSoundWaveData_hihat_closed_22, 255, 112, 0, 208	@ 127/124/  0/116/ 80
	voice_directsound 62, 80, DirectSoundWaveData_hihat_closed_22, 255, 112, 0, 208	@ 127/124/  0/116/ 80
	voice_directsound 63, 80, DirectSoundWaveData_hihat_closed_22, 255, 112, 0, 208	@ 127/124/  0/116/ 80
	voice_directsound 60, 80, DirectSoundWaveData_hihat_open_22, 255, 241, 0, 178	@ 127/102/  0/120/ 80
