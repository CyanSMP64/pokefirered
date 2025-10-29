	.align 2
voicegroup267:: @ BW n final battle
	voice_directsound 60, 0, DirectSoundWaveData_harpsichord_c3_32, 255, 251, 0, 197	@ 127/ 60/  1/118/ 64
	voice_directsound 60, 0, DirectSoundWaveData_glocken_c5_32, 255, 249, 0, 208	@ 127/ 75/  1/116/ 64
	voice_keysplit BW_Organ_N, KeySplitTable_2oct + 11
	voice_directsound 60, 0, DirectSoundWaveData_europat_c3_16, 255, 197, 255, 178	@ 127/120/127/120/ 64
	voice_directsound 60, 0, DirectSoundWaveData_synth_bass_c2_22, 255, 64, 227, 178	@ 127/125/120/120/ 64
	voice_directsound 60, 0, DirectSoundWaveData_cool3_basE0_22, 255, 64, 227, 0	@ 127/125/120/127/ 64
	voice_keysplit BW_Akai_Flute_s2, KeySplitTable_2oct + 2
	voice_directsound 60, 0, DirectSoundWaveData_trombone_g2_22, 255, 242, 159, 208	@ 127/100/100/116/ 64
	voice_keysplit HGSS_French_Horn_s1, KeySplitTable_2oct + 24
	voice_directsound 60, 0, DirectSoundWaveData_timpani2_as_16, 255, 249, 0, 208	@ 127/ 80/  1/116/ 64
	voice_directsound 60, 0, DirectSoundWaveData_synbass_fs0_32, 255, 249, 0, 208	@ 127/ 75/  1/116/ 64
	voice_directsound 60, 0, DirectSoundWaveData_pbrasslop_c4_max32, 255, 0, 255, 178	@ 127/127/127/120/ 64
	voice_directsound 60, 0, DirectSoundWaveData_n_brass_max_g4_32, 255, 197, 255, 178	@ 127/120/127/120/ 64
	voice_keysplit BW_Choirs_Male_s1, KeySplitTable_int_7 + 8
	voice_directsound 60, 0, DirectSoundWaveData_steel_dr_wb_g4_22, 255, 250, 2, 208	@ 127/ 70/ 10/116/ 64
	voice_keysplit_all BW_NFinalBattle_Drumset80 - 0xc * 16
	voice_directsound 60, 0, DirectSoundWaveData_clock_n_22, 255, 197, 255, 178	@ 127/120/127/120/ 64
	voice_directsound 60, 0, DirectSoundWaveData_minorhit_c3_16, 255, 197, 255, 178	@ 127/120/127/120/ 64
	voice_directsound 60, 0, DirectSoundWaveData_synapse_burst_max_22, 255, 197, 255, 178	@ 127/120/127/120/ 64
	voice_directsound 60, 0, DirectSoundWaveData_w_noise_32, 255, 0, 255, 178	@ 127/127/127/120/ 64
	voice_directsound 60, 0, DirectSoundSynthData_squ50, 255, 0, 255, 0	@ 126/127/127/127/ 64
	voice_directsound 60, 0, DirectSoundWaveData_purenoise, 255, 0, 255, 178	@ 125/127/127/120/ 64

	.align 2
BW_NFinalBattle_Drumset80::
	voice_directsound 45, 64, DirectSoundWaveData_cool_snare2_22, 255, 197, 227, 88	@ 127/120/120/124/ 64
	voice_directsound 46, 64, DirectSoundWaveData_cool_snare2_22, 255, 197, 227, 88	@ 127/120/120/124/ 64
	voice_directsound 47, 64, DirectSoundWaveData_cool_snare2_22, 255, 197, 227, 88	@ 127/120/120/124/ 64
	voice_directsound 48, 64, DirectSoundWaveData_cool_snare2_22, 255, 197, 227, 88	@ 127/120/120/124/ 64
	voice_directsound 49, 64, DirectSoundWaveData_cool_snare2_22, 255, 197, 227, 88	@ 127/120/120/124/ 64
	voice_directsound 60, 64, DirectSoundWaveData_cool_snare2_22, 255, 197, 227, 88	@ 127/120/120/124/ 64
	voice_directsound 61, 64, DirectSoundWaveData_cool_snare2_22, 255, 197, 227, 88	@ 127/120/120/124/ 64
	voice_directsound 62, 64, DirectSoundWaveData_cool_snare2_22, 255, 197, 227, 88	@ 127/120/120/124/ 64
	voice_directsound 63, 64, DirectSoundWaveData_cool_snare2_22, 255, 197, 227, 88	@ 127/120/120/124/ 64
	voice_directsound 64, 64, DirectSoundWaveData_cool_snare2_22, 255, 197, 227, 88	@ 127/120/120/124/ 64
	voice_directsound 58, 64, DirectSoundWaveData_bass_hit01_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 59, 64, DirectSoundWaveData_bass_hit01_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 60, 64, DirectSoundWaveData_bass_ana01_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 61, 64, DirectSoundWaveData_bass_ana01_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 62, 64, DirectSoundWaveData_bass_ana01_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 63, 64, DirectSoundWaveData_bass_ana01_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 64, 64, DirectSoundWaveData_bass_ana01_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
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
	voice_directsound 60, 64, DirectSoundWaveData_clock_32, 255, 0, 255, 0	@ 127/127/127/127/ 64
	voice_directsound 61, 64, DirectSoundWaveData_clock_32, 255, 0, 255, 0	@ 127/127/127/127/ 64
	voice_directsound 62, 64, DirectSoundWaveData_clock_32, 255, 0, 255, 0	@ 127/127/127/127/ 64
	voice_directsound 63, 64, DirectSoundWaveData_clock_32, 255, 0, 255, 0	@ 127/127/127/127/ 64
	voice_directsound 64, 64, DirectSoundWaveData_clock_32, 255, 0, 255, 0	@ 127/127/127/127/ 64
	voice_directsound 65, 64, DirectSoundWaveData_clock_32, 255, 0, 255, 0	@ 127/127/127/127/ 64
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
