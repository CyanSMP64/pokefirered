	.align 2
voicegroup233:: @ BW n battle
	voice_directsound 60, 0, DirectSoundWaveData_glocken_c5_32, 255, 249, 0, 208	@ 127/ 75/  1/116/ 64
	voice_directsound 60, 0, DirectSoundWaveData_synth_bass_c2_22, 255, 64, 227, 178	@ 127/125/120/120/ 64
	voice_keysplit BW_Bass_Elite_Four, KeySplitTable_2oct + 21
	voice_keysplit HGSS_Strings_s1, KeySplitTable_int_9 - 3
	voice_directsound 60, 0, DirectSoundWaveData_shiten_read_max2_fs3_32, 255, 242, 159, 208	@ 127/100/100/116/ 64
	voice_directsound 60, 0, DirectSoundWaveData_cool3_basE0_22, 255, 64, 227, 0	@ 127/125/120/127/ 64
	voice_keysplit BW_Akai_Flute_s2, KeySplitTable_2oct + 2
	voice_directsound 60, 0, DirectSoundWaveData_pbrasslop_c4_max32, 255, 0, 255, 178	@ 127/127/127/120/ 64
	voice_directsound 60, 0, DirectSoundWaveData_n_brass_max_g4_32, 255, 197, 255, 178	@ 127/120/127/120/ 64
	voice_directsound 60, 0, DirectSoundWaveData_sd_octhit_as3_32, 255, 249, 0, 208	@ 127/ 80/  1/116/ 64
	voice_keysplit_all BW_N_Battle_Drumset80 - 0xc * 25
	voice_directsound 60, 0, DirectSoundSynthData_squ50, 255, 0, 255, 0	@ 126/127/127/127/ 64
	voice_directsound 60, 0, DirectSoundWaveData_purenoise, 255, 0, 255, 178	@ 125/127/127/120/ 64

	.align 2
BW_N_Battle_Drumset80::
	voice_directsound 60, 58, DirectSoundWaveData_rimshot_btry_gm_32, 255, 0, 227, 208	@ 127/127/120/116/ 58
	voice_directsound 61, 58, DirectSoundWaveData_rimshot_btry_gm_32, 255, 0, 227, 208	@ 127/127/120/116/ 58
	voice_directsound 60, 64, DirectSoundWaveData_snare_btry_gm_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 60, 64, DirectSoundWaveData_bassdr_2_16, 255, 0, 255, 178	@ 127/127/127/120/ 64
	voice_directsound 61, 64, DirectSoundWaveData_bassdr_2_16, 255, 0, 255, 178	@ 127/127/127/120/ 64
	voice_directsound 62, 64, DirectSoundWaveData_bassdr_2_16, 255, 0, 255, 178	@ 127/127/127/120/ 64
	voice_directsound 63, 64, DirectSoundWaveData_bassdr_2_16, 255, 0, 255, 178	@ 127/127/127/120/ 64
	voice_directsound 64, 64, DirectSoundWaveData_bassdr_2_16, 255, 0, 255, 178	@ 127/127/127/120/ 64
	voice_directsound 57, 64, DirectSoundWaveData_snare_euro_16, 255, 0, 255, 0	@ 127/127/127/127/ 64
	voice_directsound 58, 64, DirectSoundWaveData_snare_euro_16, 255, 0, 255, 0	@ 127/127/127/127/ 64
	voice_directsound 59, 64, DirectSoundWaveData_snare_euro_16, 255, 0, 255, 0	@ 127/127/127/127/ 64
	voice_directsound 60, 64, DirectSoundWaveData_snare_euro_16, 255, 0, 255, 0	@ 127/127/127/127/ 64
	voice_directsound 61, 64, DirectSoundWaveData_snare_euro_16, 255, 0, 255, 0	@ 127/127/127/127/ 64
	voice_directsound 62, 64, DirectSoundWaveData_snare_euro_16, 255, 0, 255, 0	@ 127/127/127/127/ 64
	voice_directsound 63, 64, DirectSoundWaveData_snare_euro_16, 255, 0, 255, 0	@ 127/127/127/127/ 64
	voice_directsound 64, 64, DirectSoundWaveData_snare_euro_16, 255, 0, 255, 0	@ 127/127/127/127/ 64
	voice_directsound 65, 64, DirectSoundWaveData_snare_euro_16, 255, 0, 255, 0	@ 127/127/127/127/ 64
	voice_directsound 66, 64, DirectSoundWaveData_snare_euro_16, 255, 0, 255, 0	@ 127/127/127/127/ 64
	voice_directsound 67, 64, DirectSoundWaveData_snare_euro_16, 255, 0, 255, 0	@ 127/127/127/127/ 64
	voice_directsound 68, 64, DirectSoundWaveData_snare_euro_16, 255, 0, 255, 0	@ 127/127/127/127/ 64
	voice_directsound 69, 64, DirectSoundWaveData_snare_euro_16, 255, 0, 255, 0	@ 127/127/127/127/ 64
	voice_directsound 70, 64, DirectSoundWaveData_snare_euro_16, 255, 0, 255, 0	@ 127/127/127/127/ 64
	voice_directsound 60, 44, DirectSoundWaveData_dance_close_hat_32, 255, 0, 255, 0	@ 127/127/127/127/ 44
	voice_directsound 60, 44, DirectSoundWaveData_dance_open_hat_32, 255, 0, 255, 0	@ 127/127/127/127/ 44
	voice_directsound 61, 44, DirectSoundWaveData_dance_open_hat_32, 255, 0, 255, 0	@ 127/127/127/127/ 44
	voice_directsound 62, 44, DirectSoundWaveData_dance_open_hat_32, 255, 0, 255, 0	@ 127/127/127/127/ 44
	voice_directsound 63, 44, DirectSoundWaveData_dance_open_hat_32, 255, 0, 255, 0	@ 127/127/127/127/ 44
	voice_directsound 64, 44, DirectSoundWaveData_dance_open_hat_32, 255, 0, 255, 0	@ 127/127/127/127/ 44
	voice_directsound 65, 44, DirectSoundWaveData_dance_open_hat_32, 255, 0, 255, 0	@ 127/127/127/127/ 44
	voice_directsound 66, 44, DirectSoundWaveData_dance_open_hat_32, 255, 0, 255, 0	@ 127/127/127/127/ 44
	voice_directsound 67, 44, DirectSoundWaveData_dance_open_hat_32, 255, 0, 255, 0	@ 127/127/127/127/ 44
	voice_directsound 68, 44, DirectSoundWaveData_dance_open_hat_32, 255, 0, 255, 0	@ 127/127/127/127/ 44
	voice_directsound 69, 44, DirectSoundWaveData_dance_open_hat_32, 255, 0, 255, 0	@ 127/127/127/127/ 44
	voice_directsound 70, 44, DirectSoundWaveData_dance_open_hat_32, 255, 0, 255, 0	@ 127/127/127/127/ 44
	voice_directsound 71, 44, DirectSoundWaveData_dance_open_hat_32, 255, 0, 255, 0	@ 127/127/127/127/ 44
	voice_directsound 72, 44, DirectSoundWaveData_dance_open_hat_32, 255, 0, 255, 0	@ 127/127/127/127/ 44
	voice_directsound 60, 64, DirectSoundWaveData_crash_cym_22, 255, 242, 0, 216	@ 127/100/  0/114/ 64
	voice_directsound 61, 64, DirectSoundWaveData_crash_cym_22, 255, 242, 0, 216	@ 127/100/  0/114/ 64
	voice_directsound 62, 64, DirectSoundWaveData_crash_cym_22, 255, 242, 0, 216	@ 127/100/  0/114/ 64
	voice_directsound 63, 64, DirectSoundWaveData_crash_cym_22, 255, 242, 0, 216	@ 127/100/  0/114/ 64
	voice_directsound 64, 64, DirectSoundWaveData_crash_cym_22, 255, 242, 0, 216	@ 127/100/  0/114/ 64
	voice_directsound 65, 64, DirectSoundWaveData_crash_cym_22, 255, 242, 0, 216	@ 127/100/  0/114/ 64
	voice_directsound 66, 64, DirectSoundWaveData_crash_cym_22, 255, 242, 0, 216	@ 127/100/  0/114/ 64
	voice_directsound 67, 64, DirectSoundWaveData_crash_cym_22, 255, 242, 0, 216	@ 127/100/  0/114/ 64
	voice_directsound 60, 114, DirectSoundWaveData_crash_cym_22, 255, 242, 0, 216	@ 127/100/  0/114/114
	voice_directsound 61, 114, DirectSoundWaveData_crash_cym_22, 255, 242, 0, 216	@ 127/100/  0/114/114
	voice_directsound 62, 114, DirectSoundWaveData_crash_cym_22, 255, 242, 0, 216	@ 127/100/  0/114/114
	voice_directsound 63, 114, DirectSoundWaveData_crash_cym_22, 255, 242, 0, 216	@ 127/100/  0/114/114
	voice_directsound 64, 114, DirectSoundWaveData_crash_cym_22, 255, 242, 0, 216	@ 127/100/  0/114/114
	voice_directsound 65, 114, DirectSoundWaveData_crash_cym_22, 255, 242, 0, 216	@ 127/100/  0/114/114
	voice_directsound 66, 114, DirectSoundWaveData_crash_cym_22, 255, 242, 0, 216	@ 127/100/  0/114/114
	voice_directsound 67, 114, DirectSoundWaveData_crash_cym_22, 255, 242, 0, 216	@ 127/100/  0/114/114
	voice_directsound 60, 14, DirectSoundWaveData_crash_cym_22, 255, 242, 0, 216	@ 127/100/  0/114/ 14
