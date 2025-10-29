	.align 2
voicegroup288:: @ BW n's farewell
	voice_keysplit BW_Grand_Piano_Longer, KeySplitTable_int_0_9_5_7_5_7 + 18
	voice_keysplit HGSS_Strings, KeySplitTable_int_9_9 + 6
	voice_directsound 60, 0, DirectSoundWaveData_timpani_g3_22, 255, 251, 25, 197	@ 127/ 60/ 40/118/ 64
	voice_directsound 60, 0, DirectSoundWaveData_crushroll_32, 255, 0, 255, 237	@ 127/127/127/100/ 64
	voice_keysplit_all BW_NFarewell_Drumset80 - 0xc * 48

	.align 2
BW_NFarewell_Drumset80::
	voice_directsound 60, 64, DirectSoundWaveData_cymbal_orch_22, 255, 246, 0, 216	@ 127/ 90/  0/114/ 64
