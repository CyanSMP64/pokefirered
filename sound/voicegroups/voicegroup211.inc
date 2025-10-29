	.align 2
voicegroup211:: @ BW aspertia
	voice_keysplit BW_Grand_Piano, KeySplitTable_int_5_7_5_7 + 18
	voice_keysplit BW_Electric_Bass, KeySplitTable_2oct + 43
	voice_keysplit BW_Nylon_Guitar, KeySplitTable_int_8_9 + 19
	voice_keysplit HGSS_Strings, KeySplitTable_int_9_9 + 6
	voice_keysplit BW_French_Horn_s1, KeySplitTable_int_9 + 11
	voice_keysplit HGSS_Clarinet_s1, KeySplitTable_2oct + 8
	voice_keysplit_all BW_Aspertia_Drumset80 - 0xc * 35
	voice_directsound 60, 0, DirectSoundWaveData_chello_solo_g2_22, 188, 242, 255, 208	@ 120/100/127/116/ 64
	voice_directsound 60, 0, DirectSoundWaveData_conbas_spic_e1_32, 255, 0, 255, 178	@ 127/127/127/120/ 64

	.align 2
BW_Aspertia_Drumset80::
	voice_directsound 60, 64, DirectSoundWaveData_kick_power_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 61, 64, DirectSoundWaveData_kick_power_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 62, 64, DirectSoundWaveData_kick_power_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 60, 64, DirectSoundWaveData_snare_btry_gm_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 61, 64, DirectSoundWaveData_snare_btry_gm_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 62, 64, DirectSoundWaveData_snare_btry_gm_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 63, 64, DirectSoundWaveData_snare_btry_gm_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 60, 100, DirectSoundWaveData_hihat_closed_22, 255, 112, 0, 208	@ 127/124/  0/116/100
	voice_directsound 61, 100, DirectSoundWaveData_hihat_closed_22, 255, 112, 0, 208	@ 127/124/  0/116/100
	voice_directsound 62, 100, DirectSoundWaveData_hihat_closed_22, 255, 112, 0, 208	@ 127/124/  0/116/100
	voice_directsound 63, 100, DirectSoundWaveData_hihat_closed_22, 255, 112, 0, 208	@ 127/124/  0/116/100
	voice_directsound 60, 100, DirectSoundWaveData_hihat_open_22, 255, 241, 0, 178	@ 127/102/  0/120/100
