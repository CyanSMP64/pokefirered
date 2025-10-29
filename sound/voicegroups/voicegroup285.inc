	.align 2
voicegroup285:: @ BW victory road
	voice_keysplit HGSS_Tubular_Bell, KeySplitTable_2oct + 6
	voice_keysplit BW_Strings2, KeySplitTable_int_9_7 + 5
	voice_keysplit HGSS_Solo_Cello, KeySplitTable_2oct + 29
	voice_keysplit HGSS_Pizzicato_Strings_s1, KeySplitTable_int_8_9 + 14
	voice_keysplit HGSS_Timpani, KeySplitTable_2oct + 22
	voice_keysplit BW_French_Horn, KeySplitTable_int_8_9 + 19
	voice_keysplit BW_Tuba_Decay, KeySplitTable_2oct + 34
	voice_keysplit_all BW_VictoryRoad_Drumset80 - 0xc * 38

	.align 2
BW_VictoryRoad_Drumset80::
	voice_directsound 60, 64, DirectSoundWaveData_snare_btry_gm_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
