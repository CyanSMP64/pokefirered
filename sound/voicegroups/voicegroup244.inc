	.align 2
voicegroup244:: @ BW gym leader final mon
	voice_keysplit HGSS_Strings_s1, KeySplitTable_int_9 - 3
	voice_directsound 60, 0, DirectSoundWaveData_chello_solo_g2_22, 188, 242, 255, 208	@ 120/100/127/116/ 64
	voice_directsound 60, 0, DirectSoundWaveData_timpani_g3_22, 255, 251, 25, 197	@ 127/ 60/ 40/118/ 64
	voice_directsound 60, 0, DirectSoundWaveData_trombone_g2_22, 255, 242, 159, 208	@ 127/100/100/116/ 64
	voice_keysplit HGSS_French_Horn_s1, KeySplitTable_int_9 + 18
	voice_keysplit BW_Attack_Trumpet_Section_s1, KeySplitTable_2oct + 3
	voice_directsound 60, 0, DirectSoundWaveData_pbrasslop_c4_max32, 255, 0, 255, 178	@ 127/127/127/120/ 64
	voice_keysplit_all BW_GymLast_Drumset80 - 0xc * 38
	voice_directsound 60, 0, DirectSoundSynthData_squ50, 255, 0, 255, 0	@ 126/127/127/127/ 64
	voice_directsound 60, 0, DirectSoundWaveData_purenoise, 255, 0, 255, 178	@ 125/127/127/120/ 64

	.align 2
BW_GymLast_Drumset80::
	voice_directsound 60, 64, DirectSoundWaveData_snare_btry_gm_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 61, 64, DirectSoundWaveData_snare_btry_gm_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 62, 64, DirectSoundWaveData_snare_btry_gm_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 63, 64, DirectSoundWaveData_snare_btry_gm_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 64, 64, DirectSoundWaveData_snare_btry_gm_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 65, 64, DirectSoundWaveData_snare_btry_gm_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 66, 64, DirectSoundWaveData_snare_btry_gm_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 67, 64, DirectSoundWaveData_snare_btry_gm_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 68, 64, DirectSoundWaveData_snare_btry_gm_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 69, 64, DirectSoundWaveData_snare_btry_gm_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 60, 40, DirectSoundWaveData_cymbal_orch_22, 255, 246, 0, 216	@ 127/ 90/  0/114/ 40
