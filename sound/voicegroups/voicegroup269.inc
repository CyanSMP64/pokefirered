	.align 2
voicegroup269:: @ BW legend battle
	voice_keysplit BW_Piano_s3, KeySplitTable_2oct - 2
	voice_directsound 60, 0, DirectSoundWaveData_synth_bass_c2_22, 255, 64, 227, 178	@ 127/125/120/120/ 64
	voice_keysplit BW_Bass_Elite_Four, KeySplitTable_2oct + 33
	voice_directsound 60, 0, DirectSoundWaveData_cool3_basE0_22, 255, 64, 227, 0	@ 127/125/120/127/ 64
	voice_keysplit BW_Lead_Elite_Four, KeySplitTable_2oct + 0
	voice_keysplit BW_Timpani_Ghetsis, KeySplitTable_3oct + 31
	voice_directsound 60, 0, DirectSoundWaveData_noizy_01_22kh, 255, 0, 227, 178	@ 127/127/120/120/ 64
	voice_directsound 60, 0, DirectSoundWaveData_clash_02_22, 255, 0, 227, 178	@ 127/127/120/120/ 64
	voice_directsound 60, 0, DirectSoundWaveData_pbrasslop_c4_max32, 255, 0, 255, 178	@ 127/127/127/120/ 64
	voice_directsound 60, 0, DirectSoundWaveData_sd_octhit_as3_32, 255, 249, 0, 208	@ 127/ 80/  1/116/ 64
	voice_keysplit_all BW_LegendBattle_Drumset80 - 0xc * 12
	voice_directsound 60, 0, DirectSoundWaveData_minorhit_c3_16, 58, 197, 255, 178	@  90/120/127/120/ 64

	.align 2
BW_LegendBattle_Drumset80::
	voice_directsound 20, 64, DirectSoundWaveData_cool_snare2_22, 255, 197, 227, 88	@ 127/120/120/124/ 64
	voice_directsound 21, 64, DirectSoundWaveData_cool_snare2_22, 255, 197, 227, 88	@ 127/120/120/124/ 64
	voice_directsound 22, 64, DirectSoundWaveData_cool_snare2_22, 255, 197, 227, 88	@ 127/120/120/124/ 64
	voice_directsound 23, 64, DirectSoundWaveData_cool_snare2_22, 255, 197, 227, 88	@ 127/120/120/124/ 64
	voice_directsound 45, 64, DirectSoundWaveData_cool_snare2_22, 255, 197, 227, 88	@ 127/120/120/124/ 64
	voice_directsound 46, 64, DirectSoundWaveData_cool_snare2_22, 255, 197, 227, 88	@ 127/120/120/124/ 64
	voice_directsound 47, 64, DirectSoundWaveData_cool_snare2_22, 255, 197, 227, 88	@ 127/120/120/124/ 64
	voice_directsound 44, 64, DirectSoundWaveData_cool_snare2_22, 255, 197, 227, 88	@ 127/120/120/124/ 64
	voice_directsound 45, 64, DirectSoundWaveData_cool_snare2_22, 255, 197, 227, 88	@ 127/120/120/124/ 64
	voice_directsound 46, 64, DirectSoundWaveData_cool_snare2_22, 255, 197, 227, 88	@ 127/120/120/124/ 64
	voice_directsound 47, 64, DirectSoundWaveData_cool_snare2_22, 255, 197, 227, 88	@ 127/120/120/124/ 64
	voice_directsound 48, 64, DirectSoundWaveData_cool_snare2_22, 255, 197, 227, 88	@ 127/120/120/124/ 64
	voice_directsound 60, 64, DirectSoundWaveData_drumn_bass_32, 255, 0, 255, 0	@ 127/127/127/127/ 64
	voice_directsound 60, 64, DirectSoundWaveData_drumn_snare2_32, 255, 0, 255, 0	@ 127/127/127/127/ 64
	voice_directsound 60, 64, DirectSoundWaveData_shiten_snare_max2_32, 255, 0, 227, 88	@ 127/127/120/124/ 64
	voice_directsound 51, 64, DirectSoundWaveData_snare_euro_16, 255, 0, 255, 0	@ 127/127/127/127/ 64
	voice_directsound 60, 64, DirectSoundWaveData_bass_hit01_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 60, 64, DirectSoundWaveData_bass_ana01_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
	voice_directsound 61, 64, DirectSoundWaveData_bass_ana01_32, 255, 0, 227, 208	@ 127/127/120/116/ 64
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
	voice_directsound 60, 64, DirectSoundWaveData_snare_power_max_32, 255, 225, 127, 178	@ 127/114/ 90/120/ 64
	voice_directsound 61, 64, DirectSoundWaveData_snare_power_max_32, 255, 225, 127, 178	@ 127/114/ 90/120/ 64
	voice_directsound 62, 64, DirectSoundWaveData_snare_power_max_32, 255, 225, 127, 178	@ 127/114/ 90/120/ 64
	voice_directsound 63, 64, DirectSoundWaveData_snare_power_max_32, 255, 225, 127, 178	@ 127/114/ 90/120/ 64
	voice_directsound 64, 64, DirectSoundWaveData_snare_power_max_32, 255, 225, 127, 178	@ 127/114/ 90/120/ 64
	voice_directsound 65, 64, DirectSoundWaveData_snare_power_max_32, 255, 225, 127, 178	@ 127/114/ 90/120/ 64
	voice_directsound 66, 64, DirectSoundWaveData_snare_power_max_32, 255, 225, 127, 178	@ 127/114/ 90/120/ 64
	voice_directsound 67, 64, DirectSoundWaveData_snare_power_max_32, 255, 225, 127, 178	@ 127/114/ 90/120/ 64
	voice_directsound 68, 64, DirectSoundWaveData_snare_power_max_32, 255, 225, 127, 178	@ 127/114/ 90/120/ 64
	voice_directsound 60, 64, DirectSoundWaveData_dance_close_hat_32, 255, 0, 255, 0	@ 127/127/127/127/ 64
	voice_directsound 61, 64, DirectSoundWaveData_dance_close_hat_32, 255, 0, 255, 0	@ 127/127/127/127/ 64
	voice_directsound 62, 64, DirectSoundWaveData_dance_close_hat_32, 255, 0, 255, 0	@ 127/127/127/127/ 64
	voice_directsound 63, 64, DirectSoundWaveData_dance_close_hat_32, 255, 0, 255, 0	@ 127/127/127/127/ 64
	voice_directsound 60, 64, DirectSoundWaveData_dance_open_hat_32, 255, 0, 255, 0	@ 127/127/127/127/ 64
	voice_directsound 60, 20, DirectSoundWaveData_chinese_cym_22, 255, 250, 0, 225	@ 127/ 70/  0/110/ 20
	voice_directsound 60, 64, DirectSoundWaveData_chinese_cym_22, 255, 250, 0, 225	@ 127/ 70/  0/110/ 64
	voice_directsound 60, 107, DirectSoundWaveData_chinese_cym_22, 255, 250, 0, 225	@ 127/ 70/  0/110/107
	voice_directsound 60, 27, DirectSoundWaveData_splash_cym_32, 255, 250, 0, 208	@ 127/ 70/  0/116/ 27
	voice_directsound 60, 64, DirectSoundWaveData_splash_cym_32, 255, 250, 0, 208	@ 127/ 70/  0/116/ 64
	voice_directsound 60, 100, DirectSoundWaveData_splash_cym_32, 255, 250, 0, 208	@ 127/ 70/  0/116/100
	voice_directsound 61, 100, DirectSoundWaveData_splash_cym_32, 255, 250, 0, 208	@ 127/ 70/  0/116/100
	voice_directsound 62, 100, DirectSoundWaveData_splash_cym_32, 255, 250, 0, 208	@ 127/ 70/  0/116/100
	voice_directsound 60, 64, DirectSoundWaveData_crash_cym_22, 255, 242, 0, 216	@ 127/100/  0/114/ 64
	voice_directsound 61, 64, DirectSoundWaveData_crash_cym_22, 255, 242, 0, 216	@ 127/100/  0/114/ 64
	voice_directsound 60, 114, DirectSoundWaveData_crash_cym_22, 255, 242, 0, 216	@ 127/100/  0/114/114
	voice_directsound 61, 114, DirectSoundWaveData_crash_cym_22, 255, 242, 0, 216	@ 127/100/  0/114/114
	voice_directsound 62, 114, DirectSoundWaveData_crash_cym_22, 255, 242, 0, 216	@ 127/100/  0/114/114
	voice_directsound 63, 114, DirectSoundWaveData_crash_cym_22, 255, 242, 0, 216	@ 127/100/  0/114/114
	voice_directsound 64, 114, DirectSoundWaveData_crash_cym_22, 255, 242, 0, 216	@ 127/100/  0/114/114
	voice_directsound 65, 114, DirectSoundWaveData_crash_cym_22, 255, 242, 0, 216	@ 127/100/  0/114/114
	voice_directsound 66, 114, DirectSoundWaveData_crash_cym_22, 255, 242, 0, 216	@ 127/100/  0/114/114
	voice_directsound 67, 114, DirectSoundWaveData_crash_cym_22, 255, 242, 0, 216	@ 127/100/  0/114/114
	voice_directsound 60, 14, DirectSoundWaveData_crash_cym_22, 255, 242, 0, 216	@ 127/100/  0/114/ 14
