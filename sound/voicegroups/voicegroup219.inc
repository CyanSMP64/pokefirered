	.align 2
voicegroup219:: @ BW trainer victory
	voice_keysplit HGSS_Strings, KeySplitTable_int_9 + 6
	voice_keysplit HGSS_Timpani, KeySplitTable_2oct + 22
	voice_keysplit HGSS_Trumpet_Section, KeySplitTable_int_9 + 6
	voice_keysplit HGSS_Trombone, KeySplitTable_2oct + 29
	voice_keysplit HGSS_Clarinet, KeySplitTable_int_9 + 11
	voice_keysplit HGSS_Piccolo_Flute_s1, KeySplitTable_int_7 - 3
	voice_keysplit_all BW_Victory_Trainer_Drumset80 - 0xc * 31

	.align 2
BW_Victory_Trainer_Drumset80::
	voice_directsound 60, 64, DirectSoundWaveData_snare_22, 255, 255, 191, 178	@ 127/  0/110/120/ 64
	voice_directsound 61, 64, DirectSoundWaveData_snare_22, 255, 255, 191, 178	@ 127/  0/110/120/ 64
	voice_directsound 62, 64, DirectSoundWaveData_snare_22, 255, 255, 191, 178	@ 127/  0/110/120/ 64
	voice_directsound 63, 64, DirectSoundWaveData_snare_22, 255, 255, 191, 178	@ 127/  0/110/120/ 64
	voice_directsound 64, 64, DirectSoundWaveData_snare_22, 255, 255, 191, 178	@ 127/  0/110/120/ 64
	voice_directsound 65, 64, DirectSoundWaveData_snare_22, 255, 255, 191, 178	@ 127/  0/110/120/ 64
	voice_directsound 66, 64, DirectSoundWaveData_snare_22, 255, 255, 191, 178	@ 127/  0/110/120/ 64
	voice_directsound 67, 64, DirectSoundWaveData_snare_22, 255, 255, 191, 178	@ 127/  0/110/120/ 64
	voice_directsound 68, 64, DirectSoundWaveData_snare_22, 255, 255, 191, 178	@ 127/  0/110/120/ 64
	voice_directsound 69, 64, DirectSoundWaveData_snare_22, 255, 255, 191, 178	@ 127/  0/110/120/ 64
	voice_directsound 70, 64, DirectSoundWaveData_snare_22, 255, 255, 191, 178	@ 127/  0/110/120/ 64
	voice_directsound 71, 64, DirectSoundWaveData_snare_22, 255, 255, 191, 178	@ 127/  0/110/120/ 64
	voice_directsound 72, 64, DirectSoundWaveData_snare_22, 255, 255, 191, 178	@ 127/  0/110/120/ 64
	voice_directsound 73, 64, DirectSoundWaveData_snare_22, 255, 255, 191, 178	@ 127/  0/110/120/ 64
	voice_directsound 74, 64, DirectSoundWaveData_snare_22, 255, 255, 191, 178	@ 127/  0/110/120/ 64
	voice_directsound 75, 64, DirectSoundWaveData_snare_22, 255, 255, 191, 178	@ 127/  0/110/120/ 64
	voice_directsound 76, 64, DirectSoundWaveData_snare_22, 255, 255, 191, 178	@ 127/  0/110/120/ 64
	voice_directsound 60, 64, DirectSoundWaveData_cymbal_orch_22, 255, 246, 0, 216	@ 127/ 90/  0/114/ 64
