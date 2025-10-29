	.align 2
voicegroup264:: @ BW plasma battle
	voice_keysplit BW_Strings2, KeySplitTable_2oct + 11
	voice_keysplit BW_Bass_Lead_s2, KeySplitTable_2oct - 2
	voice_directsound 60, 0, DirectSoundWaveData_timpani2_as_16, 255, 249, 0, 208	@ 127/ 80/  1/116/ 64
	voice_directsound 60, 0, DirectSoundWaveData_cool3_basE0_22, 255, 64, 227, 0	@ 127/125/120/127/ 64
	voice_directsound 60, 0, DirectSoundWaveData_synbass_fs0_32, 255, 249, 0, 208	@ 127/ 75/  1/116/ 64
	voice_directsound 60, 0, DirectSoundWaveData_pbrasslop_c4_max32, 255, 0, 255, 178	@ 127/127/127/120/ 64
	voice_keysplit BW_Distortion_Guitar_s2, KeySplitTable_2oct + 6
	voice_directsound 60, 0, DirectSoundWaveData_plasma_gt2_c2_32, 255, 254, 0, 88	@ 127/ 30/  1/124/ 64
	voice_directsound 60, 0, DirectSoundWaveData_dis_gtl_c3_32, 255, 254, 0, 16	@ 127/ 30/  1/126/ 64
	voice_directsound 60, 0, DirectSoundWaveData_plasma_gt_c3_32, 255, 254, 0, 88	@ 127/ 30/  1/124/ 64
	voice_directsound 60, 0, DirectSoundWaveData_plasma_gt_c4_32, 255, 254, 0, 88	@ 127/ 30/  1/124/ 64
	voice_directsound 60, 0, DirectSoundWaveData_plasma_strings2_22, 255, 249, 25, 208	@ 127/ 80/ 40/116/ 64
	voice_keysplit_all BW_PlasmaBattle_Drumset80 - 0xc * 21
	voice_directsound 60, 0, DirectSoundWaveData_pl_orgloop_c4_32, 255, 0, 255, 178	@ 127/127/127/120/ 64
	voice_directsound 60, 0, DirectSoundWaveData_pl_orgloop_c5_32, 255, 0, 255, 178	@ 127/127/127/120/ 64
	voice_directsound 60, 0, DirectSoundWaveData_pla_gtl_c3_32, 255, 0, 255, 178	@ 127/127/127/120/ 64
	voice_directsound 60, 0, DirectSoundWaveData_pla_gtl_g3_32, 255, 0, 255, 178	@ 127/127/127/120/ 64
	voice_directsound 60, 0, DirectSoundWaveData_plasma_gtrif3_22, 255, 197, 255, 178	@ 127/120/127/120/ 64
	voice_directsound 60, 0, DirectSoundWaveData_plasma_noise_22, 255, 0, 255, 88	@ 127/127/127/124/ 64
	voice_directsound 60, 0, DirectSoundWaveData_plasma_wave_22, 255, 0, 255, 88	@ 127/127/127/124/ 64

	.align 2
BW_PlasmaBattle_Drumset80::
	voice_directsound 50, 64, DirectSoundWaveData_cool_snare2_22, 255, 197, 227, 88	@ 127/120/120/124/ 64
	voice_directsound 51, 64, DirectSoundWaveData_cool_snare2_22, 255, 197, 227, 88	@ 127/120/120/124/ 64
	voice_directsound 48, 64, DirectSoundWaveData_cool_snare2_22, 255, 197, 227, 88	@ 127/120/120/124/ 64
	voice_directsound 60, 64, DirectSoundWaveData_cool_snare2_22, 255, 197, 227, 88	@ 127/120/120/124/ 64
	voice_directsound 60, 64, DirectSoundWaveData_cool_snare3_22, 255, 0, 227, 88	@ 127/127/120/124/ 64
	voice_directsound 61, 64, DirectSoundWaveData_cool_snare3_22, 255, 0, 227, 88	@ 127/127/120/124/ 64
	voice_directsound 62, 64, DirectSoundWaveData_cool_snare3_22, 255, 0, 227, 88	@ 127/127/120/124/ 64
	voice_directsound 60, 64, DirectSoundWaveData_bass_hit01_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 60, 64, DirectSoundWaveData_bass_ana01_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 61, 64, DirectSoundWaveData_bass_ana01_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 62, 64, DirectSoundWaveData_bass_ana01_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 63, 64, DirectSoundWaveData_bass_ana01_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 64, 64, DirectSoundWaveData_bass_ana01_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 65, 64, DirectSoundWaveData_bass_ana01_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 60, 64, DirectSoundWaveData_synth_snaer02_32, 255, 0, 255, 0	@ 127/127/127/127/ 64
	voice_directsound 61, 64, DirectSoundWaveData_synth_snaer02_32, 255, 0, 255, 0	@ 127/127/127/127/ 64
	voice_directsound 62, 64, DirectSoundWaveData_synth_snaer02_32, 255, 0, 255, 0	@ 127/127/127/127/ 64
	voice_directsound 63, 64, DirectSoundWaveData_synth_snaer02_32, 255, 0, 255, 0	@ 127/127/127/127/ 64
	voice_directsound 64, 64, DirectSoundWaveData_synth_snaer02_32, 255, 0, 255, 0	@ 127/127/127/127/ 64
	voice_directsound 65, 64, DirectSoundWaveData_synth_snaer02_32, 255, 0, 255, 0	@ 127/127/127/127/ 64
	voice_directsound 66, 64, DirectSoundWaveData_synth_snaer02_32, 255, 0, 255, 0	@ 127/127/127/127/ 64
	voice_directsound 67, 64, DirectSoundWaveData_synth_snaer02_32, 255, 0, 255, 0	@ 127/127/127/127/ 64
	voice_directsound 68, 64, DirectSoundWaveData_synth_snaer02_32, 255, 0, 255, 0	@ 127/127/127/127/ 64
	voice_directsound 69, 64, DirectSoundWaveData_synth_snaer02_32, 255, 0, 255, 0	@ 127/127/127/127/ 64
	voice_directsound 70, 64, DirectSoundWaveData_synth_snaer02_32, 255, 0, 255, 0	@ 127/127/127/127/ 64
	voice_directsound 71, 64, DirectSoundWaveData_synth_snaer02_32, 255, 0, 255, 0	@ 127/127/127/127/ 64
	voice_directsound 72, 64, DirectSoundWaveData_synth_snaer02_32, 255, 0, 255, 0	@ 127/127/127/127/ 64
	voice_directsound 73, 64, DirectSoundWaveData_synth_snaer02_32, 255, 0, 255, 0	@ 127/127/127/127/ 64
	voice_directsound 74, 64, DirectSoundWaveData_synth_snaer02_32, 255, 0, 255, 0	@ 127/127/127/127/ 64
	voice_directsound 75, 64, DirectSoundWaveData_synth_snaer02_32, 255, 0, 255, 0	@ 127/127/127/127/ 64
	voice_directsound 76, 64, DirectSoundWaveData_synth_snaer02_32, 255, 0, 255, 0	@ 127/127/127/127/ 64
	voice_directsound 77, 64, DirectSoundWaveData_synth_snaer02_32, 255, 0, 255, 0	@ 127/127/127/127/ 64
	voice_directsound 78, 64, DirectSoundWaveData_synth_snaer02_32, 255, 0, 255, 0	@ 127/127/127/127/ 64
	voice_directsound 60, 64, DirectSoundWaveData_dance_close_hat_32, 255, 0, 255, 0	@ 127/127/127/127/ 64
	voice_directsound 61, 64, DirectSoundWaveData_dance_close_hat_32, 255, 0, 255, 0	@ 127/127/127/127/ 64
	voice_directsound 62, 64, DirectSoundWaveData_dance_close_hat_32, 255, 0, 255, 0	@ 127/127/127/127/ 64
	voice_directsound 63, 64, DirectSoundWaveData_dance_close_hat_32, 255, 0, 255, 0	@ 127/127/127/127/ 64
	voice_directsound 60, 64, DirectSoundWaveData_dance_open_hat_32, 255, 0, 255, 0	@ 127/127/127/127/ 64
	voice_directsound 61, 64, DirectSoundWaveData_dance_open_hat_32, 255, 0, 255, 0	@ 127/127/127/127/ 64
	voice_directsound 62, 64, DirectSoundWaveData_dance_open_hat_32, 255, 0, 255, 0	@ 127/127/127/127/ 64
	voice_directsound 60, 64, DirectSoundWaveData_crash_cym_22, 255, 242, 0, 216	@ 127/100/  0/114/ 64
	voice_directsound 61, 64, DirectSoundWaveData_crash_cym_22, 255, 242, 0, 216	@ 127/100/  0/114/ 64
	voice_directsound 62, 64, DirectSoundWaveData_crash_cym_22, 255, 242, 0, 216	@ 127/100/  0/114/ 64
	voice_directsound 60, 20, DirectSoundWaveData_chinese_cym_22, 255, 250, 0, 225	@ 127/ 70/  0/110/ 20
	voice_directsound 61, 20, DirectSoundWaveData_chinese_cym_22, 255, 250, 0, 225	@ 127/ 70/  0/110/ 20
	voice_directsound 62, 20, DirectSoundWaveData_chinese_cym_22, 255, 250, 0, 225	@ 127/ 70/  0/110/ 20
	voice_directsound 60, 84, DirectSoundWaveData_splash_cym_32, 255, 250, 0, 208	@ 127/ 70/  0/116/ 84
	voice_directsound 60, 100, DirectSoundWaveData_chinese_cym_22, 255, 250, 0, 225	@ 127/ 70/  0/110/100
	voice_directsound 61, 100, DirectSoundWaveData_chinese_cym_22, 255, 250, 0, 225	@ 127/ 70/  0/110/100
	voice_directsound 62, 100, DirectSoundWaveData_chinese_cym_22, 255, 250, 0, 225	@ 127/ 70/  0/110/100
	voice_directsound 63, 100, DirectSoundWaveData_chinese_cym_22, 255, 250, 0, 225	@ 127/ 70/  0/110/100
	voice_directsound 64, 100, DirectSoundWaveData_chinese_cym_22, 255, 250, 0, 225	@ 127/ 70/  0/110/100
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
