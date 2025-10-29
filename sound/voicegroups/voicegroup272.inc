	.align 2
voicegroup272:: @ BW icirrus
	voice_keysplit BW_Marimba, KeySplitTable_3oct + 16
	voice_keysplit BW_Accordion_s1, KeySplitTable_2oct + 9
	voice_keysplit BW_Nylon_Guitar, KeySplitTable_int_8 + 19
	voice_keysplit BW_Fretless_Bass, KeySplitTable_2oct + 23
	voice_keysplit BW_Strings, KeySplitTable_int_8_9 + 25
	voice_keysplit HGSS_Solo_Violin, KeySplitTable_int_8 + 2
	voice_keysplit BW_Akai_Flute, KeySplitTable_int_7_0 + 0
	voice_keysplit_all BW_Icirrus_Drumset39 - 0xc * 27

	.align 2
BW_Icirrus_Drumset39::
	voice_directsound 60, 64, DirectSoundWaveData_handclap_2_16, 255, 0, 227, 178	@ 127/127/120/120/ 64
	voice_directsound 61, 64, DirectSoundWaveData_handclap_2_16, 255, 0, 227, 178	@ 127/127/120/120/ 64
	voice_directsound 62, 64, DirectSoundWaveData_handclap_2_16, 255, 0, 227, 178	@ 127/127/120/120/ 64
	voice_directsound 63, 64, DirectSoundWaveData_handclap_2_16, 255, 0, 227, 178	@ 127/127/120/120/ 64
	voice_directsound 64, 64, DirectSoundWaveData_handclap_2_16, 255, 0, 227, 178	@ 127/127/120/120/ 64
	voice_directsound 65, 64, DirectSoundWaveData_handclap_2_16, 255, 0, 227, 178	@ 127/127/120/120/ 64
	voice_directsound 66, 64, DirectSoundWaveData_handclap_2_16, 255, 0, 227, 178	@ 127/127/120/120/ 64
	voice_directsound 67, 64, DirectSoundWaveData_handclap_2_16, 255, 0, 227, 178	@ 127/127/120/120/ 64
	voice_directsound 68, 64, DirectSoundWaveData_handclap_2_16, 255, 0, 227, 178	@ 127/127/120/120/ 64
	voice_directsound 60, 64, DirectSoundWaveData_kick_popkit_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 61, 58, DirectSoundWaveData_rimshot_btry_gm_32, 255, 0, 227, 208	@ 127/127/120/116/ 58
	voice_directsound 60, 64, DirectSoundWaveData_snare_btry_gm_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 60, 30, DirectSoundWaveData_handclap_btry_gm_32, 255, 0, 227, 208	@ 127/127/120/116/ 30
	voice_directsound 60, 64, DirectSoundWaveData_snare_power_16, 255, 225, 127, 178	@ 127/114/ 90/120/ 64
	voice_directsound 61, 64, DirectSoundWaveData_snare_power_16, 255, 225, 127, 178	@ 127/114/ 90/120/ 64
	voice_directsound 60, 80, DirectSoundWaveData_hihat_closed_22, 255, 242, 0, 178	@ 127/100/  0/120/ 80
	voice_directsound 61, 80, DirectSoundWaveData_hihat_closed_22, 255, 242, 0, 178	@ 127/100/  0/120/ 80
	voice_directsound 62, 80, DirectSoundWaveData_hihat_closed_22, 255, 242, 0, 178	@ 127/100/  0/120/ 80
	voice_directsound 63, 80, DirectSoundWaveData_hihat_closed_22, 255, 242, 0, 178	@ 127/100/  0/120/ 80
	voice_directsound 60, 80, DirectSoundWaveData_hihat_open_22, 255, 241, 0, 178	@ 127/102/  0/120/ 80
	voice_directsound 61, 80, DirectSoundWaveData_hihat_open_22, 255, 241, 0, 178	@ 127/102/  0/120/ 80
	voice_directsound 60, 64, DirectSoundWaveData_cymbal_orch_22, 255, 246, 0, 216	@ 127/ 90/  0/114/ 64
	voice_directsound 57, 64, DirectSoundWaveData_crash_cym_22, 255, 242, 0, 216	@ 127/100/  0/114/ 64
	voice_directsound 58, 64, DirectSoundWaveData_crash_cym_22, 255, 242, 0, 216	@ 127/100/  0/114/ 64
	voice_directsound 59, 64, DirectSoundWaveData_crash_cym_22, 255, 242, 0, 216	@ 127/100/  0/114/ 64
	voice_directsound 59, 20, DirectSoundWaveData_chinese_cym_22, 255, 250, 0, 225	@ 127/ 70/  0/110/ 20
	voice_directsound 60, 30, DirectSoundWaveData_ride_bell_16, 255, 250, 0, 212	@ 127/ 70/  0/115/ 30
	voice_directsound 60, 58, DirectSoundWaveData_tambourine_16, 255, 0, 255, 178	@ 127/127/127/120/ 58
	voice_directsound 60, 84, DirectSoundWaveData_splash_cym_22, 255, 250, 0, 178	@ 127/ 70/  0/120/ 84
	voice_directsound 60, 110, DirectSoundWaveData_cowbell_22, 255, 0, 255, 178	@ 127/127/127/120/110
	voice_directsound 60, 40, DirectSoundWaveData_crashcym1_popkit_32, 255, 251, 0, 208	@ 127/ 62/  0/116/ 40
	voice_directsound 61, 105, DirectSoundWaveData_crashcym2_popkit_32, 255, 251, 0, 208	@ 127/ 62/  0/116/105
	voice_directsound 60, 86, DirectSoundWaveData_ride_cym_22, 255, 250, 0, 216	@ 127/ 70/  0/114/ 86
	voice_directsound 60, 90, DirectSoundWaveData_bongo_16, 255, 0, 255, 178	@ 127/127/127/120/ 90
	voice_directsound 57, 90, DirectSoundWaveData_bongo_16, 255, 0, 255, 178	@ 127/127/127/120/ 90
	voice_directsound 60, 20, DirectSoundWaveData_mute_conga_16, 255, 0, 255, 178	@ 127/127/127/120/ 20
	voice_directsound 60, 24, DirectSoundWaveData_high_conga_16, 255, 0, 255, 178	@ 127/127/127/120/ 24
	voice_directsound 57, 26, DirectSoundWaveData_high_conga_16, 255, 0, 255, 178	@ 127/127/127/120/ 26
	voice_directsound 58, 26, DirectSoundWaveData_high_conga_16, 255, 0, 255, 178	@ 127/127/127/120/ 26
	voice_directsound 59, 26, DirectSoundWaveData_high_conga_16, 255, 0, 255, 178	@ 127/127/127/120/ 26
	voice_directsound 60, 34, DirectSoundWaveData_shaker_btry_gm_32, 255, 233, 127, 208	@ 127/110/ 90/116/ 34
	voice_directsound 60, 105, DirectSoundWaveData_mute_conga_16, 255, 0, 255, 178	@ 127/127/127/120/105
	voice_directsound 60, 105, DirectSoundWaveData_high_conga_btry_gm_32, 255, 0, 255, 178	@ 127/127/127/120/105
