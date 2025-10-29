	.align 2
voicegroup227:: @ BW evolution
	voice_keysplit BW_Electric_Guitar_Solo, KeySplitTable_int_8 + 19
	voice_keysplit HGSS_Fretless_Bass, KeySplitTable_2oct + 24
	voice_directsound 60, 0, DirectSoundWaveData_synth_bass_c2_22, 255, 64, 227, 178	@ 127/125/120/120/ 64
	voice_keysplit HGSS_Strings, KeySplitTable_2oct + 12
	voice_keysplit HGSS_Timpani, KeySplitTable_2oct + 22
	voice_keysplit_all BW_Evolution_Drumset39 - 0xc * 35

	.align 2
BW_Evolution_Drumset39::
	voice_directsound 60, 64, DirectSoundWaveData_bassdr_2_16, 255, 0, 255, 178	@ 127/127/127/120/ 64
	voice_directsound 61, 64, DirectSoundWaveData_bassdr_2_16, 255, 0, 255, 178	@ 127/127/127/120/ 64
	voice_directsound 62, 64, DirectSoundWaveData_bassdr_2_16, 255, 0, 255, 178	@ 127/127/127/120/ 64
	voice_directsound 63, 64, DirectSoundWaveData_bassdr_2_16, 255, 0, 255, 178	@ 127/127/127/120/ 64
	voice_directsound 64, 64, DirectSoundWaveData_bassdr_2_16, 255, 0, 255, 178	@ 127/127/127/120/ 64
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
