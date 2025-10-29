	.align 2
voicegroup256:: @ BW scientist encounter
	voice_keysplit BW_Grand_Piano_s1, KeySplitTable_int_7_5_7_5_7 + 13
	voice_directsound 60, 0, DirectSoundWaveData_vibraphone_c5_22, 255, 246, 0, 208	@ 127/ 90/  1/116/ 64
	voice_keysplit HGSS_Pizzicato_Strings, KeySplitTable_int_9_8 + 23
	voice_keysplit BW_Choirs_Male_s1, KeySplitTable_2oct + 14
