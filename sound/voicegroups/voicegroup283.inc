	.align 2
voicegroup283:: @ BW n castle bridge
	voice_keysplit HGSS_Strings, KeySplitTable_int_9_9 + 6
	voice_keysplit HGSS_Solo_Cello, KeySplitTable_int_9 + 23
	voice_keysplit HGSS_Harp, KeySplitTable_4oct + 10
	voice_keysplit HGSS_Trombone, KeySplitTable_int_9 + 23
	voice_keysplit BW_French_Horn, KeySplitTable_int_8_9 + 19
	voice_keysplit_all BW_NCastleBridge_Drumset85 - 0xc * 36

	.align 2
BW_NCastleBridge_Drumset85::
	voice_directsound 60, 64, DirectSoundWaveData_kick_groove_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 61, 64, DirectSoundWaveData_kick_groove_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 62, 64, DirectSoundWaveData_kick_groove_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 63, 64, DirectSoundWaveData_kick_groove_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 60, 64, DirectSoundWaveData_snare_groove_32, 255, 225, 127, 208	@ 127/114/ 90/116/ 64
	voice_directsound 61, 64, DirectSoundWaveData_snare_groove_32, 255, 225, 127, 208	@ 127/114/ 90/116/ 64
	voice_directsound 60, 45, DirectSoundWaveData_hihat_closed_groove_32, 255, 239, 0, 208	@ 127/105/  0/116/ 45
	voice_directsound 61, 45, DirectSoundWaveData_hihat_closed_groove_32, 255, 239, 0, 208	@ 127/105/  0/116/ 45
	voice_directsound 62, 45, DirectSoundWaveData_hihat_closed_groove_32, 255, 239, 0, 208	@ 127/105/  0/116/ 45
	voice_directsound 63, 45, DirectSoundWaveData_hihat_closed_groove_32, 255, 239, 0, 208	@ 127/105/  0/116/ 45
	voice_directsound 60, 45, DirectSoundWaveData_hihat_open_groove_32, 255, 250, 0, 208	@ 127/ 65/  0/116/ 45
	voice_directsound 61, 45, DirectSoundWaveData_hihat_open_groove_32, 255, 250, 0, 208	@ 127/ 65/  0/116/ 45
	voice_directsound 62, 45, DirectSoundWaveData_hihat_open_groove_32, 255, 250, 0, 208	@ 127/ 65/  0/116/ 45
	voice_directsound 60, 40, DirectSoundWaveData_crashcym1_analog_kit_32, 255, 242, 0, 208	@ 127/100/  0/116/ 40
