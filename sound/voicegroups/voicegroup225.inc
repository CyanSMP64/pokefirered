	.align 2
voicegroup225:: @ BW dex rating 2 fanfare
	voice_keysplit BW_Marimba_s1, KeySplitTable_2oct + 10
	voice_keysplit HGSS_Xylophone, KeySplitTable_int_9 + 6
	voice_directsound 60, 0, DirectSoundWaveData_ac_bass_c2_22, 255, 251, 0, 197	@ 127/ 60/  1/118/ 64
	voice_keysplit HGSS_Pizzicato_Strings_s1, KeySplitTable_int_8_9 + 14
