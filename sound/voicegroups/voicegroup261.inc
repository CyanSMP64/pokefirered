	.align 2
voicegroup261:: @ BW chargestone cave
	voice_keysplit BW_Electric_Piano, KeySplitTable_2oct + 22
	voice_keysplit HGSS_Vibraphone_s1, KeySplitTable_2oct - 2
	voice_keysplit HGSS_Strings, KeySplitTable_int_9_9 + 6
	voice_directsound 60, 0, DirectSoundWaveData_chello_solo_g2_22, 188, 242, 255, 208	@ 120/100/127/116/ 64
	voice_keysplit HGSS_Pizzicato_Strings_s2, KeySplitTable_int_9 + 6
	voice_directsound 60, 0, DirectSoundWaveData_timpani_g3_22, 255, 251, 25, 197	@ 127/ 60/ 40/118/ 64
	voice_keysplit HGSS_French_Horn, KeySplitTable_int_1_9 + 19
	voice_keysplit HGSS_Clarinet, KeySplitTable_int_9 + 11
	voice_directsound 60, 0, DirectSoundWaveData_crushroll_32, 255, 0, 255, 237	@ 127/127/127/100/ 64
	voice_keysplit_all BW_ChargestoneCave_Drumset80 - 0xc * 76

	.align 2
BW_ChargestoneCave_Drumset80::
	voice_directsound 60, 25, DirectSoundWaveData_shaker_btry_gm_32, 255, 233, 127, 208	@ 127/110/ 90/116/ 25
