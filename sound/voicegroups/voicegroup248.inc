	.align 2
voicegroup248:: @ BW girl encounter
	voice_keysplit BW_Electric_Piano, KeySplitTable_2oct + 22
	voice_keysplit HGSS_Vibraphone, KeySplitTable_3oct + 4
	voice_keysplit BW_Nylon_Guitar, KeySplitTable_int_8 + 19
	voice_keysplit HGSS_Acoustic_Bass, KeySplitTable_2oct + 32
	voice_keysplit BW_Strings, KeySplitTable_int_8_9 + 25
	voice_keysplit_all BW_EncounterGirl_Drumset80 - 0xc * 67

	.align 2
BW_EncounterGirl_Drumset80::
	voice_directsound 60, 26, DirectSoundWaveData_cabasa_16, 255, 242, 127, 178	@ 127/100/ 90/120/ 26
	voice_directsound 61, 26, DirectSoundWaveData_cabasa_16, 255, 242, 127, 178	@ 127/100/ 90/120/ 26
	voice_directsound 62, 26, DirectSoundWaveData_cabasa_16, 255, 242, 127, 178	@ 127/100/ 90/120/ 26
	voice_directsound 63, 26, DirectSoundWaveData_cabasa_16, 255, 242, 127, 178	@ 127/100/ 90/120/ 26
	voice_directsound 64, 26, DirectSoundWaveData_cabasa_16, 255, 242, 127, 178	@ 127/100/ 90/120/ 26
	voice_directsound 65, 26, DirectSoundWaveData_cabasa_16, 255, 242, 127, 178	@ 127/100/ 90/120/ 26
	voice_directsound 66, 26, DirectSoundWaveData_cabasa_16, 255, 242, 127, 178	@ 127/100/ 90/120/ 26
	voice_directsound 67, 26, DirectSoundWaveData_cabasa_16, 255, 242, 127, 178	@ 127/100/ 90/120/ 26
	voice_directsound 68, 26, DirectSoundWaveData_cabasa_16, 255, 242, 127, 178	@ 127/100/ 90/120/ 26
	voice_directsound 60, 34, DirectSoundWaveData_shaker_btry_gm_32, 255, 233, 127, 208	@ 127/110/ 90/116/ 34
