	.align 2
voicegroup213:: @ BW key item fanfare
	voice_keysplit BW_Electric_Piano, KeySplitTable_2oct + 22
	voice_keysplit BW_Xylophone, KeySplitTable_int_9 + 6
	voice_keysplit HGSS_Acoustic_Bass, KeySplitTable_2oct + 32
	voice_keysplit_all BW_KeyItem_Drumset80 - 0xc * 46

	.align 2
BW_KeyItem_Drumset80::
	voice_directsound 60, 80, DirectSoundWaveData_hihat_open_22, 255, 241, 0, 178	@ 127/102/  0/120/ 80
	voice_directsound 61, 80, DirectSoundWaveData_hihat_open_22, 255, 241, 0, 178	@ 127/102/  0/120/ 80
	voice_directsound 62, 80, DirectSoundWaveData_hihat_open_22, 255, 241, 0, 178	@ 127/102/  0/120/ 80
	voice_directsound 63, 80, DirectSoundWaveData_hihat_open_22, 255, 241, 0, 178	@ 127/102/  0/120/ 80
	voice_directsound 64, 80, DirectSoundWaveData_hihat_open_22, 255, 241, 0, 178	@ 127/102/  0/120/ 80
	voice_directsound 65, 80, DirectSoundWaveData_hihat_open_22, 255, 241, 0, 178	@ 127/102/  0/120/ 80
	voice_directsound 66, 80, DirectSoundWaveData_hihat_open_22, 255, 241, 0, 178	@ 127/102/  0/120/ 80
	voice_directsound 67, 80, DirectSoundWaveData_hihat_open_22, 255, 241, 0, 178	@ 127/102/  0/120/ 80
	voice_directsound 60, 58, DirectSoundWaveData_tambourine_32, 255, 0, 227, 208	@ 127/127/120/116/ 58
