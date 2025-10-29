	.align 2
voicegroup228:: @ BW trainer battle
	voice_directsound 60, 0, DirectSoundWaveData_glocken_c5_32, 255, 249, 0, 208	@ 127/ 75/  1/116/ 64
	voice_directsound 60, 0, DirectSoundWaveData_synth_bass_c2_32, 255, 64, 227, 178	@ 127/125/120/120/ 64
	voice_directsound 60, 0, DirectSoundWaveData_pizzicato_strings_a4_22, 255, 242, 25, 208	@ 127/100/ 40/116/ 64
	voice_keysplit BW_French_Horn_s2, KeySplitTable_2oct + 8
	voice_directsound 60, 0, DirectSoundWaveData_tuba_a2_32, 255, 233, 210, 208	@ 127/110/115/116/ 64
	voice_keysplit HGSS_Timpani, KeySplitTable_2oct + 22
	voice_directsound 60, 0, DirectSoundWaveData_strings_a4_32, 255, 242, 191, 208	@ 127/100/110/116/ 64
	voice_keysplit BW_Attack_Trumpet_Section, KeySplitTable_int_9 + 6
	voice_directsound 60, 0, DirectSoundWaveData_europat_max_wb_c3_32, 255, 242, 191, 88	@ 127/100/110/124/ 64
	voice_directsound 60, 0, DirectSoundWaveData_oche_hit_major_c4_32, 255, 0, 255, 208	@ 127/127/127/116/ 64
	voice_keysplit_all BW_Trainer_Battle_Drumset126 - 0xc * 31

	.align 2
BW_Trainer_Battle_Drumset126::
	voice_directsound 60, 64, DirectSoundWaveData_kick_power_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 61, 64, DirectSoundWaveData_kick_power_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 62, 64, DirectSoundWaveData_kick_power_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 63, 64, DirectSoundWaveData_kick_power_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 64, 64, DirectSoundWaveData_kick_power_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 65, 64, DirectSoundWaveData_kick_power_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 66, 64, DirectSoundWaveData_kick_power_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 67, 64, DirectSoundWaveData_kick_power_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 68, 64, DirectSoundWaveData_kick_power_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 60, 64, DirectSoundWaveData_snare_power_16, 255, 225, 127, 178	@ 127/114/ 90/120/ 64
	voice_directsound 60, 15, DirectSoundWaveData_tom_f_16, 255, 0, 255, 178	@ 127/127/127/120/ 15
	voice_directsound 60, 80, DirectSoundWaveData_hihat_closed_22, 255, 242, 0, 178	@ 127/100/  0/120/ 80
	voice_directsound 60, 30, DirectSoundWaveData_tom_l_16, 255, 0, 255, 178	@ 127/127/127/120/ 30
	voice_directsound 61, 30, DirectSoundWaveData_tom_l_16, 255, 0, 255, 178	@ 127/127/127/120/ 30
	voice_directsound 60, 40, DirectSoundWaveData_tom_m_16, 255, 0, 255, 178	@ 127/127/127/120/ 40
	voice_directsound 60, 90, DirectSoundWaveData_hihat_open_22, 255, 241, 0, 178	@ 127/102/  0/120/ 90
	voice_directsound 60, 100, DirectSoundWaveData_tom_h_16, 255, 0, 255, 178	@ 127/127/127/120/100
	voice_directsound 61, 110, DirectSoundWaveData_tom_h_16, 255, 0, 255, 178	@ 127/127/127/120/110
	voice_directsound 62, 120, DirectSoundWaveData_tom_h_16, 255, 0, 255, 178	@ 127/127/127/120/120
	voice_directsound 63, 120, DirectSoundWaveData_tom_h_16, 255, 0, 255, 178	@ 127/127/127/120/120
	voice_directsound 64, 120, DirectSoundWaveData_tom_h_16, 255, 0, 255, 178	@ 127/127/127/120/120
	voice_directsound 65, 120, DirectSoundWaveData_tom_h_16, 255, 0, 255, 178	@ 127/127/127/120/120
	voice_directsound 66, 120, DirectSoundWaveData_tom_h_16, 255, 0, 255, 178	@ 127/127/127/120/120
	voice_directsound 67, 120, DirectSoundWaveData_tom_h_16, 255, 0, 255, 178	@ 127/127/127/120/120
	voice_directsound 68, 120, DirectSoundWaveData_tom_h_16, 255, 0, 255, 178	@ 127/127/127/120/120
	voice_directsound 69, 120, DirectSoundWaveData_tom_h_16, 255, 0, 255, 178	@ 127/127/127/120/120
	voice_directsound 70, 120, DirectSoundWaveData_tom_h_16, 255, 0, 255, 178	@ 127/127/127/120/120
	voice_directsound 71, 120, DirectSoundWaveData_tom_h_16, 255, 0, 255, 178	@ 127/127/127/120/120
	voice_directsound 72, 120, DirectSoundWaveData_tom_h_16, 255, 0, 255, 178	@ 127/127/127/120/120
	voice_directsound 73, 120, DirectSoundWaveData_tom_h_16, 255, 0, 255, 178	@ 127/127/127/120/120
	voice_directsound 60, 64, DirectSoundWaveData_crash_cym_22, 255, 242, 0, 216	@ 127/100/  0/114/ 64
	voice_directsound 61, 64, DirectSoundWaveData_crash_cym_22, 255, 242, 0, 216	@ 127/100/  0/114/ 64
	voice_directsound 62, 64, DirectSoundWaveData_crash_cym_22, 255, 242, 0, 216	@ 127/100/  0/114/ 64
	voice_directsound 60, 20, DirectSoundWaveData_chinese_cym_22, 255, 250, 0, 225	@ 127/ 70/  0/110/ 20
	voice_directsound 60, 20, DirectSoundWaveData_crash_cym_22, 255, 242, 0, 216	@ 127/100/  0/114/ 20
	voice_directsound 60, 100, DirectSoundWaveData_crash_cym_22, 255, 242, 0, 216	@ 127/100/  0/114/100
	voice_directsound 60, 100, DirectSoundWaveData_chinese_cym_22, 255, 250, 0, 225	@ 127/ 70/  0/110/100
	voice_directsound 63, 84, DirectSoundWaveData_crash_cym_22, 255, 242, 0, 216	@ 127/100/  0/114/ 84
	voice_directsound 64, 44, DirectSoundWaveData_crash_cym_22, 255, 242, 0, 216	@ 127/100/  0/114/ 44
