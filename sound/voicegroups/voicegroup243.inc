	.align 2
voicegroup243:: @ BW nacrene
	voice_keysplit BW_Electric_Piano, KeySplitTable_2oct + 22
	voice_keysplit HGSS_Vibraphone, KeySplitTable_3oct + 4
	voice_keysplit BW_Accordion, KeySplitTable_3oct + 15
	voice_keysplit HGSS_Drawbar_Organ_s1, KeySplitTable_3oct + 16
	voice_keysplit BW_Strings, KeySplitTable_int_8_9_8 + 13
	voice_directsound 60, 0, DirectSoundWaveData_ac_bass_c2_22, 255, 251, 0, 197	@ 127/ 60/  1/118/ 64
	voice_keysplit_all BW_Nacrene_Drumset81 - 0xc * 35
	voice_keysplit_all BW_Nacrene_Drumset82 - 0xc * 36

	.align 2
BW_Nacrene_Drumset81::
	voice_directsound 60, 64, DirectSoundWaveData_kick2_analog_kit_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 60, 64, DirectSoundWaveData_kick_analog_kit_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 61, 64, DirectSoundWaveData_kick_analog_kit_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 60, 64, DirectSoundWaveData_snare1_analog_kit_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 61, 64, DirectSoundWaveData_snare1_analog_kit_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 60, 64, DirectSoundWaveData_snare2_analog_kit_32, 255, 225, 127, 208	@ 127/114/ 90/116/ 64

	.align 2
BW_Nacrene_Drumset82::
	voice_directsound 60, 64, DirectSoundWaveData_kick_rockkit_st_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 61, 64, DirectSoundWaveData_kick_rockkit_st_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 62, 64, DirectSoundWaveData_kick_rockkit_st_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 63, 64, DirectSoundWaveData_kick_rockkit_st_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 60, 64, DirectSoundWaveData_snare_rockkit_st_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 61, 64, DirectSoundWaveData_snare_rockkit_st_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 60, 80, DirectSoundWaveData_hihat_closed_rockkit_st_32, 255, 222, 0, 208	@ 127/115/  0/116/ 80
	voice_directsound 61, 80, DirectSoundWaveData_hihat_closed_rockkit_st_32, 255, 222, 0, 208	@ 127/115/  0/116/ 80
	voice_directsound 62, 80, DirectSoundWaveData_hihat_closed_rockkit_st_32, 255, 222, 0, 208	@ 127/115/  0/116/ 80
	voice_directsound 63, 80, DirectSoundWaveData_hihat_closed_rockkit_st_32, 255, 222, 0, 208	@ 127/115/  0/116/ 80
	voice_directsound 60, 80, DirectSoundWaveData_hihat_open_rockkit_st_32, 255, 241, 0, 208	@ 127/102/  0/116/ 80
	voice_directsound 61, 80, DirectSoundWaveData_hihat_open_rockkit_st_32, 255, 241, 0, 208	@ 127/102/  0/116/ 80
	voice_directsound 62, 80, DirectSoundWaveData_hihat_open_rockkit_st_32, 255, 241, 0, 208	@ 127/102/  0/116/ 80
	voice_directsound 63, 80, DirectSoundWaveData_hihat_open_rockkit_st_32, 255, 241, 0, 208	@ 127/102/  0/116/ 80
	voice_directsound 64, 80, DirectSoundWaveData_hihat_open_rockkit_st_32, 255, 241, 0, 208	@ 127/102/  0/116/ 80
	voice_directsound 65, 80, DirectSoundWaveData_hihat_open_rockkit_st_32, 255, 241, 0, 208	@ 127/102/  0/116/ 80
	voice_directsound 66, 80, DirectSoundWaveData_hihat_open_rockkit_st_32, 255, 241, 0, 208	@ 127/102/  0/116/ 80
	voice_directsound 60, 30, DirectSoundWaveData_ridecym_rockkit_st_32, 255, 248, 0, 212	@ 127/ 85/  0/115/ 30
	voice_directsound 61, 30, DirectSoundWaveData_ridecym_rockkit_st_32, 255, 248, 0, 212	@ 127/ 85/  0/115/ 30
	voice_directsound 60, 84, DirectSoundWaveData_splashcym_rockkit_st_32, 255, 233, 0, 208	@ 127/110/  0/116/ 84
	voice_directsound 61, 84, DirectSoundWaveData_splashcym_rockkit_st_32, 255, 233, 0, 208	@ 127/110/  0/116/ 84
	voice_directsound 60, 40, DirectSoundWaveData_crashcym2_rockkit_st_32, 255, 251, 0, 208	@ 127/ 62/  0/116/ 40
