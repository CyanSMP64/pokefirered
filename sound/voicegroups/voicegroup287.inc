	.align 2
voicegroup287:: @ BW hall of fame
	voice_keysplit BW_Grand_Piano_s4, KeySplitTable_int_5_7 + 6
	voice_keysplit BW_Electric_Piano, KeySplitTable_2oct + 22
	voice_keysplit HGSS_Vibraphone, KeySplitTable_3oct + 4
	voice_keysplit HGSS_Synth_Bass, KeySplitTable_2oct + 34
	voice_keysplit HGSS_Strings, KeySplitTable_int_9 + 6
	voice_keysplit_all BW_HallOfFame_Drumset81 - 0xc * 35
	voice_keysplit BW_Bass_Lead_s1, KeySplitTable_2oct + 10
	voice_directsound 60, 0, DirectSoundSynthData_squ50, 255, 0, 255, 0	@ 126/127/127/127/ 64
	voice_directsound 60, 0, DirectSoundWaveData_purenoise, 255, 0, 255, 178	@ 125/127/127/120/ 64

	.align 2
BW_HallOfFame_Drumset81::
	voice_directsound 60, 64, DirectSoundWaveData_ryhthm_01_22, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 60, 64, DirectSoundWaveData_Noise_Kick_01d_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 61, 64, DirectSoundWaveData_Noise_Kick_01d_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 62, 64, DirectSoundWaveData_Noise_Kick_01d_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 63, 64, DirectSoundWaveData_Noise_Kick_01d_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 64, 64, DirectSoundWaveData_Noise_Kick_01d_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 65, 64, DirectSoundWaveData_Noise_Kick_01d_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 60, 80, DirectSoundWaveData_hihat_closed_analog_kit_32, 255, 239, 0, 208	@ 127/105/  0/116/ 80
	voice_directsound 61, 80, DirectSoundWaveData_hihat_closed_analog_kit_32, 255, 239, 0, 208	@ 127/105/  0/116/ 80
	voice_directsound 62, 80, DirectSoundWaveData_hihat_closed_analog_kit_32, 255, 239, 0, 208	@ 127/105/  0/116/ 80
	voice_directsound 63, 80, DirectSoundWaveData_hihat_closed_analog_kit_32, 255, 239, 0, 208	@ 127/105/  0/116/ 80
	voice_directsound 60, 80, DirectSoundWaveData_hihat_open_analog_kit_32, 255, 241, 0, 208	@ 127/102/  0/116/ 80
	voice_directsound 61, 80, DirectSoundWaveData_hihat_open_analog_kit_32, 255, 241, 0, 208	@ 127/102/  0/116/ 80
	voice_directsound 62, 80, DirectSoundWaveData_hihat_open_analog_kit_32, 255, 241, 0, 208	@ 127/102/  0/116/ 80
	voice_directsound 60, 64, DirectSoundWaveData_crashcym1_analog_kit_32, 255, 242, 0, 208	@ 127/100/  0/116/ 64
