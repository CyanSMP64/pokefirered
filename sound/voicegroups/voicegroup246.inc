	.align 2
voicegroup246:: @ BW follow me
	voice_keysplit BW_Grand_Piano_s5, KeySplitTable_int_7 + 1
	voice_keysplit BW_Electric_Piano, KeySplitTable_2oct + 22
	voice_keysplit BW_Marimba, KeySplitTable_3oct + 16
	voice_directsound 60, 0, DirectSoundWaveData_ac_bass_c2_22, 255, 251, 0, 197	@ 127/ 60/  1/118/ 64
	voice_keysplit HGSS_Pizzicato_Strings, KeySplitTable_int_9 + 23
	voice_keysplit BW_Harp, KeySplitTable_int_8 + 7
	voice_keysplit_all BW_FollowMe_drumset39 - 0xc * 68

	.align 2
BW_FollowMe_drumset39::
	voice_directsound 60, 105, DirectSoundWaveData_mute_conga_16, 255, 0, 255, 178	@ 127/127/127/120/105
	voice_directsound 60, 105, DirectSoundWaveData_high_conga_16, 255, 0, 255, 178	@ 127/127/127/120/105
	voice_directsound 63, 105, DirectSoundWaveData_high_conga_16, 255, 0, 255, 178	@ 127/127/127/120/105
