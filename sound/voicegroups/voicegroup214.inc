	.align 2
voicegroup214:: @ BW evolution complete fanfare
	voice_keysplit HGSS_Marimba, KeySplitTable_2oct + 10
	voice_directsound 60, 0, DirectSoundWaveData_synth_bass_c2_22, 255, 64, 227, 178	@ 127/125/120/120/ 64
	voice_keysplit HGSS_Strings, KeySplitTable_2oct + 12
	voice_directsound 60, 0, DirectSoundWaveData_timpani_g3_22, 255, 251, 25, 197	@ 127/ 60/ 40/118/ 64
	voice_keysplit HGSS_Trumpet_Section, KeySplitTable_int_9 + 6
	voice_keysplit HGSS_Trombone, KeySplitTable_2oct + 29
	voice_keysplit HGSS_Clarinet, KeySplitTable_int_9 + 11
	voice_keysplit_all BW_Evolved_Drumset80 - 0xc * 31

	.align 2
BW_Evolved_Drumset80::
	voice_directsound 60, 64, DirectSoundWaveData_snare_orch_16, 255, 0, 255, 178	@ 127/127/127/120/ 64
	voice_directsound 61, 64, DirectSoundWaveData_snare_orch_16, 255, 0, 255, 178	@ 127/127/127/120/ 64
	voice_directsound 62, 64, DirectSoundWaveData_snare_orch_16, 255, 0, 255, 178	@ 127/127/127/120/ 64
	voice_directsound 63, 64, DirectSoundWaveData_snare_orch_16, 255, 0, 255, 178	@ 127/127/127/120/ 64
	voice_directsound 64, 64, DirectSoundWaveData_snare_orch_16, 255, 0, 255, 178	@ 127/127/127/120/ 64
	voice_directsound 65, 64, DirectSoundWaveData_snare_orch_16, 255, 0, 255, 178	@ 127/127/127/120/ 64
	voice_directsound 66, 64, DirectSoundWaveData_snare_orch_16, 255, 0, 255, 178	@ 127/127/127/120/ 64
	voice_directsound 67, 64, DirectSoundWaveData_snare_orch_16, 255, 0, 255, 178	@ 127/127/127/120/ 64
	voice_directsound 68, 64, DirectSoundWaveData_snare_orch_16, 255, 0, 255, 178	@ 127/127/127/120/ 64
	voice_directsound 69, 64, DirectSoundWaveData_snare_orch_16, 255, 0, 255, 178	@ 127/127/127/120/ 64
	voice_directsound 70, 64, DirectSoundWaveData_snare_orch_16, 255, 0, 255, 178	@ 127/127/127/120/ 64
	voice_directsound 71, 64, DirectSoundWaveData_snare_orch_16, 255, 0, 255, 178	@ 127/127/127/120/ 64
	voice_directsound 72, 64, DirectSoundWaveData_snare_orch_16, 255, 0, 255, 178	@ 127/127/127/120/ 64
	voice_directsound 73, 64, DirectSoundWaveData_snare_orch_16, 255, 0, 255, 178	@ 127/127/127/120/ 64
	voice_directsound 74, 64, DirectSoundWaveData_snare_orch_16, 255, 0, 255, 178	@ 127/127/127/120/ 64
	voice_directsound 75, 64, DirectSoundWaveData_snare_orch_16, 255, 0, 255, 178	@ 127/127/127/120/ 64
	voice_directsound 76, 64, DirectSoundWaveData_snare_orch_16, 255, 0, 255, 178	@ 127/127/127/120/ 64
	voice_directsound 60, 64, DirectSoundWaveData_cymbal_orch_22, 255, 246, 0, 216	@ 127/ 90/  0/114/ 64
