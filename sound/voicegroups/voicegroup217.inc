	.align 2
voicegroup217:: @ BW item fanfare
	voice_keysplit BW_Electric_Piano, KeySplitTable_2oct + 22
	voice_directsound 60, 0, DirectSoundWaveData_vibraphone_c6_22, 255, 246, 0, 208	@ 127/ 90/  1/116/ 64
	voice_keysplit HGSS_Synth_Bass, KeySplitTable_2oct + 34
	voice_keysplit HGSS_Harp_s2, KeySplitTable_2oct - 2
	voice_directsound 60, 0, DirectSoundWaveData_piccolo_flute_a4_22, 255, 246, 127, 197	@ 127/ 90/ 90/118/ 64
