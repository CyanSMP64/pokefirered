	.align 2
voicegroup268:: @ BW kyurem battle
	voice_keysplit BW_Piano_s3, KeySplitTable_2oct - 2
	voice_directsound 60, 0, DirectSoundWaveData_glocken_c5_32, 255, 249, 0, 208	@ 127/ 75/  1/116/ 64
	voice_directsound 60, 0, DirectSoundWaveData_slapbass_g2_32, 255, 64, 227, 178	@ 127/125/120/120/ 64
	voice_directsound 60, 0, DirectSoundWaveData_synth_bass_c2_22, 255, 64, 227, 178	@ 127/125/120/120/ 64
	voice_directsound 60, 0, DirectSoundWaveData_cool3_basE0_22, 255, 64, 227, 0	@ 127/125/120/127/ 64
	voice_keysplit HGSS_Strings_s1, KeySplitTable_int_9 - 3
	voice_keysplit BW_Akai_Flute_s2, KeySplitTable_2oct + 2
	voice_directsound 60, 0, DirectSoundWaveData_timpani_g3_22, 255, 251, 25, 197	@ 127/ 60/ 40/118/ 64
	voice_directsound 60, 0, DirectSoundWaveData_trombone_g2_22, 255, 242, 159, 208	@ 127/100/100/116/ 64
	voice_keysplit HGSS_French_Horn_s2, KeySplitTable_2oct + 15
	voice_keysplit HGSS_Oboe, KeySplitTable_2oct + 8
	voice_directsound 60, 0, DirectSoundWaveData_timpani2_as_16, 255, 249, 0, 208	@ 127/ 80/  1/116/ 64
	voice_directsound 60, 0, DirectSoundWaveData_forn_a_c2_22, 255, 249, 0, 208	@ 127/ 80/  1/116/ 64
	voice_directsound 60, 0, DirectSoundWaveData_forn_c3_22, 255, 249, 0, 208	@ 127/ 80/  1/116/ 64
	voice_directsound 60, 0, DirectSoundWaveData_ind_troncs1_32, 255, 197, 227, 208	@ 127/120/120/116/ 64
	voice_directsound 60, 0, DirectSoundWaveData_pbrasslop_c4_max32, 255, 0, 255, 178	@ 127/127/127/120/ 64
	voice_directsound 60, 0, DirectSoundWaveData_oche_hit_major_c4_32, 255, 0, 255, 208	@ 127/127/127/116/ 64
	voice_keysplit_all BW_Kyurem_Drumset80 - 0xc * 26
	voice_directsound 60, 0, DirectSoundSynthData_squ50, 255, 0, 255, 0	@ 126/127/127/127/ 64
	voice_directsound 60, 0, DirectSoundWaveData_purenoise, 255, 0, 255, 178	@ 125/127/127/120/ 64

	.align 2
BW_Kyurem_Drumset80::
	voice_directsound 60, 64, DirectSoundWaveData_snareroll_22, 255, 0, 227, 88	@ 127/127/120/124/ 64
	voice_directsound 61, 64, DirectSoundWaveData_snareroll_22, 255, 0, 227, 88	@ 127/127/120/124/ 64
	voice_directsound 60, 64, DirectSoundWaveData_bass_hit01_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 60, 64, DirectSoundWaveData_bass_ana01_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 61, 64, DirectSoundWaveData_bass_ana01_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 62, 64, DirectSoundWaveData_bass_ana01_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 63, 64, DirectSoundWaveData_bass_ana01_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 64, 64, DirectSoundWaveData_bass_ana01_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 65, 64, DirectSoundWaveData_bass_ana01_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 66, 64, DirectSoundWaveData_bass_ana01_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 67, 64, DirectSoundWaveData_bass_ana01_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 68, 64, DirectSoundWaveData_bass_ana01_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 69, 64, DirectSoundWaveData_bass_ana01_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 70, 64, DirectSoundWaveData_bass_ana01_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 71, 64, DirectSoundWaveData_bass_ana01_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 72, 64, DirectSoundWaveData_bass_ana01_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 73, 64, DirectSoundWaveData_bass_ana01_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 74, 64, DirectSoundWaveData_bass_ana01_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 75, 64, DirectSoundWaveData_bass_ana01_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 76, 64, DirectSoundWaveData_bass_ana01_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 77, 64, DirectSoundWaveData_bass_ana01_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 78, 64, DirectSoundWaveData_bass_ana01_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 79, 64, DirectSoundWaveData_bass_ana01_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 80, 64, DirectSoundWaveData_bass_ana01_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 81, 64, DirectSoundWaveData_bass_ana01_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 82, 64, DirectSoundWaveData_bass_ana01_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 83, 64, DirectSoundWaveData_bass_ana01_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 60, 30, DirectSoundWaveData_ride_bell_16, 255, 250, 0, 212	@ 127/ 70/  0/115/ 30
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
