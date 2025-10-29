	.align 2
voicegroup255:: @ BW psychic encounter
	voice_directsound 60, 0, DirectSoundWaveData_reverse_cym_16, 255, 197, 255, 178	@ 127/120/127/120/ 64
	voice_directsound 60, 0, DirectSoundWaveData_ac_bass_c2_22, 255, 251, 0, 197	@ 127/ 60/  1/118/ 64
	voice_keysplit HGSS_Fretless_Bass, KeySplitTable_2oct + 24
	voice_keysplit HGSS_Synth_Bass, KeySplitTable_2oct + 34
	voice_keysplit HGSS_Strings, KeySplitTable_int_9_9 + 6
	voice_keysplit_all BW_PsychicEncounter_Drumset39 - 0xc * 30
	voice_directsound 60, 64, DirectSoundWaveData_bassdr_1_16, 255, 0, 227, 178	@ 127/127/120/120/ 64
	voice_directsound 60, 64, DirectSoundWaveData_bassdr_2_16, 255, 0, 255, 178	@ 127/127/127/120/ 64
	voice_directsound 60, 64, DirectSoundWaveData_cymbal_orch_22, 255, 246, 0, 216	@ 127/ 90/  0/114/ 64

	.align 2
BW_PsychicEncounter_Drumset39::
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
	voice_directsound 60, 64, DirectSoundWaveData_snare_power_16, 255, 225, 127, 178	@ 127/114/ 90/120/ 64
	voice_directsound 61, 64, DirectSoundWaveData_snare_power_16, 255, 225, 127, 178	@ 127/114/ 90/120/ 64
	voice_directsound 60, 80, DirectSoundWaveData_hihat_closed_22, 255, 242, 0, 178	@ 127/100/  0/120/ 80
