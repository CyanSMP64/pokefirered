	.align 2
voicegroup262:: @ BW cold storage
	voice_keysplit BW_Electric_Piano_Short, KeySplitTable_2oct + 22
	voice_keysplit HGSS_Tubular_Bell, KeySplitTable_2oct + 6
	voice_keysplit BW_Electric_Guitar_Solo, KeySplitTable_int_8_10 + 19
	voice_keysplit_all BW_ColdStorage_Drumset80 - 0xc * 32
	voice_directsound 60, 0, DirectSoundSynthData_squ50, 255, 242, 25, 0	@ 126/100/ 40/127/ 64

	.align 2
BW_ColdStorage_Drumset80::
	voice_directsound 60, 64, DirectSoundWaveData_snare4_trinity_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 60, 64, DirectSoundWaveData_bassdr1_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 60, 64, DirectSoundWaveData_bassdr2_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 61, 64, DirectSoundWaveData_bassdr2_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 62, 64, DirectSoundWaveData_bassdr2_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 63, 64, DirectSoundWaveData_bassdr2_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 64, 64, DirectSoundWaveData_bassdr2_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 65, 64, DirectSoundWaveData_bassdr2_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 66, 64, DirectSoundWaveData_bassdr2_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 67, 64, DirectSoundWaveData_bassdr2_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 68, 64, DirectSoundWaveData_bassdr2_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 69, 64, DirectSoundWaveData_bassdr2_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 70, 64, DirectSoundWaveData_bassdr2_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 71, 64, DirectSoundWaveData_bassdr2_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 72, 64, DirectSoundWaveData_bassdr2_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 73, 64, DirectSoundWaveData_bassdr2_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 74, 64, DirectSoundWaveData_bassdr2_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 75, 64, DirectSoundWaveData_bassdr2_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 76, 64, DirectSoundWaveData_bassdr2_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 77, 64, DirectSoundWaveData_bassdr2_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 60, 20, DirectSoundWaveData_chinese_cym_22, 255, 250, 0, 225	@ 127/ 70/  0/110/ 20
	voice_directsound 61, 20, DirectSoundWaveData_chinese_cym_22, 255, 250, 0, 225	@ 127/ 70/  0/110/ 20
	voice_directsound 62, 20, DirectSoundWaveData_chinese_cym_22, 255, 250, 0, 225	@ 127/ 70/  0/110/ 20
	voice_directsound 63, 20, DirectSoundWaveData_chinese_cym_22, 255, 250, 0, 225	@ 127/ 70/  0/110/ 20
	voice_directsound 64, 20, DirectSoundWaveData_chinese_cym_22, 255, 250, 0, 225	@ 127/ 70/  0/110/ 20
	voice_directsound 65, 20, DirectSoundWaveData_chinese_cym_22, 255, 250, 0, 225	@ 127/ 70/  0/110/ 20
	voice_directsound 66, 20, DirectSoundWaveData_chinese_cym_22, 255, 250, 0, 225	@ 127/ 70/  0/110/ 20
	voice_directsound 67, 20, DirectSoundWaveData_chinese_cym_22, 255, 250, 0, 225	@ 127/ 70/  0/110/ 20
	voice_directsound 68, 20, DirectSoundWaveData_chinese_cym_22, 255, 250, 0, 225	@ 127/ 70/  0/110/ 20
	voice_directsound 69, 20, DirectSoundWaveData_chinese_cym_22, 255, 250, 0, 225	@ 127/ 70/  0/110/ 20
	voice_directsound 70, 20, DirectSoundWaveData_chinese_cym_22, 255, 250, 0, 225	@ 127/ 70/  0/110/ 20
	voice_directsound 71, 20, DirectSoundWaveData_chinese_cym_22, 255, 250, 0, 225	@ 127/ 70/  0/110/ 20
	voice_directsound 72, 20, DirectSoundWaveData_chinese_cym_22, 255, 250, 0, 225	@ 127/ 70/  0/110/ 20
	voice_directsound 73, 20, DirectSoundWaveData_chinese_cym_22, 255, 250, 0, 225	@ 127/ 70/  0/110/ 20
	voice_directsound 74, 20, DirectSoundWaveData_chinese_cym_22, 255, 250, 0, 225	@ 127/ 70/  0/110/ 20
	voice_directsound 75, 20, DirectSoundWaveData_chinese_cym_22, 255, 250, 0, 225	@ 127/ 70/  0/110/ 20
	voice_directsound 76, 20, DirectSoundWaveData_chinese_cym_22, 255, 250, 0, 225	@ 127/ 70/  0/110/ 20
	voice_directsound 77, 20, DirectSoundWaveData_chinese_cym_22, 255, 250, 0, 225	@ 127/ 70/  0/110/ 20
	voice_directsound 78, 20, DirectSoundWaveData_chinese_cym_22, 255, 250, 0, 225	@ 127/ 70/  0/110/ 20
	voice_directsound 79, 20, DirectSoundWaveData_chinese_cym_22, 255, 250, 0, 225	@ 127/ 70/  0/110/ 20
	voice_directsound 80, 20, DirectSoundWaveData_chinese_cym_22, 255, 250, 0, 225	@ 127/ 70/  0/110/ 20
	voice_directsound 81, 20, DirectSoundWaveData_chinese_cym_22, 255, 250, 0, 225	@ 127/ 70/  0/110/ 20
	voice_directsound 82, 20, DirectSoundWaveData_chinese_cym_22, 255, 250, 0, 225	@ 127/ 70/  0/110/ 20
	voice_directsound 83, 20, DirectSoundWaveData_chinese_cym_22, 255, 250, 0, 225	@ 127/ 70/  0/110/ 20
	voice_directsound 84, 20, DirectSoundWaveData_chinese_cym_22, 255, 250, 0, 225	@ 127/ 70/  0/110/ 20
	voice_directsound 85, 20, DirectSoundWaveData_chinese_cym_22, 255, 250, 0, 225	@ 127/ 70/  0/110/ 20
	voice_directsound 86, 20, DirectSoundWaveData_chinese_cym_22, 255, 250, 0, 225	@ 127/ 70/  0/110/ 20
	voice_directsound 87, 20, DirectSoundWaveData_chinese_cym_22, 255, 250, 0, 225	@ 127/ 70/  0/110/ 20
	voice_directsound 88, 20, DirectSoundWaveData_chinese_cym_22, 255, 250, 0, 225	@ 127/ 70/  0/110/ 20
	voice_directsound 89, 20, DirectSoundWaveData_chinese_cym_22, 255, 250, 0, 225	@ 127/ 70/  0/110/ 20
	voice_directsound 90, 20, DirectSoundWaveData_chinese_cym_22, 255, 250, 0, 225	@ 127/ 70/  0/110/ 20
	voice_directsound 91, 20, DirectSoundWaveData_chinese_cym_22, 255, 250, 0, 225	@ 127/ 70/  0/110/ 20
	voice_directsound 60, 32, DirectSoundWaveData_triangle_close_32, 255, 233, 191, 208	@ 127/110/110/116/ 32
	voice_directsound 60, 32, DirectSoundWaveData_triangle_open_32, 255, 233, 191, 208	@ 127/110/110/116/ 32
