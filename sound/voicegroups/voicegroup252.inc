	.align 2
voicegroup252:: @ BW roughneck encounter
	voice_keysplit BW_Piano, KeySplitTable_5oct + 16
	voice_keysplit HGSS_Attack_Piano, KeySplitTable_2oct + 10
	voice_keysplit HGSS_Synth_Bass, KeySplitTable_2oct + 34
	voice_keysplit BW_Sax, KeySplitTable_3oct + 15
	voice_keysplit_all BW_RoughneckEncounter_Drumset_80 - 0xc * 31

	.align 2
BW_RoughneckEncounter_Drumset_80::
	voice_directsound 60, 64, DirectSoundWaveData_snare_22, 255, 255, 191, 178	@ 127/  0/110/120/ 64
	voice_directsound 61, 64, DirectSoundWaveData_snare_22, 255, 255, 191, 178	@ 127/  0/110/120/ 64
	voice_directsound 62, 64, DirectSoundWaveData_snare_22, 255, 255, 191, 178	@ 127/  0/110/120/ 64
	voice_directsound 60, 64, DirectSoundWaveData_bassdr2_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 61, 64, DirectSoundWaveData_bassdr2_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 62, 64, DirectSoundWaveData_bassdr2_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 63, 64, DirectSoundWaveData_bassdr2_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
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
	voice_directsound 60, 64, DirectSoundWaveData_crash_cym_22, 255, 242, 0, 216	@ 127/100/  0/114/ 64
