	.align 2
voicegroup260::
	voice_directsound 81, 0, DirectSoundWaveData_pmd2_sine, 255, 0, 255, 100
	voice_directsound 96, 0, DirectSoundWaveData_pmd1_fantasia_c6, 255, 0, 255, 127
	voice_keysplit voicegroup224, KeySplitTable33	@ plugsound pro elastik
	voice_directsound 96, 0, DirectSoundWaveData_pmd1_synstring_c6, 80, 220, 128, 220
	voice_directsound 81, 0, DirectSoundWaveData_pmd2_square, 255, 0, 255, 0
	voice_keysplit voicegroup278, KeySplitTable64	@ plugsound pro acoustic grand piano
	voice_keysplit_all voicegroup260_kit - 36 * 0xc
	voice_directsound 60, 0, DirectSoundWaveData_bw_zg_total_drum_bass_160_leonora, 255, 0, 255, 0
	voice_directsound 42, 0, DirectSoundWaveData_bw_plugsound_pro_analog_hihat_closed, 255, 0, 255, 127

voicegroup260_kit::
	voice_directsound 68, 64, DirectSoundWaveData_bw_plugsound_pro_analog_kick, 255, 0, 255, 127
	voice_directsound 72, 64, DirectSoundWaveData_bw_plugsound_pro_analog_kick, 255, 0, 255, 127
	voice_directsound 63, 64, DirectSoundWaveData_bw_plugsound_pro_analog_snare_d2, 255, 0, 255, 127
	voice_directsound 65, 64, DirectSoundWaveData_bw_plugsound_pro_analog_snare_d2, 255, 0, 255, 127
	voice_directsound 63, 64, DirectSoundWaveData_bw_plugsound_pro_analog_snare_e2, 255, 240, 0, 127
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_directsound 62, 70, DirectSoundWaveData_bw_plugsound_pro_analog_crash, 255, 240, 0, 200
