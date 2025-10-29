	.align 2
voicegroup278:: @ BW opelucid (white)
	voice_keysplit BW_Grand_Piano, KeySplitTable_int_5_7_5_7 + 18
	voice_keysplit HGSS_Vibraphone, KeySplitTable_2oct + 10
	voice_directsound 60, 0, DirectSoundWaveData_glocken_c5_32, 255, 249, 0, 208	@ 127/ 75/  1/116/ 64
	voice_directsound 60, 0, DirectSoundWaveData_ac_bass_c2_22, 255, 251, 0, 197	@ 127/ 60/  1/118/ 64
	voice_keysplit HGSS_Strings, KeySplitTable_int_9 + 6
	voice_directsound 60, 0, DirectSoundWaveData_kokyu_c2_32, 42, 233, 159, 208	@  80/110/100/116/ 64
	voice_keysplit HGSS_Oboe, KeySplitTable_2oct + 8
	voice_directsound 60, 0, DirectSoundWaveData_pizzicato_strings_a4_22, 255, 242, 25, 208	@ 127/100/ 40/116/ 64
	voice_keysplit_all BW_OpelucidWhite_Drumset80 - 0xc * 29

	.align 2
BW_OpelucidWhite_Drumset80::
	voice_directsound 60, 64, DirectSoundWaveData_rimshot_trinity_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 61, 64, DirectSoundWaveData_rimshot_trinity_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 62, 64, DirectSoundWaveData_rimshot_trinity_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 63, 64, DirectSoundWaveData_rimshot_trinity_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 60, 64, DirectSoundWaveData_bassdr1_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 61, 64, DirectSoundWaveData_bassdr1_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 62, 64, DirectSoundWaveData_bassdr1_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 63, 64, DirectSoundWaveData_bassdr1_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 64, 64, DirectSoundWaveData_bassdr1_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 60, 64, DirectSoundWaveData_snare_btry_gm_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 61, 64, DirectSoundWaveData_snare_btry_gm_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 62, 64, DirectSoundWaveData_snare_btry_gm_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 60, 30, DirectSoundWaveData_tom_f_16, 255, 0, 255, 178	@ 127/127/127/120/ 30
	voice_directsound 60, 80, DirectSoundWaveData_hihat_closed_22, 255, 112, 0, 208	@ 127/124/  0/116/ 80
	voice_directsound 60, 40, DirectSoundWaveData_tom_l_16, 255, 0, 255, 178	@ 127/127/127/120/ 40
	voice_directsound 61, 40, DirectSoundWaveData_tom_l_16, 255, 0, 255, 178	@ 127/127/127/120/ 40
	voice_directsound 60, 100, DirectSoundWaveData_tom_m_16, 255, 0, 255, 178	@ 127/127/127/120/100
	voice_directsound 60, 80, DirectSoundWaveData_hihat_open_22, 255, 241, 0, 178	@ 127/102/  0/120/ 80
	voice_directsound 60, 110, DirectSoundWaveData_tom_h_16, 255, 0, 255, 178	@ 127/127/127/120/110
	voice_directsound 61, 110, DirectSoundWaveData_tom_h_16, 255, 0, 255, 178	@ 127/127/127/120/110
	voice_directsound 60, 64, DirectSoundWaveData_crash_cym_22, 255, 242, 0, 216	@ 127/100/  0/114/ 64
	voice_directsound 61, 64, DirectSoundWaveData_crash_cym_22, 255, 242, 0, 216	@ 127/100/  0/114/ 64
	voice_directsound 62, 64, DirectSoundWaveData_crash_cym_22, 255, 242, 0, 216	@ 127/100/  0/114/ 64
	voice_directsound 63, 64, DirectSoundWaveData_crash_cym_22, 255, 242, 0, 216	@ 127/100/  0/114/ 64
	voice_directsound 64, 64, DirectSoundWaveData_crash_cym_22, 255, 242, 0, 216	@ 127/100/  0/114/ 64
	voice_directsound 65, 64, DirectSoundWaveData_crash_cym_22, 255, 242, 0, 216	@ 127/100/  0/114/ 64
	voice_directsound 66, 64, DirectSoundWaveData_crash_cym_22, 255, 242, 0, 216	@ 127/100/  0/114/ 64
	voice_directsound 67, 64, DirectSoundWaveData_crash_cym_22, 255, 242, 0, 216	@ 127/100/  0/114/ 64
	voice_directsound 68, 64, DirectSoundWaveData_crash_cym_22, 255, 242, 0, 216	@ 127/100/  0/114/ 64
	voice_directsound 69, 64, DirectSoundWaveData_crash_cym_22, 255, 242, 0, 216	@ 127/100/  0/114/ 64
	voice_directsound 70, 64, DirectSoundWaveData_crash_cym_22, 255, 242, 0, 216	@ 127/100/  0/114/ 64
	voice_directsound 71, 64, DirectSoundWaveData_crash_cym_22, 255, 242, 0, 216	@ 127/100/  0/114/ 64
	voice_directsound 72, 64, DirectSoundWaveData_crash_cym_22, 255, 242, 0, 216	@ 127/100/  0/114/ 64
	voice_directsound 73, 64, DirectSoundWaveData_crash_cym_22, 255, 242, 0, 216	@ 127/100/  0/114/ 64
	voice_directsound 74, 64, DirectSoundWaveData_crash_cym_22, 255, 242, 0, 216	@ 127/100/  0/114/ 64
	voice_directsound 75, 64, DirectSoundWaveData_crash_cym_22, 255, 242, 0, 216	@ 127/100/  0/114/ 64
	voice_directsound 76, 64, DirectSoundWaveData_crash_cym_22, 255, 242, 0, 216	@ 127/100/  0/114/ 64
	voice_directsound 77, 64, DirectSoundWaveData_crash_cym_22, 255, 242, 0, 216	@ 127/100/  0/114/ 64
	voice_directsound 78, 64, DirectSoundWaveData_crash_cym_22, 255, 242, 0, 216	@ 127/100/  0/114/ 64
	voice_directsound 79, 64, DirectSoundWaveData_crash_cym_22, 255, 242, 0, 216	@ 127/100/  0/114/ 64
	voice_directsound 80, 64, DirectSoundWaveData_crash_cym_22, 255, 242, 0, 216	@ 127/100/  0/114/ 64
	voice_directsound 81, 64, DirectSoundWaveData_crash_cym_22, 255, 242, 0, 216	@ 127/100/  0/114/ 64
	voice_directsound 82, 64, DirectSoundWaveData_crash_cym_22, 255, 242, 0, 216	@ 127/100/  0/114/ 64
	voice_directsound 83, 64, DirectSoundWaveData_crash_cym_22, 255, 242, 0, 216	@ 127/100/  0/114/ 64
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
