	.align 2
voicegroup234:: @ BW plasma victory
	voice_keysplit BW_Strings2, KeySplitTable_2oct + 11
	voice_keysplit BW_Harp, KeySplitTable_int_8 + 7
	voice_keysplit HGSS_Trumpet_Section, KeySplitTable_int_9 + 6
	voice_keysplit BW_French_Horn, KeySplitTable_int_8_9 + 19
	voice_directsound 60, 0, DirectSoundWaveData_timpani2_as_16, 255, 249, 0, 208	@ 127/ 80/  1/116/ 64
	voice_keysplit HGSS_Piccolo_Flute_s2, KeySplitTable_2oct - 4
	voice_directsound 60, 0, DirectSoundWaveData_ind_troncs1_32, 255, 197, 227, 208	@ 127/120/120/116/ 64
	voice_directsound 60, 0, DirectSoundWaveData_pbrasslop_c4_max32, 255, 0, 255, 178	@ 127/127/127/120/ 64
	voice_directsound 60, 0, DirectSoundWaveData_conbas_spic_e1_32, 255, 0, 255, 178	@ 127/127/127/120/ 64
	voice_directsound 60, 0, DirectSoundWaveData_crushroll_32, 255, 0, 255, 237	@ 127/127/127/100/ 64
	voice_directsound 60, 0, DirectSoundWaveData_brass_stacgs3_32, 255, 0, 255, 225	@ 127/127/127/110/ 64
	voice_directsound 60, 0, DirectSoundWaveData_conb_cs1_32, 255, 0, 255, 178	@ 127/127/127/120/ 64
	voice_keysplit_all BW_PlasmaVictory_Drumset80 - 0xc * 26

	.align 2
BW_PlasmaVictory_Drumset80::
	voice_directsound 60, 64, DirectSoundWaveData_snareroll_22, 255, 0, 227, 88	@ 127/127/120/124/ 64
	voice_directsound 61, 64, DirectSoundWaveData_snareroll_22, 255, 0, 227, 88	@ 127/127/120/124/ 64
	voice_directsound 62, 64, DirectSoundWaveData_snareroll_22, 255, 0, 227, 88	@ 127/127/120/124/ 64
	voice_directsound 63, 64, DirectSoundWaveData_snareroll_22, 255, 0, 227, 88	@ 127/127/120/124/ 64
	voice_directsound 64, 64, DirectSoundWaveData_snareroll_22, 255, 0, 227, 88	@ 127/127/120/124/ 64
	voice_directsound 65, 64, DirectSoundWaveData_snareroll_22, 255, 0, 227, 88	@ 127/127/120/124/ 64
	voice_directsound 66, 64, DirectSoundWaveData_snareroll_22, 255, 0, 227, 88	@ 127/127/120/124/ 64
	voice_directsound 67, 64, DirectSoundWaveData_snareroll_22, 255, 0, 227, 88	@ 127/127/120/124/ 64
	voice_directsound 68, 64, DirectSoundWaveData_snareroll_22, 255, 0, 227, 88	@ 127/127/120/124/ 64
	voice_directsound 69, 64, DirectSoundWaveData_snareroll_22, 255, 0, 227, 88	@ 127/127/120/124/ 64
	voice_directsound 70, 64, DirectSoundWaveData_snareroll_22, 255, 0, 227, 88	@ 127/127/120/124/ 64
	voice_directsound 71, 64, DirectSoundWaveData_snareroll_22, 255, 0, 227, 88	@ 127/127/120/124/ 64
	voice_directsound 72, 64, DirectSoundWaveData_snareroll_22, 255, 0, 227, 88	@ 127/127/120/124/ 64
	voice_directsound 73, 64, DirectSoundWaveData_snareroll_22, 255, 0, 227, 88	@ 127/127/120/124/ 64
	voice_directsound 74, 64, DirectSoundWaveData_snareroll_22, 255, 0, 227, 88	@ 127/127/120/124/ 64
	voice_directsound 75, 64, DirectSoundWaveData_snareroll_22, 255, 0, 227, 88	@ 127/127/120/124/ 64
	voice_directsound 76, 64, DirectSoundWaveData_snareroll_22, 255, 0, 227, 88	@ 127/127/120/124/ 64
	voice_directsound 77, 64, DirectSoundWaveData_snareroll_22, 255, 0, 227, 88	@ 127/127/120/124/ 64
	voice_directsound 78, 64, DirectSoundWaveData_snareroll_22, 255, 0, 227, 88	@ 127/127/120/124/ 64
	voice_directsound 79, 64, DirectSoundWaveData_snareroll_22, 255, 0, 227, 88	@ 127/127/120/124/ 64
	voice_directsound 80, 64, DirectSoundWaveData_snareroll_22, 255, 0, 227, 88	@ 127/127/120/124/ 64
	voice_directsound 81, 64, DirectSoundWaveData_snareroll_22, 255, 0, 227, 88	@ 127/127/120/124/ 64
	voice_directsound 82, 64, DirectSoundWaveData_snareroll_22, 255, 0, 227, 88	@ 127/127/120/124/ 64
	voice_directsound 83, 64, DirectSoundWaveData_snareroll_22, 255, 0, 227, 88	@ 127/127/120/124/ 64
	voice_directsound 84, 64, DirectSoundWaveData_snareroll_22, 255, 0, 227, 88	@ 127/127/120/124/ 64
	voice_directsound 85, 64, DirectSoundWaveData_snareroll_22, 255, 0, 227, 88	@ 127/127/120/124/ 64
	voice_directsound 86, 64, DirectSoundWaveData_snareroll_22, 255, 0, 227, 88	@ 127/127/120/124/ 64
	voice_directsound 87, 64, DirectSoundWaveData_snareroll_22, 255, 0, 227, 88	@ 127/127/120/124/ 64
	voice_directsound 88, 64, DirectSoundWaveData_snareroll_22, 255, 0, 227, 88	@ 127/127/120/124/ 64
	voice_directsound 89, 64, DirectSoundWaveData_snareroll_22, 255, 0, 227, 88	@ 127/127/120/124/ 64
	voice_directsound 90, 64, DirectSoundWaveData_snareroll_22, 255, 0, 227, 88	@ 127/127/120/124/ 64
	voice_directsound 91, 64, DirectSoundWaveData_snareroll_22, 255, 0, 227, 88	@ 127/127/120/124/ 64
	voice_directsound 92, 64, DirectSoundWaveData_snareroll_22, 255, 0, 227, 88	@ 127/127/120/124/ 64
	voice_directsound 93, 64, DirectSoundWaveData_snareroll_22, 255, 0, 227, 88	@ 127/127/120/124/ 64
	voice_directsound 94, 64, DirectSoundWaveData_snareroll_22, 255, 0, 227, 88	@ 127/127/120/124/ 64
	voice_directsound 60, 64, DirectSoundWaveData_crash_cym_22, 255, 242, 0, 216	@ 127/100/  0/114/ 64
	voice_directsound 61, 64, DirectSoundWaveData_crash_cym_22, 255, 242, 0, 216	@ 127/100/  0/114/ 64
	voice_directsound 62, 64, DirectSoundWaveData_crash_cym_22, 255, 242, 0, 216	@ 127/100/  0/114/ 64
	voice_directsound 63, 64, DirectSoundWaveData_crash_cym_22, 255, 242, 0, 216	@ 127/100/  0/114/ 64
	voice_directsound 64, 64, DirectSoundWaveData_crash_cym_22, 255, 242, 0, 216	@ 127/100/  0/114/ 64
	voice_directsound 65, 64, DirectSoundWaveData_crash_cym_22, 255, 242, 0, 216	@ 127/100/  0/114/ 64
	voice_directsound 66, 64, DirectSoundWaveData_crash_cym_22, 255, 242, 0, 216	@ 127/100/  0/114/ 64
	voice_directsound 67 64, DirectSoundWaveData_crash_cym_22, 255, 242, 0, 216	@ 127/100/  0/114/ 64
	voice_directsound 68, 64, DirectSoundWaveData_crash_cym_22, 255, 242, 0, 216	@ 127/100/  0/114/ 64
	voice_directsound 69, 64, DirectSoundWaveData_crash_cym_22, 255, 242, 0, 216	@ 127/100/  0/114/ 64
	voice_directsound 70, 64, DirectSoundWaveData_crash_cym_22, 255, 242, 0, 216	@ 127/100/  0/114/ 64
	voice_directsound 71, 64, DirectSoundWaveData_crash_cym_22, 255, 242, 0, 216	@ 127/100/  0/114/ 64
	voice_directsound 60, 64, DirectSoundWaveData_crash_cym_22, 255, 242, 0, 216	@ 127/100/  0/114/ 64
