	.align 2
voicegroup254:: @ BW cyclist encounter
	voice_keysplit HGSS_Electric_Piano_Short, KeySplitTable_2oct + 22
	voice_keysplit HGSS_Distortion_Guitar, KeySplitTable_int_13_12 + 12
	voice_keysplit HGSS_Clean_Guitar, KeySplitTable_int_8_9 + 19
	voice_directsound 60, 0, DirectSoundWaveData_slapbass_c1_16, 255, 0, 255, 197	@ 127/127/127/118/ 64
	voice_keysplit HGSS_Strings, KeySplitTable_int_9_9 + 6
	voice_keysplit HGSS_Trumpet_Section, KeySplitTable_int_9 + 6
	voice_keysplit_all BW_CyclistEncounter_Drumset39 - 0xc * 30

	.align 2
BW_CyclistEncounter_Drumset39::
	voice_directsound 60, 64, DirectSoundWaveData_snare_22, 255, 255, 191, 178	@ 127/  0/110/120/ 64
	voice_directsound 48, 64, DirectSoundWaveData_reverse_cym_16, 2, 0, 227, 178	@   3/127/120/120/ 64
	voice_directsound 49, 64, DirectSoundWaveData_reverse_cym_16, 2, 0, 227, 178	@   3/127/120/120/ 64
	voice_directsound 50, 64, DirectSoundWaveData_reverse_cym_16, 2, 0, 227, 178	@   3/127/120/120/ 64
	voice_directsound 51, 64, DirectSoundWaveData_reverse_cym_16, 2, 0, 227, 178	@   3/127/120/120/ 64
	voice_directsound 60, 64, DirectSoundWaveData_bassdr_2_16, 255, 0, 255, 178	@ 127/127/127/120/ 64
	voice_directsound 61, 64, DirectSoundWaveData_bassdr_2_16, 255, 0, 255, 178	@ 127/127/127/120/ 64
	voice_directsound 62, 64, DirectSoundWaveData_bassdr_2_16, 255, 0, 255, 178	@ 127/127/127/120/ 64
	voice_directsound 60, 64, DirectSoundWaveData_snare_orch_16, 255, 0, 255, 178	@ 127/127/127/120/ 64
	voice_directsound 60, 70, DirectSoundWaveData_handclap_2_16, 255, 0, 227, 178	@ 127/127/120/120/ 70
	voice_directsound 60, 64, DirectSoundWaveData_snare_power_16, 255, 225, 127, 178	@ 127/114/ 90/120/ 64
	voice_directsound 60, 30, DirectSoundWaveData_tom_f_16, 255, 0, 255, 178	@ 127/127/127/120/ 30
	voice_directsound 60, 80, DirectSoundWaveData_hihat_closed_22, 255, 242, 0, 178	@ 127/100/  0/120/ 80
	voice_directsound 60, 40, DirectSoundWaveData_tom_l_16, 255, 0, 255, 178	@ 127/127/127/120/ 40
	voice_directsound 61, 40, DirectSoundWaveData_tom_l_16, 255, 0, 255, 178	@ 127/127/127/120/ 40
	voice_directsound 60, 50, DirectSoundWaveData_tom_m_16, 255, 0, 255, 178	@ 127/127/127/120/ 50
	voice_directsound 60, 80, DirectSoundWaveData_hihat_open_22, 255, 241, 0, 178	@ 127/102/  0/120/ 80
	voice_directsound 60, 100, DirectSoundWaveData_tom_h_16, 255, 0, 255, 178	@ 127/127/127/120/100
	voice_directsound 61, 100, DirectSoundWaveData_tom_h_16, 255, 0, 255, 178	@ 127/127/127/120/100
	voice_directsound 57, 64, DirectSoundWaveData_crash_cym_22, 255, 242, 0, 216	@ 127/100/  0/114/ 64
	voice_directsound 58, 64, DirectSoundWaveData_crash_cym_22, 255, 242, 0, 216	@ 127/100/  0/114/ 64
	voice_directsound 59, 64, DirectSoundWaveData_crash_cym_22, 255, 242, 0, 216	@ 127/100/  0/114/ 64
	voice_directsound 59, 20, DirectSoundWaveData_chinese_cym_22, 255, 250, 0, 225	@ 127/ 70/  0/110/ 20
	voice_directsound 60, 30, DirectSoundWaveData_ride_bell_16, 255, 250, 0, 212	@ 127/ 70/  0/115/ 30
	voice_directsound 61, 30, DirectSoundWaveData_ride_bell_16, 255, 250, 0, 212	@ 127/ 70/  0/115/ 30
	voice_directsound 60, 84, DirectSoundWaveData_splash_cym_22, 255, 250, 0, 178	@ 127/ 70/  0/120/ 84
	voice_directsound 60, 110, DirectSoundWaveData_cowbell_22, 255, 0, 255, 178	@ 127/127/127/120/110
	voice_directsound 60, 36, DirectSoundWaveData_crash_cym_22, 255, 249, 0, 216	@ 127/ 80/  0/114/ 36
	voice_directsound 61, 102, DirectSoundWaveData_crash_cym_22, 255, 249, 0, 216	@ 127/ 80/  0/114/102
	voice_directsound 60, 86, DirectSoundWaveData_ride_cym_22, 255, 250, 0, 216	@ 127/ 70/  0/114/ 86
	voice_directsound 56, 20, DirectSoundWaveData_tom_f_16, 255, 0, 255, 178	@ 127/127/127/120/ 20
	voice_directsound 57, 20, DirectSoundWaveData_tom_f_16, 255, 0, 255, 178	@ 127/127/127/120/ 20
	voice_directsound 58, 20, DirectSoundWaveData_tom_f_16, 255, 0, 255, 178	@ 127/127/127/120/ 20
	voice_directsound 59, 20, DirectSoundWaveData_tom_f_16, 255, 0, 255, 178	@ 127/127/127/120/ 20
	voice_directsound 60, 30, DirectSoundWaveData_tom_f_16, 255, 0, 255, 178	@ 127/127/127/120/ 30
	voice_directsound 61, 30, DirectSoundWaveData_tom_f_16, 255, 0, 255, 178	@ 127/127/127/120/ 30
	voice_directsound 62, 30, DirectSoundWaveData_tom_f_16, 255, 0, 255, 178	@ 127/127/127/120/ 30
	voice_directsound 56, 40, DirectSoundWaveData_tom_l_16, 255, 0, 255, 178	@ 127/127/127/120/ 40
	voice_directsound 57, 40, DirectSoundWaveData_tom_l_16, 255, 0, 255, 178	@ 127/127/127/120/ 40
	voice_directsound 58, 40, DirectSoundWaveData_tom_l_16, 255, 0, 255, 178	@ 127/127/127/120/ 40
	voice_directsound 59, 40, DirectSoundWaveData_tom_l_16, 255, 0, 255, 178	@ 127/127/127/120/ 40
	voice_directsound 60, 40, DirectSoundWaveData_tom_l_16, 255, 0, 255, 178	@ 127/127/127/120/ 40
	voice_directsound 60, 50, DirectSoundWaveData_tom_l_16, 255, 0, 255, 178	@ 127/127/127/120/ 50
	voice_directsound 61, 50, DirectSoundWaveData_tom_l_16, 255, 0, 255, 178	@ 127/127/127/120/ 50
	voice_directsound 62, 50, DirectSoundWaveData_tom_l_16, 255, 0, 255, 178	@ 127/127/127/120/ 50
	voice_directsound 63, 50, DirectSoundWaveData_tom_l_16, 255, 0, 255, 178	@ 127/127/127/120/ 50
	voice_directsound 57, 80, DirectSoundWaveData_tom_m_16, 255, 0, 255, 178	@ 127/127/127/120/ 80
	voice_directsound 58, 80, DirectSoundWaveData_tom_m_16, 255, 0, 255, 178	@ 127/127/127/120/ 80
	voice_directsound 59, 80, DirectSoundWaveData_tom_m_16, 255, 0, 255, 178	@ 127/127/127/120/ 80
	voice_directsound 60, 90, DirectSoundWaveData_tom_m_16, 255, 0, 255, 178	@ 127/127/127/120/ 90
	voice_directsound 61, 90, DirectSoundWaveData_tom_m_16, 255, 0, 255, 178	@ 127/127/127/120/ 90
	voice_directsound 62, 90, DirectSoundWaveData_tom_m_16, 255, 0, 255, 178	@ 127/127/127/120/ 90
	voice_directsound 63, 90, DirectSoundWaveData_tom_m_16, 255, 0, 255, 178	@ 127/127/127/120/ 90
	voice_directsound 64, 90, DirectSoundWaveData_tom_m_16, 255, 0, 255, 178	@ 127/127/127/120/ 90
	voice_directsound 60, 100, DirectSoundWaveData_tom_h_16, 255, 0, 255, 178	@ 127/127/127/120/100
	voice_directsound 61, 100, DirectSoundWaveData_tom_h_16, 255, 0, 255, 178	@ 127/127/127/120/100
	voice_directsound 62, 100, DirectSoundWaveData_tom_h_16, 255, 0, 255, 178	@ 127/127/127/120/100
	voice_directsound 63, 100, DirectSoundWaveData_tom_h_16, 255, 0, 255, 178	@ 127/127/127/120/100
	voice_directsound 64, 110, DirectSoundWaveData_tom_h_16, 255, 0, 255, 178	@ 127/127/127/120/110
