	.align 2
voicegroup238:: @ BW route 2
	voice_keysplit BW_Grand_Piano_s6, KeySplitTable_2oct + 0
	voice_keysplit HGSS_Electric_Piano, KeySplitTable_2oct + 22
	voice_keysplit BW_Marimba, KeySplitTable_3oct + 16
	voice_keysplit BW_Strings, KeySplitTable_int_8_9 + 25
	voice_keysplit HGSS_Pizzicato_Strings, KeySplitTable_int_9_8_9 + 11
	voice_keysplit HGSS_French_Horn, KeySplitTable_int_1_9 + 19
	voice_keysplit HGSS_Clarinet, KeySplitTable_int_9 + 11
	voice_keysplit HGSS_Piccolo_Flute, KeySplitTable_int_9_7 + 6
	voice_directsound 60, 0, DirectSoundWaveData_whistle_long_32, 255, 0, 255, 178	@ 127/127/127/120/ 64
	voice_keysplit_all BW_Route2_Drumset80 - 0xc * 38

	.align 2
BW_Route2_Drumset80::
	voice_directsound 60, 64, DirectSoundWaveData_snare_btry_gm_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 61, 64, DirectSoundWaveData_snare_btry_gm_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 62, 64, DirectSoundWaveData_snare_btry_gm_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 63, 64, DirectSoundWaveData_snare_btry_gm_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 64, 64, DirectSoundWaveData_snare_btry_gm_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 65, 64, DirectSoundWaveData_snare_btry_gm_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 66, 64, DirectSoundWaveData_snare_btry_gm_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 67, 64, DirectSoundWaveData_snare_btry_gm_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 68, 64, DirectSoundWaveData_snare_btry_gm_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 69, 64, DirectSoundWaveData_snare_btry_gm_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 70, 64, DirectSoundWaveData_snare_btry_gm_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 71, 64, DirectSoundWaveData_snare_btry_gm_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 72, 64, DirectSoundWaveData_snare_btry_gm_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 73, 64, DirectSoundWaveData_snare_btry_gm_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 74, 64, DirectSoundWaveData_snare_btry_gm_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 75, 64, DirectSoundWaveData_snare_btry_gm_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 76, 64, DirectSoundWaveData_snare_btry_gm_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 77, 64, DirectSoundWaveData_snare_btry_gm_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 78, 64, DirectSoundWaveData_snare_btry_gm_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 60, 40, DirectSoundWaveData_crashcym1_popkit_32, 255, 251, 0, 208	@ 127/ 62/  0/116/ 40
	voice_directsound 61, 105, DirectSoundWaveData_crashcym2_popkit_32, 255, 251, 0, 208	@ 127/ 62/  0/116/105
	voice_directsound 62, 105, DirectSoundWaveData_crashcym2_popkit_32, 255, 251, 0, 208	@ 127/ 62/  0/116/105
	voice_directsound 63, 105, DirectSoundWaveData_crashcym2_popkit_32, 255, 251, 0, 208	@ 127/ 62/  0/116/105
	voice_directsound 64, 105, DirectSoundWaveData_crashcym2_popkit_32, 255, 251, 0, 208	@ 127/ 62/  0/116/105
	voice_directsound 65, 105, DirectSoundWaveData_crashcym2_popkit_32, 255, 251, 0, 208	@ 127/ 62/  0/116/105
	voice_directsound 66, 105, DirectSoundWaveData_crashcym2_popkit_32, 255, 251, 0, 208	@ 127/ 62/  0/116/105
	voice_directsound 67, 105, DirectSoundWaveData_crashcym2_popkit_32, 255, 251, 0, 208	@ 127/ 62/  0/116/105
	voice_directsound 68, 105, DirectSoundWaveData_crashcym2_popkit_32, 255, 251, 0, 208	@ 127/ 62/  0/116/105
	voice_directsound 69, 105, DirectSoundWaveData_crashcym2_popkit_32, 255, 251, 0, 208	@ 127/ 62/  0/116/105
	voice_directsound 70, 105, DirectSoundWaveData_crashcym2_popkit_32, 255, 251, 0, 208	@ 127/ 62/  0/116/105
	voice_directsound 71, 105, DirectSoundWaveData_crashcym2_popkit_32, 255, 251, 0, 208	@ 127/ 62/  0/116/105
	voice_directsound 72, 105, DirectSoundWaveData_crashcym2_popkit_32, 255, 251, 0, 208	@ 127/ 62/  0/116/105
	voice_directsound 73, 105, DirectSoundWaveData_crashcym2_popkit_32, 255, 251, 0, 208	@ 127/ 62/  0/116/105
	voice_directsound 74, 105, DirectSoundWaveData_crashcym2_popkit_32, 255, 251, 0, 208	@ 127/ 62/  0/116/105
	voice_directsound 75, 105, DirectSoundWaveData_crashcym2_popkit_32, 255, 251, 0, 208	@ 127/ 62/  0/116/105
	voice_directsound 76, 105, DirectSoundWaveData_crashcym2_popkit_32, 255, 251, 0, 208	@ 127/ 62/  0/116/105
	voice_directsound 77, 105, DirectSoundWaveData_crashcym2_popkit_32, 255, 251, 0, 208	@ 127/ 62/  0/116/105
	voice_directsound 78, 105, DirectSoundWaveData_crashcym2_popkit_32, 255, 251, 0, 208	@ 127/ 62/  0/116/105
	voice_directsound 79, 105, DirectSoundWaveData_crashcym2_popkit_32, 255, 251, 0, 208	@ 127/ 62/  0/116/105
	voice_directsound 80, 105, DirectSoundWaveData_crashcym2_popkit_32, 255, 251, 0, 208	@ 127/ 62/  0/116/105
	voice_directsound 81, 105, DirectSoundWaveData_crashcym2_popkit_32, 255, 251, 0, 208	@ 127/ 62/  0/116/105
	voice_directsound 82, 105, DirectSoundWaveData_crashcym2_popkit_32, 255, 251, 0, 208	@ 127/ 62/  0/116/105
	voice_directsound 83, 105, DirectSoundWaveData_crashcym2_popkit_32, 255, 251, 0, 208	@ 127/ 62/  0/116/105
	voice_directsound 84, 105, DirectSoundWaveData_crashcym2_popkit_32, 255, 251, 0, 208	@ 127/ 62/  0/116/105
	voice_directsound 85, 105, DirectSoundWaveData_crashcym2_popkit_32, 255, 251, 0, 208	@ 127/ 62/  0/116/105
	voice_directsound 86, 105, DirectSoundWaveData_crashcym2_popkit_32, 255, 251, 0, 208	@ 127/ 62/  0/116/105
	voice_directsound 87, 105, DirectSoundWaveData_crashcym2_popkit_32, 255, 251, 0, 208	@ 127/ 62/  0/116/105
	voice_directsound 60, 44, DirectSoundWaveData_triangle_16, 255, 249, 0, 197	@ 127/ 80/  0/118/ 44
