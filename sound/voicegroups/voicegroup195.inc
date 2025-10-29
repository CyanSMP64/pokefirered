	.align 2
voicegroup195:: @ HGSS BANK_BGM_BATTLE3
	voice_keysplit HGSS_Grand_Piano, KeySplitTable_5oct + 16
	voice_keysplit HGSS_Attack_Piano, KeySplitTable_2oct + 10
	voice_keysplit HGSS_Octave_Piano, KeySplitTable_4oct + 22
	voice_keysplit HGSS_Electric_Piano, KeySplitTable_2oct + 22
	voice_keysplit HGSS_Electric_Piano_Short, KeySplitTable_2oct + 22
	voice_keysplit HGSS_Vibraphone, KeySplitTable_2oct + 10
	voice_keysplit HGSS_Marimba, KeySplitTable_3oct + 4
	voice_keysplit HGSS_Xylophone, KeySplitTable_int_9 + 6
	voice_keysplit HGSS_Tubular_Bell, KeySplitTable_2oct + 6
	voice_keysplit HGSS_Glockenspiel, KeySplitTable_2oct + 10
	voice_keysplit HGSS_Music_Box, KeySplitTable_3oct + 4
	voice_keysplit HGSS_Drawbar_Organ_s1, KeySplitTable_3oct + 16
	voice_keysplit HGSS_Percussive_Organ, KeySplitTable_3oct + 16
	voice_keysplit HGSS_Accordion, KeySplitTable_3oct + 16
	voice_keysplit HGSS_Nylon_Guitar, KeySplitTable_int_8_9 + 19
	voice_keysplit HGSS_Steel_Guitar, KeySplitTable_int_8_9 + 19
	voice_keysplit HGSS_Distortion_Guitar_Short, KeySplitTable_int_13_12 + 12
	voice_keysplit HGSS_Distortion_Guitar, KeySplitTable_int_13_12 + 12
	voice_keysplit HGSS_Clean_Guitar, KeySplitTable_int_8_9 + 19
	voice_keysplit HGSS_Acoustic_Bass, KeySplitTable_2oct + 32
	voice_keysplit HGSS_Fretless_Bass, KeySplitTable_2oct + 24
	voice_directsound 60, 0, DirectSoundWaveData_slapbass_c1_16, 255, 0, 255, 197	@ 127/127/127/118/ 64
	voice_keysplit HGSS_Synth_Bass, KeySplitTable_2oct + 34
	voice_keysplit HGSS_Strings, KeySplitTable_int_9_9 + 6
	voice_keysplit HGSS_Solo_Violin, KeySplitTable_int_8 + 2
	voice_keysplit HGSS_Solo_Cello, KeySplitTable_int_9 + 23
	voice_keysplit HGSS_Pizzicato_Strings, KeySplitTable_int_9_8_9 + 11
	voice_keysplit HGSS_Harp, KeySplitTable_3oct + 16
	voice_keysplit HGSS_Timpani, KeySplitTable_3oct + 16
	voice_keysplit HGSS_Trumpet_Section, KeySplitTable_int_9 + 6
	voice_keysplit HGSS_Trombone, KeySplitTable_int_9 + 23
	voice_keysplit HGSS_Bright_Horn, KeySplitTable_int_5 + 11
	voice_keysplit HGSS_French_Horn_s1, KeySplitTable_int_9 + 18
	voice_keysplit HGSS_Oboe, KeySplitTable_int_7 + 2
	voice_keysplit HGSS_Clarinet, KeySplitTable_int_9 + 11
	voice_keysplit HGSS_Piccolo_Flute, KeySplitTable_int_9_7 + 6
	voice_keysplit HGSS_Bassoon, KeySplitTable_int_8 + 26
	voice_keysplit HGSS_Orchestra_Hit, KeySplitTable_int_9_6 + 4
	voice_keysplit HGSS_Synth_Lead, KeySplitTable_3oct + 4
	voice_keysplit_all HGSS_Drumset_1 - 0xc * 29
	voice_keysplit_all HGSS_Drumset_2 - 0xc * 48
	voice_directsound 60, 0, DirectSoundWaveData_woodbass_d3_16, 255, 251, 0, 178	@ 127/ 60/  1/120/ 64
	voice_keysplit HGSS_Koto, KeySplitTable_int_10 + 14
	voice_directsound 60, 0, DirectSoundSynthData_squ50, 255, 242, 40, 197	@ 126/100/ 50/118/ 64
	voice_directsound 60, 0, DirectSoundWaveData_sc88pro_wind, 67, 243, 155, 225	@  99/ 99/ 99/110/ 64
	voice_directsound 60, 0, DirectSoundWaveData_explosion_13, 67, 255, 0, 246	@  99/ 10/  0/ 80/ 64
	voice_directsound 60, 0, DirectSoundWaveData_sc88pro_square_wave, 255, 250, 0, 178	@ 127/ 70/  0/120/ 64
	voice_directsound 60, 0, DirectSoundWaveData_sc88pro_bubbles, 255, 0, 255, 0	@ 125/127/127/127/ 64
	voice_directsound 60, 0, DirectSoundSynthData_squ50, 255, 242, 25, 0	@ 126/100/ 40/127/ 64
	voice_directsound 60, 0, DirectSoundSynthData_squ50, 255, 252, 0, 48	@ 127/ 50/  0/125/ 64
	voice_directsound 60, 0, DirectSoundSynthData_squ50, 255, 250, 0, 225	@ 127/ 70/  0/110/ 64
	voice_directsound 60, 0, DirectSoundSynthData_squ50, 255, 242, 101, 225	@ 124/100/ 80/110/ 64
	voice_directsound 60, 0, DirectSoundSynthData_squ50, 255, 242, 101, 178	@ 124/100/ 80/120/ 64
	voice_directsound 60, 0, DirectSoundWaveData_purenoise, 81, 0, 57, 178	@ 110/127/ 60/120/ 64
	voice_directsound 60, 0, DirectSoundWaveData_purenoise, 255, 242, 0, 178	@ 125/100/  0/120/ 64
	voice_directsound 60, 0, DirectSoundWaveData_whistle_c5_16, 255, 246, 78, 197	@ 127/ 90/ 70/118/ 64
	voice_directsound 60, 0, DirectSoundWaveData_reverse_cym_16, 255, 0, 255, 16	@ 127/127/127/126/ 64
	voice_directsound 60, 0, DirectSoundWaveData_org5_c3_16, 255, 172, 235, 178	@ 127/122/122/120/ 64
	voice_directsound 60, 0, DirectSoundSynthData_squ62, 188, 233, 191, 212	@ 120/110/110/115/ 64
	voice_directsound 60, 0, DirectSoundSynthData_squ87, 188, 233, 191, 212	@ 120/110/110/115/ 64
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_keysplit HGSS_Timpani_2, KeySplitTable_2oct + 29
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_directsound 60, 0, DirectSoundWaveData_reverse_cym_16, 255, 197, 255, 178	@ 127/120/127/120/ 64
