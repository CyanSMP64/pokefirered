	.align 2
voicegroup270:: @ BW strong wild battle
	voice_directsound 60, 0, DirectSoundWaveData_marimba_wb_c5_22, 255, 246, 0, 208	@ 127/ 90/  1/116/ 64
	voice_keysplit HGSS_Drawbar_Organ_s1, KeySplitTable_3oct + 16
	voice_keysplit HGSS_Strings, KeySplitTable_int_9_9 + 6
	voice_keysplit HGSS_Harp, KeySplitTable_4oct + 10
	voice_keysplit HGSS_Trombone, KeySplitTable_2oct + 29
	voice_directsound 60, 0, DirectSoundWaveData_timpani2_as_16, 255, 249, 0, 208	@ 127/ 80/  1/116/ 64
	voice_directsound 60, 0, DirectSoundWaveData_cool3_basE0_22, 255, 64, 227, 0	@ 127/125/120/127/ 64
	voice_directsound 60, 0, DirectSoundWaveData_synbass_fs0_32, 255, 249, 0, 208	@ 127/ 75/  1/116/ 64
	voice_directsound 60, 0, DirectSoundWaveData_pbrasslop_c4_max32, 255, 0, 255, 178	@ 127/127/127/120/ 64
	voice_directsound 60, 0, DirectSoundWaveData_pbrasslop_c5_max32, 255, 0, 255, 178	@ 127/127/127/120/ 64
	voice_keysplit_all BW_StrongWild_Battle_Drumset80 - 0xc * 28
	voice_directsound 60, 0, DirectSoundSynthData_squ50, 255, 0, 255, 0	@ 126/127/127/127/ 64
	voice_directsound 60, 0, DirectSoundWaveData_purenoise, 255, 0, 255, 178	@ 125/127/127/120/ 64

	.align 2
BW_StrongWild_Battle_Drumset80::
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
	voice_directsound 60, 64, DirectSoundWaveData_snare_power_16, 255, 225, 127, 178	@ 127/114/ 90/120/ 64
	voice_directsound 61, 64, DirectSoundWaveData_snare_power_16, 255, 225, 127, 178	@ 127/114/ 90/120/ 64
	voice_directsound 60, 80, DirectSoundWaveData_hihat_closed_22, 255, 242, 0, 178	@ 127/100/  0/120/ 80
	voice_directsound 61, 80, DirectSoundWaveData_hihat_closed_22, 255, 242, 0, 178	@ 127/100/  0/120/ 80
	voice_directsound 62, 80, DirectSoundWaveData_hihat_closed_22, 255, 242, 0, 178	@ 127/100/  0/120/ 80
	voice_directsound 63, 80, DirectSoundWaveData_hihat_closed_22, 255, 242, 0, 178	@ 127/100/  0/120/ 80
	voice_directsound 60, 90, DirectSoundWaveData_hihat_open_22, 255, 241, 0, 178	@ 127/102/  0/120/ 90
	voice_directsound 61, 90, DirectSoundWaveData_hihat_open_22, 255, 241, 0, 178	@ 127/102/  0/120/ 90
	voice_directsound 62, 90, DirectSoundWaveData_hihat_open_22, 255, 241, 0, 178	@ 127/102/  0/120/ 90
	voice_directsound 63, 90, DirectSoundWaveData_hihat_open_22, 255, 241, 0, 178	@ 127/102/  0/120/ 90
	voice_directsound 64, 90, DirectSoundWaveData_hihat_open_22, 255, 241, 0, 178	@ 127/102/  0/120/ 90
	voice_directsound 65, 90, DirectSoundWaveData_hihat_open_22, 255, 241, 0, 178	@ 127/102/  0/120/ 90
	voice_directsound 66, 90, DirectSoundWaveData_hihat_open_22, 255, 241, 0, 178	@ 127/102/  0/120/ 90
	voice_directsound 67, 90, DirectSoundWaveData_hihat_open_22, 255, 241, 0, 178	@ 127/102/  0/120/ 90
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
