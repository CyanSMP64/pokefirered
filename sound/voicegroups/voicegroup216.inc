	.align 2
voicegroup216:: @ BW egg fanfare
	voice_keysplit HGSS_Vibraphone, KeySplitTable_2oct + 10
	voice_keysplit BW_Marimba, KeySplitTable_3oct + 16
	voice_directsound 60, 0, DirectSoundWaveData_ac_bass_c2_22, 255, 251, 0, 197	@ 127/ 60/  1/118/ 64
	voice_keysplit HGSS_Pizzicato_Strings_s2, KeySplitTable_int_9 + 6
