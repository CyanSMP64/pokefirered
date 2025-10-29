	.align 2
voicegroup289:: @ BW someone's entralink
	voice_keysplit BW_Grand_Piano_s2, KeySplitTable_int_5_7_5_7 + 6
	voice_keysplit HGSS_Drawbar_Organ_s1, KeySplitTable_3oct + 16
	voice_keysplit HGSS_Clean_Guitar, KeySplitTable_int_8_9 + 19
	voice_keysplit BW_Electric_Bass, KeySplitTable_int_7_5 + 37
	voice_keysplit_all BW_SomeonesEntralink_Drumset85 - 0xc * 41

	.align 2
BW_SomeonesEntralink_Drumset85::
	voice_directsound 60, 30, DirectSoundWaveData_groove_tom_f_32, 255, 0, 255, 178	@ 127/127/127/116/ 30
	voice_directsound 61, 30, DirectSoundWaveData_groove_tom_f_32, 255, 0, 255, 178	@ 127/127/127/116/ 30
	voice_directsound 60, 40, DirectSoundWaveData_groove_tom_l_32, 255, 0, 255, 178	@ 127/127/127/116/ 40
	voice_directsound 61, 40, DirectSoundWaveData_groove_tom_l_32, 255, 0, 255, 178	@ 127/127/127/116/ 40
	voice_directsound 60, 50, DirectSoundWaveData_groove_tom_m_32, 255, 0, 255, 178	@ 127/127/127/116/ 50
	voice_directsound 61, 50, DirectSoundWaveData_groove_tom_m_32, 255, 0, 255, 178	@ 127/127/127/116/ 50
	voice_directsound 60, 100, DirectSoundWaveData_groove_tom_h_32, 255, 0, 255, 178	@ 127/127/127/116/100
	voice_directsound 61, 100, DirectSoundWaveData_groove_tom_h_32, 255, 0, 255, 178	@ 127/127/127/116/100
	voice_directsound 60, 64, DirectSoundWaveData_crash_cym_22, 255, 242, 0, 216	@ 127/100/  0/114/ 64
	voice_directsound 61, 64, DirectSoundWaveData_crash_cym_22, 255, 242, 0, 216	@ 127/100/  0/114/ 64
	voice_directsound 62, 64, DirectSoundWaveData_crash_cym_22, 255, 242, 0, 216	@ 127/100/  0/114/ 64
	voice_directsound 63, 64, DirectSoundWaveData_crash_cym_22, 255, 242, 0, 216	@ 127/100/  0/114/ 64
	voice_directsound 64, 64, DirectSoundWaveData_crash_cym_22, 255, 242, 0, 216	@ 127/100/  0/114/ 64
	voice_directsound 65, 64, DirectSoundWaveData_crash_cym_22, 255, 242, 0, 216	@ 127/100/  0/114/ 64
	voice_directsound 66, 64, DirectSoundWaveData_crash_cym_22, 255, 242, 0, 216	@ 127/100/  0/114/ 64
	voice_directsound 67, 64, DirectSoundWaveData_crash_cym_22, 255, 242, 0, 216	@ 127/100/  0/114/ 64
	voice_directsound 68, 64, DirectSoundWaveData_crash_cym_22, 255, 242, 0, 216	@ 127/100/  0/114/ 64
	voice_directsound 69, 64, DirectSoundWaveData_crash_cym_22, 255, 242, 0, 216	@ 127/100/  0/114/ 64
	voice_directsound 70, 64, DirectSoundWaveData_crash_cym_22, 255, 242, 0, 216	@ 127/100/  0/114/ 64
	voice_directsound 71, 64, DirectSoundWaveData_crash_cym_22, 255, 242, 0, 216	@ 127/100/  0/114/ 64
	voice_directsound 72, 64, DirectSoundWaveData_crash_cym_22, 255, 242, 0, 216	@ 127/100/  0/114/ 64
	voice_directsound 60, 20, DirectSoundWaveData_mute_conga_16, 255, 0, 255, 178	@ 127/127/127/120/ 20
	voice_directsound 60, 24, DirectSoundWaveData_high_conga_16, 255, 0, 255, 178	@ 127/127/127/120/ 24
	voice_directsound 57, 26, DirectSoundWaveData_high_conga_16, 255, 0, 255, 178	@ 127/127/127/120/ 26
	voice_directsound 58, 26, DirectSoundWaveData_high_conga_16, 255, 0, 255, 178	@ 127/127/127/120/ 26
	voice_directsound 59, 26, DirectSoundWaveData_high_conga_16, 255, 0, 255, 178	@ 127/127/127/120/ 26
	voice_directsound 60, 26, DirectSoundWaveData_high_conga_16, 255, 0, 255, 178	@ 127/127/127/120/ 26
	voice_directsound 60, 105, DirectSoundWaveData_mute_conga_16, 255, 0, 255, 178	@ 127/127/127/120/105
	voice_directsound 60, 105, DirectSoundWaveData_high_conga_btry_gm_32, 255, 0, 255, 178	@ 127/127/127/120/105
	voice_directsound 63, 105, DirectSoundWaveData_high_conga_16, 255, 0, 255, 178	@ 127/127/127/120/105
