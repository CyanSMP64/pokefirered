	.align 2
voicegroup263:: @ BW dragonspiral tower
	voice_keysplit BW_Grand_Piano_s4, KeySplitTable_int_5_7 + 6
	voice_keysplit BW_Electric_Piano, KeySplitTable_2oct + 22
	voice_keysplit HGSS_Synth_Bass, KeySplitTable_2oct + 34
	voice_keysplit HGSS_Strings, KeySplitTable_int_9_9 + 6
	voice_keysplit HGSS_Pizzicato_Strings, KeySplitTable_int_9_8_9 + 11
	voice_keysplit HGSS_Oboe, KeySplitTable_2oct + 8
	voice_keysplit_all BW_DragonspiralTower_Drumset81 - 0xc * 36

	.align 2
BW_DragonspiralTower_Drumset81::
	voice_directsound 60, 64, DirectSoundWaveData_kick_analog_kit_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 61, 64, DirectSoundWaveData_kick_analog_kit_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 62, 64, DirectSoundWaveData_kick_analog_kit_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 63, 64, DirectSoundWaveData_kick_analog_kit_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 64, 64, DirectSoundWaveData_kick_analog_kit_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 65, 64, DirectSoundWaveData_kick_analog_kit_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 60, 80, DirectSoundWaveData_hihat_closed_analog_kit_32, 255, 239, 0, 208	@ 127/105/  0/116/ 80
