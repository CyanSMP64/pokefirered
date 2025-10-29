	.align 2
voicegroup279:: @ BW opelucid (black)
	voice_keysplit BW_Harpsichord_s1, KeySplitTable_int_10 + 9
	voice_directsound 60, 0, DirectSoundWaveData_ac_bass_c2_22, 255, 251, 0, 197	@ 127/ 60/  1/118/ 64
	voice_keysplit BW_Bass_Lead_s2, KeySplitTable_2oct - 2
	voice_directsound 60, 0, DirectSoundWaveData_cool_basE0_22, 255, 64, 227, 88	@ 127/125/120/124/ 64
	voice_directsound 60, 0, DirectSoundWaveData_synbass_fs0_32, 255, 249, 0, 208	@ 127/ 75/  1/116/ 64
	voice_directsound 60, 0, DirectSoundWaveData_vocoder_you_22, 255, 0, 255, 178	@ 127/127/127/120/ 64
	voice_directsound 60, 0, DirectSoundWaveData_vocoder_stop_22, 255, 0, 255, 178	@ 127/127/127/120/ 64
	voice_directsound 60, 0, DirectSoundWaveData_pbrasslop_c4_max32, 255, 0, 255, 178	@ 127/127/127/120/ 64
	voice_directsound 60, 0, DirectSoundWaveData_pbrasslop_c5_max32, 255, 0, 255, 178	@ 127/127/127/120/ 64
	voice_keysplit_all BW_OpelucidBlack_Drumset80 - 0xc * 21
	voice_directsound 60, 0, DirectSoundSynthData_squ50, 255, 0, 255, 0	@ 126/127/127/127/ 64
	voice_directsound 60, 0, DirectSoundWaveData_purenoise, 255, 0, 255, 178	@ 125/127/127/120/ 64

	.align 2
BW_OpelucidBlack_Drumset80::
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
	voice_directsound 60, 64, DirectSoundWaveData_cowbell_max32, 255, 0, 255, 0	@ 127/127/127/127/ 64
	voice_directsound 61, 64, DirectSoundWaveData_cowbell_max32, 255, 0, 255, 0	@ 127/127/127/127/ 64
	voice_directsound 62, 64, DirectSoundWaveData_cowbell_max32, 255, 0, 255, 0	@ 127/127/127/127/ 64
	voice_directsound 63, 64, DirectSoundWaveData_cowbell_max32, 255, 0, 255, 0	@ 127/127/127/127/ 64
	voice_directsound 64, 64, DirectSoundWaveData_cowbell_max32, 255, 0, 255, 0	@ 127/127/127/127/ 64
	voice_directsound 65, 64, DirectSoundWaveData_cowbell_max32, 255, 0, 255, 0	@ 127/127/127/127/ 64
	voice_directsound 66, 64, DirectSoundWaveData_cowbell_max32, 255, 0, 255, 0	@ 127/127/127/127/ 64
	voice_directsound 67, 64, DirectSoundWaveData_cowbell_max32, 255, 0, 255, 0	@ 127/127/127/127/ 64
	voice_directsound 68, 64, DirectSoundWaveData_cowbell_max32, 255, 0, 255, 0	@ 127/127/127/127/ 64
	voice_directsound 69, 64, DirectSoundWaveData_cowbell_max32, 255, 0, 255, 0	@ 127/127/127/127/ 64
	voice_directsound 70, 64, DirectSoundWaveData_cowbell_max32, 255, 0, 255, 0	@ 127/127/127/127/ 64
	voice_directsound 71, 64, DirectSoundWaveData_cowbell_max32, 255, 0, 255, 0	@ 127/127/127/127/ 64
	voice_directsound 72, 64, DirectSoundWaveData_cowbell_max32, 255, 0, 255, 0	@ 127/127/127/127/ 64
	voice_directsound 73, 64, DirectSoundWaveData_cowbell_max32, 255, 0, 255, 0	@ 127/127/127/127/ 64
	voice_directsound 74, 64, DirectSoundWaveData_cowbell_max32, 255, 0, 255, 0	@ 127/127/127/127/ 64
	voice_directsound 75, 64, DirectSoundWaveData_cowbell_max32, 255, 0, 255, 0	@ 127/127/127/127/ 64
	voice_directsound 76, 64, DirectSoundWaveData_cowbell_max32, 255, 0, 255, 0	@ 127/127/127/127/ 64
	voice_directsound 77, 64, DirectSoundWaveData_cowbell_max32, 255, 0, 255, 0	@ 127/127/127/127/ 64
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
	voice_directsound 60, 84, DirectSoundWaveData_splash_cym_32, 255, 250, 0, 208	@ 127/ 70/  0/116/ 84
