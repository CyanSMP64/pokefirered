	.align 2
voicegroup266:: @ BW ghetsis battle
	voice_directsound 60, 0, DirectSoundWaveData_harp_c4_22, 255, 246, 0, 208	@ 127/ 90/  1/116/ 64
	voice_keysplit BW_Timpani_Ghetsis, KeySplitTable_3oct + 31
	voice_keysplit BW_Attack_Trumpet_Section, KeySplitTable_2oct + 12
	voice_keysplit HGSS_Trombone, KeySplitTable_2oct + 29
	voice_keysplit BW_Choirs_Male_s1, KeySplitTable_int_7 + 8
	voice_directsound 60, 0, DirectSoundWaveData_breth_noiselopp_cs4_32, 255, 251, 0, 178	@ 127/ 60/  1/120/ 64
	voice_directsound 60, 0, DirectSoundWaveData_g_cis_musboxl_cs4_32, 255, 249, 0, 208	@ 127/ 80/  1/116/ 64
	voice_directsound 60, 0, DirectSoundWaveData_g_cis_l_taiko_g3_32, 255, 249, 0, 208	@ 127/ 80/  1/116/ 64
	voice_directsound 60, 0, DirectSoundWaveData_g_cis_taiko_c1_32, 255, 251, 0, 208	@ 127/ 60/  1/116/ 64
	voice_directsound 60, 0, DirectSoundWaveData_ge_cs1_loop1_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 60, 0, DirectSoundWaveData_ei_cs1_big_32, 255, 0, 255, 48	@ 127/127/127/125/ 64
	voice_directsound 60, 0, DirectSoundWaveData_chiss_shot_32, 255, 0, 255, 48	@ 127/127/127/125/ 64
	voice_directsound 60, 0, DirectSoundWaveData_ahaa_sop_b4_22, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 60, 0, DirectSoundWaveData_gee_sop_cs4_22, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 60, 0, DirectSoundWaveData_ichiss_sop_c4_22, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 60, 0, DirectSoundWaveData_dora_loop_22, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 60, 0, DirectSoundWaveData_wadaiko_g, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 60, 0, DirectSoundWaveData_wadaiko_g_lop, 255, 249, 0, 208	@ 127/ 80/  1/116/ 64
	voice_keysplit_all BW_GhetsisBattle_Drumset126 - 0xc * 52

	.align 2
BW_GhetsisBattle_Drumset126::
	voice_directsound 60, 20, DirectSoundWaveData_chinese_cym_22, 255, 250, 0, 225	@ 127/ 70/  0/110/ 20
