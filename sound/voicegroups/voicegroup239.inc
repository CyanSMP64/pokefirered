	.align 2
voicegroup239:: @ BW dreamyard
	voice_keysplit BW_Electric_Piano, KeySplitTable_2oct + 22
	voice_keysplit BW_Electric_Piano_Short, KeySplitTable_2oct + 22
	voice_keysplit HGSS_Strings, KeySplitTable_int_9_9 + 6
	voice_directsound 60, 0, DirectSoundWaveData_ac_bass_c2_22, 255, 251, 0, 197	@ 127/ 60/  1/118/ 64
	voice_keysplit HGSS_Pizzicato_Strings, KeySplitTable_int_9_8_9 + 11
	voice_keysplit HGSS_French_Horn, KeySplitTable_int_1_9 + 19
	voice_keysplit_all BW_Dreamyard_Drumset81 - 0xc * 28

	.align 2
BW_Dreamyard_Drumset81::
	voice_directsound 60, 64, DirectSoundWaveData_rimshot2_trinity_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 60, 64, DirectSoundWaveData_rimshot_trinity_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 61, 64, DirectSoundWaveData_rimshot_trinity_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 62, 64, DirectSoundWaveData_rimshot_trinity_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 63, 64, DirectSoundWaveData_rimshot_trinity_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 64, 64, DirectSoundWaveData_rimshot_trinity_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 65, 64, DirectSoundWaveData_rimshot_trinity_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 66, 64, DirectSoundWaveData_rimshot_trinity_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 60, 64, DirectSoundWaveData_kick_analog_kit_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 61, 64, DirectSoundWaveData_kick_analog_kit_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 60, 64, DirectSoundWaveData_snare1_analog_kit_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 61, 64, DirectSoundWaveData_snare1_analog_kit_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 60, 64, DirectSoundWaveData_snare2_analog_kit_32, 255, 225, 127, 208	@ 127/114/ 90/116/ 64
	voice_directsound 61, 64, DirectSoundWaveData_snare2_analog_kit_32, 255, 225, 127, 208	@ 127/114/ 90/116/ 64
	voice_directsound 60, 80, DirectSoundWaveData_hihat_closed_analog_kit_32, 255, 239, 0, 208	@ 127/105/  0/116/ 80
	voice_directsound 61, 80, DirectSoundWaveData_hihat_closed_analog_kit_32, 255, 239, 0, 208	@ 127/105/  0/116/ 80
	voice_directsound 62, 80, DirectSoundWaveData_hihat_closed_analog_kit_32, 255, 239, 0, 208	@ 127/105/  0/116/ 80
	voice_directsound 63, 80, DirectSoundWaveData_hihat_closed_analog_kit_32, 255, 239, 0, 208	@ 127/105/  0/116/ 80
	voice_directsound 60, 80, DirectSoundWaveData_hihat_open_analog_kit_32, 255, 241, 0, 208	@ 127/102/  0/116/ 80
	voice_directsound 61, 80, DirectSoundWaveData_hihat_open_analog_kit_32, 255, 241, 0, 208	@ 127/102/  0/116/ 80
	voice_directsound 62, 80, DirectSoundWaveData_hihat_open_analog_kit_32, 255, 241, 0, 208	@ 127/102/  0/116/ 80
	voice_directsound 60, 64, DirectSoundWaveData_crashcym1_analog_kit_32, 255, 242, 0, 208	@ 127/100/  0/116/ 64
	voice_directsound 61, 64, DirectSoundWaveData_crashcym1_analog_kit_32, 255, 242, 0, 208	@ 127/100/  0/116/ 64
	voice_directsound 62, 64, DirectSoundWaveData_crashcym1_analog_kit_32, 255, 242, 0, 208	@ 127/100/  0/116/ 64
	voice_directsound 60, 20, DirectSoundWaveData_chinesecym1_analog_kit_32, 255, 250, 0, 225	@ 127/ 70/  0/110/ 20
