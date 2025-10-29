	.align 2
voicegroup247:: @ BW boy encounter
	voice_keysplit BW_Marimba, KeySplitTable_3oct + 16
	voice_keysplit BW_Nylon_Guitar, KeySplitTable_int_8 + 19
	voice_keysplit HGSS_Fretless_Bass, KeySplitTable_2oct + 24
	voice_keysplit HGSS_Clarinet, KeySplitTable_2oct + 17
	voice_keysplit_all BW_EncounterBoy_Drumset80 - 0xc * 27

	.align 2
BW_EncounterBoy_Drumset80::
	voice_directsound 60, 64, DirectSoundWaveData_handclap_2_16, 255, 0, 227, 178	@ 127/127/120/120/ 64
	voice_directsound 61, 64, DirectSoundWaveData_handclap_2_16, 255, 0, 227, 178	@ 127/127/120/120/ 64
	voice_directsound 62, 64, DirectSoundWaveData_handclap_2_16, 255, 0, 227, 178	@ 127/127/120/120/ 64
	voice_directsound 63, 64, DirectSoundWaveData_handclap_2_16, 255, 0, 227, 178	@ 127/127/120/120/ 64
	voice_directsound 64, 64, DirectSoundWaveData_handclap_2_16, 255, 0, 227, 178	@ 127/127/120/120/ 64
	voice_directsound 65, 64, DirectSoundWaveData_handclap_2_16, 255, 0, 227, 178	@ 127/127/120/120/ 64
	voice_directsound 60, 64, DirectSoundWaveData_bassdr1_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 61, 64, DirectSoundWaveData_bassdr1_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 62, 64, DirectSoundWaveData_bassdr1_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 63, 64, DirectSoundWaveData_bassdr1_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 64, 64, DirectSoundWaveData_bassdr1_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 65, 64, DirectSoundWaveData_bassdr1_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 66, 64, DirectSoundWaveData_bassdr1_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 67, 64, DirectSoundWaveData_bassdr1_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 60, 30, DirectSoundWaveData_tom_f_16, 255, 0, 255, 178	@ 127/127/127/120/ 30
	voice_directsound 61, 30, DirectSoundWaveData_tom_f_16, 255, 0, 255, 178	@ 127/127/127/120/ 30
	voice_directsound 60, 40, DirectSoundWaveData_tom_l_16, 255, 0, 255, 178	@ 127/127/127/120/ 40
	voice_directsound 61, 40, DirectSoundWaveData_tom_l_16, 255, 0, 255, 178	@ 127/127/127/120/ 40
	voice_directsound 60, 50, DirectSoundWaveData_tom_m_16, 255, 0, 255, 178	@ 127/127/127/120/ 50
	voice_directsound 61, 50, DirectSoundWaveData_tom_m_16, 255, 0, 255, 178	@ 127/127/127/120/ 50
	voice_directsound 62, 50, DirectSoundWaveData_tom_m_16, 255, 0, 255, 178	@ 127/127/127/120/ 50
	voice_directsound 63, 50, DirectSoundWaveData_tom_m_16, 255, 0, 255, 178	@ 127/127/127/120/ 50
	voice_directsound 60, 64, DirectSoundWaveData_crash_cym_22, 255, 242, 0, 216	@ 127/100/  0/114/ 64
