	.align 2
voicegroup230:: @ BW wild battle
	voice_directsound 60, 0, DirectSoundWaveData_glocken_c5_32, 255, 249, 0, 208	@ 127/ 75/  1/116/ 64
	voice_directsound 60, 0, DirectSoundWaveData_marimba_wb_c5_22, 255, 246, 0, 208	@ 127/ 90/  1/116/ 64
	voice_directsound 60, 0, DirectSoundWaveData_ac_bass_c2_22, 255, 251, 0, 197	@ 127/ 60/  1/118/ 64
	voice_keysplit HGSS_Synth_Bass, KeySplitTable_2oct + 34
	voice_keysplit HGSS_Strings, KeySplitTable_int_9_9 + 6
	voice_keysplit BW_Attack_Trumpet_Section, KeySplitTable_int_9 + 6
	voice_directsound 60, 0, DirectSoundWaveData_chello_solo_g2_22, 188, 242, 255, 208	@ 120/100/127/116/ 64
	voice_keysplit HGSS_Pizzicato_Strings_s2, KeySplitTable_int_9 + 6
	voice_keysplit BW_Akai_Flute_s2, KeySplitTable_2oct + 2
	voice_keysplit HGSS_Trombone, KeySplitTable_2oct + 29
	voice_directsound 60, 0, DirectSoundWaveData_timpani2_as_16, 255, 249, 0, 208	@ 127/ 80/  1/116/ 64
	voice_directsound 60, 0, DirectSoundWaveData_synbass_fs0_32, 255, 249, 0, 208	@ 127/ 75/  1/116/ 64
	voice_directsound 60, 0, DirectSoundWaveData_pbrasslop_c4_max32, 255, 0, 255, 178	@ 127/127/127/120/ 64
	voice_directsound 60, 0, DirectSoundWaveData_pbrasslop_c5_max32, 255, 0, 255, 178	@ 127/127/127/120/ 64
	voice_keysplit_all BW_Wild_Battle_Drumset80 - 0xc * 29
	voice_directsound 60, 0, DirectSoundSynthData_squ50, 255, 0, 255, 0	@ 126/127/127/127/ 64
	voice_directsound 60, 0, DirectSoundWaveData_purenoise, 255, 0, 255, 178	@ 125/127/127/120/ 64

	.align 2
BW_Wild_Battle_Drumset80::
	voice_directsound 60, 64, DirectSoundWaveData_kick_power_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 61, 64, DirectSoundWaveData_kick_power_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 62, 64, DirectSoundWaveData_kick_power_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 63, 64, DirectSoundWaveData_kick_power_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 64, 64, DirectSoundWaveData_kick_power_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 65, 64, DirectSoundWaveData_kick_power_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 66, 64, DirectSoundWaveData_kick_power_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 67, 64, DirectSoundWaveData_kick_power_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 68, 64, DirectSoundWaveData_kick_power_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 69, 64, DirectSoundWaveData_kick_power_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 70, 64, DirectSoundWaveData_kick_power_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 60, 64, DirectSoundWaveData_snare_power_16, 255, 225, 127, 178	@ 127/114/ 90/120/ 64
	voice_directsound 61, 64, DirectSoundWaveData_snare_power_16, 255, 225, 127, 178	@ 127/114/ 90/120/ 64
	voice_directsound 60, 104, DirectSoundWaveData_hihat_closed_22, 255, 242, 0, 178	@ 127/100/  0/120/104
	voice_directsound 61, 104, DirectSoundWaveData_hihat_closed_22, 255, 242, 0, 178	@ 127/100/  0/120/104
	voice_directsound 62, 104, DirectSoundWaveData_hihat_closed_22, 255, 242, 0, 178	@ 127/100/  0/120/104
	voice_directsound 63, 104, DirectSoundWaveData_hihat_closed_22, 255, 242, 0, 178	@ 127/100/  0/120/104
	voice_directsound 60, 104, DirectSoundWaveData_hihat_open_22, 255, 241, 0, 178	@ 127/102/  0/120/104
	voice_directsound 61, 104, DirectSoundWaveData_hihat_open_22, 255, 241, 0, 178	@ 127/102/  0/120/104
	voice_directsound 62, 104, DirectSoundWaveData_hihat_open_22, 255, 241, 0, 178	@ 127/102/  0/120/104
	voice_directsound 63, 104, DirectSoundWaveData_hihat_open_22, 255, 241, 0, 178	@ 127/102/  0/120/104
	voice_directsound 64, 104, DirectSoundWaveData_hihat_open_22, 255, 241, 0, 178	@ 127/102/  0/120/104
	voice_directsound 65, 104, DirectSoundWaveData_hihat_open_22, 255, 241, 0, 178	@ 127/102/  0/120/104
	voice_directsound 66, 104, DirectSoundWaveData_hihat_open_22, 255, 241, 0, 178	@ 127/102/  0/120/104
	voice_directsound 67, 104, DirectSoundWaveData_hihat_open_22, 255, 241, 0, 178	@ 127/102/  0/120/104
	voice_directsound 68, 104, DirectSoundWaveData_hihat_open_22, 255, 241, 0, 178	@ 127/102/  0/120/104
	voice_directsound 69, 104, DirectSoundWaveData_hihat_open_22, 255, 241, 0, 178	@ 127/102/  0/120/104
	voice_directsound 70, 104, DirectSoundWaveData_hihat_open_22, 255, 241, 0, 178	@ 127/102/  0/120/104
	voice_directsound 71, 104, DirectSoundWaveData_hihat_open_22, 255, 241, 0, 178	@ 127/102/  0/120/104
	voice_directsound 72, 104, DirectSoundWaveData_hihat_open_22, 255, 241, 0, 178	@ 127/102/  0/120/104
	voice_directsound 73, 104, DirectSoundWaveData_hihat_open_22, 255, 241, 0, 178	@ 127/102/  0/120/104
	voice_directsound 74, 104, DirectSoundWaveData_hihat_open_22, 255, 241, 0, 178	@ 127/102/  0/120/104
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
