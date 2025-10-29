	.align 2
voicegroup209:: @ BW title
	voice_directsound 60, 0, DirectSoundWaveData_glocken_c5_32, 255, 249, 0, 208	@ 127/75/1/116/ 64
	voice_directsound 60, 0, DirectSoundWaveData_tublar_bell_c5_22, 255, 249, 25, 208	@ 127/ 80/ 40/116/ 64
	voice_directsound 60, 0, DirectSoundWaveData_ac_bass_c2_22, 255, 251, 0, 197	@ 127/ 60/  1/118/ 64
	voice_keysplit BW_Strings2, KeySplitTable_int_9_7 + 5
	voice_directsound 60, 0, DirectSoundWaveData_chello_solo_g2_22, 188, 242, 255, 208	@ 120/100/127/116/ 64
	voice_keysplit BW_Akai_Flute_s2, KeySplitTable_2oct + 2
	voice_directsound 60, 0, DirectSoundWaveData_timpani_g3_22, 255, 251, 25, 197	@ 127/ 60/ 40/118/ 64
	voice_keysplit HGSS_Trombone, KeySplitTable_2oct + 29
	voice_keysplit BW_French_Horn_s2, KeySplitTable_2oct + 8
	voice_keysplit HGSS_Oboe_s1, KeySplitTable_2oct + 1
	voice_directsound 60, 0, DirectSoundWaveData_ind_troncs1_32, 255, 197, 227, 208	@ 127/120/120/116/ 64
	voice_keysplit BW_Attack_Trumpet_Section, KeySplitTable_int_9 + 6
	voice_directsound 60, 0, DirectSoundWaveData_pbrasslop_c4_max32, 255, 0, 255, 178	@ 127/127/127/120/ 64
	voice_directsound 60, 0, DirectSoundWaveData_crushroll_32, 255, 0, 255, 237	@ 127/127/127/100/ 64
	voice_keysplit_all BW_Title_Drumset80 - 0xc * 24

	.align 2
BW_Title_Drumset80::
	voice_directsound 48, 64, DirectSoundWaveData_reverse_cym_16, 2, 0, 227, 178	@   3/127/120/120/ 64
	voice_directsound 49, 64, DirectSoundWaveData_reverse_cym_16, 2, 0, 227, 178	@   3/127/120/120/ 64
	voice_directsound 60, 64, DirectSoundWaveData_snareroll_22, 255, 0, 227, 88	@ 127/127/120/124/ 64
	voice_directsound 61, 64, DirectSoundWaveData_snareroll_22, 255, 0, 227, 88	@ 127/127/120/124/ 64
	voice_directsound 62, 64, DirectSoundWaveData_snareroll_22, 255, 0, 227, 88	@ 127/127/120/124/ 64
	voice_directsound 63, 64, DirectSoundWaveData_snareroll_22, 255, 0, 227, 88	@ 127/127/120/124/ 64
	voice_directsound 64, 64, DirectSoundWaveData_snareroll_22, 255, 0, 227, 88	@ 127/127/120/124/ 64
	voice_directsound 65, 64, DirectSoundWaveData_snareroll_22, 255, 0, 227, 88	@ 127/127/120/124/ 64
	voice_directsound 66, 64, DirectSoundWaveData_snareroll_22, 255, 0, 227, 88	@ 127/127/120/124/ 64
	voice_directsound 67, 64, DirectSoundWaveData_snareroll_22, 255, 0, 227, 88	@ 127/127/120/124/ 64
	voice_directsound 68, 64, DirectSoundWaveData_snareroll_22, 255, 0, 227, 88	@ 127/127/120/124/ 64
	voice_directsound 69, 64, DirectSoundWaveData_snareroll_22, 255, 0, 227, 88	@ 127/127/120/124/ 64
	voice_directsound 70, 64, DirectSoundWaveData_snareroll_22, 255, 0, 227, 88	@ 127/127/120/124/ 64
	voice_directsound 71, 64, DirectSoundWaveData_snareroll_22, 255, 0, 227, 88	@ 127/127/120/124/ 64
	voice_directsound 72, 64, DirectSoundWaveData_snareroll_22, 255, 0, 227, 88	@ 127/127/120/124/ 64
	voice_directsound 73, 64, DirectSoundWaveData_snareroll_22, 255, 0, 227, 88	@ 127/127/120/124/ 64
	voice_directsound 74, 64, DirectSoundWaveData_snareroll_22, 255, 0, 227, 88	@ 127/127/120/124/ 64
	voice_directsound 75, 64, DirectSoundWaveData_snareroll_22, 255, 0, 227, 88	@ 127/127/120/124/ 64
	voice_directsound 76, 64, DirectSoundWaveData_snareroll_22, 255, 0, 227, 88	@ 127/127/120/124/ 64
	voice_directsound 77, 64, DirectSoundWaveData_snareroll_22, 255, 0, 227, 88	@ 127/127/120/124/ 64
	voice_directsound 78, 64, DirectSoundWaveData_snareroll_22, 255, 0, 227, 88	@ 127/127/120/124/ 64
	voice_directsound 79, 64, DirectSoundWaveData_snareroll_22, 255, 0, 227, 88	@ 127/127/120/124/ 64
	voice_directsound 80, 64, DirectSoundWaveData_snareroll_22, 255, 0, 227, 88	@ 127/127/120/124/ 64
	voice_directsound 81, 64, DirectSoundWaveData_snareroll_22, 255, 0, 227, 88	@ 127/127/120/124/ 64
	voice_directsound 60, 64, DirectSoundWaveData_cymbal_orch_22, 255, 246, 0, 216	@ 127/ 90/  0/114/ 64
