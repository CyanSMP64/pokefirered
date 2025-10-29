	.align 2
voicegroup253:: @ BW lady encounter
	voice_keysplit BW_Piano, KeySplitTable_5oct + 16
	voice_keysplit HGSS_Vibraphone, KeySplitTable_2oct + 10
	voice_keysplit HGSS_Drawbar_Organ_s1, KeySplitTable_3oct + 16
	voice_keysplit HGSS_Steel_Guitar, KeySplitTable_int_8_9 + 19
	voice_directsound 60, 0, DirectSoundWaveData_ac_bass_c2_22, 255, 251, 0, 197	@ 127/ 60/  1/118/ 64
	voice_keysplit HGSS_Strings, KeySplitTable_int_9_9 + 6
	voice_keysplit_all BW_LadyEncounter_Drumset39 - 0xc * 30

	.align 2
BW_LadyEncounter_Drumset39::
	voice_directsound 60, 64, DirectSoundWaveData_snare_22, 255, 255, 191, 178	@ 127/  0/110/120/ 64
	voice_directsound 61, 64, DirectSoundWaveData_snare_22, 255, 255, 191, 178	@ 127/  0/110/120/ 64
	voice_directsound 62, 64, DirectSoundWaveData_snare_22, 255, 255, 191, 178	@ 127/  0/110/120/ 64
	voice_directsound 63, 64, DirectSoundWaveData_snare_22, 255, 255, 191, 178	@ 127/  0/110/120/ 64
	voice_directsound 64, 64, DirectSoundWaveData_snare_22, 255, 255, 191, 178	@ 127/  0/110/120/ 64
	voice_directsound 60, 64, DirectSoundWaveData_bassdr_2_16, 255, 0, 255, 178	@ 127/127/127/120/ 64
	voice_directsound 61, 64, DirectSoundWaveData_bassdr_2_16, 255, 0, 255, 178	@ 127/127/127/120/ 64
	voice_directsound 62, 64, DirectSoundWaveData_bassdr_2_16, 255, 0, 255, 178	@ 127/127/127/120/ 64
	voice_directsound 63, 64, DirectSoundWaveData_bassdr_2_16, 255, 0, 255, 178	@ 127/127/127/120/ 64
	voice_directsound 64, 64, DirectSoundWaveData_bassdr_2_16, 255, 0, 255, 178	@ 127/127/127/120/ 64
	voice_directsound 65, 64, DirectSoundWaveData_bassdr_2_16, 255, 0, 255, 178	@ 127/127/127/120/ 64
	voice_directsound 66, 64, DirectSoundWaveData_bassdr_2_16, 255, 0, 255, 178	@ 127/127/127/120/ 64
	voice_directsound 60, 80, DirectSoundWaveData_hihat_closed_22, 255, 242, 0, 178	@ 127/100/  0/120/ 80
	voice_directsound 61, 80, DirectSoundWaveData_hihat_closed_22, 255, 242, 0, 178	@ 127/100/  0/120/ 80
	voice_directsound 62, 80, DirectSoundWaveData_hihat_closed_22, 255, 242, 0, 178	@ 127/100/  0/120/ 80
	voice_directsound 63, 80, DirectSoundWaveData_hihat_closed_22, 255, 242, 0, 178	@ 127/100/  0/120/ 80
	voice_directsound 60, 80, DirectSoundWaveData_hihat_open_22, 255, 241, 0, 178	@ 127/102/  0/120/ 80
	voice_directsound 61, 80, DirectSoundWaveData_hihat_open_22, 255, 241, 0, 178	@ 127/102/  0/120/ 80
	voice_directsound 62, 80, DirectSoundWaveData_hihat_open_22, 255, 241, 0, 178	@ 127/102/  0/120/ 80
	voice_directsound 63, 80, DirectSoundWaveData_hihat_open_22, 255, 241, 0, 178	@ 127/102/  0/120/ 80
	voice_directsound 64, 80, DirectSoundWaveData_hihat_open_22, 255, 241, 0, 178	@ 127/102/  0/120/ 80
	voice_directsound 65, 80, DirectSoundWaveData_hihat_open_22, 255, 241, 0, 178	@ 127/102/  0/120/ 80
	voice_directsound 66, 80, DirectSoundWaveData_hihat_open_22, 255, 241, 0, 178	@ 127/102/  0/120/ 80
	voice_directsound 67, 80, DirectSoundWaveData_hihat_open_22, 255, 241, 0, 178	@ 127/102/  0/120/ 80
	voice_directsound 60, 58, DirectSoundWaveData_tambourine_16, 255, 0, 255, 178	@ 127/127/127/120/ 58
	voice_directsound 61, 58, DirectSoundWaveData_tambourine_16, 255, 0, 255, 178	@ 127/127/127/120/ 58
	voice_directsound 62, 58, DirectSoundWaveData_tambourine_16, 255, 0, 255, 178	@ 127/127/127/120/ 58
	voice_directsound 60, 36, DirectSoundWaveData_crash_cym_22, 255, 249, 0, 216	@ 127/ 80/  0/114/ 36
