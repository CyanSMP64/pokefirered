	.align 2
voicegroup273:: @ BW accumula
	voice_keysplit BW_Grand_Piano_s4, KeySplitTable_int_5_7 + 6
	voice_keysplit BW_Nylon_Guitar, KeySplitTable_int_8 + 19
	voice_keysplit HGSS_Solo_Violin, KeySplitTable_int_8 + 2
	voice_keysplit HGSS_Acoustic_Bass, KeySplitTable_2oct + 32
	voice_keysplit BW_Akai_Flute, KeySplitTable_int_7_0 + 0
	voice_keysplit_all BW_Accumula_Drumset80 - 0xc * 31

	.align 2
BW_Accumula_Drumset80::
	voice_directsound 60, 64, DirectSoundWaveData_snare_22, 255, 255, 191, 178	@ 127/  0/110/120/ 64
	voice_directsound 61, 64, DirectSoundWaveData_snare_22, 255, 255, 191, 178	@ 127/  0/110/120/ 64
	voice_directsound 62, 64, DirectSoundWaveData_snare_22, 255, 255, 191, 178	@ 127/  0/110/120/ 64
	voice_directsound 63, 64, DirectSoundWaveData_snare_22, 255, 255, 191, 178	@ 127/  0/110/120/ 64
	voice_directsound 64, 64, DirectSoundWaveData_snare_22, 255, 255, 191, 178	@ 127/  0/110/120/ 64
	voice_directsound 60, 64, DirectSoundWaveData_kick_popkit_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 61, 64, DirectSoundWaveData_kick_popkit_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 62, 64, DirectSoundWaveData_kick_popkit_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 60, 30, DirectSoundWaveData_handclap_btry_gm_32, 255, 0, 227, 208	@ 127/127/120/116/ 30
	voice_directsound 61, 30, DirectSoundWaveData_handclap_btry_gm_32, 255, 0, 227, 208	@ 127/127/120/116/ 30
	voice_directsound 60, 30, DirectSoundWaveData_tom_f_16, 255, 0, 255, 178	@ 127/127/127/120/ 30
	voice_directsound 60, 80, DirectSoundWaveData_hihat_closed_22, 255, 112, 0, 208	@ 127/124/  0/116/ 80
	voice_directsound 61, 80, DirectSoundWaveData_hihat_closed_22, 255, 112, 0, 208	@ 127/124/  0/116/ 80
	voice_directsound 62, 80, DirectSoundWaveData_hihat_closed_22, 255, 112, 0, 208	@ 127/124/  0/116/ 80
	voice_directsound 63, 80, DirectSoundWaveData_hihat_closed_22, 255, 112, 0, 208	@ 127/124/  0/116/ 80
	voice_directsound 60, 80, DirectSoundWaveData_hihat_open_22, 255, 241, 0, 178	@ 127/102/  0/120/ 80
	voice_directsound 61, 80, DirectSoundWaveData_hihat_open_22, 255, 241, 0, 178	@ 127/102/  0/120/ 80
	voice_directsound 62, 80, DirectSoundWaveData_hihat_open_22, 255, 241, 0, 178	@ 127/102/  0/120/ 80
	voice_directsound 60, 64, DirectSoundWaveData_crash_cym_22, 255, 242, 0, 216	@ 127/100/  0/114/ 64
