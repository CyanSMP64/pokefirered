	.align 2
voicegroup271:: @ BW regi battle
	voice_keysplit_all BW_Regi_Drumset1 - 0xc * 31
	voice_directsound 60, 0, DirectSoundSynthData_squ50, 255, 242, 25, 0	@ 126/100/ 40/127/ 64
	voice_directsound 60, 0, DirectSoundWaveData_slapbass_c2_32, 255, 64, 227, 178	@ 127/125/120/120/ 64
	voice_keysplit HGSS_Strings, KeySplitTable_int_9_9 + 6
	voice_keysplit BW_Timpani_Ghetsis, KeySplitTable_3oct + 31
	voice_keysplit HGSS_Trumpet_Section, KeySplitTable_int_9 + 6
	voice_keysplit DP_Trombone, KeySplitTable_int_10 + 19
	voice_keysplit BW_French_Horn, KeySplitTable_int_8_9 + 19
	voice_directsound 60, 0, DirectSoundSynthData_squ12, 255, 242, 101, 225	@ 124/100/ 80/110/ 64
	voice_directsound 60, 0, DirectSoundSynthData_squ50, 255, 242, 101, 225	@ 124/100/ 80/110/ 64
	voice_directsound 60, 0, DirectSoundWaveData_europat_c3_16, 255, 197, 255, 178	@ 127/120/127/120/ 64

	.align 2
BW_Regi_Drumset1::
	voice_directsound 60, 64, DirectSoundWaveData_snare_power_16, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 61, 64, DirectSoundWaveData_snare_power_16, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 62, 64, DirectSoundWaveData_snare_power_16, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 63, 64, DirectSoundWaveData_snare_power_16, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 64, 64, DirectSoundWaveData_snare_power_16, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 60, 64, DirectSoundWaveData_swan_new_synth_kick_22, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 61, 64, DirectSoundWaveData_swan_new_synth_kick_22, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 62, 64, DirectSoundWaveData_swan_new_synth_kick_22, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 63, 64, DirectSoundWaveData_swan_new_synth_kick_22, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 64, 64, DirectSoundWaveData_swan_new_synth_kick_22, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 65, 64, DirectSoundWaveData_swan_new_synth_kick_22, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 60, 110, DirectSoundWaveData_hihat_closed_22, 255, 112, 0, 208	@ 127/124/  0/116/110
	voice_directsound 60, 110, DirectSoundWaveData_hihat_open_22, 255, 241, 0, 178	@ 127/102/  0/120/110
	voice_directsound 61, 110, DirectSoundWaveData_hihat_open_22, 255, 241, 0, 178	@ 127/102/  0/120/110
	voice_directsound 62, 110, DirectSoundWaveData_hihat_open_22, 255, 241, 0, 178	@ 127/102/  0/120/110
	voice_directsound 63, 110, DirectSoundWaveData_hihat_open_22, 255, 241, 0, 178	@ 127/102/  0/120/110
	voice_directsound 55, 10, DirectSoundWaveData_tom_f_16, 255, 0, 255, 178	@ 127/127/127/120/ 10
	voice_directsound 56, 10, DirectSoundWaveData_tom_f_16, 255, 0, 255, 178	@ 127/127/127/120/ 10
	voice_directsound 57, 10, DirectSoundWaveData_tom_f_16, 255, 0, 255, 178	@ 127/127/127/120/ 10
	voice_directsound 58, 10, DirectSoundWaveData_tom_f_16, 255, 0, 255, 178	@ 127/127/127/120/ 10
	voice_directsound 59, 10, DirectSoundWaveData_tom_f_16, 255, 0, 255, 178	@ 127/127/127/120/ 10
	voice_directsound 60, 10, DirectSoundWaveData_tom_f_16, 255, 0, 255, 178	@ 127/127/127/120/ 10
	voice_directsound 60, 30, DirectSoundWaveData_tom_f_16, 255, 0, 255, 178	@ 127/127/127/120/ 30
	voice_directsound 61, 30, DirectSoundWaveData_tom_f_16, 255, 0, 255, 178	@ 127/127/127/120/ 30
	voice_directsound 60, 40, DirectSoundWaveData_tom_l_16, 255, 0, 255, 178	@ 127/127/127/120/ 40
	voice_directsound 61, 40, DirectSoundWaveData_tom_l_16, 255, 0, 255, 178	@ 127/127/127/120/ 40
	voice_directsound 60, 50, DirectSoundWaveData_tom_m_16, 255, 0, 255, 178	@ 127/127/127/120/ 50
	voice_directsound 61, 50, DirectSoundWaveData_tom_m_16, 255, 0, 255, 178	@ 127/127/127/120/ 50
	voice_directsound 60, 100, DirectSoundWaveData_tom_h_16, 255, 0, 255, 178	@ 127/127/127/120/100
	voice_directsound 61, 100, DirectSoundWaveData_tom_h_16, 255, 0, 255, 178	@ 127/127/127/120/100
	voice_directsound 62, 100, DirectSoundWaveData_tom_h_16, 255, 0, 255, 178	@ 127/127/127/120/100
	voice_directsound 63, 100, DirectSoundWaveData_tom_h_16, 255, 0, 255, 178	@ 127/127/127/120/100
	voice_directsound 64, 100, DirectSoundWaveData_tom_h_16, 255, 0, 255, 178	@ 127/127/127/120/100
	voice_directsound 65, 100, DirectSoundWaveData_tom_h_16, 255, 0, 255, 178	@ 127/127/127/120/100
	voice_directsound 66, 100, DirectSoundWaveData_tom_h_16, 255, 0, 255, 178	@ 127/127/127/120/100
	voice_directsound 67, 100, DirectSoundWaveData_tom_h_16, 255, 0, 255, 178	@ 127/127/127/120/100
	voice_directsound 68, 100, DirectSoundWaveData_tom_h_16, 255, 0, 255, 178	@ 127/127/127/120/100
	voice_directsound 69, 100, DirectSoundWaveData_tom_h_16, 255, 0, 255, 178	@ 127/127/127/120/100
	voice_directsound 70, 100, DirectSoundWaveData_tom_h_16, 255, 0, 255, 178	@ 127/127/127/120/100
	voice_directsound 71, 100, DirectSoundWaveData_tom_h_16, 255, 0, 255, 178	@ 127/127/127/120/100
	voice_directsound 72, 100, DirectSoundWaveData_tom_h_16, 255, 0, 255, 178	@ 127/127/127/120/100
	voice_directsound 73, 100, DirectSoundWaveData_tom_h_16, 255, 0, 255, 178	@ 127/127/127/120/100
	voice_directsound 60, 64, DirectSoundWaveData_crash_cym_22, 255, 242, 0, 216	@ 127/100/  0/114/ 64
	voice_directsound 61, 64, DirectSoundWaveData_crash_cym_22, 255, 242, 0, 216	@ 127/100/  0/114/ 64
	voice_directsound 62, 64, DirectSoundWaveData_crash_cym_22, 255, 242, 0, 216	@ 127/100/  0/114/ 64
	voice_directsound 60, 20, DirectSoundWaveData_chinese_cym_22, 255, 250, 0, 225	@ 127/ 70/  0/110/ 20
	voice_directsound 60, 20, DirectSoundWaveData_crash_cym_22, 255, 242, 0, 216	@ 127/100/  0/114/ 20
	voice_directsound 60, 100, DirectSoundWaveData_crash_cym_22, 255, 242, 0, 216	@ 127/100/  0/114/100
	voice_directsound 60, 100, DirectSoundWaveData_chinese_cym_22, 255, 250, 0, 225	@ 127/ 70/  0/110/100
	voice_directsound 75, 84, DirectSoundWaveData_crash_cym_22, 255, 242, 0, 216	@ 127/100/  0/114/ 84
	voice_directsound 76, 44, DirectSoundWaveData_crash_cym_22, 255, 242, 0, 216	@ 127/100/  0/114/ 44
