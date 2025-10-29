	.macro camelot_synth_sound type:req offset:req step:req depth:req init:req
	.4byte 0x40000000, 0x01058920, 0, 0
	.byte 0x80
	.byte \type
	.if \type == 0
	.byte \offset
	.byte \step
	.byte \depth
	.byte \init
	.byte 0
	.elseif \type == 3
	.byte \offset
	.else
	.byte 0
	.endif
	.byte 0
	.endm

	.macro camelot_square_basic_loud duty_cycle:req
	camelot_synth_sound 3, \duty_cycle, 0, 0, 0
	.endm
	
	.align 2
DirectSoundSynthData_squ12::
	camelot_square_basic_loud 32
	
	.align 2
DirectSoundSynthData_squ25::
	camelot_square_basic_loud 64
	
	.align 2
DirectSoundSynthData_squ37::
	camelot_square_basic_loud 96

	.align 2
DirectSoundSynthData_squ50::
	camelot_square_basic_loud 128

	.align 2
DirectSoundSynthData_squ62::
	camelot_square_basic_loud 160

	.align 2
DirectSoundSynthData_squ75::
	camelot_square_basic_loud 192

	.align 2
DirectSoundSynthData_squ87::
	camelot_square_basic_loud 224

	.align 2
DirectSoundWaveData_purenoise::
	.incbin "sound/direct_sound_samples/purenoise.bin"

@	.align 2
@DirectSoundWaveData_1.5sec_16::
@	.incbin "sound/direct_sound_samples/new/1.5sec_16.bin"

@	.align 2
@DirectSoundWaveData_1.5sec_22::
@	.incbin "sound/direct_sound_samples/new/1.5sec_22.bin"

@	.align 2
@DirectSoundWaveData_1.5sec_32::
@	.incbin "sound/direct_sound_samples/new/1.5sec_32.bin"

@	.align 2
@DirectSoundWaveData_1.5sec_44::
@	.incbin "sound/direct_sound_samples/new/1.5sec_44.bin"

@	.align 2
@DirectSoundWaveData_1sec_16::
@	.incbin "sound/direct_sound_samples/new/1sec_16.bin"

@	.align 2
@DirectSoundWaveData_1sec_22::
@	.incbin "sound/direct_sound_samples/new/1sec_22.bin"

@	.align 2
@DirectSoundWaveData_1sec_32::
@	.incbin "sound/direct_sound_samples/new/1sec_32.bin"

@	.align 2
@DirectSoundWaveData_1sec_44::
@	.incbin "sound/direct_sound_samples/new/1sec_44.bin"

@	.align 2
@DirectSoundWaveData_2sec_16::
@	.incbin "sound/direct_sound_samples/new/2sec_16.bin"

@	.align 2
@DirectSoundWaveData_2sec_22::
@	.incbin "sound/direct_sound_samples/new/2sec_22.bin"

@	.align 2
@DirectSoundWaveData_2sec_32::
@	.incbin "sound/direct_sound_samples/new/2sec_32.bin"

@	.align 2
@DirectSoundWaveData_2sec_44::
@	.incbin "sound/direct_sound_samples/new/2sec_44.bin"

@	.align 2
@DirectSoundWaveData_37l08prc1_22::
@	.incbin "sound/direct_sound_samples/new/37l08prc1_22.bin"

@	.align 2
@DirectSoundWaveData_37l10prc1_22::
@	.incbin "sound/direct_sound_samples/new/37l10prc1_22.bin"

@	.align 2
@DirectSoundWaveData_37l11prc1_22::
@	.incbin "sound/direct_sound_samples/new/37l11prc1_22.bin"

@	.align 2
@DirectSoundWaveData_37l12prc1_32::
@	.incbin "sound/direct_sound_samples/new/37l12prc1_32.bin"

@	.align 2
@DirectSoundWaveData_37l13prc1_22::
@	.incbin "sound/direct_sound_samples/new/37l13prc1_22.bin"

@	.align 2
@DirectSoundWaveData_650_Long_11::
@	.incbin "sound/direct_sound_samples/new/650_Long_11.bin"

@	.align 2
@DirectSoundWaveData_650_Long_13::
@	.incbin "sound/direct_sound_samples/new/650_Long_13.bin"

@	.align 2
@DirectSoundWaveData_650_Long_16::
@	.incbin "sound/direct_sound_samples/new/650_Long_16.bin"

@	.align 2
@DirectSoundWaveData_650_breath_11::
@	.incbin "sound/direct_sound_samples/new/650_breath_11.bin"

@	.align 2
@DirectSoundWaveData_650_short_11::
@	.incbin "sound/direct_sound_samples/new/650_short_11.bin"

@	.align 2
@DirectSoundWaveData_650_short_13::
@	.incbin "sound/direct_sound_samples/new/650_short_13.bin"

@	.align 2
@DirectSoundWaveData_651_Long_11::
@	.incbin "sound/direct_sound_samples/new/651_Long_11.bin"

@	.align 2
@DirectSoundWaveData_651_Long_13::
@	.incbin "sound/direct_sound_samples/new/651_Long_13.bin"

@	.align 2
@DirectSoundWaveData_651_Long_16::
@	.incbin "sound/direct_sound_samples/new/651_Long_16.bin"

@	.align 2
@DirectSoundWaveData_651_breath_11::
@	.incbin "sound/direct_sound_samples/new/651_breath_11.bin"

@	.align 2
@DirectSoundWaveData_651_breath_13::
@	.incbin "sound/direct_sound_samples/new/651_breath_13.bin"

@	.align 2
@DirectSoundWaveData_651_short_11::
@	.incbin "sound/direct_sound_samples/new/651_short_11.bin"

@	.align 2
@DirectSoundWaveData_651_short_13::
@	.incbin "sound/direct_sound_samples/new/651_short_13.bin"

@	.align 2
@DirectSoundWaveData_BPM125_22::
@	.incbin "sound/direct_sound_samples/new/BPM125_22.bin"

@	.align 2
@DirectSoundWaveData_Indst_C_Hat_01_32::
@	.incbin "sound/direct_sound_samples/new/Indst_C_Hat_01_32.bin"

@	.align 2
@DirectSoundWaveData_Indst_Crash_01_32::
@	.incbin "sound/direct_sound_samples/new/Indst_Crash_01_32.bin"

@	.align 2
@DirectSoundWaveData_Indst_Crash_02_32::
@	.incbin "sound/direct_sound_samples/new/Indst_Crash_02_32.bin"

@	.align 2
@DirectSoundWaveData_Indst_Kick_01_32::
@	.incbin "sound/direct_sound_samples/new/Indst_Kick_01_32.bin"

@	.align 2
@DirectSoundWaveData_Indst_Kick_02_32::
@	.incbin "sound/direct_sound_samples/new/Indst_Kick_02_32.bin"

@	.align 2
@DirectSoundWaveData_Indst_O_Hat_01_32::
@	.incbin "sound/direct_sound_samples/new/Indst_O_Hat_01_32.bin"

@	.align 2
@DirectSoundWaveData_Indst_Perc_01_32::
@	.incbin "sound/direct_sound_samples/new/Indst_Perc_01_32.bin"

@	.align 2
@DirectSoundWaveData_Indst_Perc_02_32::
@	.incbin "sound/direct_sound_samples/new/Indst_Perc_02_32.bin"

@	.align 2
@DirectSoundWaveData_Indst_Snare_01_32::
@	.incbin "sound/direct_sound_samples/new/Indst_Snare_01_32.bin"

@	.align 2
@DirectSoundWaveData_Indst_Snare_02_32::
@	.incbin "sound/direct_sound_samples/new/Indst_Snare_02_32.bin"

@	.align 2
@DirectSoundWaveData_Indst_Tom_H_32::
@	.incbin "sound/direct_sound_samples/new/Indst_Tom_H_32.bin"

@	.align 2
@DirectSoundWaveData_Indst_Tom_L_32::
@	.incbin "sound/direct_sound_samples/new/Indst_Tom_L_32.bin"

@	.align 2
@DirectSoundWaveData_Indst_Tom_MH_32::
@	.incbin "sound/direct_sound_samples/new/Indst_Tom_MH_32.bin"

@	.align 2
@DirectSoundWaveData_Indst_Tom_ML_32::
@	.incbin "sound/direct_sound_samples/new/Indst_Tom_ML_32.bin"

@	.align 2
@DirectSoundWaveData_Noise_C_Hat_01_32::
@	.incbin "sound/direct_sound_samples/new/Noise_C_Hat_01_32.bin"

@	.align 2
@DirectSoundWaveData_Noise_Click_32::
@	.incbin "sound/direct_sound_samples/new/Noise_Click_32.bin"

@	.align 2
@DirectSoundWaveData_Noise_Crash_01_32::
@	.incbin "sound/direct_sound_samples/new/Noise_Crash_01_32.bin"

@	.align 2
@DirectSoundWaveData_Noise_Hit_02_32::
@	.incbin "sound/direct_sound_samples/new/Noise_Hit_02_32.bin"

@	.align 2
@DirectSoundWaveData_Noise_Hit_32::
@	.incbin "sound/direct_sound_samples/new/Noise_Hit_32.bin"

@	.align 2
@DirectSoundWaveData_Noise_Kick_01_32::
@	.incbin "sound/direct_sound_samples/new/Noise_Kick_01_32.bin"

	.align 2
DirectSoundWaveData_Noise_Kick_01d_32::
	.incbin "sound/direct_sound_samples/new/Noise_Kick_01d_32.bin"

@	.align 2
@DirectSoundWaveData_Noise_Kick_02_32::
@	.incbin "sound/direct_sound_samples/new/Noise_Kick_02_32.bin"

@	.align 2
@DirectSoundWaveData_Noise_Kick_03_32::
@	.incbin "sound/direct_sound_samples/new/Noise_Kick_03_32.bin"

@	.align 2
@DirectSoundWaveData_Noise_Metal_32::
@	.incbin "sound/direct_sound_samples/new/Noise_Metal_32.bin"

@	.align 2
@DirectSoundWaveData_Noise_O_Hat_01_32::
@	.incbin "sound/direct_sound_samples/new/Noise_O_Hat_01_32.bin"

@	.align 2
@DirectSoundWaveData_Noise_Perc_01_32::
@	.incbin "sound/direct_sound_samples/new/Noise_Perc_01_32.bin"

@	.align 2
@DirectSoundWaveData_Noise_Pling_01_32::
@	.incbin "sound/direct_sound_samples/new/Noise_Pling_01_32.bin"

@	.align 2
@DirectSoundWaveData_Noise_Pling_02_32::
@	.incbin "sound/direct_sound_samples/new/Noise_Pling_02_32.bin"

@	.align 2
@DirectSoundWaveData_Noise_Snare_01_32::
@	.incbin "sound/direct_sound_samples/new/Noise_Snare_01_32.bin"

@	.align 2
@DirectSoundWaveData_Noise_Snare_02_32::
@	.incbin "sound/direct_sound_samples/new/Noise_Snare_02_32.bin"

@	.align 2
@DirectSoundWaveData_Noise_Snare_03_32::
@	.incbin "sound/direct_sound_samples/new/Noise_Snare_03_32.bin"

@	.align 2
@DirectSoundWaveData_Noise_Wood_32::
@	.incbin "sound/direct_sound_samples/new/Noise_Wood_32.bin"

@	.align 2
@DirectSoundWaveData_Power_C_Hat_32::
@	.incbin "sound/direct_sound_samples/new/Power_C_Hat_32.bin"

@	.align 2
@DirectSoundWaveData_Power_Crash_01_32::
@	.incbin "sound/direct_sound_samples/new/Power_Crash_01_32.bin"

@	.align 2
@DirectSoundWaveData_Power_Crash_02_32::
@	.incbin "sound/direct_sound_samples/new/Power_Crash_02_32.bin"

@	.align 2
@DirectSoundWaveData_Power_Kick_01_32::
@	.incbin "sound/direct_sound_samples/new/Power_Kick_01_32.bin"

@	.align 2
@DirectSoundWaveData_Power_Kick_02_32::
@	.incbin "sound/direct_sound_samples/new/Power_Kick_02_32.bin"

@	.align 2
@DirectSoundWaveData_Power_O_Hat_32::
@	.incbin "sound/direct_sound_samples/new/Power_O_Hat_32.bin"

@	.align 2
@DirectSoundWaveData_Power_Snare_01_32::
@	.incbin "sound/direct_sound_samples/new/Power_Snare_01_32.bin"

@	.align 2
@DirectSoundWaveData_Power_Snare_02_32::
@	.incbin "sound/direct_sound_samples/new/Power_Snare_02_32.bin"

@	.align 2
@DirectSoundWaveData_Power_Tom_H_32::
@	.incbin "sound/direct_sound_samples/new/Power_Tom_H_32.bin"

@	.align 2
@DirectSoundWaveData_Power_Tom_L_32::
@	.incbin "sound/direct_sound_samples/new/Power_Tom_L_32.bin"

@	.align 2
@DirectSoundWaveData_Power_Tom_MH_32::
@	.incbin "sound/direct_sound_samples/new/Power_Tom_MH_32.bin"

@	.align 2
@DirectSoundWaveData_Power_Tom_ML_32::
@	.incbin "sound/direct_sound_samples/new/Power_Tom_ML_32.bin"

@	.align 2
@DirectSoundWaveData_a_bass_loops_c2_32::
@	.incbin "sound/direct_sound_samples/new/a_bass_loops_c2_32.bin"

@	.align 2
@DirectSoundWaveData_a_bass_ps_c2_32::
@	.incbin "sound/direct_sound_samples/new/a_bass_ps_c2_32.bin"

@	.align 2
@DirectSoundWaveData_a_bass_ps_c3_32::
@	.incbin "sound/direct_sound_samples/new/a_bass_ps_c3_32.bin"

@	.align 2
@DirectSoundWaveData_a_bass_ps_g2_32::
@	.incbin "sound/direct_sound_samples/new/a_bass_ps_g2_32.bin"

@	.align 2
@DirectSoundWaveData_a_bass_ps_g3_32::
@	.incbin "sound/direct_sound_samples/new/a_bass_ps_g3_32.bin"

	.align 2
DirectSoundWaveData_a_bass_wb_e2_22::
	.incbin "sound/direct_sound_samples/new/a_bass_wb_e2_22.bin"

	.align 2
DirectSoundWaveData_a_bass_wb_e3_22::
	.incbin "sound/direct_sound_samples/new/a_bass_wb_e3_22.bin"

@	.align 2
@DirectSoundWaveData_a_guitar_01_a2_32::
@	.incbin "sound/direct_sound_samples/new/a_guitar_01_a2_32.bin"

@	.align 2
@DirectSoundWaveData_a_guitar_01_b3_32::
@	.incbin "sound/direct_sound_samples/new/a_guitar_01_b3_32.bin"

@	.align 2
@DirectSoundWaveData_a_guitar_01_d3_32::
@	.incbin "sound/direct_sound_samples/new/a_guitar_01_d3_32.bin"

@	.align 2
@DirectSoundWaveData_a_guitar_01_e2_32::
@	.incbin "sound/direct_sound_samples/new/a_guitar_01_e2_32.bin"

@	.align 2
@DirectSoundWaveData_a_guitar_01_e4_32::
@	.incbin "sound/direct_sound_samples/new/a_guitar_01_e4_32.bin"

@	.align 2
@DirectSoundWaveData_a_guitar_01_g3_32::
@	.incbin "sound/direct_sound_samples/new/a_guitar_01_g3_32.bin"

@	.align 2
@DirectSoundWaveData_a_guitar_c4_13::
@	.incbin "sound/direct_sound_samples/new/a_guitar_c4_13.bin"

	.align 2
DirectSoundWaveData_ac_bass_c2_22::
	.incbin "sound/direct_sound_samples/new/ac_bass_c2_22.bin"

	.align 2
DirectSoundWaveData_ac_bass_c3_22::
	.incbin "sound/direct_sound_samples/new/ac_bass_c3_22.bin"

	.align 2
DirectSoundWaveData_accordion_c3_22::
	.incbin "sound/direct_sound_samples/new/accordion_c3_22.bin"

@	.align 2
@DirectSoundWaveData_accordion_c3_32::
@	.incbin "sound/direct_sound_samples/new/accordion_c3_32.bin"

	.align 2
DirectSoundWaveData_accordion_c4_22::
	.incbin "sound/direct_sound_samples/new/accordion_c4_22.bin"

@	.align 2
@DirectSoundWaveData_accordion_c4_32::
@	.incbin "sound/direct_sound_samples/new/accordion_c4_32.bin"

	.align 2
DirectSoundWaveData_accordion_c5_22::
	.incbin "sound/direct_sound_samples/new/accordion_c5_22.bin"

@	.align 2
@DirectSoundWaveData_accordion_c5_32::
@	.incbin "sound/direct_sound_samples/new/accordion_c5_32.bin"

	.align 2
DirectSoundWaveData_accordion_wb_c3_22::
	.incbin "sound/direct_sound_samples/new/accordion_wb_c3_22.bin"

	.align 2
DirectSoundWaveData_accordion_wb_c4_22::
	.incbin "sound/direct_sound_samples/new/accordion_wb_c4_22.bin"

	.align 2
DirectSoundWaveData_accordion_wb_c5_22::
	.incbin "sound/direct_sound_samples/new/accordion_wb_c5_22.bin"

@	.align 2
@DirectSoundWaveData_acobs_c1_13::
@	.incbin "sound/direct_sound_samples/new/acobs_c1_13.bin"

@	.align 2
@DirectSoundWaveData_africa_dr_16::
@	.incbin "sound/direct_sound_samples/new/africa_dr_16.bin"

	.align 2
DirectSoundWaveData_ahaa_sop_b4_22::
	.incbin "sound/direct_sound_samples/new/ahaa_sop_b4_22.bin"

	.align 2
DirectSoundWaveData_altosax_c3_16::
	.incbin "sound/direct_sound_samples/new/altosax_c3_16.bin"

	.align 2
DirectSoundWaveData_atc_pet_sect_a4_32::
	.incbin "sound/direct_sound_samples/new/atc_pet_sect_a4_32.bin"

	.align 2
DirectSoundWaveData_atc_pet_sect_c4_32::
	.incbin "sound/direct_sound_samples/new/atc_pet_sect_c4_32.bin"

	.align 2
DirectSoundWaveData_atc_pet_sect_g5_32::
	.incbin "sound/direct_sound_samples/new/atc_pet_sect_g5_32.bin"

@	.align 2
@DirectSoundWaveData_attack_piano2_c4_32::
@	.incbin "sound/direct_sound_samples/new/attack_piano2_c4_32.bin"

@	.align 2
@DirectSoundWaveData_attack_piano2_c5_32::
@	.incbin "sound/direct_sound_samples/new/attack_piano2_c5_32.bin"

	.align 2
DirectSoundWaveData_attack_piano_c4_22::
	.incbin "sound/direct_sound_samples/new/attack_piano_c4_22.bin"

	.align 2
DirectSoundWaveData_attack_piano_c5_22::
	.incbin "sound/direct_sound_samples/new/attack_piano_c5_22.bin"

	.align 2
DirectSoundWaveData_attack_piano_wb_c4_22::
	.incbin "sound/direct_sound_samples/new/attack_piano_wb_c4_22.bin"

@	.align 2
@DirectSoundWaveData_attack_piano_wb_c4_32::
@	.incbin "sound/direct_sound_samples/new/attack_piano_wb_c4_32.bin"

	.align 2
DirectSoundWaveData_attack_piano_wb_c5_22::
	.incbin "sound/direct_sound_samples/new/attack_piano_wb_c5_22.bin"

@	.align 2
@DirectSoundWaveData_attack_piano_wb_c5_32::
@	.incbin "sound/direct_sound_samples/new/attack_piano_wb_c5_32.bin"

@	.align 2
@DirectSoundWaveData_ban_13::
@	.incbin "sound/direct_sound_samples/new/ban_13.bin"

	.align 2
DirectSoundWaveData_bass_ana01_32::
	.incbin "sound/direct_sound_samples/new/bass_ana01_32.bin"

@	.align 2
@DirectSoundWaveData_bass_fretless_d1_16::
@	.incbin "sound/direct_sound_samples/new/bass_fretless_d1_16.bin"

	.align 2
DirectSoundWaveData_bass_hit01_32::
	.incbin "sound/direct_sound_samples/new/bass_hit01_32.bin"

@	.align 2
@DirectSoundWaveData_bassdr1_16::
@	.incbin "sound/direct_sound_samples/new/bassdr1_16.bin"

	.align 2
DirectSoundWaveData_bassdr1_32::
	.incbin "sound/direct_sound_samples/new/bassdr1_32.bin"

@	.align 2
@DirectSoundWaveData_bassdr2_16::
@	.incbin "sound/direct_sound_samples/new/bassdr2_16.bin"

	.align 2
DirectSoundWaveData_bassdr2_32::
	.incbin "sound/direct_sound_samples/new/bassdr2_32.bin"

	.align 2
DirectSoundWaveData_bassdr_1_16::
	.incbin "sound/direct_sound_samples/new/bassdr_1_16.bin"

	.align 2
DirectSoundWaveData_bassdr_2_16::
	.incbin "sound/direct_sound_samples/new/bassdr_2_16.bin"

	.align 2
DirectSoundWaveData_bassdr_3_16::
	.incbin "sound/direct_sound_samples/new/bassdr_3_16.bin"

	.align 2
DirectSoundWaveData_bassdr_euro_16::
	.incbin "sound/direct_sound_samples/new/bassdr_euro_16.bin"

	.align 2
DirectSoundWaveData_basson_a3_22::
	.incbin "sound/direct_sound_samples/new/basson_a3_22.bin"

@	.align 2
@DirectSoundWaveData_basson_a3_32::
@	.incbin "sound/direct_sound_samples/new/basson_a3_32.bin"

	.align 2
DirectSoundWaveData_basson_c3_22::
	.incbin "sound/direct_sound_samples/new/basson_c3_22.bin"

@	.align 2
@DirectSoundWaveData_basson_c3_32::
@	.incbin "sound/direct_sound_samples/new/basson_c3_32.bin"

	.align 2
DirectSoundWaveData_basson_e2_22::
	.incbin "sound/direct_sound_samples/new/basson_e2_22.bin"

@	.align 2
@DirectSoundWaveData_basson_e2_32::
@	.incbin "sound/direct_sound_samples/new/basson_e2_32.bin"

	.align 2
DirectSoundWaveData_basson_f4_22::
	.incbin "sound/direct_sound_samples/new/basson_f4_22.bin"

@	.align 2
@DirectSoundWaveData_basson_f4_32::
@	.incbin "sound/direct_sound_samples/new/basson_f4_32.bin"

@	.align 2
@DirectSoundWaveData_beem1_13::
@	.incbin "sound/direct_sound_samples/new/beem1_13.bin"

@	.align 2
@DirectSoundWaveData_bell_32::
@	.incbin "sound/direct_sound_samples/new/bell_32.bin"

@	.align 2
@DirectSoundWaveData_bic_bell_13::
@	.incbin "sound/direct_sound_samples/new/bic_bell_13.bin"

@	.align 2
@DirectSoundWaveData_big_bone_c2_13::
@	.incbin "sound/direct_sound_samples/new/big_bone_c2_13.bin"

	.align 2
DirectSoundWaveData_body_hit1_22::
	.incbin "sound/direct_sound_samples/new/body_hit1_22.bin"

@	.align 2
@DirectSoundWaveData_bom2_13::
@	.incbin "sound/direct_sound_samples/new/bom2_13.bin"

@	.align 2
@DirectSoundWaveData_bomb_13::
@	.incbin "sound/direct_sound_samples/new/bomb_13.bin"

	.align 2
DirectSoundWaveData_bongo_16::
	.incbin "sound/direct_sound_samples/new/bongo_16.bin"

@	.align 2
@DirectSoundWaveData_bongo_32::
@	.incbin "sound/direct_sound_samples/new/bongo_32.bin"

	.align 2
DirectSoundWaveData_brass_stacgs3_32::
	.incbin "sound/direct_sound_samples/new/brass_stacgs3_32.bin"

	.align 2
DirectSoundWaveData_breth_noiselopp_cs4_32::
	.incbin "sound/direct_sound_samples/new/breth_noiselopp_cs4_32.bin"

	.align 2
DirectSoundWaveData_bright_horn_b4_22::
	.incbin "sound/direct_sound_samples/new/bright_horn_b4_22.bin"

@	.align 2
@DirectSoundWaveData_bright_horn_b4_32::
@	.incbin "sound/direct_sound_samples/new/bright_horn_b4_32.bin"

	.align 2
DirectSoundWaveData_bright_horn_d4_22::
	.incbin "sound/direct_sound_samples/new/bright_horn_d4_22.bin"

@	.align 2
@DirectSoundWaveData_bright_horn_d4_32::
@	.incbin "sound/direct_sound_samples/new/bright_horn_d4_32.bin"

	.align 2
DirectSoundWaveData_bright_horn_f3_22::
	.incbin "sound/direct_sound_samples/new/bright_horn_f3_22.bin"

@	.align 2
@DirectSoundWaveData_bright_horn_f3_32::
@	.incbin "sound/direct_sound_samples/new/bright_horn_f3_32.bin"

@	.align 2
@DirectSoundWaveData_bright_horn_g5_32::
@	.incbin "sound/direct_sound_samples/new/bright_horn_g5_32.bin"

@	.align 2
@DirectSoundWaveData_bubble_13::
@	.incbin "sound/direct_sound_samples/new/bubble_13.bin"

@	.align 2
@DirectSoundWaveData_c3_oct1_whis_32::
@	.incbin "sound/direct_sound_samples/new/c3_oct1_whis_32.bin"

@	.align 2
@DirectSoundWaveData_c4_oct01_whis_32::
@	.incbin "sound/direct_sound_samples/new/c4_oct01_whis_32.bin"

@	.align 2
@DirectSoundWaveData_c5_oct02_whis_32::
@	.incbin "sound/direct_sound_samples/new/c5_oct02_whis_32.bin"

	.align 2
DirectSoundWaveData_cabasa_16::
	.incbin "sound/direct_sound_samples/new/cabasa_16.bin"

	.align 2
DirectSoundWaveData_cabasa_32::
	.incbin "sound/direct_sound_samples/new/cabasa_32.bin"

@	.align 2
@DirectSoundWaveData_car_pass_22::
@	.incbin "sound/direct_sound_samples/new/car_pass_22.bin"

@	.align 2
@DirectSoundWaveData_car_pass_32::
@	.incbin "sound/direct_sound_samples/new/car_pass_32.bin"

@	.align 2
@DirectSoundWaveData_castanet2_32::
@	.incbin "sound/direct_sound_samples/new/castanet2_32.bin"

@	.align 2
@DirectSoundWaveData_castanet_22::
@	.incbin "sound/direct_sound_samples/new/castanet_22.bin"

	.align 2
DirectSoundWaveData_castanet_32::
	.incbin "sound/direct_sound_samples/new/castanet_32.bin"

	.align 2
DirectSoundWaveData_chello_solo_c4_22::
	.incbin "sound/direct_sound_samples/new/chello_solo_c4_22.bin"

@	.align 2
@DirectSoundWaveData_chello_solo_c4_32::
@	.incbin "sound/direct_sound_samples/new/chello_solo_c4_32.bin"

	.align 2
DirectSoundWaveData_chello_solo_e3_22::
	.incbin "sound/direct_sound_samples/new/chello_solo_e3_22.bin"

@	.align 2
@DirectSoundWaveData_chello_solo_e3_32::
@	.incbin "sound/direct_sound_samples/new/chello_solo_e3_32.bin"

	.align 2
DirectSoundWaveData_chello_solo_g2_22::
	.incbin "sound/direct_sound_samples/new/chello_solo_g2_22.bin"

@	.align 2
@DirectSoundWaveData_chello_solo_g2_32::
@	.incbin "sound/direct_sound_samples/new/chello_solo_g2_32.bin"

@	.align 2
@DirectSoundWaveData_china_cymbal_16::
@	.incbin "sound/direct_sound_samples/new/china_cymbal_16.bin"

	.align 2
DirectSoundWaveData_chinese_cym_22::
	.incbin "sound/direct_sound_samples/new/chinese_cym_22.bin"

@	.align 2
@DirectSoundWaveData_chinese_cym_32::
@	.incbin "sound/direct_sound_samples/new/chinese_cym_32.bin"

	.align 2
DirectSoundWaveData_chinesecym1_analog_kit_32::
	.incbin "sound/direct_sound_samples/new/chinesecym1_analog_kit_32.bin"

@	.align 2
@DirectSoundWaveData_chinesecym_rockkit_st_32::
@	.incbin "sound/direct_sound_samples/new/chinesecym_rockkit_st_32.bin"

	.align 2
DirectSoundWaveData_chiss_shot_32::
	.incbin "sound/direct_sound_samples/new/chiss_shot_32.bin"

@	.align 2
@DirectSoundWaveData_choir_female_c5_32::
@	.incbin "sound/direct_sound_samples/new/choir_female_c5_32.bin"

@	.align 2
@DirectSoundWaveData_choir_female_f4_32::
@	.incbin "sound/direct_sound_samples/new/choir_female_f4_32.bin"

@	.align 2
@DirectSoundWaveData_choir_female_f5_32::
@	.incbin "sound/direct_sound_samples/new/choir_female_f5_32.bin"

@	.align 2
@DirectSoundWaveData_choir_male_c4_32::
@	.incbin "sound/direct_sound_samples/new/choir_male_c4_32.bin"

@	.align 2
@DirectSoundWaveData_choir_male_e3_32::
@	.incbin "sound/direct_sound_samples/new/choir_male_e3_32.bin"

@	.align 2
@DirectSoundWaveData_choir_male_g2_32::
@	.incbin "sound/direct_sound_samples/new/choir_male_g2_32.bin"

	.align 2
DirectSoundWaveData_choirs_female_c4_16::
	.incbin "sound/direct_sound_samples/new/choirs_female_c4_16.bin"

	.align 2
DirectSoundWaveData_choirs_female_c4_22::
	.incbin "sound/direct_sound_samples/new/choirs_female_c4_22.bin"

	.align 2
DirectSoundWaveData_choirs_male_a3_32::
	.incbin "sound/direct_sound_samples/new/choirs_male_a3_32.bin"

@	.align 2
@DirectSoundWaveData_choirs_male_c2_16::
@	.incbin "sound/direct_sound_samples/new/choirs_male_c2_16.bin"

	.align 2
DirectSoundWaveData_choirs_male_c3_16::
	.incbin "sound/direct_sound_samples/new/choirs_male_c3_16.bin"

	.align 2
DirectSoundWaveData_choirs_male_c3_32::
	.incbin "sound/direct_sound_samples/new/choirs_male_c3_32.bin"

	.align 2
DirectSoundWaveData_choirs_male_c5_32::
	.incbin "sound/direct_sound_samples/new/choirs_male_c5_32.bin"

	.align 2
DirectSoundWaveData_choirs_male_f4_32::
	.incbin "sound/direct_sound_samples/new/choirs_male_f4_32.bin"

@	.align 2
@DirectSoundWaveData_choirs_male_se_c3_32::
@	.incbin "sound/direct_sound_samples/new/choirs_male_se_c3_32.bin"

@	.align 2
@DirectSoundWaveData_church_organ_a4_22::
@	.incbin "sound/direct_sound_samples/new/church_organ_a4_22.bin"

@	.align 2
@DirectSoundWaveData_church_organ_a4_32::
@	.incbin "sound/direct_sound_samples/new/church_organ_a4_32.bin"

@	.align 2
@DirectSoundWaveData_church_organ_c4_22::
@	.incbin "sound/direct_sound_samples/new/church_organ_c4_22.bin"

@	.align 2
@DirectSoundWaveData_church_organ_c4_32::
@	.incbin "sound/direct_sound_samples/new/church_organ_c4_32.bin"

@	.align 2
@DirectSoundWaveData_church_organ_e3_22::
@	.incbin "sound/direct_sound_samples/new/church_organ_e3_22.bin"

@	.align 2
@DirectSoundWaveData_church_organ_e3_32::
@	.incbin "sound/direct_sound_samples/new/church_organ_e3_32.bin"

@	.align 2
@DirectSoundWaveData_church_organ_f5_22::
@	.incbin "sound/direct_sound_samples/new/church_organ_f5_22.bin"

@	.align 2
@DirectSoundWaveData_church_organ_f5_32::
@	.incbin "sound/direct_sound_samples/new/church_organ_f5_32.bin"

@	.align 2
@DirectSoundWaveData_church_organ_g2_22::
@	.incbin "sound/direct_sound_samples/new/church_organ_g2_22.bin"

@	.align 2
@DirectSoundWaveData_church_organ_g2_32::
@	.incbin "sound/direct_sound_samples/new/church_organ_g2_32.bin"

@	.align 2
@DirectSoundWaveData_clarinet_a3_22::
@	.incbin "sound/direct_sound_samples/new/clarinet_a3_22.bin"

	.align 2
DirectSoundWaveData_clarinet_c5_22::
	.incbin "sound/direct_sound_samples/new/clarinet_c5_22.bin"

@	.align 2
@DirectSoundWaveData_clarinet_c5_32::
@	.incbin "sound/direct_sound_samples/new/clarinet_c5_32.bin"

@	.align 2
@DirectSoundWaveData_clarinet_d2_22::
@	.incbin "sound/direct_sound_samples/new/clarinet_d2_22.bin"

@	.align 2
@DirectSoundWaveData_clarinet_ds3_22::
@	.incbin "sound/direct_sound_samples/new/clarinet_ds3_22.bin"

	.align 2
DirectSoundWaveData_clarinet_e4_22::
	.incbin "sound/direct_sound_samples/new/clarinet_e4_22.bin"

@	.align 2
@DirectSoundWaveData_clarinet_e4_32::
@	.incbin "sound/direct_sound_samples/new/clarinet_e4_32.bin"

	.align 2
DirectSoundWaveData_clarinet_g3_22::
	.incbin "sound/direct_sound_samples/new/clarinet_g3_22.bin"

@	.align 2
@DirectSoundWaveData_clarinet_g3_32::
@	.incbin "sound/direct_sound_samples/new/clarinet_g3_32.bin"

	.align 2
DirectSoundWaveData_clarinet_wb_a4_22::
	.incbin "sound/direct_sound_samples/new/clarinet_wb_a4_22.bin"

	.align 2
DirectSoundWaveData_clarinet_wb_c4_22::
	.incbin "sound/direct_sound_samples/new/clarinet_wb_c4_22.bin"

	.align 2
DirectSoundWaveData_clarinet_wb_f5_22::
	.incbin "sound/direct_sound_samples/new/clarinet_wb_f5_22.bin"

	.align 2
DirectSoundWaveData_clash_02_22::
	.incbin "sound/direct_sound_samples/new/clash_02_22.bin"

@	.align 2
@DirectSoundWaveData_clean_gt_c3_16::
@	.incbin "sound/direct_sound_samples/new/clean_gt_c3_16.bin"

	.align 2
DirectSoundWaveData_clean_guitar_c5_22::
	.incbin "sound/direct_sound_samples/new/clean_guitar_c5_22.bin"

@	.align 2
@DirectSoundWaveData_clean_guitar_c5_32::
@	.incbin "sound/direct_sound_samples/new/clean_guitar_c5_32.bin"

	.align 2
DirectSoundWaveData_clean_guitar_e4_22::
	.incbin "sound/direct_sound_samples/new/clean_guitar_e4_22.bin"

@	.align 2
@DirectSoundWaveData_clean_guitar_e4_32::
@	.incbin "sound/direct_sound_samples/new/clean_guitar_e4_32.bin"

	.align 2
DirectSoundWaveData_clean_guitar_g2_22::
	.incbin "sound/direct_sound_samples/new/clean_guitar_g2_22.bin"

@	.align 2
@DirectSoundWaveData_clean_guitar_g2_32::
@	.incbin "sound/direct_sound_samples/new/clean_guitar_g2_32.bin"

	.align 2
DirectSoundWaveData_clean_guitar_g3_22::
	.incbin "sound/direct_sound_samples/new/clean_guitar_g3_22.bin"

@	.align 2
@DirectSoundWaveData_clean_guitar_g3_32::
@	.incbin "sound/direct_sound_samples/new/clean_guitar_g3_32.bin"

	.align 2
DirectSoundWaveData_clock_32::
	.incbin "sound/direct_sound_samples/new/clock_32.bin"

	.align 2
DirectSoundWaveData_clock_n_22::
	.incbin "sound/direct_sound_samples/new/clock_n_22.bin"

@	.align 2
@DirectSoundWaveData_closed_hihat_16::
@	.incbin "sound/direct_sound_samples/new/closed_hihat_16.bin"

	.align 2
DirectSoundWaveData_conb_cs1_32::
	.incbin "sound/direct_sound_samples/new/conb_cs1_32.bin"

	.align 2
DirectSoundWaveData_conbas_spic_e1_32::
	.incbin "sound/direct_sound_samples/new/conbas_spic_e1_32.bin"

	.align 2
DirectSoundWaveData_cool3_basE0_22::
	.incbin "sound/direct_sound_samples/new/cool3_basE0_22.bin"

	.align 2
DirectSoundWaveData_cool_basE0_22::
	.incbin "sound/direct_sound_samples/new/cool_basE0_22.bin"

	.align 2
DirectSoundWaveData_cool_snare2_22::
	.incbin "sound/direct_sound_samples/new/cool_snare2_22.bin"

	.align 2
DirectSoundWaveData_cool_snare3_22::
	.incbin "sound/direct_sound_samples/new/cool_snare3_22.bin"

	.align 2
DirectSoundWaveData_cowbell_22::
	.incbin "sound/direct_sound_samples/new/cowbell_22.bin"

@	.align 2
@DirectSoundWaveData_cowbell_32::
@	.incbin "sound/direct_sound_samples/new/cowbell_32.bin"

	.align 2
DirectSoundWaveData_cowbell_max32::
	.incbin "sound/direct_sound_samples/new/cowbell_max32.bin"

	.align 2
DirectSoundWaveData_crash_cym_22::
	.incbin "sound/direct_sound_samples/new/crash_cym_22.bin"

@	.align 2
@DirectSoundWaveData_crash_cym_32::
@	.incbin "sound/direct_sound_samples/new/crash_cym_32.bin"

	.align 2
DirectSoundWaveData_crashcym1_analog_kit_32::
	.incbin "sound/direct_sound_samples/new/crashcym1_analog_kit_32.bin"

	.align 2
DirectSoundWaveData_crashcym1_popkit_32::
	.incbin "sound/direct_sound_samples/new/crashcym1_popkit_32.bin"

@	.align 2
@DirectSoundWaveData_crashcym2_analog_kit_32::
@	.incbin "sound/direct_sound_samples/new/crashcym2_analog_kit_32.bin"

	.align 2
DirectSoundWaveData_crashcym2_popkit_32::
	.incbin "sound/direct_sound_samples/new/crashcym2_popkit_32.bin"

	.align 2
DirectSoundWaveData_crashcym2_rockkit_st_32::
	.incbin "sound/direct_sound_samples/new/crashcym2_rockkit_st_32.bin"

@	.align 2
@DirectSoundWaveData_crashcym_rockkit_st_32::
@	.incbin "sound/direct_sound_samples/new/crashcym_rockkit_st_32.bin"

	.align 2
DirectSoundWaveData_crushroll_32::
	.incbin "sound/direct_sound_samples/new/crushroll_32.bin"

@	.align 2
@DirectSoundWaveData_cutting_32::
@	.incbin "sound/direct_sound_samples/new/cutting_32.bin"

@	.align 2
@DirectSoundWaveData_cymbal1_16::
@	.incbin "sound/direct_sound_samples/new/cymbal1_16.bin"

@	.align 2
@DirectSoundWaveData_cymbal_oche2_32::
@	.incbin "sound/direct_sound_samples/new/cymbal_oche2_32.bin"

	.align 2
DirectSoundWaveData_cymbal_orch_22::
	.incbin "sound/direct_sound_samples/new/cymbal_orch_22.bin"

@	.align 2
@DirectSoundWaveData_cymbal_orch_32::
@	.incbin "sound/direct_sound_samples/new/cymbal_orch_32.bin"

@	.align 2
@DirectSoundWaveData_dance1_snare_32::
@	.incbin "sound/direct_sound_samples/new/dance1_snare_32.bin"

@	.align 2
@DirectSoundWaveData_dance2_snare_32::
@	.incbin "sound/direct_sound_samples/new/dance2_snare_32.bin"

@	.align 2
@DirectSoundWaveData_dance3_snare_32::
@	.incbin "sound/direct_sound_samples/new/dance3_snare_32.bin"

	.align 2
DirectSoundWaveData_dance_close_hat_32::
	.incbin "sound/direct_sound_samples/new/dance_close_hat_32.bin"

	.align 2
DirectSoundWaveData_dance_open_hat_32::
	.incbin "sound/direct_sound_samples/new/dance_open_hat_32.bin"

	.align 2
DirectSoundWaveData_dis_gt_b4_16::
	.incbin "sound/direct_sound_samples/new/dis_gt_b4_16.bin"

	.align 2
DirectSoundWaveData_dis_gt_c2_16::
	.incbin "sound/direct_sound_samples/new/dis_gt_c2_16.bin"

	.align 2
DirectSoundWaveData_dis_gt_e1_16::
	.incbin "sound/direct_sound_samples/new/dis_gt_e1_16.bin"

	.align 2
DirectSoundWaveData_dis_gt_e3_16::
	.incbin "sound/direct_sound_samples/new/dis_gt_e3_16.bin"

	.align 2
DirectSoundWaveData_dis_gt_e4_16::
	.incbin "sound/direct_sound_samples/new/dis_gt_e4_16.bin"

	.align 2
DirectSoundWaveData_dis_gtl_c1_32::
	.incbin "sound/direct_sound_samples/new/dis_gtl_c1_32.bin"

	.align 2
DirectSoundWaveData_dis_gtl_c2_32::
	.incbin "sound/direct_sound_samples/new/dis_gtl_c2_32.bin"

	.align 2
DirectSoundWaveData_dis_gtl_c3_32::
	.incbin "sound/direct_sound_samples/new/dis_gtl_c3_32.bin"

	.align 2
DirectSoundWaveData_dis_gtl_c4_32::
	.incbin "sound/direct_sound_samples/new/dis_gtl_c4_32.bin"

@	.align 2
@DirectSoundWaveData_disgt_b4_16::
@	.incbin "sound/direct_sound_samples/new/disgt_b4_16.bin"

@	.align 2
@DirectSoundWaveData_disgt_c2_16::
@	.incbin "sound/direct_sound_samples/new/disgt_c2_16.bin"

@	.align 2
@DirectSoundWaveData_disgt_e1_16::
@	.incbin "sound/direct_sound_samples/new/disgt_e1_16.bin"

@	.align 2
@DirectSoundWaveData_disgt_e3_16::
@	.incbin "sound/direct_sound_samples/new/disgt_e3_16.bin"

@	.align 2
@DirectSoundWaveData_disgt_e4_16::
@	.incbin "sound/direct_sound_samples/new/disgt_e4_16.bin"

@	.align 2
@DirectSoundWaveData_door_13::
@	.incbin "sound/direct_sound_samples/new/door_13.bin"

@	.align 2
@DirectSoundWaveData_dora2_32::
@	.incbin "sound/direct_sound_samples/new/dora2_32.bin"

@	.align 2
@DirectSoundWaveData_dora_32::
@	.incbin "sound/direct_sound_samples/new/dora_32.bin"

	.align 2
DirectSoundWaveData_dora_loop_22::
	.incbin "sound/direct_sound_samples/new/dora_loop_22.bin"

@	.align 2
@DirectSoundWaveData_dragon_dr_16::
@	.incbin "sound/direct_sound_samples/new/dragon_dr_16.bin"

	.align 2
DirectSoundWaveData_drawbar_organ_c2_22::
	.incbin "sound/direct_sound_samples/new/drawbar_organ_c2_22.bin"

	.align 2
DirectSoundWaveData_drawbar_organ_c3_22::
	.incbin "sound/direct_sound_samples/new/drawbar_organ_c3_22.bin"

@	.align 2
@DirectSoundWaveData_drawbar_organ_c3_32::
@	.incbin "sound/direct_sound_samples/new/drawbar_organ_c3_32.bin"

	.align 2
DirectSoundWaveData_drawbar_organ_c4_22::
	.incbin "sound/direct_sound_samples/new/drawbar_organ_c4_22.bin"

@	.align 2
@DirectSoundWaveData_drawbar_organ_c4_32::
@	.incbin "sound/direct_sound_samples/new/drawbar_organ_c4_32.bin"

	.align 2
DirectSoundWaveData_drawbar_organ_c5_22::
	.incbin "sound/direct_sound_samples/new/drawbar_organ_c5_22.bin"

@	.align 2
@DirectSoundWaveData_drawbar_organ_c5_32::
@	.incbin "sound/direct_sound_samples/new/drawbar_organ_c5_32.bin"

@	.align 2
@DirectSoundWaveData_drum_loop_subway01_22::
@	.incbin "sound/direct_sound_samples/new/drum_loop_subway01_22.bin"

@	.align 2
@DirectSoundWaveData_drum_loop_wcs_01_22::
@	.incbin "sound/direct_sound_samples/new/drum_loop_wcs_01_22.bin"

	.align 2
DirectSoundWaveData_drumn_bass_32::
	.incbin "sound/direct_sound_samples/new/drumn_bass_32.bin"

	.align 2
DirectSoundWaveData_drumn_snare2_32::
	.incbin "sound/direct_sound_samples/new/drumn_snare2_32.bin"

@	.align 2
@DirectSoundWaveData_drumn_snare_32::
@	.incbin "sound/direct_sound_samples/new/drumn_snare_32.bin"

	.align 2
DirectSoundWaveData_e_bass_a2_22::
	.incbin "sound/direct_sound_samples/new/e_bass_a2_22.bin"

@	.align 2
@DirectSoundWaveData_e_bass_a2_32::
@	.incbin "sound/direct_sound_samples/new/e_bass_a2_32.bin"

	.align 2
DirectSoundWaveData_e_bass_a3_22::
	.incbin "sound/direct_sound_samples/new/e_bass_a3_22.bin"

@	.align 2
@DirectSoundWaveData_e_bass_a3_32::
@	.incbin "sound/direct_sound_samples/new/e_bass_a3_32.bin"

	.align 2
DirectSoundWaveData_e_bass_finger_c3_32::
	.incbin "sound/direct_sound_samples/new/e_bass_finger_c3_32.bin"

	.align 2
DirectSoundWaveData_e_bass_finger_e2_32::
	.incbin "sound/direct_sound_samples/new/e_bass_finger_e2_32.bin"

	.align 2
DirectSoundWaveData_e_bass_finger_g1_32::
	.incbin "sound/direct_sound_samples/new/e_bass_finger_g1_32.bin"

@	.align 2
@DirectSoundWaveData_e_bass_pick_c3_32::
@	.incbin "sound/direct_sound_samples/new/e_bass_pick_c3_32.bin"

@	.align 2
@DirectSoundWaveData_e_bass_pick_e2_32::
@	.incbin "sound/direct_sound_samples/new/e_bass_pick_e2_32.bin"

@	.align 2
@DirectSoundWaveData_e_bass_pick_g1_32::
@	.incbin "sound/direct_sound_samples/new/e_bass_pick_g1_32.bin"

	.align 2
DirectSoundWaveData_e_bass_ps_c2_32::
	.incbin "sound/direct_sound_samples/new/e_bass_ps_c2_32.bin"

	.align 2
DirectSoundWaveData_e_bass_ps_c3_32::
	.incbin "sound/direct_sound_samples/new/e_bass_ps_c3_32.bin"

	.align 2
DirectSoundWaveData_e_bass_ps_g1_32::
	.incbin "sound/direct_sound_samples/new/e_bass_ps_g1_32.bin"

	.align 2
DirectSoundWaveData_e_bass_ps_g2_32::
	.incbin "sound/direct_sound_samples/new/e_bass_ps_g2_32.bin"

@	.align 2
@DirectSoundWaveData_e_bass_pss_c2_32::
@	.incbin "sound/direct_sound_samples/new/e_bass_pss_c2_32.bin"

@	.align 2
@DirectSoundWaveData_e_bass_pss_g1_32::
@	.incbin "sound/direct_sound_samples/new/e_bass_pss_g1_32.bin"

	.align 2
DirectSoundWaveData_e_bass_wb_a2_22::
	.incbin "sound/direct_sound_samples/new/e_bass_wb_a2_22.bin"

@	.align 2
@DirectSoundWaveData_e_bass_wb_a2_32::
@	.incbin "sound/direct_sound_samples/new/e_bass_wb_a2_32.bin"

	.align 2
DirectSoundWaveData_e_bass_wb_a3_22::
	.incbin "sound/direct_sound_samples/new/e_bass_wb_a3_22.bin"

@	.align 2
@DirectSoundWaveData_e_bass_wb_a3_32::
@	.incbin "sound/direct_sound_samples/new/e_bass_wb_a3_32.bin"

@	.align 2
@DirectSoundWaveData_e_guitar_chord_e3_22::
@	.incbin "sound/direct_sound_samples/new/e_guitar_chord_e3_22.bin"

@	.align 2
@DirectSoundWaveData_e_guitar_chord_g2_22::
@	.incbin "sound/direct_sound_samples/new/e_guitar_chord_g2_22.bin"

	.align 2
DirectSoundWaveData_e_guitar_solo_c5_32::
	.incbin "sound/direct_sound_samples/new/e_guitar_solo_c5_32.bin"

	.align 2
DirectSoundWaveData_e_guitar_solo_e4_32::
	.incbin "sound/direct_sound_samples/new/e_guitar_solo_e4_32.bin"

	.align 2
DirectSoundWaveData_e_guitar_solo_g2_32::
	.incbin "sound/direct_sound_samples/new/e_guitar_solo_g2_32.bin"

	.align 2
DirectSoundWaveData_e_guitar_solo_g3_32::
	.incbin "sound/direct_sound_samples/new/e_guitar_solo_g3_32.bin"

	.align 2
DirectSoundWaveData_e_guitar_wb_a2_22::
	.incbin "sound/direct_sound_samples/new/e_guitar_wb_a2_22.bin"

	.align 2
DirectSoundWaveData_e_guitar_wb_a3_22::
	.incbin "sound/direct_sound_samples/new/e_guitar_wb_a3_22.bin"

	.align 2
DirectSoundWaveData_e_guitar_wb_c5_22::
	.incbin "sound/direct_sound_samples/new/e_guitar_wb_c5_22.bin"

	.align 2
DirectSoundWaveData_e_guitar_wb_f4_22::
	.incbin "sound/direct_sound_samples/new/e_guitar_wb_f4_22.bin"

@	.align 2
@DirectSoundWaveData_e_piano_c4_32::
@	.incbin "sound/direct_sound_samples/new/e_piano_c4_32.bin"

@	.align 2
@DirectSoundWaveData_e_piano_c5_32::
@	.incbin "sound/direct_sound_samples/new/e_piano_c5_32.bin"

	.align 2
DirectSoundWaveData_e_piano_wb_c4_22::
	.incbin "sound/direct_sound_samples/new/e_piano_wb_c4_22.bin"

	.align 2
DirectSoundWaveData_e_piano_wb_c5_22::
	.incbin "sound/direct_sound_samples/new/e_piano_wb_c5_22.bin"

@	.align 2
@DirectSoundWaveData_edapaki_16::
@	.incbin "sound/direct_sound_samples/new/edapaki_16.bin"

	.align 2
DirectSoundWaveData_ei_cs1_big_32::
	.incbin "sound/direct_sound_samples/new/ei_cs1_big_32.bin"

@	.align 2
@DirectSoundWaveData_el_pia2_c3_22::
@	.incbin "sound/direct_sound_samples/new/el_pia2_c3_22.bin"

@	.align 2
@DirectSoundWaveData_el_pia2_c4_22::
@	.incbin "sound/direct_sound_samples/new/el_pia2_c4_22.bin"

	.align 2
DirectSoundWaveData_eleba_f0_32::
	.incbin "sound/direct_sound_samples/new/eleba_f0_32.bin"

@	.align 2
@DirectSoundWaveData_elebass01_f0_32::
@	.incbin "sound/direct_sound_samples/new/elebass01_f0_32.bin"

	.align 2
DirectSoundWaveData_electric_piano_c4_22::
	.incbin "sound/direct_sound_samples/new/electric_piano_c4_22.bin"

	.align 2
DirectSoundWaveData_electric_piano_c5_22::
	.incbin "sound/direct_sound_samples/new/electric_piano_c5_22.bin"

@	.align 2
@DirectSoundWaveData_eurobass_16::
@	.incbin "sound/direct_sound_samples/new/eurobass_16.bin"

	.align 2
DirectSoundWaveData_europat_c3_16::
	.incbin "sound/direct_sound_samples/new/europat_c3_16.bin"

	.align 2
DirectSoundWaveData_europat_max_wb_c2_32::
	.incbin "sound/direct_sound_samples/new/europat_max_wb_c2_32.bin"

	.align 2
DirectSoundWaveData_europat_max_wb_c3_32::
	.incbin "sound/direct_sound_samples/new/europat_max_wb_c3_32.bin"

	.align 2
DirectSoundWaveData_europat_max_wb_c4_32::
	.incbin "sound/direct_sound_samples/new/europat_max_wb_c4_32.bin"

	.align 2
DirectSoundWaveData_europat_max_wb_c5_32::
	.incbin "sound/direct_sound_samples/new/europat_max_wb_c5_32.bin"

@	.align 2
@DirectSoundWaveData_eurosne_16::
@	.incbin "sound/direct_sound_samples/new/eurosne_16.bin"

	.align 2
DirectSoundWaveData_explosion_13::
	.incbin "sound/direct_sound_samples/new/explosion_13.bin"

@	.align 2
@DirectSoundWaveData_f_horn_c2_16::
@	.incbin "sound/direct_sound_samples/new/f_horn_c2_16.bin"

@	.align 2
@DirectSoundWaveData_f_horn_c4_16::
@	.incbin "sound/direct_sound_samples/new/f_horn_c4_16.bin"

@	.align 2
@DirectSoundWaveData_fire_13::
@	.incbin "sound/direct_sound_samples/new/fire_13.bin"

@	.align 2
@DirectSoundWaveData_flute_akai_a5_32::
@	.incbin "sound/direct_sound_samples/new/flute_akai_a5_32.bin"

@	.align 2
@DirectSoundWaveData_flute_akai_c5_32::
@	.incbin "sound/direct_sound_samples/new/flute_akai_c5_32.bin"

@	.align 2
@DirectSoundWaveData_flute_akai_f4_32::
@	.incbin "sound/direct_sound_samples/new/flute_akai_f4_32.bin"

@	.align 2
@DirectSoundWaveData_flute_akai_f6_32::
@	.incbin "sound/direct_sound_samples/new/flute_akai_f6_32.bin"

@	.align 2
@DirectSoundWaveData_flute_akai_wb_a4_32::
@	.incbin "sound/direct_sound_samples/new/flute_akai_wb_a4_32.bin"

	.align 2
DirectSoundWaveData_flute_akai_wb_a5_22::
	.incbin "sound/direct_sound_samples/new/flute_akai_wb_a5_22.bin"

@	.align 2
@DirectSoundWaveData_flute_akai_wb_c4_32::
@	.incbin "sound/direct_sound_samples/new/flute_akai_wb_c4_32.bin"

	.align 2
DirectSoundWaveData_flute_akai_wb_c5_22::
	.incbin "sound/direct_sound_samples/new/flute_akai_wb_c5_22.bin"

@	.align 2
@DirectSoundWaveData_flute_akai_wb_f3_32::
@	.incbin "sound/direct_sound_samples/new/flute_akai_wb_f3_32.bin"

	.align 2
DirectSoundWaveData_flute_akai_wb_f4_22::
	.incbin "sound/direct_sound_samples/new/flute_akai_wb_f4_22.bin"

@	.align 2
@DirectSoundWaveData_flute_akai_wb_f5_32::
@	.incbin "sound/direct_sound_samples/new/flute_akai_wb_f5_32.bin"

	.align 2
DirectSoundWaveData_flute_akai_wb_f6_22::
	.incbin "sound/direct_sound_samples/new/flute_akai_wb_f6_22.bin"

@	.align 2
@DirectSoundWaveData_flute_c5_13::
@	.incbin "sound/direct_sound_samples/new/flute_c5_13.bin"

@	.align 2
@DirectSoundWaveData_fm_synth_c4_32::
@	.incbin "sound/direct_sound_samples/new/fm_synth_c4_32.bin"

@	.align 2
@DirectSoundWaveData_fm_synth_c5_32::
@	.incbin "sound/direct_sound_samples/new/fm_synth_c5_32.bin"

@	.align 2
@DirectSoundWaveData_fm_synth_g4_32::
@	.incbin "sound/direct_sound_samples/new/fm_synth_g4_32.bin"

@	.align 2
@DirectSoundWaveData_fm_synth_g5_32::
@	.incbin "sound/direct_sound_samples/new/fm_synth_g5_32.bin"

@	.align 2
@DirectSoundWaveData_footstep0_16::
@	.incbin "sound/direct_sound_samples/new/footstep0_16.bin"

@	.align 2
@DirectSoundWaveData_footstep1_16::
@	.incbin "sound/direct_sound_samples/new/footstep1_16.bin"

@	.align 2
@DirectSoundWaveData_footstep2_16::
@	.incbin "sound/direct_sound_samples/new/footstep2_16.bin"

@	.align 2
@DirectSoundWaveData_footstep3_16::
@	.incbin "sound/direct_sound_samples/new/footstep3_16.bin"

	.align 2
DirectSoundWaveData_forn_a_c2_22::
	.incbin "sound/direct_sound_samples/new/forn_a_c2_22.bin"

	.align 2
DirectSoundWaveData_forn_c3_22::
	.incbin "sound/direct_sound_samples/new/forn_c3_22.bin"

	.align 2
DirectSoundWaveData_french_horn_b4_22::
	.incbin "sound/direct_sound_samples/new/french_horn_b4_22.bin"

	.align 2
DirectSoundWaveData_french_horn_b4_32::
	.incbin "sound/direct_sound_samples/new/french_horn_b4_32.bin"

	.align 2
DirectSoundWaveData_french_horn_c3_22::
	.incbin "sound/direct_sound_samples/new/french_horn_c3_22.bin"

	.align 2
DirectSoundWaveData_french_horn_c3_32::
	.incbin "sound/direct_sound_samples/new/french_horn_c3_32.bin"

	.align 2
DirectSoundWaveData_french_horn_d4_22::
	.incbin "sound/direct_sound_samples/new/french_horn_d4_22.bin"

	.align 2
DirectSoundWaveData_french_horn_d4_32::
	.incbin "sound/direct_sound_samples/new/french_horn_d4_32.bin"

	.align 2
DirectSoundWaveData_french_horn_f3_22::
	.incbin "sound/direct_sound_samples/new/french_horn_f3_22.bin"

	.align 2
DirectSoundWaveData_french_horn_f3_32::
	.incbin "sound/direct_sound_samples/new/french_horn_f3_32.bin"

	.align 2
DirectSoundWaveData_french_horn_leg_b3_32::
	.incbin "sound/direct_sound_samples/new/french_horn_leg_b3_32.bin"

	.align 2
DirectSoundWaveData_french_horn_leg_c5_32::
	.incbin "sound/direct_sound_samples/new/french_horn_leg_c5_32.bin"

	.align 2
DirectSoundWaveData_french_horn_leg_d3_32::
	.incbin "sound/direct_sound_samples/new/french_horn_leg_d3_32.bin"

	.align 2
DirectSoundWaveData_french_horn_leg_f4_32::
	.incbin "sound/direct_sound_samples/new/french_horn_leg_f4_32.bin"

	.align 2
DirectSoundWaveData_g_cis_l_taiko_g3_32::
	.incbin "sound/direct_sound_samples/new/g_cis_l_taiko_g3_32.bin"

	.align 2
DirectSoundWaveData_g_cis_musboxl_cs4_32::
	.incbin "sound/direct_sound_samples/new/g_cis_musboxl_cs4_32.bin"

	.align 2
DirectSoundWaveData_g_cis_taiko_c1_32::
	.incbin "sound/direct_sound_samples/new/g_cis_taiko_c1_32.bin"

	.align 2
DirectSoundWaveData_g_timpany_cs1_32::
	.incbin "sound/direct_sound_samples/new/g_timpany_cs1_32.bin"

	.align 2
DirectSoundWaveData_g_timpany_cs2_32::
	.incbin "sound/direct_sound_samples/new/g_timpany_cs2_32.bin"

	.align 2
DirectSoundWaveData_g_timpany_cs3_32::
	.incbin "sound/direct_sound_samples/new/g_timpany_cs3_32.bin"

@	.align 2
@DirectSoundWaveData_g_voice_ahh_d2_22::
@	.incbin "sound/direct_sound_samples/new/g_voice_ahh_d2_22.bin"

@	.align 2
@DirectSoundWaveData_g_voice_ann_d2_22::
@	.incbin "sound/direct_sound_samples/new/g_voice_ann_d2_22.bin"

@	.align 2
@DirectSoundWaveData_g_voice_ice_cs2_22::
@	.incbin "sound/direct_sound_samples/new/g_voice_ice_cs2_22.bin"

@	.align 2
@DirectSoundWaveData_g_voice_wii_a2_22::
@	.incbin "sound/direct_sound_samples/new/g_voice_wii_a2_22.bin"

	.align 2
DirectSoundWaveData_ge_cs1_loop1_32::
	.incbin "sound/direct_sound_samples/new/ge_cs1_loop1_32.bin"

	.align 2
DirectSoundWaveData_gee_sop_cs4_22::
	.incbin "sound/direct_sound_samples/new/gee_sop_cs4_22.bin"

@	.align 2
@DirectSoundWaveData_gigigi_13::
@	.incbin "sound/direct_sound_samples/new/gigigi_13.bin"

	.align 2
DirectSoundWaveData_glocken_c3_32::
	.incbin "sound/direct_sound_samples/new/glocken_c3_32.bin"

	.align 2
DirectSoundWaveData_glocken_c4_32::
	.incbin "sound/direct_sound_samples/new/glocken_c4_32.bin"

@	.align 2
@DirectSoundWaveData_glocken_c5_22::
@	.incbin "sound/direct_sound_samples/new/glocken_c5_22.bin"

	.align 2
DirectSoundWaveData_glocken_c5_32::
	.incbin "sound/direct_sound_samples/new/glocken_c5_32.bin"

@	.align 2
@DirectSoundWaveData_glocken_c5c_32::
@	.incbin "sound/direct_sound_samples/new/glocken_c5c_32.bin"

@	.align 2
@DirectSoundWaveData_glocken_wb_g3_32::
@	.incbin "sound/direct_sound_samples/new/glocken_wb_g3_32.bin"

	.align 2
DirectSoundWaveData_glocken_wb_g4_22::
	.incbin "sound/direct_sound_samples/new/glocken_wb_g4_22.bin"

@	.align 2
@DirectSoundWaveData_glocken_wb_g4_32::
@	.incbin "sound/direct_sound_samples/new/glocken_wb_g4_32.bin"

	.align 2
DirectSoundWaveData_glocken_wb_g5_22::
	.incbin "sound/direct_sound_samples/new/glocken_wb_g5_22.bin"

	.align 2
DirectSoundWaveData_glockenspiel_c4_22::
	.incbin "sound/direct_sound_samples/new/glockenspiel_c4_22.bin"

	.align 2
DirectSoundWaveData_glockenspiel_c5_22::
	.incbin "sound/direct_sound_samples/new/glockenspiel_c5_22.bin"

	.align 2
DirectSoundWaveData_grand_piano_c2_22::
	.incbin "sound/direct_sound_samples/new/grand_piano_c2_22.bin"

@	.align 2
@DirectSoundWaveData_grand_piano_c2_32::
@	.incbin "sound/direct_sound_samples/new/grand_piano_c2_32.bin"

	.align 2
DirectSoundWaveData_grand_piano_c3_22::
	.incbin "sound/direct_sound_samples/new/grand_piano_c3_22.bin"

@	.align 2
@DirectSoundWaveData_grand_piano_c3_32::
@	.incbin "sound/direct_sound_samples/new/grand_piano_c3_32.bin"

	.align 2
DirectSoundWaveData_grand_piano_c4_22::
	.incbin "sound/direct_sound_samples/new/grand_piano_c4_22.bin"

@	.align 2
@DirectSoundWaveData_grand_piano_c4_32::
@	.incbin "sound/direct_sound_samples/new/grand_piano_c4_32.bin"

	.align 2
DirectSoundWaveData_grand_piano_c5_22::
	.incbin "sound/direct_sound_samples/new/grand_piano_c5_22.bin"

@	.align 2
@DirectSoundWaveData_grand_piano_c5_32::
@	.incbin "sound/direct_sound_samples/new/grand_piano_c5_32.bin"

	.align 2
DirectSoundWaveData_grand_piano_c6_22::
	.incbin "sound/direct_sound_samples/new/grand_piano_c6_22.bin"

@	.align 2
@DirectSoundWaveData_grand_piano_c6_32::
@	.incbin "sound/direct_sound_samples/new/grand_piano_c6_32.bin"

	.align 2
DirectSoundWaveData_grandpiano_ps_c2_32::
	.incbin "sound/direct_sound_samples/new/grandpiano_ps_c2_32.bin"

	.align 2
DirectSoundWaveData_grandpiano_ps_c3_32::
	.incbin "sound/direct_sound_samples/new/grandpiano_ps_c3_32.bin"

	.align 2
DirectSoundWaveData_grandpiano_ps_c4_32::
	.incbin "sound/direct_sound_samples/new/grandpiano_ps_c4_32.bin"

	.align 2
DirectSoundWaveData_grandpiano_ps_c5_32::
	.incbin "sound/direct_sound_samples/new/grandpiano_ps_c5_32.bin"

	.align 2
DirectSoundWaveData_grandpiano_ps_c6_32::
	.incbin "sound/direct_sound_samples/new/grandpiano_ps_c6_32.bin"

	.align 2
DirectSoundWaveData_grandpiano_ps_g2_32::
	.incbin "sound/direct_sound_samples/new/grandpiano_ps_g2_32.bin"

	.align 2
DirectSoundWaveData_grandpiano_ps_g3_32::
	.incbin "sound/direct_sound_samples/new/grandpiano_ps_g3_32.bin"

	.align 2
DirectSoundWaveData_grandpiano_ps_g4_32::
	.incbin "sound/direct_sound_samples/new/grandpiano_ps_g4_32.bin"

	.align 2
DirectSoundWaveData_grandpiano_ps_g5_32::
	.incbin "sound/direct_sound_samples/new/grandpiano_ps_g5_32.bin"

	.align 2
DirectSoundWaveData_groove_tom_f_32::
	.incbin "sound/direct_sound_samples/new/groove_tom_f_32.bin"

	.align 2
DirectSoundWaveData_groove_tom_h_32::
	.incbin "sound/direct_sound_samples/new/groove_tom_h_32.bin"

	.align 2
DirectSoundWaveData_groove_tom_l_32::
	.incbin "sound/direct_sound_samples/new/groove_tom_l_32.bin"

	.align 2
DirectSoundWaveData_groove_tom_m_32::
	.incbin "sound/direct_sound_samples/new/groove_tom_m_32.bin"

	.align 2
DirectSoundWaveData_gs_air1_16::
	.incbin "sound/direct_sound_samples/new/gs_air1_16.bin"

@	.align 2
@DirectSoundWaveData_gs_air2_16::
@	.incbin "sound/direct_sound_samples/new/gs_air2_16.bin"

@	.align 2
@DirectSoundWaveData_gs_air3_16::
@	.incbin "sound/direct_sound_samples/new/gs_air3_16.bin"

@	.align 2
@DirectSoundWaveData_gs_ball_kick1_16::
@	.incbin "sound/direct_sound_samples/new/gs_ball_kick1_16.bin"

	.align 2
DirectSoundWaveData_gs_footstep1_16::
	.incbin "sound/direct_sound_samples/new/gs_footstep1_16.bin"

	.align 2
DirectSoundWaveData_gs_footstep2_16::
	.incbin "sound/direct_sound_samples/new/gs_footstep2_16.bin"

	.align 2
DirectSoundWaveData_gs_footstep3_16::
	.incbin "sound/direct_sound_samples/new/gs_footstep3_16.bin"

@	.align 2
@DirectSoundWaveData_gs_footstep4_16::
@	.incbin "sound/direct_sound_samples/new/gs_footstep4_16.bin"

@	.align 2
@DirectSoundWaveData_gs_footstep5_16::
@	.incbin "sound/direct_sound_samples/new/gs_footstep5_16.bin"

	.align 2
DirectSoundWaveData_gs_footstep6_16::
	.incbin "sound/direct_sound_samples/new/gs_footstep6_16.bin"

@	.align 2
@DirectSoundWaveData_gs_footstep7_16::
@	.incbin "sound/direct_sound_samples/new/gs_footstep7_16.bin"

@	.align 2
@DirectSoundWaveData_gs_footstep8_16::
@	.incbin "sound/direct_sound_samples/new/gs_footstep8_16.bin"

@	.align 2
@DirectSoundWaveData_gs_kansei_goal_16::
@	.incbin "sound/direct_sound_samples/new/gs_kansei_goal_16.bin"

@	.align 2
@DirectSoundWaveData_gs_material1_16::
@	.incbin "sound/direct_sound_samples/new/gs_material1_16.bin"

	.align 2
DirectSoundWaveData_gs_material2_16::
	.incbin "sound/direct_sound_samples/new/gs_material2_16.bin"

@	.align 2
@DirectSoundWaveData_gs_material3_16::
@	.incbin "sound/direct_sound_samples/new/gs_material3_16.bin"

@	.align 2
@DirectSoundWaveData_gs_material4_16::
@	.incbin "sound/direct_sound_samples/new/gs_material4_16.bin"

@	.align 2
@DirectSoundWaveData_gs_material5_16::
@	.incbin "sound/direct_sound_samples/new/gs_material5_16.bin"

@	.align 2
@DirectSoundWaveData_gs_material6_16::
@	.incbin "sound/direct_sound_samples/new/gs_material6_16.bin"

	.align 2
DirectSoundWaveData_gs_seseragi_16::
	.incbin "sound/direct_sound_samples/new/gs_seseragi_16.bin"

@	.align 2
@DirectSoundWaveData_gs_umibe_16::
@	.incbin "sound/direct_sound_samples/new/gs_umibe_16.bin"

@	.align 2
@DirectSoundWaveData_gs_water1_16::
@	.incbin "sound/direct_sound_samples/new/gs_water1_16.bin"

@	.align 2
@DirectSoundWaveData_gs_water2_16::
@	.incbin "sound/direct_sound_samples/new/gs_water2_16.bin"

@	.align 2
@DirectSoundWaveData_gs_water3_16::
@	.incbin "sound/direct_sound_samples/new/gs_water3_16.bin"

@	.align 2
@DirectSoundWaveData_gs_water4_16::
@	.incbin "sound/direct_sound_samples/new/gs_water4_16.bin"

@	.align 2
@DirectSoundWaveData_gs_water5_16::
@	.incbin "sound/direct_sound_samples/new/gs_water5_16.bin"

@	.align 2
@DirectSoundWaveData_gs_water6_16::
@	.incbin "sound/direct_sound_samples/new/gs_water6_16.bin"

	.align 2
DirectSoundWaveData_guiro_long_32::
	.incbin "sound/direct_sound_samples/new/guiro_long_32.bin"

	.align 2
DirectSoundWaveData_guiro_short_32::
	.incbin "sound/direct_sound_samples/new/guiro_short_32.bin"

@	.align 2
@DirectSoundWaveData_h_conga_13::
@	.incbin "sound/direct_sound_samples/new/h_conga_13.bin"

@	.align 2
@DirectSoundWaveData_handclap2_32::
@	.incbin "sound/direct_sound_samples/new/handclap2_32.bin"

@	.align 2
@DirectSoundWaveData_handclap3_32::
@	.incbin "sound/direct_sound_samples/new/handclap3_32.bin"

@	.align 2
@DirectSoundWaveData_handclap_16::
@	.incbin "sound/direct_sound_samples/new/handclap_16.bin"

	.align 2
DirectSoundWaveData_handclap_1_16::
	.incbin "sound/direct_sound_samples/new/handclap_1_16.bin"

	.align 2
DirectSoundWaveData_handclap_2_16::
	.incbin "sound/direct_sound_samples/new/handclap_2_16.bin"

@	.align 2
@DirectSoundWaveData_handclap_32::
@	.incbin "sound/direct_sound_samples/new/handclap_32.bin"

	.align 2
DirectSoundWaveData_handclap_btry_gm_32::
	.incbin "sound/direct_sound_samples/new/handclap_btry_gm_32.bin"

@	.align 2
@DirectSoundWaveData_harmonica_c3_16::
@	.incbin "sound/direct_sound_samples/new/harmonica_c3_16.bin"

@	.align 2
@DirectSoundWaveData_harp_03_a3_32::
@	.incbin "sound/direct_sound_samples/new/harp_03_a3_32.bin"

@	.align 2
@DirectSoundWaveData_harp_03_c3_32::
@	.incbin "sound/direct_sound_samples/new/harp_03_c3_32.bin"

@	.align 2
@DirectSoundWaveData_harp_03_d5_32::
@	.incbin "sound/direct_sound_samples/new/harp_03_d5_32.bin"

@	.align 2
@DirectSoundWaveData_harp_03_f4_32::
@	.incbin "sound/direct_sound_samples/new/harp_03_f4_32.bin"

	.align 2
DirectSoundWaveData_harp_c3_22::
	.incbin "sound/direct_sound_samples/new/harp_c3_22.bin"

@	.align 2
@DirectSoundWaveData_harp_c3_32::
@	.incbin "sound/direct_sound_samples/new/harp_c3_32.bin"

	.align 2
DirectSoundWaveData_harp_c4_22::
	.incbin "sound/direct_sound_samples/new/harp_c4_22.bin"

@	.align 2
@DirectSoundWaveData_harp_c4_32::
@	.incbin "sound/direct_sound_samples/new/harp_c4_32.bin"

@	.align 2
@DirectSoundWaveData_harp_c5_16::
@	.incbin "sound/direct_sound_samples/new/harp_c5_16.bin"

	.align 2
DirectSoundWaveData_harp_c5_22::
	.incbin "sound/direct_sound_samples/new/harp_c5_22.bin"

@	.align 2
@DirectSoundWaveData_harp_c5_32::
@	.incbin "sound/direct_sound_samples/new/harp_c5_32.bin"

	.align 2
DirectSoundWaveData_harp_c6_22::
	.incbin "sound/direct_sound_samples/new/harp_c6_22.bin"

@	.align 2
@DirectSoundWaveData_harp_c6_32::
@	.incbin "sound/direct_sound_samples/new/harp_c6_32.bin"

@	.align 2
@DirectSoundWaveData_harp_e5_32::
@	.incbin "sound/direct_sound_samples/new/harp_e5_32.bin"

@	.align 2
@DirectSoundWaveData_harp_g3_32::
@	.incbin "sound/direct_sound_samples/new/harp_g3_32.bin"

@	.align 2
@DirectSoundWaveData_harp_g4_32::
@	.incbin "sound/direct_sound_samples/new/harp_g4_32.bin"

	.align 2
DirectSoundWaveData_harp_wb_e5_22::
	.incbin "sound/direct_sound_samples/new/harp_wb_e5_22.bin"

	.align 2
DirectSoundWaveData_harp_wb_g3_22::
	.incbin "sound/direct_sound_samples/new/harp_wb_g3_22.bin"

	.align 2
DirectSoundWaveData_harp_wb_g4_22::
	.incbin "sound/direct_sound_samples/new/harp_wb_g4_22.bin"

	.align 2
DirectSoundWaveData_harpsichord_a3_32::
	.incbin "sound/direct_sound_samples/new/harpsichord_a3_32.bin"

	.align 2
DirectSoundWaveData_harpsichord_c3_32::
	.incbin "sound/direct_sound_samples/new/harpsichord_c3_32.bin"

	.align 2
DirectSoundWaveData_harpsichord_d5_32::
	.incbin "sound/direct_sound_samples/new/harpsichord_d5_32.bin"

	.align 2
DirectSoundWaveData_harpsichord_f4_32::
	.incbin "sound/direct_sound_samples/new/harpsichord_f4_32.bin"

@	.align 2
@DirectSoundWaveData_hashira5_16::
@	.incbin "sound/direct_sound_samples/new/hashira5_16.bin"

@	.align 2
@DirectSoundWaveData_helicopter_16::
@	.incbin "sound/direct_sound_samples/new/helicopter_16.bin"

	.align 2
DirectSoundWaveData_high_conga_16::
	.incbin "sound/direct_sound_samples/new/high_conga_16.bin"

@	.align 2
@DirectSoundWaveData_high_conga_32::
@	.incbin "sound/direct_sound_samples/new/high_conga_32.bin"

	.align 2
DirectSoundWaveData_high_conga_btry_gm_32::
	.incbin "sound/direct_sound_samples/new/high_conga_btry_gm_32.bin"

@	.align 2
@DirectSoundWaveData_hihat_closed1_popkit_32::
@	.incbin "sound/direct_sound_samples/new/hihat_closed1_popkit_32.bin"

	.align 2
DirectSoundWaveData_hihat_closed_22::
	.incbin "sound/direct_sound_samples/new/hihat_closed_22.bin"

@	.align 2
@DirectSoundWaveData_hihat_closed_32::
@	.incbin "sound/direct_sound_samples/new/hihat_closed_32.bin"

	.align 2
DirectSoundWaveData_hihat_closed_analog_kit_32::
	.incbin "sound/direct_sound_samples/new/hihat_closed_analog_kit_32.bin"

	.align 2
DirectSoundWaveData_hihat_closed_groove_32::
	.incbin "sound/direct_sound_samples/new/hihat_closed_groove_32.bin"

	.align 2
DirectSoundWaveData_hihat_closed_rockkit_st_32::
	.incbin "sound/direct_sound_samples/new/hihat_closed_rockkit_st_32.bin"

@	.align 2
@DirectSoundWaveData_hihat_open1_popkit_32::
@	.incbin "sound/direct_sound_samples/new/hihat_open1_popkit_32.bin"

	.align 2
DirectSoundWaveData_hihat_open_22::
	.incbin "sound/direct_sound_samples/new/hihat_open_22.bin"

@	.align 2
@DirectSoundWaveData_hihat_open_32::
@	.incbin "sound/direct_sound_samples/new/hihat_open_32.bin"

	.align 2
DirectSoundWaveData_hihat_open_analog_kit_32::
	.incbin "sound/direct_sound_samples/new/hihat_open_analog_kit_32.bin"

	.align 2
DirectSoundWaveData_hihat_open_groove_32::
	.incbin "sound/direct_sound_samples/new/hihat_open_groove_32.bin"

	.align 2
DirectSoundWaveData_hihat_open_rockkit_st_32::
	.incbin "sound/direct_sound_samples/new/hihat_open_rockkit_st_32.bin"

@	.align 2
@DirectSoundWaveData_hihat_opens_rockkit_st_32::
@	.incbin "sound/direct_sound_samples/new/hihat_opens_rockkit_st_32.bin"

@	.align 2
@DirectSoundWaveData_hit_major_c3_16::
@	.incbin "sound/direct_sound_samples/new/hit_major_c3_16.bin"

@	.align 2
@DirectSoundWaveData_hit_minor_c3_16::
@	.incbin "sound/direct_sound_samples/new/hit_minor_c3_16.bin"

	.align 2
DirectSoundWaveData_horn_wb_c5_22::
	.incbin "sound/direct_sound_samples/new/horn_wb_c5_22.bin"

	.align 2
DirectSoundWaveData_horn_wb_d4_22::
	.incbin "sound/direct_sound_samples/new/horn_wb_d4_22.bin"

	.align 2
DirectSoundWaveData_horn_wb_f3_22::
	.incbin "sound/direct_sound_samples/new/horn_wb_f3_22.bin"

	.align 2
DirectSoundWaveData_hyoushigi_16::
	.incbin "sound/direct_sound_samples/new/hyoushigi_16.bin"

	.align 2
DirectSoundWaveData_ichiss_sop_c4_22::
	.incbin "sound/direct_sound_samples/new/ichiss_sop_c4_22.bin"

	.align 2
DirectSoundWaveData_ind_troncs1_32::
	.incbin "sound/direct_sound_samples/new/ind_troncs1_32.bin"

@	.align 2
@DirectSoundWaveData_india_per_16::
@	.incbin "sound/direct_sound_samples/new/india_per_16.bin"

@	.align 2
@DirectSoundWaveData_iwa_13::
@	.incbin "sound/direct_sound_samples/new/iwa_13.bin"

@	.align 2
@DirectSoundWaveData_jet_13::
@	.incbin "sound/direct_sound_samples/new/jet_13.bin"

@	.align 2
@DirectSoundWaveData_jetplan_13::
@	.incbin "sound/direct_sound_samples/new/jetplan_13.bin"

@	.align 2
@DirectSoundWaveData_jinglebell_16::
@	.incbin "sound/direct_sound_samples/new/jinglebell_16.bin"

@	.align 2
@DirectSoundWaveData_jinglebell_32::
@	.incbin "sound/direct_sound_samples/new/jinglebell_32.bin"

@	.align 2
@DirectSoundWaveData_kaaroop_16::
@	.incbin "sound/direct_sound_samples/new/kaaroop_16.bin"

@	.align 2
@DirectSoundWaveData_kamera3::
@	.incbin "sound/direct_sound_samples/new/kamera3.bin"

@	.align 2
@DirectSoundWaveData_kaminari_13::
@	.incbin "sound/direct_sound_samples/new/kaminari_13.bin"

@	.align 2
@DirectSoundWaveData_kane_closed_22::
@	.incbin "sound/direct_sound_samples/new/kane_closed_22.bin"

@	.align 2
@DirectSoundWaveData_kane_open_22::
@	.incbin "sound/direct_sound_samples/new/kane_open_22.bin"

@	.align 2
@DirectSoundWaveData_kansei_13::
@	.incbin "sound/direct_sound_samples/new/kansei_13.bin"

@	.align 2
@DirectSoundWaveData_kaze_13::
@	.incbin "sound/direct_sound_samples/new/kaze_13.bin"

@	.align 2
@DirectSoundWaveData_kaze_wb_loop_32::
@	.incbin "sound/direct_sound_samples/new/kaze_wb_loop_32.bin"

	.align 2
DirectSoundWaveData_kick2_analog_kit_32::
	.incbin "sound/direct_sound_samples/new/kick2_analog_kit_32.bin"

	.align 2
DirectSoundWaveData_kick_analog_kit_32::
	.incbin "sound/direct_sound_samples/new/kick_analog_kit_32.bin"

@	.align 2
@DirectSoundWaveData_kick_fx_32::
@	.incbin "sound/direct_sound_samples/new/kick_fx_32.bin"

@	.align 2
@DirectSoundWaveData_kick_groove_02_32::
@	.incbin "sound/direct_sound_samples/new/kick_groove_02_32.bin"

	.align 2
DirectSoundWaveData_kick_groove_32::
	.incbin "sound/direct_sound_samples/new/kick_groove_32.bin"

	.align 2
DirectSoundWaveData_kick_popkit_32::
	.incbin "sound/direct_sound_samples/new/kick_popkit_32.bin"

	.align 2
DirectSoundWaveData_kick_power_32::
	.incbin "sound/direct_sound_samples/new/kick_power_32.bin"

	.align 2
DirectSoundWaveData_kick_rockkit_st_32::
	.incbin "sound/direct_sound_samples/new/kick_rockkit_st_32.bin"

@	.align 2
@DirectSoundWaveData_kiteki2_13::
@	.incbin "sound/direct_sound_samples/new/kiteki2_13.bin"

	.align 2
DirectSoundWaveData_kodaiko_16::
	.incbin "sound/direct_sound_samples/new/kodaiko_16.bin"

	.align 2
DirectSoundWaveData_kokyu_c2_32::
	.incbin "sound/direct_sound_samples/new/kokyu_c2_32.bin"

	.align 2
DirectSoundWaveData_koto_pick_a4_16::
	.incbin "sound/direct_sound_samples/new/koto_pick_a4_16.bin"

	.align 2
DirectSoundWaveData_koto_pick_c4_16::
	.incbin "sound/direct_sound_samples/new/koto_pick_c4_16.bin"

	.align 2
DirectSoundWaveData_koto_pick_e3_16::
	.incbin "sound/direct_sound_samples/new/koto_pick_e3_16.bin"

	.align 2
DirectSoundWaveData_koto_pick_e5_16::
	.incbin "sound/direct_sound_samples/new/koto_pick_e5_16.bin"

@	.align 2
@DirectSoundWaveData_kotod#2_32::
@	.incbin "sound/direct_sound_samples/new/kotod#2_32.bin"

@	.align 2
@DirectSoundWaveData_kotod#3_32::
@	.incbin "sound/direct_sound_samples/new/kotod#3_32.bin"

	.align 2
DirectSoundWaveData_kotsu_16::
	.incbin "sound/direct_sound_samples/new/kotsu_16.bin"

@	.align 2
@DirectSoundWaveData_list::
@	.incbin "sound/direct_sound_samples/new/list.bin"

	.align 2
DirectSoundWaveData_majorhit_c3_16::
	.incbin "sound/direct_sound_samples/new/majorhit_c3_16.bin"

@	.align 2
@DirectSoundWaveData_marimba_c3_32::
@	.incbin "sound/direct_sound_samples/new/marimba_c3_32.bin"

	.align 2
DirectSoundWaveData_marimba_c4_22::
	.incbin "sound/direct_sound_samples/new/marimba_c4_22.bin"

@	.align 2
@DirectSoundWaveData_marimba_c4_32::
@	.incbin "sound/direct_sound_samples/new/marimba_c4_32.bin"

	.align 2
DirectSoundWaveData_marimba_c5_22::
	.incbin "sound/direct_sound_samples/new/marimba_c5_22.bin"

@	.align 2
@DirectSoundWaveData_marimba_c5_32::
@	.incbin "sound/direct_sound_samples/new/marimba_c5_32.bin"

	.align 2
DirectSoundWaveData_marimba_c6_22::
	.incbin "sound/direct_sound_samples/new/marimba_c6_22.bin"

	.align 2
DirectSoundWaveData_marimba_wb_c3_22::
	.incbin "sound/direct_sound_samples/new/marimba_wb_c3_22.bin"

	.align 2
DirectSoundWaveData_marimba_wb_c4_22::
	.incbin "sound/direct_sound_samples/new/marimba_wb_c4_22.bin"

	.align 2
DirectSoundWaveData_marimba_wb_c5_22::
	.incbin "sound/direct_sound_samples/new/marimba_wb_c5_22.bin"

@	.align 2
@DirectSoundWaveData_merotim_c2_16::
@	.incbin "sound/direct_sound_samples/new/merotim_c2_16.bin"

@	.align 2
@DirectSoundWaveData_merotim_c3_16::
@	.incbin "sound/direct_sound_samples/new/merotim_c3_16.bin"

@	.align 2
@DirectSoundWaveData_mesu_choirs_c4_16::
@	.incbin "sound/direct_sound_samples/new/mesu_choirs_c4_16.bin"

@	.align 2
@DirectSoundWaveData_minicymbal_16::
@	.incbin "sound/direct_sound_samples/new/minicymbal_16.bin"

	.align 2
DirectSoundWaveData_minorhit_c3_16::
	.incbin "sound/direct_sound_samples/new/minorhit_c3_16.bin"

@	.align 2
@DirectSoundWaveData_moter_13::
@	.incbin "sound/direct_sound_samples/new/moter_13.bin"

@	.align 2
@DirectSoundWaveData_msl_voice_01::
@	.incbin "sound/direct_sound_samples/new/msl_voice_01.bin"

@	.align 2
@DirectSoundWaveData_msl_voice_02::
@	.incbin "sound/direct_sound_samples/new/msl_voice_02.bin"

@	.align 2
@DirectSoundWaveData_msl_voice_03::
@	.incbin "sound/direct_sound_samples/new/msl_voice_03.bin"

@	.align 2
@DirectSoundWaveData_msl_voice_04::
@	.incbin "sound/direct_sound_samples/new/msl_voice_04.bin"

@	.align 2
@DirectSoundWaveData_msl_voice_dummy_01::
@	.incbin "sound/direct_sound_samples/new/msl_voice_dummy_01.bin"

@	.align 2
@DirectSoundWaveData_msl_voice_dummy_02::
@	.incbin "sound/direct_sound_samples/new/msl_voice_dummy_02.bin"

@	.align 2
@DirectSoundWaveData_msl_voice_dummy_03::
@	.incbin "sound/direct_sound_samples/new/msl_voice_dummy_03.bin"

@	.align 2
@DirectSoundWaveData_msl_voice_dummy_04::
@	.incbin "sound/direct_sound_samples/new/msl_voice_dummy_04.bin"

	.align 2
DirectSoundWaveData_musicbox_c4_22::
	.incbin "sound/direct_sound_samples/new/musicbox_c4_22.bin"

@	.align 2
@DirectSoundWaveData_musicbox_c4_32::
@	.incbin "sound/direct_sound_samples/new/musicbox_c4_32.bin"

	.align 2
DirectSoundWaveData_musicbox_c5_22::
	.incbin "sound/direct_sound_samples/new/musicbox_c5_22.bin"

@	.align 2
@DirectSoundWaveData_musicbox_c5_32::
@	.incbin "sound/direct_sound_samples/new/musicbox_c5_32.bin"

	.align 2
DirectSoundWaveData_musicbox_c6_22::
	.incbin "sound/direct_sound_samples/new/musicbox_c6_22.bin"

@	.align 2
@DirectSoundWaveData_musicbox_c6_32::
@	.incbin "sound/direct_sound_samples/new/musicbox_c6_32.bin"

	.align 2
DirectSoundWaveData_musicbox_wb_g4_22::
	.incbin "sound/direct_sound_samples/new/musicbox_wb_g4_22.bin"

	.align 2
DirectSoundWaveData_musicbox_wb_g5_22::
	.incbin "sound/direct_sound_samples/new/musicbox_wb_g5_22.bin"

	.align 2
DirectSoundWaveData_mute_conga_16::
	.incbin "sound/direct_sound_samples/new/mute_conga_16.bin"

@	.align 2
@DirectSoundWaveData_mute_conga_btry_gm_32::
@	.incbin "sound/direct_sound_samples/new/mute_conga_btry_gm_32.bin"

	.align 2
DirectSoundWaveData_n_brass_max_g4_32::
	.incbin "sound/direct_sound_samples/new/n_brass_max_g4_32.bin"

	.align 2
DirectSoundWaveData_n_organ_c4_32::
	.incbin "sound/direct_sound_samples/new/n_organ_c4_32.bin"

	.align 2
DirectSoundWaveData_n_organ_f5_32::
	.incbin "sound/direct_sound_samples/new/n_organ_f5_32.bin"

@	.align 2
@DirectSoundWaveData_nami01_c4_32::
@	.incbin "sound/direct_sound_samples/new/nami01_c4_32.bin"

@	.align 2
@DirectSoundWaveData_nami02_c4_32::
@	.incbin "sound/direct_sound_samples/new/nami02_c4_32.bin"

@	.align 2
@DirectSoundWaveData_nami_13::
@	.incbin "sound/direct_sound_samples/new/nami_13.bin"

	.align 2
DirectSoundWaveData_noizy_01_22kh::
	.incbin "sound/direct_sound_samples/new/noizy_01_22kh.bin"

@	.align 2
@DirectSoundWaveData_noo_max_22::
@	.incbin "sound/direct_sound_samples/new/noo_max_22.bin"

	.align 2
DirectSoundWaveData_nylon_guitar_c5_22::
	.incbin "sound/direct_sound_samples/new/nylon_guitar_c5_22.bin"

@	.align 2
@DirectSoundWaveData_nylon_guitar_c5_32::
@	.incbin "sound/direct_sound_samples/new/nylon_guitar_c5_32.bin"

	.align 2
DirectSoundWaveData_nylon_guitar_e4_22::
	.incbin "sound/direct_sound_samples/new/nylon_guitar_e4_22.bin"

@	.align 2
@DirectSoundWaveData_nylon_guitar_e4_32::
@	.incbin "sound/direct_sound_samples/new/nylon_guitar_e4_32.bin"

	.align 2
DirectSoundWaveData_nylon_guitar_g2_22::
	.incbin "sound/direct_sound_samples/new/nylon_guitar_g2_22.bin"

@	.align 2
@DirectSoundWaveData_nylon_guitar_g2_32::
@	.incbin "sound/direct_sound_samples/new/nylon_guitar_g2_32.bin"

	.align 2
DirectSoundWaveData_nylon_guitar_g3_22::
	.incbin "sound/direct_sound_samples/new/nylon_guitar_g3_22.bin"

@	.align 2
@DirectSoundWaveData_nylon_guitar_g3_32::
@	.incbin "sound/direct_sound_samples/new/nylon_guitar_g3_32.bin"

	.align 2
DirectSoundWaveData_nylon_guitar_wb_c5_22::
	.incbin "sound/direct_sound_samples/new/nylon_guitar_wb_c5_22.bin"

	.align 2
DirectSoundWaveData_nylon_guitar_wb_e4_22::
	.incbin "sound/direct_sound_samples/new/nylon_guitar_wb_e4_22.bin"

	.align 2
DirectSoundWaveData_nylon_guitar_wb_g2_22::
	.incbin "sound/direct_sound_samples/new/nylon_guitar_wb_g2_22.bin"

	.align 2
DirectSoundWaveData_nylon_guitar_wb_g3_22::
	.incbin "sound/direct_sound_samples/new/nylon_guitar_wb_g3_22.bin"

	.align 2
DirectSoundWaveData_oboe_a5_22::
	.incbin "sound/direct_sound_samples/new/oboe_a5_22.bin"

@	.align 2
@DirectSoundWaveData_oboe_a5_32::
@	.incbin "sound/direct_sound_samples/new/oboe_a5_32.bin"

@	.align 2
@DirectSoundWaveData_oboe_c3_22::
@	.incbin "sound/direct_sound_samples/new/oboe_c3_22.bin"

@	.align 2
@DirectSoundWaveData_oboe_c4_22::
@	.incbin "sound/direct_sound_samples/new/oboe_c4_22.bin"

	.align 2
DirectSoundWaveData_oboe_c5_22::
	.incbin "sound/direct_sound_samples/new/oboe_c5_22.bin"

@	.align 2
@DirectSoundWaveData_oboe_c5_32::
@	.incbin "sound/direct_sound_samples/new/oboe_c5_32.bin"

	.align 2
DirectSoundWaveData_oboe_e4_22::
	.incbin "sound/direct_sound_samples/new/oboe_e4_22.bin"

@	.align 2
@DirectSoundWaveData_oboe_e4_32::
@	.incbin "sound/direct_sound_samples/new/oboe_e4_32.bin"

	.align 2
DirectSoundWaveData_oboe_wb_b4_22::
	.incbin "sound/direct_sound_samples/new/oboe_wb_b4_22.bin"

	.align 2
DirectSoundWaveData_oboe_wb_e4_22::
	.incbin "sound/direct_sound_samples/new/oboe_wb_e4_22.bin"

	.align 2
DirectSoundWaveData_oboe_wb_g5_22::
	.incbin "sound/direct_sound_samples/new/oboe_wb_g5_22.bin"

	.align 2
DirectSoundWaveData_oche_hit_major_a4_32::
	.incbin "sound/direct_sound_samples/new/oche_hit_major_a4_32.bin"

	.align 2
DirectSoundWaveData_oche_hit_major_c4_32::
	.incbin "sound/direct_sound_samples/new/oche_hit_major_c4_32.bin"

	.align 2
DirectSoundWaveData_oche_hit_major_ds4_32::
	.incbin "sound/direct_sound_samples/new/oche_hit_major_ds4_32.bin"

	.align 2
DirectSoundWaveData_oche_hit_major_fs4_32::
	.incbin "sound/direct_sound_samples/new/oche_hit_major_fs4_32.bin"

@	.align 2
@DirectSoundWaveData_oche_hit_minor_a4_32::
@	.incbin "sound/direct_sound_samples/new/oche_hit_minor_a4_32.bin"

@	.align 2
@DirectSoundWaveData_oche_hit_minor_c4_32::
@	.incbin "sound/direct_sound_samples/new/oche_hit_minor_c4_32.bin"

@	.align 2
@DirectSoundWaveData_oche_hit_minor_ds4_32::
@	.incbin "sound/direct_sound_samples/new/oche_hit_minor_ds4_32.bin"

@	.align 2
@DirectSoundWaveData_oche_hit_minor_fs4_32::
@	.incbin "sound/direct_sound_samples/new/oche_hit_minor_fs4_32.bin"

	.align 2
DirectSoundWaveData_oche_hit_wb_a3_22::
	.incbin "sound/direct_sound_samples/new/oche_hit_wb_a3_22.bin"

@	.align 2
@DirectSoundWaveData_oche_hit_wb_a3_32::
@	.incbin "sound/direct_sound_samples/new/oche_hit_wb_a3_32.bin"

	.align 2
DirectSoundWaveData_oche_hit_wb_c5_22::
	.incbin "sound/direct_sound_samples/new/oche_hit_wb_c5_22.bin"

@	.align 2
@DirectSoundWaveData_oche_hit_wb_c5_32::
@	.incbin "sound/direct_sound_samples/new/oche_hit_wb_c5_32.bin"

	.align 2
DirectSoundWaveData_oche_hit_wb_f4_22::
	.incbin "sound/direct_sound_samples/new/oche_hit_wb_f4_22.bin"

@	.align 2
@DirectSoundWaveData_oche_hit_wb_f4_32::
@	.incbin "sound/direct_sound_samples/new/oche_hit_wb_f4_32.bin"

	.align 2
DirectSoundWaveData_oct_piano_c2_22::
	.incbin "sound/direct_sound_samples/new/oct_piano_c2_22.bin"

@	.align 2
@DirectSoundWaveData_oct_piano_c2_32::
@	.incbin "sound/direct_sound_samples/new/oct_piano_c2_32.bin"

	.align 2
DirectSoundWaveData_oct_piano_c3_22::
	.incbin "sound/direct_sound_samples/new/oct_piano_c3_22.bin"

@	.align 2
@DirectSoundWaveData_oct_piano_c3_32::
@	.incbin "sound/direct_sound_samples/new/oct_piano_c3_32.bin"

	.align 2
DirectSoundWaveData_oct_piano_c4_22::
	.incbin "sound/direct_sound_samples/new/oct_piano_c4_22.bin"

@	.align 2
@DirectSoundWaveData_oct_piano_c4_32::
@	.incbin "sound/direct_sound_samples/new/oct_piano_c4_32.bin"

	.align 2
DirectSoundWaveData_oct_piano_c5_22::
	.incbin "sound/direct_sound_samples/new/oct_piano_c5_22.bin"

@	.align 2
@DirectSoundWaveData_oct_piano_c5_32::
@	.incbin "sound/direct_sound_samples/new/oct_piano_c5_32.bin"

@	.align 2
@DirectSoundWaveData_octhit_c2_16::
@	.incbin "sound/direct_sound_samples/new/octhit_c2_16.bin"

@	.align 2
@DirectSoundWaveData_ohyeah_max_22::
@	.incbin "sound/direct_sound_samples/new/ohyeah_max_22.bin"

@	.align 2
@DirectSoundWaveData_open_hihat_16::
@	.incbin "sound/direct_sound_samples/new/open_hihat_16.bin"

	.align 2
DirectSoundWaveData_orch_hit_c4_22::
	.incbin "sound/direct_sound_samples/new/orch_hit_c4_22.bin"

	.align 2
DirectSoundWaveData_orch_hit_c5_22::
	.incbin "sound/direct_sound_samples/new/orch_hit_c5_22.bin"

	.align 2
DirectSoundWaveData_orch_hit_c6_22::
	.incbin "sound/direct_sound_samples/new/orch_hit_c6_22.bin"

	.align 2
DirectSoundWaveData_orch_hit_g5_22::
	.incbin "sound/direct_sound_samples/new/orch_hit_g5_22.bin"

@	.align 2
@DirectSoundWaveData_org4_c3_16::
@	.incbin "sound/direct_sound_samples/new/org4_c3_16.bin"

@	.align 2
@DirectSoundWaveData_org4_c4_16::
@	.incbin "sound/direct_sound_samples/new/org4_c4_16.bin"

	.align 2
DirectSoundWaveData_org5_c3_16::
	.incbin "sound/direct_sound_samples/new/org5_c3_16.bin"

	.align 2
DirectSoundWaveData_organ_wb_c3_22::
	.incbin "sound/direct_sound_samples/new/organ_wb_c3_22.bin"

	.align 2
DirectSoundWaveData_organ_wb_c4_22::
	.incbin "sound/direct_sound_samples/new/organ_wb_c4_22.bin"

	.align 2
DirectSoundWaveData_organ_wb_c5_22::
	.incbin "sound/direct_sound_samples/new/organ_wb_c5_22.bin"

@	.align 2
@DirectSoundWaveData_osu_choirs_c3_16::
@	.incbin "sound/direct_sound_samples/new/osu_choirs_c3_16.bin"

	.align 2
DirectSoundWaveData_pbrasslop_c4_max32::
	.incbin "sound/direct_sound_samples/new/pbrasslop_c4_max32.bin"

	.align 2
DirectSoundWaveData_pbrasslop_c5_max32::
	.incbin "sound/direct_sound_samples/new/pbrasslop_c5_max32.bin"

@	.align 2
@DirectSoundWaveData_pbrasslop_cs3_max32::
@	.incbin "sound/direct_sound_samples/new/pbrasslop_cs3_max32.bin"

	.align 2
DirectSoundWaveData_perc_organ_c3_22::
	.incbin "sound/direct_sound_samples/new/perc_organ_c3_22.bin"

@	.align 2
@DirectSoundWaveData_perc_organ_c3_32::
@	.incbin "sound/direct_sound_samples/new/perc_organ_c3_32.bin"

	.align 2
DirectSoundWaveData_perc_organ_c4_22::
	.incbin "sound/direct_sound_samples/new/perc_organ_c4_22.bin"

@	.align 2
@DirectSoundWaveData_perc_organ_c4_32::
@	.incbin "sound/direct_sound_samples/new/perc_organ_c4_32.bin"

	.align 2
DirectSoundWaveData_perc_organ_c5_22::
	.incbin "sound/direct_sound_samples/new/perc_organ_c5_22.bin"

@	.align 2
@DirectSoundWaveData_perc_organ_c5_32::
@	.incbin "sound/direct_sound_samples/new/perc_organ_c5_32.bin"

@	.align 2
@DirectSoundWaveData_piano1_c4_13::
@	.incbin "sound/direct_sound_samples/new/piano1_c4_13.bin"

@	.align 2
@DirectSoundWaveData_piano1_c6_13::
@	.incbin "sound/direct_sound_samples/new/piano1_c6_13.bin"

	.align 2
DirectSoundWaveData_piano_a2_22::
	.incbin "sound/direct_sound_samples/new/piano_a2_22.bin"

	.align 2
DirectSoundWaveData_piano_b4_22::
	.incbin "sound/direct_sound_samples/new/piano_b4_22.bin"

	.align 2
DirectSoundWaveData_piano_c2_22::
	.incbin "sound/direct_sound_samples/new/piano_c2_22.bin"

	.align 2
DirectSoundWaveData_piano_d4_22::
	.incbin "sound/direct_sound_samples/new/piano_d4_22.bin"

	.align 2
DirectSoundWaveData_piano_e6_22::
	.incbin "sound/direct_sound_samples/new/piano_e6_22.bin"

	.align 2
DirectSoundWaveData_piano_f3_22::
	.incbin "sound/direct_sound_samples/new/piano_f3_22.bin"

	.align 2
DirectSoundWaveData_piano_g5_22::
	.incbin "sound/direct_sound_samples/new/piano_g5_22.bin"

@	.align 2
@DirectSoundWaveData_piano_midi_c2_16::
@	.incbin "sound/direct_sound_samples/new/piano_midi_c2_16.bin"

@	.align 2
@DirectSoundWaveData_piano_midi_c3_16::
@	.incbin "sound/direct_sound_samples/new/piano_midi_c3_16.bin"

@	.align 2
@DirectSoundWaveData_piano_midi_c4_16::
@	.incbin "sound/direct_sound_samples/new/piano_midi_c4_16.bin"

@	.align 2
@DirectSoundWaveData_piano_midi_c5_16::
@	.incbin "sound/direct_sound_samples/new/piano_midi_c5_16.bin"

	.align 2
DirectSoundWaveData_piano_wb_c2_22::
	.incbin "sound/direct_sound_samples/new/piano_wb_c2_22.bin"

	.align 2
DirectSoundWaveData_piano_wb_c3_22::
	.incbin "sound/direct_sound_samples/new/piano_wb_c3_22.bin"

	.align 2
DirectSoundWaveData_piano_wb_c4_22::
	.incbin "sound/direct_sound_samples/new/piano_wb_c4_22.bin"

	.align 2
DirectSoundWaveData_piano_wb_c5_22::
	.incbin "sound/direct_sound_samples/new/piano_wb_c5_22.bin"

	.align 2
DirectSoundWaveData_piano_wb_c6_22::
	.incbin "sound/direct_sound_samples/new/piano_wb_c6_22.bin"

@	.align 2
@DirectSoundWaveData_piccolo_flute2_a4_32::
@	.incbin "sound/direct_sound_samples/new/piccolo_flute2_a4_32.bin"

@	.align 2
@DirectSoundWaveData_piccolo_flute2_c4_32::
@	.incbin "sound/direct_sound_samples/new/piccolo_flute2_c4_32.bin"

@	.align 2
@DirectSoundWaveData_piccolo_flute2_c6_32::
@	.incbin "sound/direct_sound_samples/new/piccolo_flute2_c6_32.bin"

@	.align 2
@DirectSoundWaveData_piccolo_flute2_f5_32::
@	.incbin "sound/direct_sound_samples/new/piccolo_flute2_f5_32.bin"

	.align 2
DirectSoundWaveData_piccolo_flute_a4_22::
	.incbin "sound/direct_sound_samples/new/piccolo_flute_a4_22.bin"

	.align 2
DirectSoundWaveData_piccolo_flute_c4_22::
	.incbin "sound/direct_sound_samples/new/piccolo_flute_c4_22.bin"

	.align 2
DirectSoundWaveData_piccolo_flute_c6_22::
	.incbin "sound/direct_sound_samples/new/piccolo_flute_c6_22.bin"

	.align 2
DirectSoundWaveData_piccolo_flute_f5_22::
	.incbin "sound/direct_sound_samples/new/piccolo_flute_f5_22.bin"

@	.align 2
@DirectSoundWaveData_pishiicut_44::
@	.incbin "sound/direct_sound_samples/new/pishiicut_44.bin"

	.align 2
DirectSoundWaveData_pizzicato_strings_a4_22::
	.incbin "sound/direct_sound_samples/new/pizzicato_strings_a4_22.bin"

@	.align 2
@DirectSoundWaveData_pizzicato_strings_a4_32::
@	.incbin "sound/direct_sound_samples/new/pizzicato_strings_a4_32.bin"

	.align 2
DirectSoundWaveData_pizzicato_strings_c4_22::
	.incbin "sound/direct_sound_samples/new/pizzicato_strings_c4_22.bin"

@	.align 2
@DirectSoundWaveData_pizzicato_strings_c4_32::
@	.incbin "sound/direct_sound_samples/new/pizzicato_strings_c4_32.bin"

	.align 2
DirectSoundWaveData_pizzicato_strings_e3_22::
	.incbin "sound/direct_sound_samples/new/pizzicato_strings_e3_22.bin"

@	.align 2
@DirectSoundWaveData_pizzicato_strings_e3_32::
@	.incbin "sound/direct_sound_samples/new/pizzicato_strings_e3_32.bin"

	.align 2
DirectSoundWaveData_pizzicato_strings_f5_22::
	.incbin "sound/direct_sound_samples/new/pizzicato_strings_f5_22.bin"

@	.align 2
@DirectSoundWaveData_pizzicato_strings_f5_32::
@	.incbin "sound/direct_sound_samples/new/pizzicato_strings_f5_32.bin"

	.align 2
DirectSoundWaveData_pizzicato_strings_g2_22::
	.incbin "sound/direct_sound_samples/new/pizzicato_strings_g2_22.bin"

@	.align 2
@DirectSoundWaveData_pizzicato_strings_g2_32::
@	.incbin "sound/direct_sound_samples/new/pizzicato_strings_g2_32.bin"

	.align 2
DirectSoundWaveData_pl_orgloop_c4_32::
	.incbin "sound/direct_sound_samples/new/pl_orgloop_c4_32.bin"

	.align 2
DirectSoundWaveData_pl_orgloop_c5_32::
	.incbin "sound/direct_sound_samples/new/pl_orgloop_c5_32.bin"

@	.align 2
@DirectSoundWaveData_pla_bass2_c1_32::
@	.incbin "sound/direct_sound_samples/new/pla_bass2_c1_32.bin"

	.align 2
DirectSoundWaveData_pla_gtl_c3_32::
	.incbin "sound/direct_sound_samples/new/pla_gtl_c3_32.bin"

	.align 2
DirectSoundWaveData_pla_gtl_g3_32::
	.incbin "sound/direct_sound_samples/new/pla_gtl_g3_32.bin"

	.align 2
DirectSoundWaveData_plasma_gt2_c2_32::
	.incbin "sound/direct_sound_samples/new/plasma_gt2_c2_32.bin"

	.align 2
DirectSoundWaveData_plasma_gt_c1_32::
	.incbin "sound/direct_sound_samples/new/plasma_gt_c1_32.bin"

	.align 2
DirectSoundWaveData_plasma_gt_c2_32::
	.incbin "sound/direct_sound_samples/new/plasma_gt_c2_32.bin"

	.align 2
DirectSoundWaveData_plasma_gt_c3_32::
	.incbin "sound/direct_sound_samples/new/plasma_gt_c3_32.bin"

	.align 2
DirectSoundWaveData_plasma_gt_c4_32::
	.incbin "sound/direct_sound_samples/new/plasma_gt_c4_32.bin"

	.align 2
DirectSoundWaveData_plasma_gtrif3_22::
	.incbin "sound/direct_sound_samples/new/plasma_gtrif3_22.bin"

	.align 2
DirectSoundWaveData_plasma_noise_22::
	.incbin "sound/direct_sound_samples/new/plasma_noise_22.bin"

	.align 2
DirectSoundWaveData_plasma_strings2_22::
	.incbin "sound/direct_sound_samples/new/plasma_strings2_22.bin"

	.align 2
DirectSoundWaveData_plasma_wave_22::
	.incbin "sound/direct_sound_samples/new/plasma_wave_22.bin"

@	.align 2
@DirectSoundWaveData_pom_13::
@	.incbin "sound/direct_sound_samples/new/pom_13.bin"

@	.align 2
@DirectSoundWaveData_porgan_c4_13::
@	.incbin "sound/direct_sound_samples/new/porgan_c4_13.bin"

@	.align 2
@DirectSoundWaveData_power_bass2_16::
@	.incbin "sound/direct_sound_samples/new/power_bass2_16.bin"

@	.align 2
@DirectSoundWaveData_power_bass_16::
@	.incbin "sound/direct_sound_samples/new/power_bass_16.bin"

@	.align 2
@DirectSoundWaveData_psg_plus_c4_13::
@	.incbin "sound/direct_sound_samples/new/psg_plus_c4_13.bin"

@	.align 2
@DirectSoundWaveData_resi_fire2_22::
@	.incbin "sound/direct_sound_samples/new/resi_fire2_22.bin"

	.align 2
DirectSoundWaveData_reverse_cym_16::
	.incbin "sound/direct_sound_samples/new/reverse_cym_16.bin"

@	.align 2
@DirectSoundWaveData_reza_voice_16::
@	.incbin "sound/direct_sound_samples/new/reza_voice_16.bin"

	.align 2
DirectSoundWaveData_ride_bell_16::
	.incbin "sound/direct_sound_samples/new/ride_bell_16.bin"

@	.align 2
@DirectSoundWaveData_ride_bell_32::
@	.incbin "sound/direct_sound_samples/new/ride_bell_32.bin"

	.align 2
DirectSoundWaveData_ride_cym_22::
	.incbin "sound/direct_sound_samples/new/ride_cym_22.bin"

@	.align 2
@DirectSoundWaveData_ride_cymbal_32::
@	.incbin "sound/direct_sound_samples/new/ride_cymbal_32.bin"

@	.align 2
@DirectSoundWaveData_ridecym_analog_kit_32::
@	.incbin "sound/direct_sound_samples/new/ridecym_analog_kit_32.bin"

	.align 2
DirectSoundWaveData_ridecym_rockkit_st_32::
	.incbin "sound/direct_sound_samples/new/ridecym_rockkit_st_32.bin"

	.align 2
DirectSoundWaveData_rimshot2_trinity_32::
	.incbin "sound/direct_sound_samples/new/rimshot2_trinity_32.bin"

	.align 2
DirectSoundWaveData_rimshot_16::
	.incbin "sound/direct_sound_samples/new/rimshot_16.bin"

	.align 2
DirectSoundWaveData_rimshot_btry_gm_32::
	.incbin "sound/direct_sound_samples/new/rimshot_btry_gm_32.bin"

	.align 2
DirectSoundWaveData_rimshot_trinity_32::
	.incbin "sound/direct_sound_samples/new/rimshot_trinity_32.bin"

@	.align 2
@DirectSoundWaveData_roll_cymbal_32::
@	.incbin "sound/direct_sound_samples/new/roll_cymbal_32.bin"

	.align 2
DirectSoundWaveData_ryhthm_01_22::
	.incbin "sound/direct_sound_samples/new/ryhthm_01_22.bin"

@	.align 2
@DirectSoundWaveData_sample::
@	.incbin "sound/direct_sound_samples/new/sample.bin"

@	.align 2
@DirectSoundWaveData_satodiv_c1_22::
@	.incbin "sound/direct_sound_samples/new/satodiv_c1_22.bin"

@	.align 2
@DirectSoundWaveData_satodiv_c2_22::
@	.incbin "sound/direct_sound_samples/new/satodiv_c2_22.bin"

@	.align 2
@DirectSoundWaveData_satodiv_c3_22::
@	.incbin "sound/direct_sound_samples/new/satodiv_c3_22.bin"

@	.align 2
@DirectSoundWaveData_satodiv_c4_22::
@	.incbin "sound/direct_sound_samples/new/satodiv_c4_22.bin"

@	.align 2
@DirectSoundWaveData_satodiv_c5_22::
@	.incbin "sound/direct_sound_samples/new/satodiv_c5_22.bin"

@	.align 2
@DirectSoundWaveData_sax_c3_16::
@	.incbin "sound/direct_sound_samples/new/sax_c3_16.bin"

@	.align 2
@DirectSoundWaveData_sax_c4_16::
@	.incbin "sound/direct_sound_samples/new/sax_c4_16.bin"

@	.align 2
@DirectSoundWaveData_sax_c5_16::
@	.incbin "sound/direct_sound_samples/new/sax_c5_16.bin"

	.align 2
DirectSoundWaveData_sax_wb_c3_22::
	.incbin "sound/direct_sound_samples/new/sax_wb_c3_22.bin"

	.align 2
DirectSoundWaveData_sax_wb_c3_32::
	.incbin "sound/direct_sound_samples/new/sax_wb_c3_32.bin"

	.align 2
DirectSoundWaveData_sax_wb_c4_22::
	.incbin "sound/direct_sound_samples/new/sax_wb_c4_22.bin"

	.align 2
DirectSoundWaveData_sax_wb_c4_32::
	.incbin "sound/direct_sound_samples/new/sax_wb_c4_32.bin"

	.align 2
DirectSoundWaveData_sax_wb_c5_22::
	.incbin "sound/direct_sound_samples/new/sax_wb_c5_22.bin"

	.align 2
DirectSoundWaveData_sax_wb_c5_32::
	.incbin "sound/direct_sound_samples/new/sax_wb_c5_32.bin"

@	.align 2
@DirectSoundWaveData_scrat_01_22_max::
@	.incbin "sound/direct_sound_samples/new/scrat_01_22_max.bin"

@	.align 2
@DirectSoundWaveData_scrat_02_22_max::
@	.incbin "sound/direct_sound_samples/new/scrat_02_22_max.bin"

@	.align 2
@DirectSoundWaveData_scrat_03_22_max::
@	.incbin "sound/direct_sound_samples/new/scrat_03_22_max.bin"

	.align 2
DirectSoundWaveData_sd_octhit_as3_32::
	.incbin "sound/direct_sound_samples/new/sd_octhit_as3_32.bin"

@	.align 2
@DirectSoundWaveData_se_dp_doriru_16::
@	.incbin "sound/direct_sound_samples/new/se_dp_doriru_16.bin"

@	.align 2
@DirectSoundWaveData_se_dp_gasa_16::
@	.incbin "sound/direct_sound_samples/new/se_dp_gasa_16.bin"

@	.align 2
@DirectSoundWaveData_se_dp_kyu_16::
@	.incbin "sound/direct_sound_samples/new/se_dp_kyu_16.bin"

@	.align 2
@DirectSoundWaveData_se_dp_muchi_16::
@	.incbin "sound/direct_sound_samples/new/se_dp_muchi_16.bin"

@	.align 2
@DirectSoundWaveData_se_dp_perari_16::
@	.incbin "sound/direct_sound_samples/new/se_dp_perari_16.bin"

@	.align 2
@DirectSoundWaveData_se_dp_yukiashi_16::
@	.incbin "sound/direct_sound_samples/new/se_dp_yukiashi_16.bin"

@	.align 2
@DirectSoundWaveData_se_wb_fld_byu_11::
@	.incbin "sound/direct_sound_samples/new/se_wb_fld_byu_11.bin"

@	.align 2
@DirectSoundWaveData_se_wb_jimen_goun_22::
@	.incbin "sound/direct_sound_samples/new/se_wb_jimen_goun_22.bin"

@	.align 2
@DirectSoundWaveData_se_wb_musical_cool_snare2c_16::
@	.incbin "sound/direct_sound_samples/new/se_wb_musical_cool_snare2c_16.bin"

@	.align 2
@DirectSoundWaveData_se_wb_musical_cool_snare3_16::
@	.incbin "sound/direct_sound_samples/new/se_wb_musical_cool_snare3_16.bin"

@	.align 2
@DirectSoundWaveData_se_wb_sys_pi_32::
@	.incbin "sound/direct_sound_samples/new/se_wb_sys_pi_32.bin"

	.align 2
DirectSoundWaveData_shaker_16::
	.incbin "sound/direct_sound_samples/new/shaker_16.bin"

@	.align 2
@DirectSoundWaveData_shaker_32::
@	.incbin "sound/direct_sound_samples/new/shaker_32.bin"

	.align 2
DirectSoundWaveData_shaker_btry_gm_32::
	.incbin "sound/direct_sound_samples/new/shaker_btry_gm_32.bin"

@	.align 2
@DirectSoundWaveData_shakuhachi_a4_16::
@	.incbin "sound/direct_sound_samples/new/shakuhachi_a4_16.bin"

@	.align 2
@DirectSoundWaveData_shakuhachi_c4_16::
@	.incbin "sound/direct_sound_samples/new/shakuhachi_c4_16.bin"

@	.align 2
@DirectSoundWaveData_shakuhachi_e5_16::
@	.incbin "sound/direct_sound_samples/new/shakuhachi_e5_16.bin"

	.align 2
DirectSoundWaveData_shamisen_as3_16::
	.incbin "sound/direct_sound_samples/new/shamisen_as3_16.bin"

	.align 2
DirectSoundWaveData_shamisen_d3_16::
	.incbin "sound/direct_sound_samples/new/shamisen_d3_16.bin"

	.align 2
DirectSoundWaveData_shamisen_ds5_16::
	.incbin "sound/direct_sound_samples/new/shamisen_ds5_16.bin"

	.align 2
DirectSoundWaveData_shamisen_g4_16::
	.incbin "sound/direct_sound_samples/new/shamisen_g4_16.bin"

@	.align 2
@DirectSoundWaveData_shipmortor_13::
@	.incbin "sound/direct_sound_samples/new/shipmortor_13.bin"

@	.align 2
@DirectSoundWaveData_ships_horn_22::
@	.incbin "sound/direct_sound_samples/new/ships_horn_22.bin"

	.align 2
DirectSoundWaveData_shiten_bass_fs1_32::
	.incbin "sound/direct_sound_samples/new/shiten_bass_fs1_32.bin"

	.align 2
DirectSoundWaveData_shiten_bass_fs3_32::
	.incbin "sound/direct_sound_samples/new/shiten_bass_fs3_32.bin"

	.align 2
DirectSoundWaveData_shiten_read_max2_fs3_32::
	.incbin "sound/direct_sound_samples/new/shiten_read_max2_fs3_32.bin"

	.align 2
DirectSoundWaveData_shiten_read_max3_cs5_32::
	.incbin "sound/direct_sound_samples/new/shiten_read_max3_cs5_32.bin"

	.align 2
DirectSoundWaveData_shiten_snare_max2_32::
	.incbin "sound/direct_sound_samples/new/shiten_snare_max2_32.bin"

@	.align 2
@DirectSoundWaveData_sitar_a3_32::
@	.incbin "sound/direct_sound_samples/new/sitar_a3_32.bin"

@	.align 2
@DirectSoundWaveData_sitar_c3_32::
@	.incbin "sound/direct_sound_samples/new/sitar_c3_32.bin"

@	.align 2
@DirectSoundWaveData_sitar_d5_32::
@	.incbin "sound/direct_sound_samples/new/sitar_d5_32.bin"

@	.align 2
@DirectSoundWaveData_sitar_f4_32::
@	.incbin "sound/direct_sound_samples/new/sitar_f4_32.bin"

	.align 2
DirectSoundWaveData_slap_bass_wb_c2_22::
	.incbin "sound/direct_sound_samples/new/slap_bass_wb_c2_22.bin"

	.align 2
DirectSoundWaveData_slap_bass_wb_c3_22::
	.incbin "sound/direct_sound_samples/new/slap_bass_wb_c3_22.bin"

	.align 2
DirectSoundWaveData_slapbass_c1_16::
	.incbin "sound/direct_sound_samples/new/slapbass_c1_16.bin"

	.align 2
DirectSoundWaveData_slapbass_c2_32::
	.incbin "sound/direct_sound_samples/new/slapbass_c2_32.bin"

	.align 2
DirectSoundWaveData_slapbass_c3_32::
	.incbin "sound/direct_sound_samples/new/slapbass_c3_32.bin"

	.align 2
DirectSoundWaveData_slapbass_g2_32::
	.incbin "sound/direct_sound_samples/new/slapbass_g2_32.bin"

	.align 2
DirectSoundWaveData_snare1_analog_kit_32::
	.incbin "sound/direct_sound_samples/new/snare1_analog_kit_32.bin"

	.align 2
DirectSoundWaveData_snare2_analog_kit_32::
	.incbin "sound/direct_sound_samples/new/snare2_analog_kit_32.bin"

@	.align 2
@DirectSoundWaveData_snare2_trinity_32::
@	.incbin "sound/direct_sound_samples/new/snare2_trinity_32.bin"

@	.align 2
@DirectSoundWaveData_snare3_trinity_32::
@	.incbin "sound/direct_sound_samples/new/snare3_trinity_32.bin"

	.align 2
DirectSoundWaveData_snare4_trinity_32::
	.incbin "sound/direct_sound_samples/new/snare4_trinity_32.bin"

	.align 2
DirectSoundWaveData_snare_22::
	.incbin "sound/direct_sound_samples/new/snare_22.bin"

	.align 2
DirectSoundWaveData_snare_808_16::
	.incbin "sound/direct_sound_samples/new/snare_808_16.bin"

	.align 2
DirectSoundWaveData_snare_btry_gm_32::
	.incbin "sound/direct_sound_samples/new/snare_btry_gm_32.bin"

	.align 2
DirectSoundWaveData_snare_euro_16::
	.incbin "sound/direct_sound_samples/new/snare_euro_16.bin"

	.align 2
DirectSoundWaveData_snare_groove_32::
	.incbin "sound/direct_sound_samples/new/snare_groove_32.bin"

@	.align 2
@DirectSoundWaveData_snare_l_11::
@	.incbin "sound/direct_sound_samples/new/snare_l_11.bin"

	.align 2
DirectSoundWaveData_snare_orch_16::
	.incbin "sound/direct_sound_samples/new/snare_orch_16.bin"

	.align 2
DirectSoundWaveData_snare_power_16::
	.incbin "sound/direct_sound_samples/new/snare_power_16.bin"

@	.align 2
@DirectSoundWaveData_snare_power_32::
@	.incbin "sound/direct_sound_samples/new/snare_power_32.bin"

	.align 2
DirectSoundWaveData_snare_power_max_32::
	.incbin "sound/direct_sound_samples/new/snare_power_max_32.bin"

	.align 2
DirectSoundWaveData_snare_rockkit_st_32::
	.incbin "sound/direct_sound_samples/new/snare_rockkit_st_32.bin"

	.align 2
DirectSoundWaveData_snareroll_22::
	.incbin "sound/direct_sound_samples/new/snareroll_22.bin"

@	.align 2
@DirectSoundWaveData_splash_cym1_popkit_32::
@	.incbin "sound/direct_sound_samples/new/splash_cym1_popkit_32.bin"

	.align 2
DirectSoundWaveData_splash_cym_22::
	.incbin "sound/direct_sound_samples/new/splash_cym_22.bin"

	.align 2
DirectSoundWaveData_splash_cym_32::
	.incbin "sound/direct_sound_samples/new/splash_cym_32.bin"

@	.align 2
@DirectSoundWaveData_splashcym1_analog_kit_32::
@	.incbin "sound/direct_sound_samples/new/splashcym1_analog_kit_32.bin"

	.align 2
DirectSoundWaveData_splashcym_rockkit_st_32::
	.incbin "sound/direct_sound_samples/new/splashcym_rockkit_st_32.bin"

	.align 2
DirectSoundWaveData_steel_dr_wb_g3_22::
	.incbin "sound/direct_sound_samples/new/steel_dr_wb_g3_22.bin"

	.align 2
DirectSoundWaveData_steel_dr_wb_g4_22::
	.incbin "sound/direct_sound_samples/new/steel_dr_wb_g4_22.bin"

	.align 2
DirectSoundWaveData_steel_guitar_c5_22::
	.incbin "sound/direct_sound_samples/new/steel_guitar_c5_22.bin"

@	.align 2
@DirectSoundWaveData_steel_guitar_c5_32::
@	.incbin "sound/direct_sound_samples/new/steel_guitar_c5_32.bin"

	.align 2
DirectSoundWaveData_steel_guitar_e4_22::
	.incbin "sound/direct_sound_samples/new/steel_guitar_e4_22.bin"

@	.align 2
@DirectSoundWaveData_steel_guitar_e4_32::
@	.incbin "sound/direct_sound_samples/new/steel_guitar_e4_32.bin"

	.align 2
DirectSoundWaveData_steel_guitar_g2_22::
	.incbin "sound/direct_sound_samples/new/steel_guitar_g2_22.bin"

@	.align 2
@DirectSoundWaveData_steel_guitar_g2_32::
@	.incbin "sound/direct_sound_samples/new/steel_guitar_g2_32.bin"

	.align 2
DirectSoundWaveData_steel_guitar_g3_22::
	.incbin "sound/direct_sound_samples/new/steel_guitar_g3_22.bin"

@	.align 2
@DirectSoundWaveData_steel_guitar_g3_32::
@	.incbin "sound/direct_sound_samples/new/steel_guitar_g3_32.bin"

@	.align 2
@DirectSoundWaveData_steel_pan_c4_32::
@	.incbin "sound/direct_sound_samples/new/steel_pan_c4_32.bin"

@	.align 2
@DirectSoundWaveData_steel_pan_c5_32::
@	.incbin "sound/direct_sound_samples/new/steel_pan_c5_32.bin"

@	.align 2
@DirectSoundWaveData_steel_pan_g3_32::
@	.incbin "sound/direct_sound_samples/new/steel_pan_g3_32.bin"

@	.align 2
@DirectSoundWaveData_steel_pan_g4_32::
@	.incbin "sound/direct_sound_samples/new/steel_pan_g4_32.bin"

@	.align 2
@DirectSoundWaveData_strings_a3_32::
@	.incbin "sound/direct_sound_samples/new/strings_a3_32.bin"

	.align 2
DirectSoundWaveData_strings_a4_22::
	.incbin "sound/direct_sound_samples/new/strings_a4_22.bin"

	.align 2
DirectSoundWaveData_strings_a4_32::
	.incbin "sound/direct_sound_samples/new/strings_a4_32.bin"

@	.align 2
@DirectSoundWaveData_strings_c1_16::
@	.incbin "sound/direct_sound_samples/new/strings_c1_16.bin"

@	.align 2
@DirectSoundWaveData_strings_c2_16::
@	.incbin "sound/direct_sound_samples/new/strings_c2_16.bin"

@	.align 2
@DirectSoundWaveData_strings_c3_16::
@	.incbin "sound/direct_sound_samples/new/strings_c3_16.bin"

@	.align 2
@DirectSoundWaveData_strings_c3_32::
@	.incbin "sound/direct_sound_samples/new/strings_c3_32.bin"

@	.align 2
@DirectSoundWaveData_strings_c4_16::
@	.incbin "sound/direct_sound_samples/new/strings_c4_16.bin"

	.align 2
DirectSoundWaveData_strings_c4_22::
	.incbin "sound/direct_sound_samples/new/strings_c4_22.bin"

	.align 2
DirectSoundWaveData_strings_c4_32::
	.incbin "sound/direct_sound_samples/new/strings_c4_32.bin"

	.align 2
DirectSoundWaveData_strings_c6_22::
	.incbin "sound/direct_sound_samples/new/strings_c6_22.bin"

	.align 2
DirectSoundWaveData_strings_c6_32::
	.incbin "sound/direct_sound_samples/new/strings_c6_32.bin"

@	.align 2
@DirectSoundWaveData_strings_d5_32::
@	.incbin "sound/direct_sound_samples/new/strings_d5_32.bin"

@	.align 2
@DirectSoundWaveData_strings_f2_32::
@	.incbin "sound/direct_sound_samples/new/strings_f2_32.bin"

@	.align 2
@DirectSoundWaveData_strings_f4_32::
@	.incbin "sound/direct_sound_samples/new/strings_f4_32.bin"

	.align 2
DirectSoundWaveData_strings_f5_22::
	.incbin "sound/direct_sound_samples/new/strings_f5_22.bin"

	.align 2
DirectSoundWaveData_strings_f5_32::
	.incbin "sound/direct_sound_samples/new/strings_f5_32.bin"

	.align 2
DirectSoundWaveData_strings_wb_a3_22::
	.incbin "sound/direct_sound_samples/new/strings_wb_a3_22.bin"

@	.align 2
@DirectSoundWaveData_strings_wb_a3_32::
@	.incbin "sound/direct_sound_samples/new/strings_wb_a3_32.bin"

	.align 2
DirectSoundWaveData_strings_wb_c3_22::
	.incbin "sound/direct_sound_samples/new/strings_wb_c3_22.bin"

@	.align 2
@DirectSoundWaveData_strings_wb_c3_32::
@	.incbin "sound/direct_sound_samples/new/strings_wb_c3_32.bin"

	.align 2
DirectSoundWaveData_strings_wb_d5_22::
	.incbin "sound/direct_sound_samples/new/strings_wb_d5_22.bin"

@	.align 2
@DirectSoundWaveData_strings_wb_d5_32::
@	.incbin "sound/direct_sound_samples/new/strings_wb_d5_32.bin"

	.align 2
DirectSoundWaveData_strings_wb_f2_22::
	.incbin "sound/direct_sound_samples/new/strings_wb_f2_22.bin"

@	.align 2
@DirectSoundWaveData_strings_wb_f2_32::
@	.incbin "sound/direct_sound_samples/new/strings_wb_f2_32.bin"

	.align 2
DirectSoundWaveData_strings_wb_f4_22::
	.incbin "sound/direct_sound_samples/new/strings_wb_f4_22.bin"

@	.align 2
@DirectSoundWaveData_strings_wb_f4_32::
@	.incbin "sound/direct_sound_samples/new/strings_wb_f4_32.bin"

	.align 2
DirectSoundWaveData_suzu_22::
	.incbin "sound/direct_sound_samples/new/suzu_22.bin"

@	.align 2
@DirectSoundWaveData_syak_ds_d#4_32::
@	.incbin "sound/direct_sound_samples/new/syak_ds_d#4_32.bin"

	.align 2
DirectSoundWaveData_synapse_burst_max_22::
	.incbin "sound/direct_sound_samples/new/synapse_burst_max_22.bin"

@	.align 2
@DirectSoundWaveData_synbass01_as1_32::
@	.incbin "sound/direct_sound_samples/new/synbass01_as1_32.bin"

	.align 2
DirectSoundWaveData_synbass1_c2_16::
	.incbin "sound/direct_sound_samples/new/synbass1_c2_16.bin"

	.align 2
DirectSoundWaveData_synbass2_c1_16::
	.incbin "sound/direct_sound_samples/new/synbass2_c1_16.bin"

	.align 2
DirectSoundWaveData_synbass_fs0_32::
	.incbin "sound/direct_sound_samples/new/synbass_fs0_32.bin"

@	.align 2
@DirectSoundWaveData_synth01_c3_32::
@	.incbin "sound/direct_sound_samples/new/synth01_c3_32.bin"

@	.align 2
@DirectSoundWaveData_synth02_c3_32::
@	.incbin "sound/direct_sound_samples/new/synth02_c3_32.bin"

	.align 2
DirectSoundWaveData_synth_bass_c2_22::
	.incbin "sound/direct_sound_samples/new/synth_bass_c2_22.bin"

	.align 2
DirectSoundWaveData_synth_bass_c2_32::
	.incbin "sound/direct_sound_samples/new/synth_bass_c2_32.bin"

	.align 2
DirectSoundWaveData_synth_bass_c3_22::
	.incbin "sound/direct_sound_samples/new/synth_bass_c3_22.bin"

	.align 2
DirectSoundWaveData_synth_bass_c3_32::
	.incbin "sound/direct_sound_samples/new/synth_bass_c3_32.bin"

	.align 2
DirectSoundWaveData_synth_bass_wb_c2_22::
	.incbin "sound/direct_sound_samples/new/synth_bass_wb_c2_22.bin"

	.align 2
DirectSoundWaveData_synth_bass_wb_c3_22::
	.incbin "sound/direct_sound_samples/new/synth_bass_wb_c3_22.bin"

	.align 2
DirectSoundWaveData_synth_lead_c4_22::
	.incbin "sound/direct_sound_samples/new/synth_lead_c4_22.bin"

	.align 2
DirectSoundWaveData_synth_lead_c5_22::
	.incbin "sound/direct_sound_samples/new/synth_lead_c5_22.bin"

	.align 2
DirectSoundWaveData_synth_lead_c6_22::
	.incbin "sound/direct_sound_samples/new/synth_lead_c6_22.bin"

@	.align 2
@DirectSoundWaveData_synth_snaer01_32::
@	.incbin "sound/direct_sound_samples/new/synth_snaer01_32.bin"

	.align 2
DirectSoundWaveData_synth_snaer02_32::
	.incbin "sound/direct_sound_samples/new/synth_snaer02_32.bin"

@	.align 2
@DirectSoundWaveData_synth_tom01_32::
@	.incbin "sound/direct_sound_samples/new/synth_tom01_32.bin"

	.align 2
DirectSoundWaveData_taiko1_16::
	.incbin "sound/direct_sound_samples/new/taiko1_16.bin"

@	.align 2
@DirectSoundWaveData_taiko1_32::
@	.incbin "sound/direct_sound_samples/new/taiko1_32.bin"

	.align 2
DirectSoundWaveData_taiko2_16::
	.incbin "sound/direct_sound_samples/new/taiko2_16.bin"

@	.align 2
@DirectSoundWaveData_taiko2_32::
@	.incbin "sound/direct_sound_samples/new/taiko2_32.bin"

	.align 2
DirectSoundWaveData_taiko_rim_16::
	.incbin "sound/direct_sound_samples/new/taiko_rim_16.bin"

	.align 2
DirectSoundWaveData_tambourine_16::
	.incbin "sound/direct_sound_samples/new/tambourine_16.bin"

	.align 2
DirectSoundWaveData_tambourine_32::
	.incbin "sound/direct_sound_samples/new/tambourine_32.bin"

	.align 2
DirectSoundWaveData_tengan_wind_13::
	.incbin "sound/direct_sound_samples/new/tengan_wind_13.bin"

	.align 2
DirectSoundWaveData_timpani2_as_16::
	.incbin "sound/direct_sound_samples/new/timpani2_as_16.bin"

	.align 2
DirectSoundWaveData_timpani2_e_16::
	.incbin "sound/direct_sound_samples/new/timpani2_e_16.bin"

	.align 2
DirectSoundWaveData_timpani_c4_22::
	.incbin "sound/direct_sound_samples/new/timpani_c4_22.bin"

@	.align 2
@DirectSoundWaveData_timpani_c4_32::
@	.incbin "sound/direct_sound_samples/new/timpani_c4_32.bin"

	.align 2
DirectSoundWaveData_timpani_g3_22::
	.incbin "sound/direct_sound_samples/new/timpani_g3_22.bin"

@	.align 2
@DirectSoundWaveData_timpani_g3_32::
@	.incbin "sound/direct_sound_samples/new/timpani_g3_32.bin"

	.align 2
DirectSoundWaveData_timpani_g4_22::
	.incbin "sound/direct_sound_samples/new/timpani_g4_22.bin"

@	.align 2
@DirectSoundWaveData_timpani_g4_32::
@	.incbin "sound/direct_sound_samples/new/timpani_g4_32.bin"

	.align 2
DirectSoundWaveData_timpani_wb_c3_22::
	.incbin "sound/direct_sound_samples/new/timpani_wb_c3_22.bin"

	.align 2
DirectSoundWaveData_timpani_wb_g2_22::
	.incbin "sound/direct_sound_samples/new/timpani_wb_g2_22.bin"

	.align 2
DirectSoundWaveData_timpani_wb_g3_22::
	.incbin "sound/direct_sound_samples/new/timpani_wb_g3_22.bin"

@	.align 2
@DirectSoundWaveData_timpany_as_16::
@	.incbin "sound/direct_sound_samples/new/timpany_as_16.bin"

@	.align 2
@DirectSoundWaveData_timpany_e_16::
@	.incbin "sound/direct_sound_samples/new/timpany_e_16.bin"

	.align 2
DirectSoundWaveData_tom1_16::
	.incbin "sound/direct_sound_samples/new/tom1_16.bin"

@	.align 2
@DirectSoundWaveData_tom_11::
@	.incbin "sound/direct_sound_samples/new/tom_11.bin"

@	.align 2
@DirectSoundWaveData_tom_16::
@	.incbin "sound/direct_sound_samples/new/tom_16.bin"

	.align 2
DirectSoundWaveData_tom_f_16::
	.incbin "sound/direct_sound_samples/new/tom_f_16.bin"

@	.align 2
@DirectSoundWaveData_tom_f_32::
@	.incbin "sound/direct_sound_samples/new/tom_f_32.bin"

@	.align 2
@DirectSoundWaveData_tom_f_rockkit_st_32::
@	.incbin "sound/direct_sound_samples/new/tom_f_rockkit_st_32.bin"

	.align 2
DirectSoundWaveData_tom_h_16::
	.incbin "sound/direct_sound_samples/new/tom_h_16.bin"

@	.align 2
@DirectSoundWaveData_tom_h_32::
@	.incbin "sound/direct_sound_samples/new/tom_h_32.bin"

@	.align 2
@DirectSoundWaveData_tom_h_rockkit_st_32::
@	.incbin "sound/direct_sound_samples/new/tom_h_rockkit_st_32.bin"

	.align 2
DirectSoundWaveData_tom_l_16::
	.incbin "sound/direct_sound_samples/new/tom_l_16.bin"

@	.align 2
@DirectSoundWaveData_tom_l_32::
@	.incbin "sound/direct_sound_samples/new/tom_l_32.bin"

@	.align 2
@DirectSoundWaveData_tom_l_rockkit_st_32::
@	.incbin "sound/direct_sound_samples/new/tom_l_rockkit_st_32.bin"

	.align 2
DirectSoundWaveData_tom_m_16::
	.incbin "sound/direct_sound_samples/new/tom_m_16.bin"

@	.align 2
@DirectSoundWaveData_tom_m_32::
@	.incbin "sound/direct_sound_samples/new/tom_m_32.bin"

@	.align 2
@DirectSoundWaveData_tom_m_rockkit_st_32::
@	.incbin "sound/direct_sound_samples/new/tom_m_rockkit_st_32.bin"

	.align 2
DirectSoundWaveData_tp_b4_16::
	.incbin "sound/direct_sound_samples/new/tp_b4_16.bin"

	.align 2
DirectSoundWaveData_tp_cs3_16::
	.incbin "sound/direct_sound_samples/new/tp_cs3_16.bin"

	.align 2
DirectSoundWaveData_tp_cs4_16::
	.incbin "sound/direct_sound_samples/new/tp_cs4_16.bin"

@	.align 2
@DirectSoundWaveData_track_13::
@	.incbin "sound/direct_sound_samples/new/track_13.bin"

@	.align 2
@DirectSoundWaveData_train2_13::
@	.incbin "sound/direct_sound_samples/new/train2_13.bin"

@	.align 2
@DirectSoundWaveData_train_02_22_max::
@	.incbin "sound/direct_sound_samples/new/train_02_22_max.bin"

@	.align 2
@DirectSoundWaveData_train_04_22_max::
@	.incbin "sound/direct_sound_samples/new/train_04_22_max.bin"

@	.align 2
@DirectSoundWaveData_train_22::
@	.incbin "sound/direct_sound_samples/new/train_22.bin"

	.align 2
DirectSoundWaveData_triangle_16::
	.incbin "sound/direct_sound_samples/new/triangle_16.bin"

	.align 2
DirectSoundWaveData_triangle_close_32::
	.incbin "sound/direct_sound_samples/new/triangle_close_32.bin"

	.align 2
DirectSoundWaveData_triangle_open_32::
	.incbin "sound/direct_sound_samples/new/triangle_open_32.bin"

	.align 2
DirectSoundWaveData_trombone_c2_16::
	.incbin "sound/direct_sound_samples/new/trombone_c2_16.bin"

	.align 2
DirectSoundWaveData_trombone_c3_16::
	.incbin "sound/direct_sound_samples/new/trombone_c3_16.bin"

	.align 2
DirectSoundWaveData_trombone_c4_16::
	.incbin "sound/direct_sound_samples/new/trombone_c4_16.bin"

	.align 2
DirectSoundWaveData_trombone_c4_22::
	.incbin "sound/direct_sound_samples/new/trombone_c4_22.bin"

@	.align 2
@DirectSoundWaveData_trombone_c4_32::
@	.incbin "sound/direct_sound_samples/new/trombone_c4_32.bin"

	.align 2
DirectSoundWaveData_trombone_e3_22::
	.incbin "sound/direct_sound_samples/new/trombone_e3_22.bin"

@	.align 2
@DirectSoundWaveData_trombone_e3_32::
@	.incbin "sound/direct_sound_samples/new/trombone_e3_32.bin"

	.align 2
DirectSoundWaveData_trombone_g2_22::
	.incbin "sound/direct_sound_samples/new/trombone_g2_22.bin"

@	.align 2
@DirectSoundWaveData_trombone_g2_32::
@	.incbin "sound/direct_sound_samples/new/trombone_g2_32.bin"

	.align 2
DirectSoundWaveData_trumpet_section_a4_22::
	.incbin "sound/direct_sound_samples/new/trumpet_section_a4_22.bin"

@	.align 2
@DirectSoundWaveData_trumpet_section_a4_32::
@	.incbin "sound/direct_sound_samples/new/trumpet_section_a4_32.bin"

	.align 2
DirectSoundWaveData_trumpet_section_c4_22::
	.incbin "sound/direct_sound_samples/new/trumpet_section_c4_22.bin"

@	.align 2
@DirectSoundWaveData_trumpet_section_c4_32::
@	.incbin "sound/direct_sound_samples/new/trumpet_section_c4_32.bin"

	.align 2
DirectSoundWaveData_trumpet_section_g5_22::
	.incbin "sound/direct_sound_samples/new/trumpet_section_g5_22.bin"

@	.align 2
@DirectSoundWaveData_trumpet_section_g5_32::
@	.incbin "sound/direct_sound_samples/new/trumpet_section_g5_32.bin"

	.align 2
DirectSoundWaveData_trumpet_wb_a4_22::
	.incbin "sound/direct_sound_samples/new/trumpet_wb_a4_22.bin"

	.align 2
DirectSoundWaveData_trumpet_wb_c4_22::
	.incbin "sound/direct_sound_samples/new/trumpet_wb_c4_22.bin"

	.align 2
DirectSoundWaveData_trumpet_wb_f5_22::
	.incbin "sound/direct_sound_samples/new/trumpet_wb_f5_22.bin"

@	.align 2
@DirectSoundWaveData_tsuushin_13::
@	.incbin "sound/direct_sound_samples/new/tsuushin_13.bin"

	.align 2
DirectSoundWaveData_tub_bell_wb_c5_22::
	.incbin "sound/direct_sound_samples/new/tub_bell_wb_c5_22.bin"

	.align 2
DirectSoundWaveData_tub_bell_wb_e4_22::
	.incbin "sound/direct_sound_samples/new/tub_bell_wb_e4_22.bin"

	.align 2
DirectSoundWaveData_tuba_a2_32::
	.incbin "sound/direct_sound_samples/new/tuba_a2_32.bin"

	.align 2
DirectSoundWaveData_tuba_c2_32::
	.incbin "sound/direct_sound_samples/new/tuba_c2_32.bin"

	.align 2
DirectSoundWaveData_tuba_f3_32::
	.incbin "sound/direct_sound_samples/new/tuba_f3_32.bin"

	.align 2
DirectSoundWaveData_tublar_bell_c5_22::
	.incbin "sound/direct_sound_samples/new/tublar_bell_c5_22.bin"

@	.align 2
@DirectSoundWaveData_tublar_bell_c5_32::
@	.incbin "sound/direct_sound_samples/new/tublar_bell_c5_32.bin"

	.align 2
DirectSoundWaveData_tublar_bell_g4_22::
	.incbin "sound/direct_sound_samples/new/tublar_bell_g4_22.bin"

@	.align 2
@DirectSoundWaveData_tublar_bell_g4_32::
@	.incbin "sound/direct_sound_samples/new/tublar_bell_g4_32.bin"

	.align 2
DirectSoundWaveData_vibraphone_c4_22::
	.incbin "sound/direct_sound_samples/new/vibraphone_c4_22.bin"

@	.align 2
@DirectSoundWaveData_vibraphone_c4_32::
@	.incbin "sound/direct_sound_samples/new/vibraphone_c4_32.bin"

	.align 2
DirectSoundWaveData_vibraphone_c5_22::
	.incbin "sound/direct_sound_samples/new/vibraphone_c5_22.bin"

@	.align 2
@DirectSoundWaveData_vibraphone_c5_32::
@	.incbin "sound/direct_sound_samples/new/vibraphone_c5_32.bin"

	.align 2
DirectSoundWaveData_vibraphone_c6_22::
	.incbin "sound/direct_sound_samples/new/vibraphone_c6_22.bin"

@	.align 2
@DirectSoundWaveData_vibraphone_c6_32::
@	.incbin "sound/direct_sound_samples/new/vibraphone_c6_32.bin"

@	.align 2
@DirectSoundWaveData_vibraphone_c_c5_32::
@	.incbin "sound/direct_sound_samples/new/vibraphone_c_c5_32.bin"

@	.align 2
@DirectSoundWaveData_vibraphone_s_c6_32::
@	.incbin "sound/direct_sound_samples/new/vibraphone_s_c6_32.bin"

	.align 2
DirectSoundWaveData_vibraphone_wb_c4_22::
	.incbin "sound/direct_sound_samples/new/vibraphone_wb_c4_22.bin"

	.align 2
DirectSoundWaveData_vibraphone_wb_c5_22::
	.incbin "sound/direct_sound_samples/new/vibraphone_wb_c5_22.bin"

@	.align 2
@DirectSoundWaveData_violin_c1_16::
@	.incbin "sound/direct_sound_samples/new/violin_c1_16.bin"

@	.align 2
@DirectSoundWaveData_violin_c3_16::
@	.incbin "sound/direct_sound_samples/new/violin_c3_16.bin"

@	.align 2
@DirectSoundWaveData_violin_c4_16::
@	.incbin "sound/direct_sound_samples/new/violin_c4_16.bin"

@	.align 2
@DirectSoundWaveData_violin_c5_16::
@	.incbin "sound/direct_sound_samples/new/violin_c5_16.bin"

	.align 2
DirectSoundWaveData_violin_solo_a5_22::
	.incbin "sound/direct_sound_samples/new/violin_solo_a5_22.bin"

@	.align 2
@DirectSoundWaveData_violin_solo_a5_32::
@	.incbin "sound/direct_sound_samples/new/violin_solo_a5_32.bin"

	.align 2
DirectSoundWaveData_violin_solo_c5_22::
	.incbin "sound/direct_sound_samples/new/violin_solo_c5_22.bin"

@	.align 2
@DirectSoundWaveData_violin_solo_c5_32::
@	.incbin "sound/direct_sound_samples/new/violin_solo_c5_32.bin"

	.align 2
DirectSoundWaveData_violin_solo_e4_22::
	.incbin "sound/direct_sound_samples/new/violin_solo_e4_22.bin"

@	.align 2
@DirectSoundWaveData_violin_solo_e4_32::
@	.incbin "sound/direct_sound_samples/new/violin_solo_e4_32.bin"

@	.align 2
@DirectSoundWaveData_vo_ga_f3_max_32::
@	.incbin "sound/direct_sound_samples/new/vo_ga_f3_max_32.bin"

@	.align 2
@DirectSoundWaveData_vo_ha2_d3_max_32::
@	.incbin "sound/direct_sound_samples/new/vo_ha2_d3_max_32.bin"

@	.align 2
@DirectSoundWaveData_vo_ha2_g4_max_32::
@	.incbin "sound/direct_sound_samples/new/vo_ha2_g4_max_32.bin"

@	.align 2
@DirectSoundWaveData_vo_ha_a3_max_44::
@	.incbin "sound/direct_sound_samples/new/vo_ha_a3_max_44.bin"

@	.align 2
@DirectSoundWaveData_vo_ha_f3_max_32::
@	.incbin "sound/direct_sound_samples/new/vo_ha_f3_max_32.bin"

@	.align 2
@DirectSoundWaveData_vo_he_c4_max_32::
@	.incbin "sound/direct_sound_samples/new/vo_he_c4_max_32.bin"

@	.align 2
@DirectSoundWaveData_vo_he_d3_max_32::
@	.incbin "sound/direct_sound_samples/new/vo_he_d3_max_32.bin"

@	.align 2
@DirectSoundWaveData_vo_he_d4_32::
@	.incbin "sound/direct_sound_samples/new/vo_he_d4_32.bin"

@	.align 2
@DirectSoundWaveData_vo_he_e3_max_32::
@	.incbin "sound/direct_sound_samples/new/vo_he_e3_max_32.bin"

@	.align 2
@DirectSoundWaveData_vo_he_g3_32::
@	.incbin "sound/direct_sound_samples/new/vo_he_g3_32.bin"

@	.align 2
@DirectSoundWaveData_vo_hi_d4_32::
@	.incbin "sound/direct_sound_samples/new/vo_hi_d4_32.bin"

@	.align 2
@DirectSoundWaveData_vo_ho2_f3_max_32::
@	.incbin "sound/direct_sound_samples/new/vo_ho2_f3_max_32.bin"

@	.align 2
@DirectSoundWaveData_vo_ho_c3_max_32::
@	.incbin "sound/direct_sound_samples/new/vo_ho_c3_max_32.bin"

@	.align 2
@DirectSoundWaveData_vo_ho_c4_max_32::
@	.incbin "sound/direct_sound_samples/new/vo_ho_c4_max_32.bin"

@	.align 2
@DirectSoundWaveData_vo_ho_f4_max_32::
@	.incbin "sound/direct_sound_samples/new/vo_ho_f4_max_32.bin"

@	.align 2
@DirectSoundWaveData_vo_ji_f3_max_32::
@	.incbin "sound/direct_sound_samples/new/vo_ji_f3_max_32.bin"

@	.align 2
@DirectSoundWaveData_vo_ji_g3_32::
@	.incbin "sound/direct_sound_samples/new/vo_ji_g3_32.bin"

@	.align 2
@DirectSoundWaveData_vo_ni_f4_max_32::
@	.incbin "sound/direct_sound_samples/new/vo_ni_f4_max_32.bin"

@	.align 2
@DirectSoundWaveData_vo_o_c3_max_32::
@	.incbin "sound/direct_sound_samples/new/vo_o_c3_max_32.bin"

@	.align 2
@DirectSoundWaveData_vo_o_f3_32::
@	.incbin "sound/direct_sound_samples/new/vo_o_f3_32.bin"

@	.align 2
@DirectSoundWaveData_vo_re_d3_max_32::
@	.incbin "sound/direct_sound_samples/new/vo_re_d3_max_32.bin"

@	.align 2
@DirectSoundWaveData_vo_so2_g3_max_32::
@	.incbin "sound/direct_sound_samples/new/vo_so2_g3_max_32.bin"

@	.align 2
@DirectSoundWaveData_vo_so_g3_max_32::
@	.incbin "sound/direct_sound_samples/new/vo_so_g3_max_32.bin"

@	.align 2
@DirectSoundWaveData_vo_ta_a3_max_32::
@	.incbin "sound/direct_sound_samples/new/vo_ta_a3_max_32.bin"

@	.align 2
@DirectSoundWaveData_vo_ya_a3_32::
@	.incbin "sound/direct_sound_samples/new/vo_ya_a3_32.bin"

@	.align 2
@DirectSoundWaveData_vo_ya_d3_max_32::
@	.incbin "sound/direct_sound_samples/new/vo_ya_d3_max_32.bin"

	.align 2
DirectSoundWaveData_vocoder_stop_22::
	.incbin "sound/direct_sound_samples/new/vocoder_stop_22.bin"

	.align 2
DirectSoundWaveData_vocoder_you_22::
	.incbin "sound/direct_sound_samples/new/vocoder_you_22.bin"

@	.align 2
@DirectSoundWaveData_voice_01_applause1_16::
@	.incbin "sound/direct_sound_samples/new/voice_01_applause1_16.bin"

@	.align 2
@DirectSoundWaveData_voice_02_applause2_16::
@	.incbin "sound/direct_sound_samples/new/voice_02_applause2_16.bin"

@	.align 2
@DirectSoundWaveData_voice_03_surprise_16::
@	.incbin "sound/direct_sound_samples/new/voice_03_surprise_16.bin"

@	.align 2
@DirectSoundWaveData_voice_04_sad_16::
@	.incbin "sound/direct_sound_samples/new/voice_04_sad_16.bin"

@	.align 2
@DirectSoundWaveData_voice_05_boo_16::
@	.incbin "sound/direct_sound_samples/new/voice_05_boo_16.bin"

@	.align 2
@DirectSoundWaveData_voice_06_crowd_16::
@	.incbin "sound/direct_sound_samples/new/voice_06_crowd_16.bin"

@	.align 2
@DirectSoundWaveData_voice_06_wai_16::
@	.incbin "sound/direct_sound_samples/new/voice_06_wai_16.bin"

@	.align 2
@DirectSoundWaveData_voice_06_wai_22::
@	.incbin "sound/direct_sound_samples/new/voice_06_wai_22.bin"

@	.align 2
@DirectSoundWaveData_voice_07_whistle_22::
@	.incbin "sound/direct_sound_samples/new/voice_07_whistle_22.bin"

@	.align 2
@DirectSoundWaveData_voice_bass01_max_32::
@	.incbin "sound/direct_sound_samples/new/voice_bass01_max_32.bin"

@	.align 2
@DirectSoundWaveData_voice_bass02_max_32::
@	.incbin "sound/direct_sound_samples/new/voice_bass02_max_32.bin"

@	.align 2
@DirectSoundWaveData_voice_hight01_max_32::
@	.incbin "sound/direct_sound_samples/new/voice_hight01_max_32.bin"

@	.align 2
@DirectSoundWaveData_voice_hight02_max_32::
@	.incbin "sound/direct_sound_samples/new/voice_hight02_max_32.bin"

@	.align 2
@DirectSoundWaveData_voice_ku_max_32::
@	.incbin "sound/direct_sound_samples/new/voice_ku_max_32.bin"

@	.align 2
@DirectSoundWaveData_voice_open_max_32::
@	.incbin "sound/direct_sound_samples/new/voice_open_max_32.bin"

@	.align 2
@DirectSoundWaveData_voice_rif01_max_32::
@	.incbin "sound/direct_sound_samples/new/voice_rif01_max_32.bin"

@	.align 2
@DirectSoundWaveData_voice_rim01_max_32::
@	.incbin "sound/direct_sound_samples/new/voice_rim01_max_32.bin"

@	.align 2
@DirectSoundWaveData_voice_tu_32::
@	.incbin "sound/direct_sound_samples/new/voice_tu_32.bin"

	.align 2
DirectSoundWaveData_w_noise_32::
	.incbin "sound/direct_sound_samples/new/w_noise_32.bin"

	.align 2
DirectSoundWaveData_wadaiko_g::
	.incbin "sound/direct_sound_samples/new/wadaiko_g.bin"

	.align 2
DirectSoundWaveData_wadaiko_g_lop::
	.incbin "sound/direct_sound_samples/new/wadaiko_g_lop.bin"

@	.align 2
@DirectSoundWaveData_waw_gt_c3_32::
@	.incbin "sound/direct_sound_samples/new/waw_gt_c3_32.bin"

@	.align 2
@DirectSoundWaveData_wb_w009_elec_30::
@	.incbin "sound/direct_sound_samples/new/wb_w009_elec_30.bin"

@	.align 2
@DirectSoundWaveData_wb_w157_earthquake02_28::
@	.incbin "sound/direct_sound_samples/new/wb_w157_earthquake02_28.bin"

@	.align 2
@DirectSoundWaveData_wb_w348_blade::
@	.incbin "sound/direct_sound_samples/new/wb_w348_blade.bin"

@	.align 2
@DirectSoundWaveData_wh_16_loop::
@	.incbin "sound/direct_sound_samples/new/wh_16_loop.bin"

@	.align 2
@DirectSoundWaveData_whistle_22::
@	.incbin "sound/direct_sound_samples/new/whistle_22.bin"

@	.align 2
@DirectSoundWaveData_whistle_32::
@	.incbin "sound/direct_sound_samples/new/whistle_32.bin"

	.align 2
DirectSoundWaveData_whistle_c5_16::
	.incbin "sound/direct_sound_samples/new/whistle_c5_16.bin"

	.align 2
DirectSoundWaveData_whistle_long_32::
	.incbin "sound/direct_sound_samples/new/whistle_long_32.bin"

@	.align 2
@DirectSoundWaveData_whitsle_h_32::
@	.incbin "sound/direct_sound_samples/new/whitsle_h_32.bin"

@	.align 2
@DirectSoundWaveData_whitsle_l_32::
@	.incbin "sound/direct_sound_samples/new/whitsle_l_32.bin"

@	.align 2
@DirectSoundWaveData_wind_mono_22::
@	.incbin "sound/direct_sound_samples/new/wind_mono_22.bin"

@	.align 2
@DirectSoundWaveData_windchime_32::
@	.incbin "sound/direct_sound_samples/new/windchime_32.bin"

	.align 2
DirectSoundWaveData_woodbass_d3_16::
	.incbin "sound/direct_sound_samples/new/woodbass_d3_16.bin"

@	.align 2
@DirectSoundWaveData_xylophone2_a4_32::
@	.incbin "sound/direct_sound_samples/new/xylophone2_a4_32.bin"

@	.align 2
@DirectSoundWaveData_xylophone2_c4_32::
@	.incbin "sound/direct_sound_samples/new/xylophone2_c4_32.bin"

@	.align 2
@DirectSoundWaveData_xylophone2_c6_32::
@	.incbin "sound/direct_sound_samples/new/xylophone2_c6_32.bin"

@	.align 2
@DirectSoundWaveData_xylophone2_f5_32::
@	.incbin "sound/direct_sound_samples/new/xylophone2_f5_32.bin"

	.align 2
DirectSoundWaveData_xylophone_a4_22::
	.incbin "sound/direct_sound_samples/new/xylophone_a4_22.bin"

	.align 2
DirectSoundWaveData_xylophone_c4_22::
	.incbin "sound/direct_sound_samples/new/xylophone_c4_22.bin"

@	.align 2
@DirectSoundWaveData_xylophone_c6_16::
@	.incbin "sound/direct_sound_samples/new/xylophone_c6_16.bin"

	.align 2
DirectSoundWaveData_xylophone_f5_22::
	.incbin "sound/direct_sound_samples/new/xylophone_f5_22.bin"

	.align 2
DirectSoundWaveData_xylophone_wb_a4_22::
	.incbin "sound/direct_sound_samples/new/xylophone_wb_a4_22.bin"

@	.align 2
@DirectSoundWaveData_xylophone_wb_a4_32::
@	.incbin "sound/direct_sound_samples/new/xylophone_wb_a4_32.bin"

	.align 2
DirectSoundWaveData_xylophone_wb_c4_22::
	.incbin "sound/direct_sound_samples/new/xylophone_wb_c4_22.bin"

@	.align 2
@DirectSoundWaveData_xylophone_wb_c4_32::
@	.incbin "sound/direct_sound_samples/new/xylophone_wb_c4_32.bin"

@	.align 2
@DirectSoundWaveData_xylophone_wb_c6_32::
@	.incbin "sound/direct_sound_samples/new/xylophone_wb_c6_32.bin"

	.align 2
DirectSoundWaveData_xylophone_wb_f5_22::
	.incbin "sound/direct_sound_samples/new/xylophone_wb_f5_22.bin"

@	.align 2
@DirectSoundWaveData_xylophone_wb_f5_32::
@	.incbin "sound/direct_sound_samples/new/xylophone_wb_f5_32.bin"

	.align 2
DirectSoundWaveData_swan_new_synth_kick_22::
	.incbin "sound/direct_sound_samples/new/swan_new_synth_kick_22.bin"
