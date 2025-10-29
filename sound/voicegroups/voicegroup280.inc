	.align 2
voicegroup280:: @ BW driftveil
	voice_keysplit BW_Electric_Piano, KeySplitTable_2oct + 22
	voice_keysplit BW_Marimba, KeySplitTable_3oct + 16
	voice_keysplit BW_Glockenspiel2, KeySplitTable_3oct + 14
	voice_keysplit HGSS_Drawbar_Organ_s1, KeySplitTable_3oct + 16
	voice_keysplit HGSS_Synth_Bass, KeySplitTable_2oct + 34
	voice_keysplit HGSS_Trombone, KeySplitTable_int_9 + 23
	voice_keysplit_all BW_Driftveil_Drumset80 - 0xc * 26
	voice_keysplit_all BW_Driftveil_Drumset81 - 0xc * 36

	.align 2
BW_Driftveil_Drumset80::
	voice_directsound 48, 64, DirectSoundWaveData_reverse_cym_16, 2, 0, 227, 178	@   3/127/120/120/ 64
	voice_directsound 49, 64, DirectSoundWaveData_reverse_cym_16, 2, 0, 227, 178	@   3/127/120/120/ 64
	voice_directsound 50, 64, DirectSoundWaveData_reverse_cym_16, 2, 0, 227, 178	@   3/127/120/120/ 64
	voice_directsound 51, 64, DirectSoundWaveData_reverse_cym_16, 2, 0, 227, 178	@   3/127/120/120/ 64
	voice_directsound 52, 64, DirectSoundWaveData_reverse_cym_16, 2, 0, 227, 178	@   3/127/120/120/ 64
	voice_directsound 53, 64, DirectSoundWaveData_reverse_cym_16, 2, 0, 227, 178	@   3/127/120/120/ 64
	voice_directsound 54, 64, DirectSoundWaveData_reverse_cym_16, 2, 0, 227, 178	@   3/127/120/120/ 64
	voice_directsound 55, 64, DirectSoundWaveData_reverse_cym_16, 2, 0, 227, 178	@   3/127/120/120/ 64
	voice_directsound 56, 64, DirectSoundWaveData_reverse_cym_16, 2, 0, 227, 178	@   3/127/120/120/ 64
	voice_directsound 60, 64, DirectSoundWaveData_kick_power_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 61, 64, DirectSoundWaveData_kick_power_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 62, 64, DirectSoundWaveData_kick_power_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 63, 64, DirectSoundWaveData_kick_power_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 64, 64, DirectSoundWaveData_kick_power_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 65, 64, DirectSoundWaveData_kick_power_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 66, 64, DirectSoundWaveData_kick_power_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 67, 64, DirectSoundWaveData_kick_power_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 68, 64, DirectSoundWaveData_kick_power_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 69, 64, DirectSoundWaveData_kick_power_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 70, 64, DirectSoundWaveData_kick_power_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 71, 64, DirectSoundWaveData_kick_power_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 72, 64, DirectSoundWaveData_kick_power_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 73, 64, DirectSoundWaveData_kick_power_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 74, 64, DirectSoundWaveData_kick_power_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 75, 64, DirectSoundWaveData_kick_power_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 76, 64, DirectSoundWaveData_kick_power_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 77, 64, DirectSoundWaveData_kick_power_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 78, 64, DirectSoundWaveData_kick_power_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 79, 64, DirectSoundWaveData_kick_power_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 80, 64, DirectSoundWaveData_kick_power_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 60, 110, DirectSoundWaveData_cowbell_22, 255, 0, 255, 178	@ 127/127/127/120/110
	voice_directsound 61, 110, DirectSoundWaveData_cowbell_22, 255, 0, 255, 178	@ 127/127/127/120/110
	voice_directsound 62, 110, DirectSoundWaveData_cowbell_22, 255, 0, 255, 178	@ 127/127/127/120/110
	voice_directsound 63, 110, DirectSoundWaveData_cowbell_22, 255, 0, 255, 178	@ 127/127/127/120/110
	voice_directsound 60, 90, DirectSoundWaveData_bongo_16, 255, 0, 255, 178	@ 127/127/127/120/ 90
	voice_directsound 57, 90, DirectSoundWaveData_bongo_16, 255, 0, 255, 178	@ 127/127/127/120/ 90
	voice_directsound 58, 90, DirectSoundWaveData_bongo_16, 255, 0, 255, 178	@ 127/127/127/120/ 90
	voice_directsound 59, 90, DirectSoundWaveData_bongo_16, 255, 0, 255, 178	@ 127/127/127/120/ 90
	voice_directsound 60, 90, DirectSoundWaveData_bongo_16, 255, 0, 255, 178	@ 127/127/127/120/ 90
	voice_directsound 61, 90, DirectSoundWaveData_bongo_16, 255, 0, 255, 178	@ 127/127/127/120/ 90
	voice_directsound 60, 30, DirectSoundWaveData_cabasa_32, 255, 242, 127, 178	@ 127/100/ 90/120/ 30
	voice_directsound 61, 30, DirectSoundWaveData_cabasa_32, 255, 242, 127, 178	@ 127/100/ 90/120/ 30
	voice_directsound 62, 30, DirectSoundWaveData_cabasa_32, 255, 242, 127, 178	@ 127/100/ 90/120/ 30
	voice_directsound 63, 30, DirectSoundWaveData_cabasa_32, 255, 242, 127, 178	@ 127/100/ 90/120/ 30
	voice_directsound 63, 105, DirectSoundWaveData_high_conga_16, 255, 0, 255, 178	@ 127/127/127/120/105

	.align 2
BW_Driftveil_Drumset81::
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
	voice_directsound 64, 80, DirectSoundWaveData_hihat_closed_analog_kit_32, 255, 239, 0, 208	@ 127/105/  0/116/ 80
	voice_directsound 65, 80, DirectSoundWaveData_hihat_closed_analog_kit_32, 255, 239, 0, 208	@ 127/105/  0/116/ 80
	voice_directsound 66, 80, DirectSoundWaveData_hihat_closed_analog_kit_32, 255, 239, 0, 208	@ 127/105/  0/116/ 80
	voice_directsound 60, 64, DirectSoundWaveData_crashcym1_analog_kit_32, 255, 242, 0, 208	@ 127/100/  0/116/ 64
