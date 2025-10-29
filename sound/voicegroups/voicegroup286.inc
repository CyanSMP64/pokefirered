	.align 2
voicegroup286:: @ BW surf
	voice_keysplit BW_Grand_Piano_s5, KeySplitTable_int_7 + 1
	voice_keysplit HGSS_Vibraphone_s1, KeySplitTable_2oct - 2
	voice_keysplit HGSS_Synth_Bass, KeySplitTable_2oct + 34
	voice_keysplit HGSS_Strings, KeySplitTable_int_9_9 + 6
	voice_keysplit HGSS_Harp, KeySplitTable_3oct + 16
	voice_keysplit HGSS_Trumpet_Section, KeySplitTable_int_9 + 6
	voice_keysplit HGSS_French_Horn_s1, KeySplitTable_int_9 + 18
	voice_keysplit_all BW_Surf_Drumset80 - 0xc * 33

	.align 2
BW_Surf_Drumset80::
	voice_directsound 60, 64, DirectSoundWaveData_bassdr1_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 61, 64, DirectSoundWaveData_bassdr1_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 62, 64, DirectSoundWaveData_bassdr1_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 63, 64, DirectSoundWaveData_bassdr1_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 64, 64, DirectSoundWaveData_bassdr1_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 65, 64, DirectSoundWaveData_bassdr1_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 66, 64, DirectSoundWaveData_bassdr1_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 60, 64, DirectSoundWaveData_snare_power_16, 255, 225, 127, 178	@ 127/114/ 90/120/ 64
	voice_directsound 60, 30, DirectSoundWaveData_tom_f_16, 255, 0, 255, 178	@ 127/127/127/120/ 30
	voice_directsound 60, 80, DirectSoundWaveData_hihat_closed_22, 255, 112, 0, 208	@ 127/124/  0/116/ 80
	voice_directsound 60, 40, DirectSoundWaveData_tom_l_16, 255, 0, 255, 178	@ 127/127/127/120/ 40
	voice_directsound 61, 40, DirectSoundWaveData_tom_l_16, 255, 0, 255, 178	@ 127/127/127/120/ 40
	voice_directsound 60, 50, DirectSoundWaveData_tom_m_16, 255, 0, 255, 178	@ 127/127/127/120/ 50
	voice_directsound 60, 80, DirectSoundWaveData_hihat_open_22, 255, 241, 0, 178	@ 127/102/  0/120/ 80
	voice_directsound 60, 100, DirectSoundWaveData_tom_h_16, 255, 0, 255, 178	@ 127/127/127/120/100
	voice_directsound 61, 100, DirectSoundWaveData_tom_h_16, 255, 0, 255, 178	@ 127/127/127/120/100
	voice_directsound 60, 64, DirectSoundWaveData_crash_cym_22, 255, 242, 0, 216	@ 127/100/  0/114/ 64
	voice_directsound 61, 64, DirectSoundWaveData_crash_cym_22, 255, 242, 0, 216	@ 127/100/  0/114/ 64
	voice_directsound 62, 64, DirectSoundWaveData_crash_cym_22, 255, 242, 0, 216	@ 127/100/  0/114/ 64
	voice_directsound 60, 20, DirectSoundWaveData_chinese_cym_22, 255, 250, 0, 225	@ 127/ 70/  0/110/ 20
