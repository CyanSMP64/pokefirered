gNumMusicPlayers = 5;
gMaxLines = 0;

MEMORY
{
    EWRAM (rwx) : ORIGIN = 0x2000000, LENGTH = 256K
    IWRAM (rwx) : ORIGIN = 0x3000000, LENGTH = 32K
    ROM    (rx) : ORIGIN = 0x8000000, LENGTH = 32M
}

SECTIONS {

    ewram 0x2000000 (NOLOAD) :
    ALIGN(4)
    {
        gHeap = .;

        . = 0x1C000;

        INCLUDE "sym_ewram.ld"
        src/*.o(ewram_data);

        *libc.a:impure.o(.data);
        *libc.a:locale.o(.data);
        *libc.a:mallocr.o(.data);
    } > EWRAM

    iwram 0x3000000 (NOLOAD) :
    ALIGN(4)
    {
        /* .bss starts at 0x3000000 */
        INCLUDE "sym_bss.ld"
        src/*.o(.bss);
        data/*.o(.bss);

        /* .bss.code starts at 0x30028E0 */
        src/m4a.o(.bss.code);

        /* COMMON starts at 0x30030E0 */
        INCLUDE "sym_common.ld"
        src/*.o(COMMON);

        *libc.a:sbrkr.o(COMMON);
        end = .;
    } > IWRAM

    /* BEGIN ROM DATA */
    . = 0x8000000;

    .text :
    ALIGN(4)
    {
        src/rom_header.o(.text);
    } > ROM =0
    .text0x08000100 0x08000100 :
    ALIGN(4)
    {
        src/rom_header_gf.o(.text*);
    } > ROM =0
    .text0x08000204 0x08000204 :
    ALIGN(4)
    {
        src/crt0.o(.text);
    } > ROM =0
    .text0x080003a4 0x080003a8 : /*moved from 0x080003a4*/
    ALIGN(4)
    {
        src/main.o(.text);
    } > ROM =0
    .text0x0800097c 0x0800097c :
    ALIGN(4)
    {
        src/gpu_regs.o(.text);
    } > ROM =0
    .text0x08000c10 0x08000c10 :
    ALIGN(4)
    {
        src/dma3_manager.o(.text);
    } > ROM =0
    .text0x0800103c 0x0800103c :
    ALIGN(4)
    {
        src/bg.o(.text);
    } > ROM =0
    .text0x08002940 0x08002940 :
    ALIGN(4)
    {
        src/malloc.o(.text);
    } > ROM =0
    .text0x08002c30 0x08002c30 :
    ALIGN(4)
    {
        src/text_printer.o(.text);
    } > ROM =0
    .text0x08003b34 0x08003b34 :
    ALIGN(4)
    {
        src/window.o(.text);
    } > ROM =0
    .text0x08004a74 0x08004a74 :
    ALIGN(4)
    {
        src/blit.o(.text);
    } > ROM =0
    .text0x08005048 0x08005048 :
    ALIGN(4)
    {
        src/window_8bpp.o(.text);
    } > ROM =0
    .text0x08005390 0x08005390 :
    ALIGN(4)
    {
        src/text.o(.text);
    } > ROM =0
    .text0x08006b24 0x08006b24 :
    ALIGN(4)
    {
        src/sprite.o(.text);
    } > ROM =0
    .text0x08008d08 0x08008d08 :
    ALIGN(4)
    {
        src/string_util.o(.text);
    } > ROM =0
    .text0x08009494 0x08009494 :
    ALIGN(4)
    {
        src/link.o(.text);
    } > ROM =0
    .text0x0800bc34 0x0800bc34 :
    ALIGN(4)
    {
        src/multiboot.o(.text);
    } > ROM =0
    .text0x0800c2e8 0x0800c2e8 :
    ALIGN(4)
    {
        src/main_menu.o(.text);
    } > ROM =0
    .text0x0800d244 0x0800d244 :
    ALIGN(4)
    {
        src/battle_controllers.o(.text);
    } > ROM =0
    .text0x0800ebc8 0x0800ebc8 :
    ALIGN(4)
    {
        src/decompress.o(.text);
    } > ROM =0
    .text0x0800f1fc /*0x0800f1fc*/ :
    ALIGN(4)
    {
    } > ROM =0
    .text0x0800fdb0 0x0800fc00 : /*moved from 0x0800fdb0*/
    ALIGN(4)
    {
        src/battle_main.o(.text);
    } > ROM =0
    .text0x08016e38 0x08016b38 :
    ALIGN(4)
    {
        src/battle_util.o(.text);
    } > ROM =0
    .text0x0801d774 0x0801d774 :
    ALIGN(4)
    {
        src/battle_script_commands.o(.text);
    } > ROM =0
    .text0x0802e050 0x0802e050 :
    ALIGN(4)
    {
        src/battle_util2.o(.text);
    } > ROM =0
    .text0x0802e324 /*0x0802e324*/ :
    ALIGN(4)
    {
        src/battle_gfx_sfx_util.o(.text); /*moved from 0x08033dcc*/
        src/play_time.o(.text); /*moved from 0x08054828*/
        src/fieldmap.o(.text); /*moved from 0x080589d8*/
        src/tileset_anims.o(.text); /*moved from 0x0806feec*/
        src/battle_anim_status_effects.o(.text); /*moved from 0x0807818c*/
        src/money.o(.text); /*moved from 0x0809fd6c*/
        src/battle_records.o(.text); /*moved from 0x080cd23c*/
        src/fldeff_sweetscent.o(.text); /*moved from 0x080de0c8*/
        src/battle_tower.o(.text); /*moved from 0x080e5984*/
        src/save_failed_screen.o(.text); /*moved from 0x080f516c*/
        src/menu2.o(.text); /*moved from 0x0812e594*/
        src/trig.o(.text); /*moved from 0x08044e44*/
        src/random.o(.text); /*moved from 0x08044edc*/
        src/util.o(.text); /*moved to 0x08044f0c*/
    } > ROM =0
    .text0x08033dcc /*0x08033dcc*/ :
    ALIGN(4)
    {
    } > ROM =0
    .text0x08035a8c 0x08035a8c :
    ALIGN(4)
    {
        src/battle_controller_opponent.o(.text);
    } > ROM =0
    .text0x0803919c 0x0803919c :
    ALIGN(4)
    {
        src/battle_ai_switch_items.o(.text);
    } > ROM =0
    .text0x0803a678 0x0803a678 :
    ALIGN(4)
    {
        src/battle_controller_link_opponent.o(.text);
    } > ROM =0
    .text0x0803d990 0x0803d990 :
    ALIGN(4)
    {
        src/pokemon.o(.text);
    } > ROM =0
    .text0x08044e44 /*0x08044e44*/ :
    ALIGN(4)
    {
    } > ROM =0
    .text0x08044edc /*0x08044edc*/ :
    ALIGN(4)
    {
    } > ROM =0
    .text0x08044f0c /*0x08044f0c*/ :
    ALIGN(4)
    {
    } > ROM =0
    .text0x08045288 0x08045288 :
    ALIGN(4)
    {
        src/blend_palette.o(.text);
    } > ROM =0
    .text0x080453d4 0x080453d4 :
    ALIGN(4)
    {
        src/daycare.o(.text);
    } > ROM =0
    .text0x08047b20 0x08047b20 :
    ALIGN(4)
    {
        src/battle_interface.o(.text);
    } > ROM =0
    .text0x0804a780 0x0804a780 :
    ALIGN(4)
    {
        src/battle_anim_smokescreen.o(.text);
    } > ROM =0
    .text0x0804a94c 0x0804a94c :
    ALIGN(4)
    {
        src/pokeball.o(.text);
    } > ROM =0
    .text0x0804bff8 0x0804bff8 :
    ALIGN(4)
    {
        src/load_save.o(.text);
    } > ROM =0
    .text0x0804c614 0x0804c614 :
    ALIGN(4)
    {
        src/trade.o(.text);
    } > ROM =0
    .text0x0804fd38 0x0804fd38 :
    ALIGN(4)
    {
        src/trade_scene.o(.text);
    } > ROM =0
    .text0x08054828 /*0x08054828*/ :
    ALIGN(4)
    {
    } > ROM =0
    .text0x08054910 0x08054910 :
    ALIGN(4)
    {
        src/new_game.o(.text);
    } > ROM =0
    .text0x08054bdc 0x08054bdc :
    ALIGN(4)
    {
        src/overworld.o(.text);
    } > ROM =0
    .text0x080589d8 /*0x080589d8*/ :
    ALIGN(4)
    {
        src/seagallop.o(.text); /*moved from 0x08146ef0*/
    } > ROM =0
    .text0x08059b04 0x08059b04 :
    ALIGN(4)
    {
        src/metatile_behavior.o(.text);
    } > ROM =0
    .text0x0805a5bc 0x0805a5bc :
    ALIGN(4)
    {
        src/field_camera.o(.text);
    } > ROM =0
    .text0x0805af28 0x0805af28 :
    ALIGN(4)
    {
        src/field_door.o(.text);
    } > ROM =0
    .text0x0805b3cc 0x0805b3cc :
    ALIGN(4)
    {
        src/field_player_avatar.o(.text);
    } > ROM =0
    .text0x0805de40 0x0805de40 :
    ALIGN(4)
    {
        src/event_object_movement.o(.text);
    } > ROM =0
    .text0x0806935c 0x0806935c :
    ALIGN(4)
    {
        src/field_message_box.o(.text);
    } > ROM =0
    .text0x08069568 0x08069568 :
    ALIGN(4)
    {
        src/event_object_lock.o(.text);
    } > ROM =0
    .text0x0806979c 0x0806979c :
    ALIGN(4)
    {
        src/text_window_graphics.o(.text);
    } > ROM =0
    .text0x080697c0 0x080697c0 :
    ALIGN(4)
    {
        src/script.o(.text);
    } > ROM =0
    .text0x08069ee4 0x08069ee4 :
    ALIGN(4)
    {
        src/scrcmd.o(.text);
    } > ROM =0
    .text0x0806c89c /*0x0806c89c*/ :
    ALIGN(4)
    {
    } > ROM =0
    .text0x0806e0e4 0x0806e0e4 :
    ALIGN(4)
    {
        src/event_data.o(.text);
    } > ROM =0
    .text0x0806e7bc 0x0806e7bc :
    ALIGN(4)
    {
        src/coord_event_weather.o(.text);
    } > ROM =0
    .text0x0806e824 0x0806e824 :
    ALIGN(4)
    {
        src/field_tasks.o(.text);
    } > ROM =0
    .text0x0806ed4c 0x0806ed4c :
    ALIGN(4)
    {
        src/start_menu.o(.text);
    } > ROM =0
    .text0x0806feec /*0x0806feec*/ :
    ALIGN(4)
    {
    } > ROM =0
    .text0x080703bc 0x080703bc :
    ALIGN(4)
    {
        src/palette.o(.text);
    } > ROM =0
    .text0x0807194c /*0x0807194c*/ :
    ALIGN(4)
    {
    } > ROM =0
    .text0x080724d4 0x080724d4 :
    ALIGN(4)
    {
        src/battle_anim.o(.text);
    } > ROM =0
    .text0x08074494 0x08074494 :
    ALIGN(4)
    {
        src/battle_anim_mons.o(.text);
    } > ROM =0
    .text0x080773d0 0x080773d0 :
    ALIGN(4)
    {
        src/task.o(.text);
    } > ROM =0
    .text0x08077774 0x08077774 :
    ALIGN(4)
    {
        src/reshow_battle_screen.o(.text);
    } > ROM =0
    .text0x0807818c /*0x0807818c*/ :
    ALIGN(4)
    {
    } > ROM =0
    .text0x08078928 0x08078928 :
    ALIGN(4)
    {
        src/title_screen.o(.text);
    } > ROM =0
    .text0x08079b90 0x08079b90 :
    ALIGN(4)
    {
        src/reset_save_heap.o(.text);
    } > ROM =0
    .text0x08079c1c 0x08079c1c :
    ALIGN(4)
    {
        src/field_weather.o(.text);
    } > ROM =0
    .text0x0807b114 0x0807b114 :
    ALIGN(4)
    {
        src/field_weather_util.o(.text);
    } > ROM =0
    .text0x0807b2f0 0x0807b2f0 :
    ALIGN(4)
    {
        src/field_weather_effects.o(.text);
    } > ROM =0
    .text0x0807db28 0x0807db28 :
    ALIGN(4)
    {
        src/field_fadetransition.o(.text);
    } > ROM =0
    .text0x0807ee14 0x0807ee14 :
    ALIGN(4)
    {
        src/field_screen_effect.o(.text);
    } > ROM =0
    .text0x0807f634 0x0807f634 :
    ALIGN(4)
    {
        src/battle_setup.o(.text);
    } > ROM =0
    .text0x0808075c /*0x0808075c*/ :
    ALIGN(4)
    {
    } > ROM =0
    .text0x08081b44 0x08081b44 :
    ALIGN(4)
    {
        src/trainer_see.o(.text);
    } > ROM =0
    .text0x08082754 0x08082754 :
    ALIGN(4)
    {
        src/wild_encounter.o(.text);
    } > ROM =0
    .text0x08083458 0x08083458 :
    ALIGN(4)
    {
        src/field_effect.o(.text);
    } > ROM =0
    .text0x08087e78 0x08087e78 :
    ALIGN(4)
    {
        src/scanline_effect.o(.text);
    } > ROM =0
    .text0x08088370 0x08088370 :
    ALIGN(4)
    {
        src/option_menu.o(.text);
    } > ROM =0
    .text0x08088e34 0x08088e34 :
    ALIGN(4)
    {
        src/pokedex.o(.text);
    } > ROM =0
    .text0x08089004 0x08089004 :
    ALIGN(4)
    {
        src/trainer_card.o(.text);
    } > ROM =0
    .text0x0808b9d4 0x0808b9d4 :
    ALIGN(4)
    {
        src/pokemon_storage_system.o(.text);
    } > ROM =0
    .text0x0808bec8 0x0808bec8 :
    ALIGN(4)
    {
        src/pokemon_storage_system_menu.o(.text);
    } > ROM =0
    .text0x0808cdac 0x0808cdac :
    ALIGN(4)
    {
        src/pokemon_storage_system_tasks.o(.text);
    } > ROM =0
    .text0x0808ffc0 0x0808ffc0 :
    ALIGN(4)
    {
        src/pokemon_storage_system_graphics.o(.text);
    } > ROM =0
    .text0x080922d4 0x080922d4 :
    ALIGN(4)
    {
        src/pokemon_storage_system_data.o(.text);
    } > ROM =0
    .text0x08095064 0x08095064 :
    ALIGN(4)
    {
        src/pokemon_storage_system_misc.o(.text);
    } > ROM =0
    .text0x08096e2c 0x08096e2c :
    ALIGN(4)
    {
        src/pokemon_icon.o(.text);
    } > ROM =0
    .text0x08097448 0x08097448 :
    ALIGN(4)
    {
        src/script_movement.o(.text);
    } > ROM =0
    .text0x08097888 0x08097888 :
    ALIGN(4)
    {
        src/fldeff_cut.o(.text);
    } > ROM =0
    .text0x08097c98 0x08097c98 :
    ALIGN(4)
    {
        src/mail_data.o(.text);
    } > ROM =0
    .text0x08098124 0x08098124 :
    ALIGN(4)
    {
        src/map_name_popup.o(.text);
    } > ROM =0
    .text0x080984ec 0x080984ec :
    ALIGN(4)
    {
        src/item_menu_icons.o(.text);
    } > ROM =0
    .text0x08098a0c 0x08098a0c :
    ALIGN(4)
    {
        src/battle_anim_mon_movement.o(.text);
    } > ROM =0
    .text0x08099db4 0x08099db4 :
    ALIGN(4)
    {
        src/item.o(.text);
    } > ROM =0
    .text0x0809aac4 0x0809aac4 :
    ALIGN(4)
    {
        src/shop.o(.text);
    } > ROM =0
    .text0x0809c1ec 0x0809c1ec :
    ALIGN(4)
    {
        src/special_field_anim.o(.text);
    } > ROM =0
    .text0x0809c72c 0x0809c72c :
    ALIGN(4)
    {
        src/berry.o(.text);
    } > ROM =0
    .text0x0809c968 0x0809c968 :
    ALIGN(4)
    {
        src/script_menu.o(.text);
    } > ROM =0
    .text0x0809d968 0x0809d968 :
    ALIGN(4)
    {
        src/naming_screen.o(.text);
    } > ROM =0
    .text0x0809fd6c /*0x0809fd6c*/ :
    ALIGN(4)
    {
    } > ROM =0
    .text0x080a006c 0x080a006c :
    ALIGN(4)
    {
        src/script_pokemon_util.o(.text);
    } > ROM =0
    .text0x080a0474 0x080a0474 :
    ALIGN(4)
    {
        src/field_poison.o(.text);
    } > ROM =0
    .text0x080a06b0 0x080a06b0 :
    ALIGN(4)
    {
        src/pokemon_size_record.o(.text);
    } > ROM =0
    .text0x080a0a5c 0x080a0a5c :
    ALIGN(4)
    {
        src/pc_screen_effect.o(.text);
    } > ROM =0
    .text0x080a0dec 0x080a0dec :
    ALIGN(4)
    {
        src/fldeff_poison.o(.text);
    } > ROM =0
    .text0x080a0e88 0x080a0e88 :
    ALIGN(4)
    {
        src/fldeff_berrytree.o(.text);
    } > ROM =0
    .text0x080a0e8c 0x080a0e8c :
    ALIGN(4)
    {
        src/field_special_scene.o(.text);
    } > ROM =0
    .text0x080a0ea4 0x080a0ea4 :
    ALIGN(4)
    {
        src/safari_zone.o(.text);
    } > ROM =0
    .text0x080a0fd0 0x080a0fd0 :
    ALIGN(4)
    {
        src/item_use.o(.text);
    } > ROM =0
    .text0x080a22fc 0x080a22fc :
    ALIGN(4)
    {
        src/battle_anim_effects_1.o(.text);
    } > ROM =0
    .text0x080a6e5c 0x080a6e5c :
    ALIGN(4)
    {
        src/battle_anim_effects_2.o(.text);
    } > ROM =0
    .text0x080aabd4 0x080aabd4 :
    ALIGN(4)
    {
        src/battle_anim_water.o(.text);
    } > ROM =0
    .text0x080ac920 0x080ac920 :
    ALIGN(4)
    {
        src/battle_anim_fire.o(.text);
    } > ROM =0
    .text0x080adc00 0x080adc00 :
    ALIGN(4)
    {
        src/battle_anim_electric.o(.text);
    } > ROM =0
    .text0x080af11c 0x080af11c :
    ALIGN(4)
    {
        src/battle_anim_ice.o(.text);
    } > ROM =0
    .text0x080b08b4 0x080b08b4 :
    ALIGN(4)
    {
        src/battle_anim_fight.o(.text);
    } > ROM =0
    .text0x080b1634 0x080b1634 :
    ALIGN(4)
    {
        src/battle_anim_poison.o(.text);
    } > ROM =0
    .text0x080b18f8 0x080b18f8 :
    ALIGN(4)
    {
        src/battle_anim_flying.o(.text);
    } > ROM =0
    .text0x080b2ee0 0x080b2ee0 :
    ALIGN(4)
    {
        src/battle_anim_psychic.o(.text);
    } > ROM =0
    .text0x080b3fc0 0x080b3fc0 :
    ALIGN(4)
    {
        src/battle_anim_bug.o(.text);
    } > ROM =0
    .text0x080b4648 0x080b4648 :
    ALIGN(4)
    {
        src/battle_anim_rock.o(.text);
    } > ROM =0
    .text0x080b527c 0x080b527c :
    ALIGN(4)
    {
        src/battle_anim_ghost.o(.text);
    } > ROM =0
    .text0x080b7270 0x080b7270 :
    ALIGN(4)
    {
        src/battle_anim_dragon.o(.text);
    } > ROM =0
    .text0x080b78f4 0x080b78f4 :
    ALIGN(4)
    {
        src/battle_anim_dark.o(.text);
    } > ROM =0
    .text0x080b8b80 0x080b8b80 :
    ALIGN(4)
    {
        src/battle_anim_ground.o(.text);
    } > ROM =0
    .text0x080b9918 0x080b9918 :
    ALIGN(4)
    {
        src/battle_anim_normal.o(.text);
    } > ROM =0
    .text0x080ba80c 0x080ba80c :
    ALIGN(4)
    {
        src/battle_anim_utility_funcs.o(.text);
    } > ROM =0
    .text0x080bc20c 0x080bc20c :
    ALIGN(4)
    {
        src/battle_intro.o(.text);
    } > ROM =0
    .text0x080bd0b0 0x080bd0b0 :
    ALIGN(4)
    {
        src/bike.o(.text);
    } > ROM =0
    .text0x080bd72c 0x080bd72c :
    ALIGN(4)
    {
        src/easy_chat.o(.text);
    } > ROM =0
    .text0x080be480 0x080be480 :
    ALIGN(4)
    {
        src/mon_markings.o(.text);
    } > ROM =0
    .text0x080bec00 0x080bec00 :
    ALIGN(4)
    {
        src/mail.o(.text);
    } > ROM =0
    .text0x080bf488 0x080bf488 :
    ALIGN(4)
    {
        src/menu_helpers.o(.text);
    } > ROM =0
    .text0x080bf910 0x080bf910 :
    ALIGN(4)
    {
        src/party_menu_specials.o(.text);
    } > ROM =0
    .text0x080bfc64 0x080bfc64 :
    ALIGN(4)
    {
        src/heal_location.o(.text);
    } > ROM =0
    .text0x080bfe2c 0x080bfe2c :
    ALIGN(4)
    {
        src/region_map.o(.text);
    } > ROM =0
    .text0x080c52e4 0x080c52e4 :
    ALIGN(4)
    {
        src/image_processing_effects.o(.text);
    } > ROM =0
    .text0x080c6d20 0x080c6d20 :
    ALIGN(4)
    {
        src/battle_ai_script_commands.o(.text);
    } > ROM =0
    .text0x080c97bc 0x080c97bc :
    ALIGN(4)
    {
        src/fldeff_rocksmash.o(.text);
    } > ROM =0
    .text0x080c9a8c 0x080c9a8c :
    ALIGN(4)
    {
        src/fldeff_dig.o(.text);
    } > ROM =0
    .text0x080c9b40 0x080c9b40 :
    ALIGN(4)
    {
        src/fldeff_flash.o(.text);
    } > ROM =0
    .text0x080ca2f8 0x080ca2f8 :
    ALIGN(4)
    {
        src/post_battle_event_funcs.o(.text);
    } > ROM =0
    .text0x080ca3ec 0x080ca3ec :
    ALIGN(4)
    {
        src/prof_pc.o(.text);
    } > ROM =0
    .text0x080ca550 0x080ca550 :
    ALIGN(4)
    {
        src/hof_pc.o(.text);
    } > ROM =0
    .text0x080ca62c 0x080ca62c :
    ALIGN(4)
    {
        src/field_specials.o(.text);
    } > ROM =0
    .text0x080cd23c /*0x080cd23c*/ :
    ALIGN(4)
    {
    } > ROM =0
    .text0x080cdd2c 0x080cdd2c :
    ALIGN(4)
    {
        src/evolution_scene.o(.text);
    } > ROM =0
    .text0x080d0568 0x080d0568 :
    ALIGN(4)
    {
        src/coins.o(.text);
    } > ROM =0
    .text0x080d0800 0x080d0800 :
    ALIGN(4)
    {
        src/fldeff_strength.o(.text);
    } > ROM =0
    .text0x080d08cc 0x080d08cc :
    ALIGN(4)
    {
        src/battle_transition.o(.text);
    } > ROM =0
    .text0x080d4214 0x080d4214 :
    ALIGN(4)
    {
        src/battle_controller_link_partner.o(.text);
    } > ROM =0
    .text0x080d7288 0x080d7288 :
    ALIGN(4)
    {
        src/battle_message.o(.text);
    } > ROM =0
    .text0x080d8ab4 0x080d8ab4 :
    ALIGN(4)
    {
        src/math_util.o(.text);
    } > ROM =0
    .text0x080d8bf8 0x080d8bf8 :
    ALIGN(4)
    {
        src/palette_util.o(.text);
    } > ROM =0
    .text0x080d9628 0x080d9628 :
    ALIGN(4)
    {
        src/cable_car_util.o(.text);
    } > ROM =0
    .text0x080d9740 0x080d9740 :
    ALIGN(4)
    {
        src/save.o(.text);
    } > ROM =0
    .text0x080da814 0x080da814 :
    ALIGN(4)
    {
        src/mystery_event_script.o(.text);
    } > ROM =0
    .text0x080dad90 0x080dad90 :
    ALIGN(4)
    {
        src/field_effect_helpers.o(.text);
    } > ROM =0
    .text0x080dce24 0x080dce24 :
    ALIGN(4)
    {
        src/battle_anim_sound_tasks.o(.text);
    } > ROM =0
    .text0x080dd548 0x080dd548 :
    ALIGN(4)
    {
        src/battle_controller_safari.o(.text);
    } > ROM =0
    .text0x080de0c8 /*0x080de0c8*/ :
    ALIGN(4)
    {
    } > ROM =0
    .text0x080de2d4 0x080de2d4 :
    ALIGN(4)
    {
        src/battle_anim_effects_3.o(.text);
    } > ROM =0
    .text0x080e4634 0x080e4634 :
    ALIGN(4)
    {
        src/learn_move.o(.text);
    } > ROM =0
    .text0x080e5698 0x080e5698 :
    ALIGN(4)
    {
        src/fldeff_softboiled.o(.text);
    } > ROM =0
    .text0x080e5984 /*0x080e5984*/ :
    ALIGN(4)
    {
        src/union_room_player_avatar.o(.text); /*moved from 0x0811b57c*/
        src/battle_bg.o(.text); /*moved from 0x0800f1fc*/
    } > ROM =0
    .text0x080e75c0 0x080e756c : /*moved from 0x080e75c0*/
    ALIGN(4)
    {
        src/battle_controller_oak_old_man.o(.text);
    } > ROM =0
    .text0x080eb66c 0x080eb66c :
    ALIGN(4)
    {
        src/player_pc.o(.text);
    } > ROM =0
    .text0x080ec5b8 0x080ec5b8 :
    ALIGN(4)
    {
        src/intro.o(.text);
    } > ROM =0
    .text0x080eec84 0x080eec84 :
    ALIGN(4)
    {
        src/battle_anim_special.o(.text);
    } > ROM =0
    .text0x080f1e24 0x080f1e24 :
    ALIGN(4)
    {
        src/hall_of_fame.o(.text);
    } > ROM =0
    .text0x080f3a2c 0x080f3a2c :
    ALIGN(4)
    {
        src/credits.o(.text);
    } > ROM =0
    .text0x080f4c74 0x080f4c74 :
    ALIGN(4)
    {
        src/diploma.o(.text);
    } > ROM =0
    .text0x080f516c /*0x080f516c*/ :
    ALIGN(4)
    {
    } > ROM =0
    .text0x080f55ec 0x080f55ec :
    ALIGN(4)
    {
        src/clear_save_data_screen.o(.text);
    } > ROM =0
    .text0x080f59c4 0x080f59c4 :
    ALIGN(4)
    {
        src/evolution_graphics.o(.text);
    } > ROM =0
    .text0x080f6768 0x080f6768 :
    ALIGN(4)
    {
        src/fldeff_teleport.o(.text);
    } > ROM =0
    .text0x080f6808 0x080f6808 :
    ALIGN(4)
    {
        src/new_menu_helpers.o(.text);
    } > ROM =0
    .text0x080f7b50 0x080f7b50 :
    ALIGN(4)
    {
        src/tilemap_util.o(.text);
    } > ROM =0
    .text0x080f8044 0x080f8044 :
    ALIGN(4)
    {
        src/save_menu_util.o(.text);
    } > ROM =0
    .text0x080f815c 0x080f815c :
    ALIGN(4)
    {
        src/map_preview_screen.o(.text);
    } > ROM =0
    .text0x080f8668 0x080f8668 :
    ALIGN(4)
    {
        src/link_rfu_2.o(.text);
    } > ROM =0
    .text0x080fc4f0 0x080fc4f0 :
    ALIGN(4)
    {
        src/link_rfu_3.o(.text);
    } > ROM =0
    .text0x080fd41c 0x080fd41c :
    ALIGN(4)
    {
        src/AgbRfu_LinkManager.o(.text);
    } > ROM =0
    .text0x080fec24 0x080fec24 :
    ALIGN(4)
    {
        src/easy_chat_2.o(.text);
    } > ROM =0
    .text0x080ffff8 0x080ffff8 :
    ALIGN(4)
    {
        src/easy_chat_3.o(.text);
    } > ROM =0
    .text0x08102538 0x08102538 :
    ALIGN(4)
    {
        src/pokedex_screen.o(.text);
    } > ROM =0
    .text0x08106f44 0x08106f44 :
    ALIGN(4)
    {
        src/list_menu.o(.text);
    } > ROM =0
    .text0x08107e2c 0x08107e2c :
    ALIGN(4)
    {
        src/item_menu.o(.text);
    } > ROM =0
    .text0x0810b76c 0x0810b76c :
    ALIGN(4)
    {
        src/save_location.o(.text);
    } > ROM =0
    .text0x0810b8d0 0x0810b8d0 :
    ALIGN(4)
    {
        src/bag.o(.text);
    } > ROM =0
    .text0x0810bc00 0x0810bc00 :
    ALIGN(4)
    {
        src/trainer_pokemon_sprites.o(.text);
    } > ROM =0
    .text0x0810c41c 0x0810c41c :
    ALIGN(4)
    {
        src/vs_seeker.o(.text);
    } > ROM =0
    .text0x0810d46c 0x0810d46c :
    ALIGN(4)
    {
        src/item_pc.o(.text);
    } > ROM =0
    .text0x0810ebe4 0x0810ebe4 :
    ALIGN(4)
    {
        src/mailbox_pc.o(.text);
    } > ROM =0
    .text0x0810ee3c 0x0810ee3c :
    ALIGN(4)
    {
        src/menu.o(.text);
    } > ROM =0
    .text0x081108b8 0x081108b8 :
    ALIGN(4)
    {
        src/quest_log.o(.text);
    } > ROM =0
    .text0x08112f20 0x08112f20 :
    ALIGN(4)
    {
        src/help_message.o(.text);
    } > ROM =0
    .text0x081130bc 0x081130bc :
    ALIGN(4)
    {
        src/trainer_fan_club.o(.text);
    } > ROM =0
    .text0x081135c8 0x081135c8 :
    ALIGN(4)
    {
        src/quest_log_events.o(.text);
    } > ROM =0
    .text0x081158e4 0x081158e4 :
    ALIGN(4)
    {
        src/union_room.o(.text);
    } > ROM =0
    .text0x0811b57c /*0x0811b57c*/ :
    ALIGN(4)
    {
    } > ROM =0
    .text0x0811c0c4 0x0811c0c4 :
    ALIGN(4)
    {
        src/union_room_battle.o(.text);
    } > ROM =0
    .text0x0811c5b8 0x0811c5b8 :
    ALIGN(4)
    {
        src/pokemon_special_anim.o(.text);
    } > ROM =0
    .text0x0811d1fc 0x0811d1fc :
    ALIGN(4)
    {
        src/pokemon_special_anim_scene.o(.text);
    } > ROM =0
    .text0x0811eabc 0x0811eabc :
    ALIGN(4)
    {
        src/party_menu.o(.text);
    } > ROM =0
    .text0x08128498 0x08128498 :
    ALIGN(4)
    {
        src/union_room_chat.o(.text);
    } > ROM =0
    .text0x08129b8c 0x08129b8c :
    ALIGN(4)
    {
        src/union_room_chat_display.o(.text);
    } > ROM =0
    .text0x0812aee8 0x0812aee8 :
    ALIGN(4)
    {
        src/union_room_chat_objects.o(.text);
    } > ROM =0
    .text0x0812b258 0x0812b258 :
    ALIGN(4)
    {
        src/help_system.o(.text);
    } > ROM =0
    .text0x0812c054 0x0812c054 :
    ALIGN(4)
    {
        src/quest_log_battle.o(.text);
    } > ROM =0
    .text0x0812c3f8 0x0812c3f8 :
    ALIGN(4)
    {
        src/fame_checker.o(.text);
    } > ROM =0
    .text0x0812e594 /*0x0812e594*/ :
    ALIGN(4)
    {
    } > ROM =0
    .text0x0812eb74 0x0812eb74 :
    ALIGN(4)
    {
        src/oak_speech.o(.text);
    } > ROM =0
    .text0x08131870 0x08131870 :
    ALIGN(4)
    {
        src/tm_case.o(.text);
    } > ROM =0
    .text0x0813397c 0x0813397c :
    ALIGN(4)
    {
        src/menu_indicators.o(.text);
    } > ROM =0
    .text0x08134278 0x08134278 :
    ALIGN(4)
    {
        src/pokedex_area_markers.o(.text);
    } > ROM =0
    .text0x08134570 0x08134570 :
    ALIGN(4)
    {
        src/pokemon_summary_screen.o(.text);
    } > ROM =0
    .text0x0813b8e8 0x0813b8e8 :
    ALIGN(4)
    {
        src/help_system_util.o(.text);
    } > ROM =0
    .text0x0813ca54 0x0813ca54 :
    ALIGN(4)
    {
        src/wild_pokemon_area.o(.text);
    } > ROM =0
    .text0x0813cd08 0x0813cd08 :
    ALIGN(4)
    {
        src/dynamic_placeholder_text_util.o(.text);
    } > ROM =0
    .text0x0813cdc8 0x0813cdc8 :
    ALIGN(4)
    {
        src/berry_pouch.o(.text);
    } > ROM =0
    .text0x0813ed04 0x0813ed04 :
    ALIGN(4)
    {
        src/itemfinder.o(.text);
    } > ROM =0
    .text0x0813f6e4 0x0813f6e4 :
    ALIGN(4)
    {
        src/buy_menu_helpers.o(.text);
    } > ROM =0
    .text0x0813f87c 0x0813f87c :
    ALIGN(4)
    {
        src/slot_machine.o(.text);
    } > ROM =0
    .text0x08141ccc 0x08141ccc :
    ALIGN(4)
    {
        src/roamer.o(.text);
    } > ROM =0
    .text0x081420f0 0x081420f0 :
    ALIGN(4)
    {
        src/mystery_gift_menu.o(.text);
    } > ROM =0
    .text0x08143654 0x08143654 :
    ALIGN(4)
    {
        src/ereader_screen.o(.text);
    } > ROM =0
    .text0x08143d9c 0x08143d9c :
    ALIGN(4)
    {
        src/mystery_gift.o(.text);
    } > ROM =0
    .text0x081448bc 0x081448bc :
    ALIGN(4)
    {
        src/mystery_gift_link.o(.text);
    } > ROM =0
    .text0x08144b64 0x08144b64 :
    ALIGN(4)
    {
        src/mystery_gift_client.o(.text);
    } > ROM =0
    .text0x08144f94 0x08144f94 :
    ALIGN(4)
    {
        src/mystery_gift_server.o(.text);
    } > ROM =0
    .text0x081456cc 0x081456cc :
    ALIGN(4)
    {
        src/mystery_gift_show_card.o(.text);
    } > ROM =0
    .text0x08146300 0x08146300 :
    ALIGN(4)
    {
        src/mystery_gift_show_news.o(.text);
    } > ROM =0
    .text0x08146ca8 0x08146ca8 :
    ALIGN(4)
    {
        src/wonder_news.o(.text);
    } > ROM =0
    .text0x08146ef0 /*0x08146ef0*/ :
    ALIGN(4)
    {
    } > ROM =0
    .text0x08147638 0x08147638 :
    ALIGN(4)
    {
        src/pokemon_jump.o(.text);
    } > ROM =0
    .text0x0814b768 0x0814b768 :
    ALIGN(4)
    {
        src/berry_crush.o(.text);
    } > ROM =0
    .text0x0814f214 0x0814f214 :
    ALIGN(4)
    {
        src/wireless_communication_status_screen.o(.text);
    } > ROM =0
    .text0x0814f8fc 0x0814f8fc :
    ALIGN(4)
    {
        src/braille_text.o(.text);
    } > ROM =0
    .text0x0814fd7c 0x0814fd7c :
    ALIGN(4)
    {
        src/text_window.o(.text);
    } > ROM =0
    .text0x081504cc 0x081504cc :
    ALIGN(4)
    {
        src/quest_log_player.o(.text);
    } > ROM =0
    .text0x08150874 /*0x08150874*/ :
    ALIGN(4)
    {
        src/battle_controller_pokedude.o(.text); /*moved from 0x08156118*/
        src/m4a_1.o(.text); /*moved from 0x081dc080*/
        src/sound.o(.text); /*moved from 0x0807194c*/
        src/cable_club.o(.text); /*moved from 0x0808075c*/
        src/field_control_avatar.o(.text); /*moved from 0x0806c89c*/
    } > ROM =0
    .text0x08156118 /*0x08156118*/ :
    ALIGN(4)
    {
    } > ROM =0
    .text0x0815a080 0x0815a080 :
    ALIGN(4)
    {
        src/quest_log_objects.o(.text);
    } > ROM =0
    .text0x0815a634 0x0815a634 :
    ALIGN(4)
    {
        src/dodrio_berry_picking_comm.o(.text);
    } > ROM =0
    .text0x0815ac0c 0x0815ac0c :
    ALIGN(4)
    {
        src/teachy_tv.o(.text);
    } > ROM =0
    .text0x0815c2f4 0x0815c2f4 :
    ALIGN(4)
    {
        src/ereader_helpers.o(.text);
    } > ROM =0
    .text0x0815c9f8 0x0815c9f8 :
    ALIGN(4)
    {
        src/digit_obj_util.o(.text);
    } > ROM =0
    .text0x0815d3ac 0x0815d3ac :
    ALIGN(4)
    {
        src/ss_anne.o(.text);
    } > ROM =0
    .text0x0815d6cc 0x0815d6cc :
    ALIGN(4)
    {
        src/cereader_tool.o(.text);
    } > ROM =0
    .text0x0815d8b0 0x0815d8b0 :
    ALIGN(4)
    {
        src/renewable_hidden_items.o(.text);
    } > ROM =0
    .text0x0815da60 0x0815da60 :
    ALIGN(4)
    {
        src/trainer_tower.o(.text);
    } > ROM =0
    .text0x0815eeb4 0x0815eeb4 :
    ALIGN(4)
    {
        src/berry_powder.o(.text);
    } > ROM =0
    .text0x0815f1b0 0x0815f1b0 :
    ALIGN(4)
    {
        src/minigame_countdown.o(.text);
    } > ROM =0
    .text0x0815f758 0x0815f758 :
    ALIGN(4)
    {
        src/berry_fix_program.o(.text);
    } > ROM =0

    script_data0x0815fa2c 0x0815fa2c :
    ALIGN(4)
    {
        data/event_scripts.o(script_data);
    } > ROM =0
    script_data0x081c695c 0x081c695c :
    ALIGN(4)
    {
        data/battle_anim_scripts.o(script_data);
    } > ROM =0
    script_data0x081d6618 0x081d6618 :
    ALIGN(4)
    {
        data/battle_scripts_1.o(script_data);
    } > ROM =0
    script_data0x081d971c 0x081d971c :
    ALIGN(4)
    {
        data/field_effect_scripts.o(script_data);
    } > ROM =0
    script_data0x081d9a20 0x081d9a20 :
    ALIGN(4)
    {
        data/battle_scripts_2.o(script_data);
    } > ROM =0
    script_data0x081d9c64 0x081d9c64 :
    ALIGN(4)
    {
        data/battle_ai_scripts.o(script_data);
    } > ROM =0
    script_data0x081dbd60 0x081dbd60 :
    ALIGN(4)
    {
        data/mystery_event_script_cmd_table.o(script_data);
    } > ROM =0

    lib_text0x081dbda4 0x081dbda4 :
    ALIGN(4)
    {
        src/libgcnmultiboot.o(.text);
    } > ROM =0
    lib_text0x081dc080 /*0x081dc080*/ :
    ALIGN(4)
    {
    } > ROM =0
    lib_text0x081dd000 /*0x081dd000*/ :
    ALIGN(4)
    {
        src/m4a.o(.text);
    } > ROM =0
    lib_text0x081de890 0x081de890 :
    ALIGN(4)
    {
        src/agb_flash.o(.text);
    } > ROM =0
    lib_text0x081ded90 0x081ded90 :
    ALIGN(4)
    {
        src/agb_flash_1m.o(.text);
    } > ROM =0
    lib_text0x081deed0 0x081deed0 :
    ALIGN(4)
    {
        src/agb_flash_mx.o(.text);
    } > ROM =0
    lib_text0x081df184 0x081df184 :
    ALIGN(4)
    {
        src/agb_flash_le.o(.text);
    } > ROM =0
    lib_text0x081df184 0x081df184 :
    ALIGN(4)
    {
        src/librfu_stwi.o(.text);
    } > ROM =0
    lib_text0x081dfcc0 0x081dfcc0 :
    ALIGN(4)
    {
        src/librfu_intr.o(.text);
    } > ROM =0
    lib_text0x081e0620 0x081e0620 :
    ALIGN(4)
    {
        src/librfu_rfu.o(.text);
    } > ROM =0
    lib_text0x081e350c 0x081e350c :
    ALIGN(4)
    {
        src/librfu_sio32id.o(.text);
    } > ROM =0
    lib_text0x081e3818 0x081e3818 :
    ALIGN(4)
    {
        src/isagbprn.o(.text);
    } > ROM =0
    lib_text0x081e3bc8 0x081e3bc8 :
    ALIGN(4)
    {
        src/libagbsyscall.o(.text);
    } > ROM =0
    lib_text0x081e3c18 0x081e3c18 :
    ALIGN(4)
    {
        *libgcc.a:_call_via_rX.o(.text);
    } > ROM =0
    lib_text0x081e3c54 0x081e3c54 :
    ALIGN(4)
    {
        *libgcc.a:_divdi3.o(.text);
    } > ROM =0
    lib_text0x081e4088 0x081e4088 :
    ALIGN(4)
    {
        *libgcc.a:_divsi3.o(.text);
    } > ROM =0
    lib_text0x081e411c 0x081e411c :
    ALIGN(4)
    {
        *libgcc.a:_dvmd_tls.o(.text);
    } > ROM =0
    lib_text0x081e4120 0x081e4120 :
    ALIGN(4)
    {
        *libgcc.a:_fixunsdfsi.o(.text);
    } > ROM =0
    lib_text0x081e4164 0x081e4164 :
    ALIGN(4)
    {
        *libgcc.a:_modsi3.o(.text);
    } > ROM =0
    lib_text0x081e4234 0x081e4234 :
    ALIGN(4)
    {
        *libgcc.a:_muldi3.o(.text);
    } > ROM =0
    lib_text0x081e42a4 0x081e42a4 :
    ALIGN(4)
    {
        *libgcc.a:_udivdi3.o(.text);
    } > ROM =0
    lib_text0x081e467c 0x081e467c :
    ALIGN(4)
    {
        *libgcc.a:_udivsi3.o(.text);
    } > ROM =0
    lib_text0x081e46f4 0x081e46f4 :
    ALIGN(4)
    {
        *libgcc.a:_umodsi3.o(.text);
    } > ROM =0
    lib_text0x081e47b4 0x081e47b4 :
    ALIGN(4)
    {
        *libgcc.a:dp-bit.o(.text);
    } > ROM =0
    lib_text0x081e5550 0x081e5550 :
    ALIGN(4)
    {
        *libgcc.a:fp-bit.o(.text);
    } > ROM =0
    lib_text0x081e5e9c 0x081e5e9c :
    ALIGN(4)
    {
        *libgcc.a:_lshrdi3.o(.text);
    } > ROM =0
    lib_text0x081e5ed0 0x081e5ed0 :
    ALIGN(4)
    {
        *libgcc.a:_negdi2.o(.text);
    } > ROM =0
    lib_text0x081e5ee8 0x081e5ee8 :
    ALIGN(4)
    {
        *libc.a:memcpy.o(.text);
    } > ROM =0
    lib_text0x081e5f48 0x081e5f48 :
    ALIGN(4)
    {
        *libc.a:memset.o(.text);
    } > ROM =0
    lib_text0x081e5f9c 0x081e5f9c :
    ALIGN(4)
    {
        *libc.a:strcmp.o(.text);
    } > ROM =0
    lib_text0x081e5ff8 0x081e5ff8 :
    ALIGN(4)
    {
        *libc.a:strcpy.o(.text);
    } > ROM =0
    lib_text0x081e6044 0x081e6044 :
    ALIGN(4)
    {
        *libc.a:impure.o(.text);
    } > ROM =0
    lib_text0x081e6044 0x081e6044 :
    ALIGN(4)
    {
        *libc.a:vsprintf.o(.text);
    } > ROM =0
    lib_text0x081e6078 0x081e6078 :
    ALIGN(4)
    {
        *libc.a:vfprintf.o(.text);
    } > ROM =0
    lib_text0x081e71e4 0x081e71e4 :
    ALIGN(4)
    {
        *libc.a:wsetup.o(.text);
    } > ROM =0
    lib_text0x081e7290 0x081e7290 :
    ALIGN(4)
    {
        *libc.a:dtoa.o(.text);
    } > ROM =0
    lib_text0x081e80e4 0x081e80e4 :
    ALIGN(4)
    {
        *libc.a:fflush.o(.text);
    } > ROM =0
    lib_text0x081e8178 0x081e8178 :
    ALIGN(4)
    {
        *libc.a:findfp.o(.text);
    } > ROM =0
    lib_text0x081e82d4 0x081e82d4 :
    ALIGN(4)
    {
        *libc.a:freer.o(.text);
    } > ROM =0
    lib_text0x081e8554 0x081e8554 :
    ALIGN(4)
    {
        *libc.a:mtrim.o(.text);
    } > ROM =0
    lib_text0x081e8554 0x081e8554 :
    ALIGN(4)
    {
        *libc.a:fvwrite.o(.text);
    } > ROM =0
    lib_text0x081e8780 0x081e8780 :
    ALIGN(4)
    {
        *libc.a:fwalk.o(.text);
    } > ROM =0
    lib_text0x081e87c0 0x081e87c0 :
    ALIGN(4)
    {
        *libc.a:locale.o(.text);
    } > ROM =0
    lib_text0x081e882c 0x081e882c :
    ALIGN(4)
    {
        *libc.a:makebuf.o(.text);
    } > ROM =0
    lib_text0x081e8908 0x081e8908 :
    ALIGN(4)
    {
        *libc.a:mallocr.o(.text);
    } > ROM =0
    lib_text0x081e8e24 0x081e8e24 :
    ALIGN(4)
    {
        *libc.a:mbtowc_r.o(.text);
    } > ROM =0
    lib_text0x081e8e50 0x081e8e50 :
    ALIGN(4)
    {
        *libc.a:memchr.o(.text);
    } > ROM =0
    lib_text0x081e8ed0 0x081e8ed0 :
    ALIGN(4)
    {
        *libc.a:memmove.o(.text);
    } > ROM =0
    lib_text0x081e8f58 0x081e8f58 :
    ALIGN(4)
    {
        *libc.a:mlock.o(.text);
    } > ROM =0
    lib_text0x081e8f60 0x081e8f60 :
    ALIGN(4)
    {
        *libc.a:mprec.o(.text);
    } > ROM =0
    lib_text0x081e9830 0x081e9830 :
    ALIGN(4)
    {
        *libc.a:s_isinf.o(.text);
    } > ROM =0
    lib_text0x081e9854 0x081e9854 :
    ALIGN(4)
    {
        *libc.a:s_isnan.o(.text);
    } > ROM =0
    lib_text0x081e9874 0x081e9874 :
    ALIGN(4)
    {
        *libc.a:sbrkr.o(.text);
    } > ROM =0
    lib_text0x081e98a0 0x081e98a0 :
    ALIGN(4)
    {
        *libc.a:stdio.o(.text);
    } > ROM =0
    lib_text0x081e9964 0x081e9964 :
    ALIGN(4)
    {
        *libc.a:strlen.o(.text);
    } > ROM =0
    lib_text0x081e99a8 0x081e99a8 :
    ALIGN(4)
    {
        *libc.a:syscalls.o(.text);
    } > ROM =0
    lib_text0x081e9e0c 0x081e9e0c :
    ALIGN(4)
    {
        *libc.a:writer.o(.text);
    } > ROM =0
    lib_text0x081e9e3c 0x081e9e3c :
    ALIGN(4)
    {
        *libc.a:callocr.o(.text);
    } > ROM =0
    lib_text0x081e9e94 0x081e9e94 :
    ALIGN(4)
    {
        *libc.a:closer.o(.text);
    } > ROM =0
    lib_text0x081e9ec0 0x081e9ec0 :
    ALIGN(4)
    {
        *libc.a:errno.o(.text);
    } > ROM =0
    lib_text0x081e9ecc 0x081e9ecc :
    ALIGN(4)
    {
        *libc.a:fstatr.o(.text);
    } > ROM =0
    lib_text0x081e9ef8 0x081e9ef8 :
    ALIGN(4)
    {
        *libc.a:libcfunc.o(.text);
    } > ROM =0
    lib_text0x081e9f20 0x081e9f20 :
    ALIGN(4)
    {
        *libc.a:lseekr.o(.text);
    } > ROM =0
    lib_text0x081e9f50 0x081e9f50 :
    ALIGN(4)
    {
        *libc.a:readr.o(.text);
    } > ROM =0

    .rodata0x081e9f80 0x081e9f80 :
    ALIGN(4)
    {
        src/main.o(.rodata);
    } > ROM =0
    .rodata0x081e9fd4 0x081e9fd4 :
    ALIGN(4)
    {
        src/bg.o(.rodata);
    } > ROM =0
    .rodata0x081e9fd8 0x081e9fd8 :
    ALIGN(4)
    {
        src/malloc.o(.rodata);
    } > ROM =0
    .rodata0x081ea0b4 0x081ea0b4 :
    ALIGN(4)
    {
        src/malloc.o(.rodata.str1.4);
    } > ROM =0
    .rodata0x081ea0b4 0x081ea0b4 :
    ALIGN(4)
    {
        src/text_printer.o(.rodata);
    } > ROM =0
    .rodata0x081ea1b4 0x081ea1b4 :
    ALIGN(4)
    {
        src/window.o(.rodata);
    } > ROM =0
    .rodata0x081ea1bc 0x081ea1bc :
    ALIGN(4)
    {
        src/text.o(.rodata);
    } > ROM =0
    .rodata0x08231cb8 0x08231cb8 :
    ALIGN(4)
    {
        src/sprite.o(.rodata);
    } > ROM =0
    .rodata0x08231e48 0x08231e48 :
    ALIGN(4)
    {
        src/bg_regs.o(.rodata);
    } > ROM =0
    .rodata0x08231e9c 0x08231e9c :
    ALIGN(4)
    {
        src/string_util.o(.rodata);
    } > ROM =0
    .rodata0x08231f34 0x08231f34 :
    ALIGN(4)
    {
        src/link.o(.rodata);
    } > ROM =0
    .rodata0x08234684 0x08234684 :
    ALIGN(4)
    {
        src/main_menu.o(.rodata);
    } > ROM =0
    .rodata0x08234708 0x08234708 :
    ALIGN(4)
    {
        src/data.o(.rodata);
    } > ROM =0
    .rodata0x0824830c 0x0824830c :
    ALIGN(4)
    {
        src/battle_bg.o(.rodata);
    } > ROM =0
    .rodata0x0824f054 0x0824f054 :
    ALIGN(4)
    {
        src/battle_main.o(.rodata);
    } > ROM =0
    .rodata0x08250174 0x08250174 :
    ALIGN(4)
    {
        src/battle_util.o(.rodata);
    } > ROM =0
    .rodata0x0825018c 0x0825018c :
    ALIGN(4)
    {
        src/battle_script_commands.o(.rodata);
    } > ROM =0
    .rodata0x0825090c 0x0825090c :
    ALIGN(4)
    {
        src/battle_controller_player.o(.rodata);
    } > ROM =0
    .rodata0x082509fc 0x082509fc :
    ALIGN(4)
    {
        src/battle_anim_smokescreen.o(.rodata);
    } > ROM =0
    .rodata0x08250aa4 0x08250aa4 :
    ALIGN(4)
    {
        src/battle_controller_opponent.o(.rodata);
    } > ROM =0
    .rodata0x08250b90 0x08250b90 :
    ALIGN(4)
    {
        src/battle_controller_link_opponent.o(.rodata);
    } > ROM =0
    .rodata0x08250c74 0x08250c74 :
    ALIGN(4)
    {
        src/pokemon.o(.rodata);
    } > ROM =0
    .rodata0x0825e0e4 0x0825e0e4 :
    ALIGN(4)
    {
        src/trig.o(.rodata);
    } > ROM =0
    .rodata0x0825e4cc 0x0825e4cc :
    ALIGN(4)
    {
        src/util.o(.rodata);
    } > ROM =0
    .rodata0x0825ef7c 0x0825ef7c :
    ALIGN(4)
    {
        src/daycare.o(.rodata);
    } > ROM =0
    .rodata0x08260278 0x08260278 :
    ALIGN(4)
    {
        src/battle_gfx_sfx_util.o(.rodata);
    } > ROM =0
    .rodata0x082602e0 0x082602e0 :
    ALIGN(4)
    {
        src/battle_interface.o(.rodata);
    } > ROM =0
    .rodata0x082605dc 0x082605dc :
    ALIGN(4)
    {
        src/pokeball.o(.rodata);
    } > ROM =0
    .rodata0x08260884 0x08260884 :
    ALIGN(4)
    {
        src/trade.o(.rodata);
    } > ROM =0
    .rodata0x082620cc 0x082620cc :
    ALIGN(4)
    {
        src/trade_scene.o(.rodata);
    } > ROM =0
    .rodata0x0826d304 0x0826d304 :
    ALIGN(4)
    {
        src/overworld.o(.rodata);
    } > ROM =0
    .rodata0x0826d3ec 0x0826d3ec :
    ALIGN(4)
    {
        src/tilesets.o(.rodata);
    } > ROM =0
    .rodata0x082d5164 0x082d5164 :
    ALIGN(4)
    {
        data/maps.o(.rodata);
    } > ROM =0
    .rodata0x08352f5c 0x08352f5c :
    ALIGN(4)
    {
        src/fieldmap.o(.rodata);
    } > ROM =0
    .rodata0x08352fe8 0x08352fe8 :
    ALIGN(4)
    {
        src/metatile_behavior.o(.rodata);
    } > ROM =0
    .rodata0x083530f8 0x083530f8 :
    ALIGN(4)
    {
        src/field_door.o(.rodata);
    } > ROM =0
    .rodata0x0835b7d4 0x0835b7d4 :
    ALIGN(4)
    {
        src/field_player_avatar.o(.rodata);
    } > ROM =0
    .rodata0x0835b9a4 0x0835b9a4 :
    ALIGN(4)
    {
        src/event_object_movement.o(.rodata);
    } > ROM =0
    .rodata0x083a72b4 0x083a72b4 :
    ALIGN(4)
    {
        src/scrcmd.o(.rodata);
    } > ROM =0
    .rodata0x083a7318 0x083a7318 :
    ALIGN(4)
    {
        src/coord_event_weather.o(.rodata);
    } > ROM =0
    .rodata0x083a7380 0x083a7380 :
    ALIGN(4)
    {
        src/field_tasks.o(.rodata);
    } > ROM =0
    .rodata0x083a73b4 0x083a73b4 :
    ALIGN(4)
    {
        src/start_menu.o(.rodata);
    } > ROM =0
    .rodata0x083a7450 0x083a7450 :
    ALIGN(4)
    {
        src/tileset_anims.o(.rodata);
    } > ROM =0
    .rodata0x083ac9d0 0x083ac9d0 :
    ALIGN(4)
    {
        src/palette.o(.rodata);
    } > ROM =0
    .rodata0x083aca00 /*0x083aca00*/ :
    ALIGN(4)
    {
    } > ROM =0
    .rodata0x083aca38 0x083aca38 :
    ALIGN(4)
    {
        src/battle_anim.o(.rodata);
    } > ROM =0
    .rodata0x083ae08c 0x083ae08c :
    ALIGN(4)
    {
        src/battle_anim_mons.o(.rodata);
    } > ROM =0
    .rodata0x083ae104 0x083ae104 :
    ALIGN(4)
    {
        data/map_events.o(.rodata);
    } > ROM =0
    .rodata0x083bf450 0x083bf450 :
    ALIGN(4)
    {
        src/battle_anim_status_effects.o(.rodata);
    } > ROM =0
    .rodata0x083bf5fc 0x083bf5fc :
    ALIGN(4)
    {
        src/title_screen.o(.rodata);
    } > ROM =0
    .rodata0x083c2c2c 0x083c2c2c :
    ALIGN(4)
    {
        src/field_weather.o(.rodata);
    } > ROM =0
    .rodata0x083c6630 0x083c6630 :
    ALIGN(4)
    {
        src/field_weather_util.o(.rodata);
    } > ROM =0
    .rodata0x083c6638 0x083c6638 :
    ALIGN(4)
    {
        src/field_weather_effects.o(.rodata);
    } > ROM =0
    .rodata0x083c6944 0x083c6944 :
    ALIGN(4)
    {
        src/field_screen_effect.o(.rodata);
    } > ROM =0
    .rodata0x083c6960 0x083c6960 :
    ALIGN(4)
    {
        src/battle_setup.o(.rodata);
    } > ROM =0
    .rodata0x083c6b20 0x083c6b20 :
    ALIGN(4)
    {
        src/cable_club.o(.rodata);
    } > ROM =0
    .rodata0x083c6b38 0x083c6b38 :
    ALIGN(4)
    {
        src/trainer_see.o(.rodata);
    } > ROM =0
    .rodata0x083c7410 0x083c7410 :
    ALIGN(4)
    {
        src/wild_encounter.o(.rodata);
    } > ROM =0
    .rodata0x083ca7e0 0x083ca7e0 :
    ALIGN(4)
    {
        src/field_effect.o(.rodata);
    } > ROM =0
    .rodata0x083cc328 0x083cc328 :
    ALIGN(4)
    {
        src/option_menu.o(.rodata);
    } > ROM =0
    .rodata0x083cc3d8 0x083cc3d8 :
    ALIGN(4)
    {
        src/trainer_card.o(.rodata);
    } > ROM =0
    .rodata0x083cda90 0x083cda90 :
    ALIGN(4)
    {
        src/pokemon_storage_system_menu.o(.rodata);
    } > ROM =0
    .rodata0x083ce4a8 0x083ce4a8 :
    ALIGN(4)
    {
        src/pokemon_storage_system_tasks.o(.rodata);
    } > ROM =0
    .rodata0x083cec60 0x083cec60 :
    ALIGN(4)
    {
        src/pokemon_storage_system_graphics.o(.rodata);
    } > ROM =0
    .rodata0x083d2c3c 0x083d2c3c :
    ALIGN(4)
    {
        src/pokemon_storage_system_data.o(.rodata);
    } > ROM =0
    .rodata0x083d3644 0x083d3644 :
    ALIGN(4)
    {
        src/pokemon_storage_system_misc.o(.rodata);
    } > ROM =0
    .rodata0x083d37b0 0x083d37b0 :
    ALIGN(4)
    {
        src/pokemon_icon.o(.rodata);
    } > ROM =0
    .rodata0x083d4170 0x083d4170 :
    ALIGN(4)
    {
        src/fldeff_cut.o(.rodata);
    } > ROM =0
    .rodata0x083d41d4 0x083d41d4 :
    ALIGN(4)
    {
        src/map_name_popup.o(.rodata);
    } > ROM =0
    .rodata0x083d41dc 0x083d41dc :
    ALIGN(4)
    {
        src/item_menu_icons.o(.rodata);
    } > ROM =0
    .rodata0x083d4ec4 0x083d4ec4 :
    ALIGN(4)
    {
        src/battle_anim_mon_movement.o(.rodata);
    } > ROM =0
    .rodata0x083d4f3c 0x083d4f3c :
    ALIGN(4)
    {
        src/item.o(.rodata);
    } > ROM =0
    .rodata0x083df10c 0x083df10c :
    ALIGN(4)
    {
        src/shop.o(.rodata);
    } > ROM =0
    .rodata0x083df144 0x083df144 :
    ALIGN(4)
    {
        src/special_field_anim.o(.rodata);
    } > ROM =0
    .rodata0x083df170 0x083df170 :
    ALIGN(4)
    {
        src/berry.o(.rodata);
    } > ROM =0
    .rodata0x083dfdc0 0x083dfdc0 :
    ALIGN(4)
    {
        src/script_menu.o(.rodata);
    } > ROM =0
    .rodata0x083e1870 0x083e1870 :
    ALIGN(4)
    {
        src/naming_screen.o(.rodata);
    } > ROM =0
    .rodata0x083e279c 0x083e279c :
    ALIGN(4)
    {
        src/pokemon_size_record.o(.rodata);
    } > ROM =0
    .rodata0x083e2824 0x083e2824 :
    ALIGN(4)
    {
        src/item_use.o(.rodata);
    } > ROM =0
    .rodata0x083e29d4 0x083e29d4 :
    ALIGN(4)
    {
        src/battle_anim_effects_1.o(.rodata);
    } > ROM =0
    .rodata0x083e3b4c 0x083e3b4c :
    ALIGN(4)
    {
        src/battle_anim_effects_2.o(.rodata);
    } > ROM =0
    .rodata0x083e4564 0x083e4564 :
    ALIGN(4)
    {
        src/battle_anim_water.o(.rodata);
    } > ROM =0
    .rodata0x083e5c28 0x083e5c28 :
    ALIGN(4)
    {
        src/battle_anim_fire.o(.rodata);
    } > ROM =0
    .rodata0x083e5f8c 0x083e5f8c :
    ALIGN(4)
    {
        src/battle_anim_electric.o(.rodata);
    } > ROM =0
    .rodata0x083e6330 0x083e6330 :
    ALIGN(4)
    {
        src/battle_anim_ice.o(.rodata);
    } > ROM =0
    .rodata0x083e66fc 0x083e66fc :
    ALIGN(4)
    {
        src/battle_anim_fight.o(.rodata);
    } > ROM =0
    .rodata0x083e6a04 0x083e6a04 :
    ALIGN(4)
    {
        src/battle_anim_poison.o(.rodata);
    } > ROM =0
    .rodata0x083e6b58 0x083e6b58 :
    ALIGN(4)
    {
        src/battle_anim_flying.o(.rodata);
    } > ROM =0
    .rodata0x083e6e4c 0x083e6e4c :
    ALIGN(4)
    {
        src/battle_anim_psychic.o(.rodata);
    } > ROM =0
    .rodata0x083e7258 0x083e7258 :
    ALIGN(4)
    {
        src/battle_anim_bug.o(.rodata);
    } > ROM =0
    .rodata0x083e7400 0x083e7400 :
    ALIGN(4)
    {
        src/battle_anim_rock.o(.rodata);
    } > ROM =0
    .rodata0x083e7618 0x083e7618 :
    ALIGN(4)
    {
        src/battle_anim_ghost.o(.rodata);
    } > ROM =0
    .rodata0x083e7780 0x083e7780 :
    ALIGN(4)
    {
        src/battle_anim_dragon.o(.rodata);
    } > ROM =0
    .rodata0x083e78e8 0x083e78e8 :
    ALIGN(4)
    {
        src/battle_anim_dark.o(.rodata);
    } > ROM =0
    .rodata0x083e7a70 0x083e7a70 :
    ALIGN(4)
    {
        src/battle_anim_ground.o(.rodata);
    } > ROM =0
    .rodata0x083e7b4c 0x083e7b4c :
    ALIGN(4)
    {
        src/battle_anim_normal.o(.rodata);
    } > ROM =0
    .rodata0x083e7d38 0x083e7d38 :
    ALIGN(4)
    {
        src/battle_anim_utility_funcs.o(.rodata);
    } > ROM =0
    .rodata0x083e7d44 0x083e7d44 :
    ALIGN(4)
    {
        src/battle_intro.o(.rodata);
    } > ROM =0
    .rodata0x083e7d6c 0x083e7d6c :
    ALIGN(4)
    {
        src/bike.o(.rodata);
    } > ROM =0
    .rodata0x083e7e04 0x083e7e04 :
    ALIGN(4)
    {
        src/easy_chat.o(.rodata);
    } > ROM =0
    .rodata0x083ee078 0x083ee078 :
    ALIGN(4)
    {
        src/mon_markings.o(.rodata);
    } > ROM =0
    .rodata0x083eea08 0x083eea08 :
    ALIGN(4)
    {
        src/mail.o(.rodata);
    } > ROM =0
    .rodata0x083eec68 0x083eec68 :
    ALIGN(4)
    {
        src/heal_location.o(.rodata);
    } > ROM =0
    .rodata0x083eed6c 0x083eed6c :
    ALIGN(4)
    {
        src/region_map.o(.rodata);
    } > ROM =0
    .rodata0x083f3094 0x083f3094 :
    ALIGN(4)
    {
        src/image_processing_effects.o(.rodata);
    } > ROM =0
    .rodata0x083f5614 0x083f5614 :
    ALIGN(4)
    {
        src/battle_ai_script_commands.o(.rodata);
    } > ROM =0
    .rodata0x083f57a8 0x083f57a8 :
    ALIGN(4)
    {
        src/fldeff_flash.o(.rodata);
    } > ROM =0
    .rodata0x083f5b68 0x083f5b68 :
    ALIGN(4)
    {
        src/field_specials.o(.rodata);
    } > ROM =0
    .rodata0x083f63f8 0x083f63f8 :
    ALIGN(4)
    {
        src/battle_records.o(.rodata);
    } > ROM =0
    .rodata0x083f6d00 0x083f6d00 :
    ALIGN(4)
    {
        src/evolution_scene.o(.rodata);
    } > ROM =0
    .rodata0x083f8810 0x083f8810 :
    ALIGN(4)
    {
        src/battle_transition.o(.rodata);
    } > ROM =0
    .rodata0x083fb1a4 0x083fb1a4 :
    ALIGN(4)
    {
        src/battle_controller_link_partner.o(.rodata);
    } > ROM =0
    .rodata0x083fb288 0x083fb288 :
    ALIGN(4)
    {
        src/battle_message.o(.rodata);
    } > ROM =0
    .rodata0x083fed04 0x083fed04 :
    ALIGN(4)
    {
        src/save.o(.rodata);
    } > ROM =0
    .rodata0x083fed3c 0x083fed3c :
    ALIGN(4)
    {
        src/field_effect_helpers.o(.rodata);
    } > ROM =0
    .rodata0x083fed70 0x083fed70 :
    ALIGN(4)
    {
        src/battle_controller_safari.o(.rodata);
    } > ROM =0
    .rodata0x083fee54 0x083fee54 :
    ALIGN(4)
    {
        src/battle_anim_effects_3.o(.rodata);
    } > ROM =0
    .rodata0x083ff848 0x083ff848 :
    ALIGN(4)
    {
        src/learn_move.o(.rodata);
    } > ROM =0
    .rodata0x083ffb1c 0x083ffb1c :
    ALIGN(4)
    {
        src/battle_tower.o(.rodata);
    } > ROM =0
    .rodata0x08402168 0x08402168 :
    ALIGN(4)
    {
        src/battle_controller_oak_old_man.o(.rodata);
    } > ROM =0
    .rodata0x0840224c 0x0840224c :
    ALIGN(4)
    {
        src/player_pc.o(.rodata);
    } > ROM =0
    .rodata0x084022d0 0x084022d0 :
    ALIGN(4)
    {
        src/intro.o(.rodata);
    } > ROM =0
    .rodata0x0840bfac 0x0840bfac :
    ALIGN(4)
    {
        src/battle_anim_special.o(.rodata);
    } > ROM =0
    .rodata0x0840c298 0x0840c298 :
    ALIGN(4)
    {
        src/hall_of_fame.o(.rodata);
    } > ROM =0
    .rodata0x0840c614 0x0840c614 :
    ALIGN(4)
    {
        src/credits.o(.rodata);
    } > ROM =0
    .rodata0x08414830 0x08414830 :
    ALIGN(4)
    {
        src/diploma.o(.rodata);
    } > ROM =0
    .rodata0x08415a90 0x08415a90 :
    ALIGN(4)
    {
        src/strings.o(.rodata);
    } > ROM =0
    .rodata0x0841eeb4 0x0841eeb4 :
    ALIGN(4)
    {
        src/save_failed_screen.o(.rodata);
    } > ROM =0
    .rodata0x0841eed4 0x0841eed4 :
    ALIGN(4)
    {
        src/clear_save_data_screen.o(.rodata);
    } > ROM =0
    .rodata0x0841eef4 0x0841eef4 :
    ALIGN(4)
    {
        src/evolution_graphics.o(.rodata);
    } > ROM =0
    .rodata0x0841efb8 0x0841efb8 :
    ALIGN(4)
    {
        src/new_menu_helpers.o(.rodata);
    } > ROM =0
    .rodata0x0841f524 0x0841f524 :
    ALIGN(4)
    {
        src/tilemap_util.o(.rodata);
    } > ROM =0
    .rodata0x0841f544 0x0841f544 :
    ALIGN(4)
    {
        src/map_preview_screen.o(.rodata);
    } > ROM =0
    .rodata0x0843ec24 0x0843ec24 :
    ALIGN(4)
    {
        src/link_rfu_2.o(.rodata);
    } > ROM =0
    .rodata0x0843ef30 0x0843ef30 :
    ALIGN(4)
    {
        src/link_rfu_3.o(.rodata);
    } > ROM =0
    .rodata0x0843f30c 0x0843f30c :
    ALIGN(4)
    {
        src/easy_chat_2.o(.rodata);
    } > ROM =0
    .rodata0x0843f428 0x0843f428 :
    ALIGN(4)
    {
        src/easy_chat_3.o(.rodata);
    } > ROM =0
    .rodata0x0843fb20 0x0843fb20 :
    ALIGN(4)
    {
        src/pokedex_screen.o(.rodata);
    } > ROM =0
    .rodata0x08452cf4 0x08452cf4 :
    ALIGN(4)
    {
        src/list_menu.o(.rodata);
    } > ROM =0
    .rodata0x08452d54 0x08452d54 :
    ALIGN(4)
    {
        src/item_menu.o(.rodata);
    } > ROM =0
    .rodata0x0845309c 0x0845309c :
    ALIGN(4)
    {
        src/save_location.o(.rodata);
    } > ROM =0
    .rodata0x084530f8 0x084530f8 :
    ALIGN(4)
    {
        src/bag.o(.rodata);
    } > ROM =0
    .rodata0x084531d8 0x084531d8 :
    ALIGN(4)
    {
        src/trainer_pokemon_sprites.o(.rodata);
    } > ROM =0
    .rodata0x084531ec 0x084531ec :
    ALIGN(4)
    {
        src/vs_seeker.o(.rodata);
    } > ROM =0
    .rodata0x08453fcc 0x08453fcc :
    ALIGN(4)
    {
        src/item_pc.o(.rodata);
    } > ROM =0
    .rodata0x08454048 0x08454048 :
    ALIGN(4)
    {
        src/mailbox_pc.o(.rodata);
    } > ROM =0
    .rodata0x08454064 0x08454064 :
    ALIGN(4)
    {
        src/decoration.o(.rodata);
    } > ROM =0
    .rodata0x08456678 0x08456678 :
    ALIGN(4)
    {
        src/menu.o(.rodata);
    } > ROM =0
    .rodata0x0845667c 0x0845667c :
    ALIGN(4)
    {
        src/quest_log.o(.rodata);
    } > ROM =0
    .rodata0x08456708 0x08456708 :
    ALIGN(4)
    {
        src/help_message.o(.rodata);
    } > ROM =0
    .rodata0x08456994 0x08456994 :
    ALIGN(4)
    {
        src/trainer_fan_club.o(.rodata);
    } > ROM =0
    .rodata0x084569a8 0x084569a8 :
    ALIGN(4)
    {
        src/quest_log_events.o(.rodata);
    } > ROM =0
    .rodata0x08456cd4 0x08456cd4 :
    ALIGN(4)
    {
        src/union_room.o(.rodata);
    } > ROM =0
    .rodata0x08457138 0x08457138 :
    ALIGN(4)
    {
        src/union_room_player_avatar.o(.rodata);
    } > ROM =0
    .rodata0x084571f4 0x084571f4 :
    ALIGN(4)
    {
        src/union_room_battle.o(.rodata);
    } > ROM =0
    .rodata0x0845720c 0x0845720c :
    ALIGN(4)
    {
        src/union_room_message.o(.rodata);
    } > ROM =0
    .rodata0x08459694 0x08459694 :
    ALIGN(4)
    {
        src/pokemon_special_anim.o(.rodata);
    } > ROM =0
    .rodata0x0845969c 0x0845969c :
    ALIGN(4)
    {
        src/pokemon_special_anim_scene.o(.rodata);
    } > ROM =0
    .rodata0x08459bc0 0x08459bc0 :
    ALIGN(4)
    {
        src/party_menu.o(.rodata);
    } > ROM =0
    .rodata0x0845a8e0 0x0845a8e0 :
    ALIGN(4)
    {
        src/union_room_chat.o(.rodata);
    } > ROM =0
    .rodata0x0845aa84 0x0845aa84 :
    ALIGN(4)
    {
        src/union_room_chat_display.o(.rodata);
    } > ROM =0
    .rodata0x0845ac74 0x0845ac74 :
    ALIGN(4)
    {
        src/union_room_chat_objects.o(.rodata);
    } > ROM =0
    .rodata0x0845b0e0 0x0845b0e0 :
    ALIGN(4)
    {
        src/help_system.o(.rodata);
    } > ROM =0
    .rodata0x0845c660 0x0845c660 :
    ALIGN(4)
    {
        src/fame_checker.o(.rodata);
    } > ROM =0
    .rodata0x0845fdb4 0x0845fdb4 :
    ALIGN(4)
    {
        src/menu2.o(.rodata);
    } > ROM =0
    .rodata0x084605c8 0x084605c8 :
    ALIGN(4)
    {
        src/oak_speech.o(.rodata);
    } > ROM =0
    .rodata0x08463194 0x08463194 :
    ALIGN(4)
    {
        src/tm_case.o(.rodata);
    } > ROM =0
    .rodata0x084632bc 0x084632bc :
    ALIGN(4)
    {
        src/menu_indicators.o(.rodata);
    } > ROM =0
    .rodata0x0846347c 0x0846347c :
    ALIGN(4)
    {
        src/pokedex_area_markers.o(.rodata);
    } > ROM =0
    .rodata0x08463720 0x08463720 :
    ALIGN(4)
    {
        src/pokemon_summary_screen.o(.rodata);
    } > ROM =0
    .rodata0x08464068 0x08464068 :
    ALIGN(4)
    {
        src/help_system_util.o(.rodata);
    } > ROM =0
    .rodata0x084641a8 0x084641a8 :
    ALIGN(4)
    {
        src/wild_pokemon_area.o(.rodata);
    } > ROM =0
    .rodata0x08464360 0x08464360 :
    ALIGN(4)
    {
        src/dynamic_placeholder_text_util.o(.rodata);
    } > ROM =0
    .rodata0x084643ac 0x084643ac :
    ALIGN(4)
    {
        src/berry_pouch.o(.rodata);
    } > ROM =0
    .rodata0x08464530 0x08464530 :
    ALIGN(4)
    {
        src/itemfinder.o(.rodata);
    } > ROM =0
    .rodata0x08464864 0x08464864 :
    ALIGN(4)
    {
        src/buy_menu_helpers.o(.rodata);
    } > ROM =0
    .rodata0x084648f0 0x084648f0 :
    ALIGN(4)
    {
        src/slot_machine.o(.rodata);
    } > ROM =0
    .rodata0x08466cb8 0x08466cb8 :
    ALIGN(4)
    {
        src/roamer.o(.rodata);
    } > ROM =0
    .rodata0x08466d70 0x08466d70 :
    ALIGN(4)
    {
        src/mystery_gift_menu.o(.rodata);
    } > ROM =0
    .rodata0x08466f60 0x08466f60 :
    ALIGN(4)
    {
        src/ereader_screen.o(.rodata);
    } > ROM =0
    .rodata0x08466f60 0x08466f60 :
    ALIGN(4)
    {
        src/mystery_gift.o(.rodata);
    } > ROM =0
    .rodata0x08466fc0 0x08466fc0 :
    ALIGN(4)
    {
        src/mystery_gift_link.o(.rodata);
    } > ROM =0
    .rodata0x08466fc0 0x08466fc0 :
    ALIGN(4)
    {
        src/mystery_gift_client.o(.rodata);
    } > ROM =0
    .rodata0x08466fe0 0x08466fe0 :
    ALIGN(4)
    {
        src/mystery_gift_server.o(.rodata);
    } > ROM =0
    .rodata0x084670c8 0x084670c8 :
    ALIGN(4)
    {
        src/mystery_gift_show_card.o(.rodata);
    } > ROM =0
    .rodata0x08468098 0x08468098 :
    ALIGN(4)
    {
        src/mystery_gift_show_news.o(.rodata);
    } > ROM =0
    .rodata0x08468800 0x08468800 :
    ALIGN(4)
    {
        src/mystery_gift_scripts.o(.rodata);
    } > ROM =0
    .rodata0x08468cbc 0x08468cbc :
    ALIGN(4)
    {
        src/wonder_news.o(.rodata);
    } > ROM =0
    .rodata0x08468cf8 0x08468cf8 :
    ALIGN(4)
    {
        src/wonder_news.o(.rodata.str1.4);
    } > ROM =0
    .rodata0x08468cf8 0x08468cf8 :
    ALIGN(4)
    {
        src/seagallop.o(.rodata);
    } > ROM =0
    .rodata0x0846b048 0x0846b048 :
    ALIGN(4)
    {
        src/pokemon_jump.o(.rodata);
    } > ROM =0
    .rodata0x0846e340 0x0846e340 :
    ALIGN(4)
    {
        src/berry_crush.o(.rodata);
    } > ROM =0
    .rodata0x0846f530 0x0846f530 :
    ALIGN(4)
    {
        src/wireless_communication_status_screen.o(.rodata);
    } > ROM =0
    .rodata0x0846fb68 0x0846fb68 :
    ALIGN(4)
    {
        src/braille_text.o(.rodata);
    } > ROM =0
    .rodata0x08470b6c 0x08470b6c :
    ALIGN(4)
    {
        src/text_window_graphics.o(.rodata);
    } > ROM =0
    .rodata0x08471f3c 0x08471f3c :
    ALIGN(4)
    {
        src/quest_log_player.o(.rodata);
    } > ROM =0
    .rodata0x08471f60 0x08471f60 :
    ALIGN(4)
    {
        src/dodrio_berry_picking.o(.rodata);
    } > ROM =0
    .rodata0x08478f7c 0x08478f7c :
    ALIGN(4)
    {
        src/battle_controller_pokedude.o(.rodata);
    } > ROM =0
    .rodata0x08479340 0x08479340 :
    ALIGN(4)
    {
        src/teachy_tv.o(.rodata);
    } > ROM =0
    .rodata0x084796b8 0x084796b8 :
    ALIGN(4)
    {
        src/digit_obj_util.o(.rodata);
    } > ROM =0
    .rodata0x08479898 0x08479898 :
    ALIGN(4)
    {
        src/ss_anne.o(.rodata);
    } > ROM =0
    .rodata0x08479d38 0x08479d38 :
    ALIGN(4)
    {
        src/cereader_tool.o(.rodata);
    } > ROM =0
    .rodata0x08479d94 0x08479d94 :
    ALIGN(4)
    {
        src/renewable_hidden_items.o(.rodata);
    } > ROM =0
    .rodata0x08479f38 0x08479f38 :
    ALIGN(4)
    {
        src/trainer_tower.o(.rodata);
    } > ROM =0
    .rodata0x0847a388 0x0847a388 :
    ALIGN(4)
    {
        src/minigame_countdown.o(.rodata);
    } > ROM =0
    .rodata0x0847a8f0 0x0847a8f0 :
    ALIGN(4)
    {
        src/berry_fix_program.o(.rodata);
    } > ROM =0
    .rodata0x0847a938 0x0847a938 :
    ALIGN(4)
    {
        src/keyboard_text.o(.rodata);
    } > ROM =0
    .rodata0x0847ac0c 0x0847ac0c :
    ALIGN(4)
    {
        src/trainer_tower_sets.o(.rodata);
    } > ROM =0
    .rodata0x08482894 0x08482894 :
    ALIGN(4)
    {
        src/move_descriptions.o(.rodata);

    } > ROM =0
        /* These should not be moved to C files */
    .rodata0x08488cd0 0x08488cd0 :
    ALIGN(4)
    {
        src/mystery_event_msg.o(.rodata);
    } > ROM =0
    .rodata0x08488e88 0x08488e88 :
    ALIGN(4)
    {
        data/mystery_event_msg.o(.rodata);
    } > ROM =0
    .rodata0x084899c8 0x084899c8 :
    ALIGN(4)
    {
        src/m4a_tables.o(.rodata);
    } > ROM =0
    .rodata0x08489cec 0x08489cec :
    ALIGN(4)
    {
        data/sound_data.o(.rodata);
        src/sound.o(.rodata); /*moved from 0x083aca00*/
    } > ROM =0

    song_data :
    ALIGN(4)
    {
    } > ROM =0

    lib_rodata 0x086fbf04 :
    ALIGN(4)
    {
        src/agb_flash.o(.rodata);
        src/agb_flash_1m.o(.rodata);
        src/agb_flash_mx.o(.rodata);
        src/agb_flash_le.o(.rodata);
        src/librfu_rfu.o(.rodata);
        src/librfu_sio32id.o(.rodata);
        src/isagbprn.o(.rodata);
        *libgcc.a:_divdi3.o(.rodata);
        *libgcc.a:_udivdi3.o(.rodata);
        *libc.a:memcpy.o(.rodata);
        *libc.a:memset.o(.rodata);
        *libc.a:strcmp.o(.rodata);
        *libc.a:strcpy.o(.rodata);
        *libc.a:impure.o(.rodata);
        *libc.a:vsprintf.o(.rodata);
        *libc.a:vfprintf.o(.rodata);
        *libc.a:wsetup.o(.rodata);
        *libc.a:dtoa.o(.rodata);
        *libc.a:fflush.o(.rodata);
        *libc.a:findfp.o(.rodata);
        *libc.a:freer.o(.rodata);
        *libc.a:mtrim.o(.rodata);
        *libc.a:fvwrite.o(.rodata);
        *libc.a:fwalk.o(.rodata);
        *libc.a:locale.o(.rodata);
        *libc.a:makebuf.o(.rodata);
        *libc.a:mallocr.o(.rodata);
        *libc.a:mbtowc_r.o(.rodata);
        *libc.a:memchr.o(.rodata);
        *libc.a:memmove.o(.rodata);
        *libc.a:mlock.o(.rodata);
        *libc.a:mprec.o(.rodata);
        *libc.a:s_isinf.o(.rodata);
        *libc.a:s_isnan.o(.rodata);
        *libc.a:sbrkr.o(.rodata);
        *libc.a:stdio.o(.rodata);
        *libc.a:strlen.o(.rodata);
        *libc.a:syscalls.o(.rodata);
        *libc.a:writer.o(.rodata);
        *libc.a:callocr.o(.rodata);
        *libc.a:closer.o(.rodata);
        *libc.a:errno.o(.rodata);
        *libc.a:fstatr.o(.rodata);
        *libc.a:libcfunc.o(.rodata);
        *libc.a:lseekr.o(.rodata);
        *libc.a:readr.o(.rodata);

        . = ALIGN(4);
    } > ROM =0

    multiboot_data 0x086fc56c :
    ALIGN(4)
    {
        data/multiboot_ereader.o(.rodata);
        data/multiboot_berry_glitch_fix.o(.rodata);
        data/multiboot_pokemon_colosseum.o(.rodata);
    } > ROM =0

    gfx_data 0x08D00000 :
    ALIGN(4)
    {
        src/graphics.o(.rodata);
    } > ROM =0

    moved_data 0x09000000 :
    ALIGN(4)
    {
        src/battle_controller_player.o(.text); /*moved from 0x0802e324*/
        src/dodrio_berry_picking.o(.text); /*moved from 0x08150874*/
    } > ROM =0

    moved_song_data :
    ALIGN(4)
    {
        sound/songs/midi/mus_dummy.o(.rodata);
        sound/songs/midi/se_use_item.o(.rodata);
        sound/songs/midi/se_pc_login.o(.rodata);
        sound/songs/midi/se_pc_off.o(.rodata);
        sound/songs/midi/se_pc_on.o(.rodata);
        sound/songs/midi/se_select.o(.rodata);
        sound/songs/se_win_open.o(.rodata);
        sound/songs/se_wall_hit.o(.rodata);
        sound/songs/midi/se_rs_door.o(.rodata);
        sound/songs/midi/se_exit.o(.rodata);
        sound/songs/midi/se_ledge.o(.rodata);
        sound/songs/midi/se_bike_bell.o(.rodata);
        sound/songs/midi/se_not_effective.o(.rodata);
        sound/songs/midi/se_effective.o(.rodata);
        sound/songs/midi/se_super_effective.o(.rodata);
        sound/songs/midi/se_ball_open.o(.rodata);
        sound/songs/midi/se_faint.o(.rodata);
        sound/songs/midi/se_flee.o(.rodata);
        sound/songs/midi/se_sliding_door.o(.rodata);
        sound/songs/midi/se_ship.o(.rodata);
        sound/songs/midi/se_bang.o(.rodata);
        sound/songs/midi/se_pin.o(.rodata);
        sound/songs/midi/se_boo.o(.rodata);
        sound/songs/midi/se_ball.o(.rodata);
        sound/songs/midi/se_contest_place.o(.rodata);
        sound/songs/midi/se_success.o(.rodata);
        sound/songs/midi/se_failure.o(.rodata);
        sound/songs/midi/se_exp.o(.rodata);
        sound/songs/midi/se_bike_hop.o(.rodata);
        sound/songs/midi/se_switch.o(.rodata);
        sound/songs/midi/se_click.o(.rodata);
        sound/songs/midi/se_fu_zaku.o(.rodata);
        sound/songs/midi/se_contest_condition_lose.o(.rodata);
        sound/songs/midi/se_lavaridge_fall_warp.o(.rodata);
        sound/songs/midi/se_ice_stairs.o(.rodata);
        sound/songs/midi/se_ice_break.o(.rodata);
        sound/songs/midi/se_ice_crack.o(.rodata);
        sound/songs/midi/se_fall.o(.rodata);
        sound/songs/midi/se_unlock.o(.rodata);
        sound/songs/midi/se_warp_in.o(.rodata);
        sound/songs/midi/se_warp_out.o(.rodata);
        sound/songs/midi/se_repel.o(.rodata);
        sound/songs/midi/se_rotating_gate.o(.rodata);
        sound/songs/midi/se_truck_move.o(.rodata);
        sound/songs/midi/se_truck_stop.o(.rodata);
        sound/songs/midi/se_truck_unload.o(.rodata);
        sound/songs/midi/se_truck_door.o(.rodata);
        sound/songs/midi/se_berry_blender.o(.rodata);
        sound/songs/midi/se_save.o(.rodata);
        sound/songs/midi/se_ball_bounce_1.o(.rodata);
        sound/songs/midi/se_ball_bounce_2.o(.rodata);
        sound/songs/midi/se_ball_bounce_3.o(.rodata);
        sound/songs/midi/se_ball_bounce_4.o(.rodata);
        sound/songs/midi/se_ball_trade.o(.rodata);
        sound/songs/midi/se_ball_throw.o(.rodata);
        sound/songs/midi/se_note_c.o(.rodata);
        sound/songs/midi/se_note_d.o(.rodata);
        sound/songs/midi/se_note_e.o(.rodata);
        sound/songs/midi/se_note_f.o(.rodata);
        sound/songs/midi/se_note_g.o(.rodata);
        sound/songs/midi/se_note_a.o(.rodata);
        sound/songs/midi/se_note_b.o(.rodata);
        sound/songs/midi/se_note_c_high.o(.rodata);
        sound/songs/midi/se_puddle.o(.rodata);
        sound/songs/midi/se_bridge_walk.o(.rodata);
        sound/songs/midi/se_itemfinder.o(.rodata);
        sound/songs/midi/se_ding_dong.o(.rodata);
        sound/songs/midi/se_balloon_red.o(.rodata);
        sound/songs/midi/se_balloon_blue.o(.rodata);
        sound/songs/midi/se_balloon_yellow.o(.rodata);
        sound/songs/midi/se_breakable_door.o(.rodata);
        sound/songs/midi/se_mud_ball.o(.rodata);
        sound/songs/midi/se_field_poison.o(.rodata);
        sound/songs/midi/se_escalator.o(.rodata);
        sound/songs/midi/se_thunderstorm.o(.rodata);
        sound/songs/midi/se_thunderstorm_stop.o(.rodata);
        sound/songs/midi/se_downpour.o(.rodata);
        sound/songs/midi/se_downpour_stop.o(.rodata);
        sound/songs/midi/se_rain.o(.rodata);
        sound/songs/midi/se_rain_stop.o(.rodata);
        sound/songs/midi/se_thunder.o(.rodata);
        sound/songs/midi/se_thunder2.o(.rodata);
        sound/songs/midi/se_elevator.o(.rodata);
        sound/songs/midi/se_low_health.o(.rodata);
        sound/songs/midi/se_exp_max.o(.rodata);
        sound/songs/midi/se_roulette_ball.o(.rodata);
        sound/songs/midi/se_roulette_ball2.o(.rodata);
        sound/songs/midi/se_taillow_wing_flap.o(.rodata);
        sound/songs/midi/se_rs_shop.o(.rodata);
        sound/songs/midi/se_contest_heart.o(.rodata);
        sound/songs/midi/se_contest_curtain_rise.o(.rodata);
        sound/songs/midi/se_contest_curtain_fall.o(.rodata);
        sound/songs/midi/se_contest_icon_change.o(.rodata);
        sound/songs/midi/se_contest_icon_clear.o(.rodata);
        sound/songs/midi/se_contest_mons_turn.o(.rodata);
        sound/songs/midi/se_shiny.o(.rodata);
        sound/songs/midi/se_intro_blast.o(.rodata);
        sound/songs/midi/se_mugshot.o(.rodata);
        sound/songs/midi/se_applause.o(.rodata);
        sound/songs/midi/se_vend.o(.rodata);
        sound/songs/midi/se_orb.o(.rodata);
        sound/songs/se_dex_scroll.o(.rodata);
        sound/songs/se_dex_page.o(.rodata);
        sound/songs/midi/se_pokenav_on.o(.rodata);
        sound/songs/midi/se_pokenav_off.o(.rodata);
        sound/songs/midi/se_dex_search.o(.rodata);
        sound/songs/midi/se_egg_hatch.o(.rodata);
        sound/songs/midi/se_ball_tray_enter.o(.rodata);
        sound/songs/midi/se_ball_tray_ball.o(.rodata);
        sound/songs/midi/se_ball_tray_exit.o(.rodata);
        sound/songs/midi/se_glass_flute.o(.rodata);
        sound/songs/se_m_thunderbolt.o(.rodata);
        sound/songs/se_m_thunderbolt2.o(.rodata);
        sound/songs/se_m_harden.o(.rodata);
        sound/songs/se_m_nightmare.o(.rodata);
        sound/songs/se_m_vital_throw.o(.rodata);
        sound/songs/se_m_vital_throw2.o(.rodata);
        sound/songs/se_m_bubble.o(.rodata);
        sound/songs/se_m_bubble2.o(.rodata);
        sound/songs/se_m_bubble3.o(.rodata);
        sound/songs/se_m_rain_dance.o(.rodata);
        sound/songs/midi/se_m_cut.o(.rodata);
        sound/songs/se_m_string_shot.o(.rodata);
        sound/songs/se_m_string_shot2.o(.rodata);
        sound/songs/se_m_rock_throw.o(.rodata);
        sound/songs/midi/se_m_gust.o(.rodata);
        sound/songs/midi/se_m_gust2.o(.rodata);
        sound/songs/midi/se_m_double_slap.o(.rodata);
        sound/songs/se_m_double_team.o(.rodata);
        sound/songs/midi/se_m_razor_wind.o(.rodata);
        sound/songs/se_m_icy_wind.o(.rodata);
        sound/songs/se_m_thunder_wave.o(.rodata);
        sound/songs/midi/se_m_comet_punch.o(.rodata);
        sound/songs/midi/se_m_mega_kick.o(.rodata);
        sound/songs/midi/se_m_mega_kick2.o(.rodata);
        sound/songs/se_m_crabhammer.o(.rodata);
        sound/songs/midi/se_m_jump_kick.o(.rodata);
        sound/songs/se_m_flame_wheel.o(.rodata);
        sound/songs/se_m_flame_wheel2.o(.rodata);
        sound/songs/se_m_flamethrower.o(.rodata);
        sound/songs/midi/se_m_fire_punch.o(.rodata);
        sound/songs/se_m_toxic.o(.rodata);
        sound/songs/se_m_sacred_fire.o(.rodata);
        sound/songs/se_m_sacred_fire2.o(.rodata);
        sound/songs/se_m_ember.o(.rodata);
        sound/songs/midi/se_m_take_down.o(.rodata);
        sound/songs/se_m_blizzard.o(.rodata);
        sound/songs/se_m_blizzard2.o(.rodata);
        sound/songs/midi/se_m_scratch.o(.rodata);
        sound/songs/midi/se_m_vicegrip.o(.rodata);
        sound/songs/midi/se_m_wing_attack.o(.rodata);
        sound/songs/midi/se_m_fly.o(.rodata);
        sound/songs/midi/se_m_sand_attack.o(.rodata);
        sound/songs/midi/se_m_razor_wind2.o(.rodata);
        sound/songs/se_m_bite.o(.rodata);
        sound/songs/midi/se_m_headbutt.o(.rodata);
        sound/songs/se_m_surf.o(.rodata);
        sound/songs/se_m_hydro_pump.o(.rodata);
        sound/songs/se_m_whirlpool.o(.rodata);
        sound/songs/midi/se_m_horn_attack.o(.rodata);
        sound/songs/midi/se_m_tail_whip.o(.rodata);
        sound/songs/se_m_mist.o(.rodata);
        sound/songs/se_m_poison_powder.o(.rodata);
        sound/songs/midi/se_m_bind.o(.rodata);
        sound/songs/se_m_dragon_rage.o(.rodata);
        sound/songs/se_m_sing.o(.rodata);
        sound/songs/se_m_perish_song.o(.rodata);
        sound/songs/midi/se_m_pay_day.o(.rodata);
        sound/songs/se_m_dig.o(.rodata);
        sound/songs/se_m_dizzy_punch.o(.rodata);
        sound/songs/se_m_self_destruct.o(.rodata);
        sound/songs/se_m_explosion.o(.rodata);
        sound/songs/se_m_absorb_2.o(.rodata);
        sound/songs/se_m_absorb.o(.rodata);
        sound/songs/se_m_screech.o(.rodata);
        sound/songs/se_m_bubble_beam.o(.rodata);
        sound/songs/se_m_bubble_beam2.o(.rodata);
        sound/songs/se_m_supersonic.o(.rodata);
        sound/songs/se_m_belly_drum.o(.rodata);
        sound/songs/se_m_metronome.o(.rodata);
        sound/songs/se_m_bonemerang.o(.rodata);
        sound/songs/se_m_lick.o(.rodata);
        sound/songs/se_m_psybeam.o(.rodata);
        sound/songs/se_m_faint_attack.o(.rodata);
        sound/songs/midi/se_m_swords_dance.o(.rodata);
        sound/songs/midi/se_m_leer.o(.rodata);
        sound/songs/se_m_swagger.o(.rodata);
        sound/songs/se_m_swagger2.o(.rodata);
        sound/songs/se_m_heal_bell.o(.rodata);
        sound/songs/se_m_confuse_ray.o(.rodata);
        sound/songs/se_m_snore.o(.rodata);
        sound/songs/se_m_brick_break.o(.rodata);
        sound/songs/se_m_giga_drain.o(.rodata);
        sound/songs/se_m_psybeam2.o(.rodata);
        sound/songs/se_m_solar_beam.o(.rodata);
        sound/songs/se_m_petal_dance.o(.rodata);
        sound/songs/se_m_teleport.o(.rodata);
        sound/songs/se_m_minimize.o(.rodata);
        sound/songs/se_m_sketch.o(.rodata);
        sound/songs/se_m_swift.o(.rodata);
        sound/songs/se_m_reflect.o(.rodata);
        sound/songs/se_m_barrier.o(.rodata);
        sound/songs/se_m_detect.o(.rodata);
        sound/songs/se_m_lock_on.o(.rodata);
        sound/songs/se_m_moonlight.o(.rodata);
        sound/songs/se_m_charm.o(.rodata);
        sound/songs/se_m_charge.o(.rodata);
        sound/songs/se_m_strength.o(.rodata);
        sound/songs/se_m_hyper_beam.o(.rodata);
        sound/songs/se_m_waterfall.o(.rodata);
        sound/songs/se_m_reversal.o(.rodata);
        sound/songs/se_m_acid_armor.o(.rodata);
        sound/songs/se_m_sandstorm.o(.rodata);
        sound/songs/se_m_tri_attack.o(.rodata);
        sound/songs/se_m_tri_attack2.o(.rodata);
        sound/songs/se_m_encore.o(.rodata);
        sound/songs/se_m_encore2.o(.rodata);
        sound/songs/se_m_baton_pass.o(.rodata);
        sound/songs/se_m_milk_drink.o(.rodata);
        sound/songs/se_m_attract.o(.rodata);
        sound/songs/se_m_attract2.o(.rodata);
        sound/songs/se_m_morning_sun.o(.rodata);
        sound/songs/se_m_flatter.o(.rodata);
        sound/songs/se_m_sand_tomb.o(.rodata);
        sound/songs/se_m_grasswhistle.o(.rodata);
        sound/songs/se_m_spit_up.o(.rodata);
        sound/songs/se_m_dive.o(.rodata);
        sound/songs/se_m_earthquake.o(.rodata);
        sound/songs/se_m_twister.o(.rodata);
        sound/songs/se_m_sweet_scent.o(.rodata);
        sound/songs/se_m_yawn.o(.rodata);
        sound/songs/se_m_sky_uppercut.o(.rodata);
        sound/songs/se_m_stat_increase.o(.rodata);
        sound/songs/se_m_heat_wave.o(.rodata);
        sound/songs/se_m_uproar.o(.rodata);
        sound/songs/se_m_hail.o(.rodata);
        sound/songs/se_m_cosmic_power.o(.rodata);
        sound/songs/se_m_teeter_dance.o(.rodata);
        sound/songs/se_m_stat_decrease.o(.rodata);
        sound/songs/se_m_haze.o(.rodata);
        sound/songs/se_m_hyper_beam2.o(.rodata);
        sound/songs/midi/se_door.o(.rodata);
        sound/songs/midi/se_card_flip.o(.rodata);
        sound/songs/midi/se_card_flipping.o(.rodata);
        sound/songs/midi/se_card_open.o(.rodata);
        sound/songs/midi/se_bag_cursor.o(.rodata);
        sound/songs/midi/se_bag_pocket.o(.rodata);
        sound/songs/midi/se_ball_click.o(.rodata);
        sound/songs/midi/se_shop.o(.rodata);
        sound/songs/midi/se_ss_anne_horn.o(.rodata);
        sound/songs/midi/se_help_open.o(.rodata);
        sound/songs/midi/se_help_close.o(.rodata);
        sound/songs/midi/se_help_error.o(.rodata);
        sound/songs/midi/se_deoxys_move.o(.rodata);
        sound/songs/midi/se_poke_jump_success.o(.rodata);
        sound/songs/midi/se_poke_jump_failure.o(.rodata);
        sound/songs/midi/mus_heal.o(.rodata);
        sound/songs/midi/mus_level_up.o(.rodata);
        sound/songs/midi/mus_obtain_item.o(.rodata);
        sound/songs/midi/mus_evolved.o(.rodata);
        sound/songs/midi/mus_obtain_badge.o(.rodata);
        sound/songs/midi/mus_obtain_tmhm.o(.rodata);
        sound/songs/midi/mus_obtain_berry.o(.rodata);
        sound/songs/midi/mus_evolution_intro.o(.rodata);
        sound/songs/midi/mus_evolution.o(.rodata);
        sound/songs/midi/mus_rs_vs_gym_leader.o(.rodata);
        sound/songs/midi/mus_rs_vs_trainer.o(.rodata);
        sound/songs/midi/mus_school.o(.rodata);
        sound/songs/midi/mus_slots_jackpot.o(.rodata);
        sound/songs/midi/mus_slots_win.o(.rodata);
        sound/songs/midi/mus_move_deleted.o(.rodata);
        sound/songs/midi/mus_too_bad.o(.rodata);
        sound/songs/midi/mus_follow_me.o(.rodata);
        sound/songs/midi/mus_game_corner.o(.rodata);
        sound/songs/midi/mus_rocket_hideout.o(.rodata);
        sound/songs/midi/mus_gym.o(.rodata);
        sound/songs/midi/mus_jigglypuff.o(.rodata);
        sound/songs/midi/mus_intro_fight.o(.rodata);
        sound/songs/midi/mus_title.o(.rodata);
        sound/songs/midi/mus_cinnabar.o(.rodata);
        sound/songs/midi/mus_lavender.o(.rodata);
        sound/songs/midi/mus_heal_unused.o(.rodata);
        sound/songs/midi/mus_cycling.o(.rodata);
        sound/songs/midi/mus_encounter_rocket.o(.rodata);
        sound/songs/midi/mus_encounter_girl.o(.rodata);
        sound/songs/midi/mus_encounter_boy.o(.rodata);
        sound/songs/midi/mus_hall_of_fame.o(.rodata);
        sound/songs/midi/mus_viridian_forest.o(.rodata);
        sound/songs/midi/mus_mt_moon.o(.rodata);
        sound/songs/midi/mus_poke_mansion.o(.rodata);
        sound/songs/midi/mus_credits.o(.rodata);
        sound/songs/midi/mus_route1.o(.rodata);
        sound/songs/midi/mus_route24.o(.rodata);
        sound/songs/midi/mus_route3.o(.rodata);
        sound/songs/midi/mus_route11.o(.rodata);
        sound/songs/midi/mus_victory_road.o(.rodata);
        sound/songs/midi/mus_vs_gym_leader.o(.rodata);
        sound/songs/midi/mus_vs_trainer.o(.rodata);
        sound/songs/midi/mus_vs_wild.o(.rodata);
        sound/songs/midi/mus_vs_champion.o(.rodata);
        sound/songs/midi/mus_pallet.o(.rodata);
        sound/songs/midi/mus_oak_lab.o(.rodata);
        sound/songs/midi/mus_oak.o(.rodata);
        sound/songs/midi/mus_poke_center.o(.rodata);
        sound/songs/midi/mus_ss_anne.o(.rodata);
        sound/songs/midi/mus_surf.o(.rodata);
        sound/songs/midi/mus_poke_tower.o(.rodata);
        sound/songs/midi/mus_silph.o(.rodata);
        sound/songs/midi/mus_fuchsia.o(.rodata);
        sound/songs/midi/mus_celadon.o(.rodata);
        sound/songs/midi/mus_victory_trainer.o(.rodata);
        sound/songs/midi/mus_victory_wild.o(.rodata);
        sound/songs/midi/mus_victory_gym_leader.o(.rodata);
        sound/songs/midi/mus_vermillion.o(.rodata);
        sound/songs/midi/mus_pewter.o(.rodata);
        sound/songs/midi/mus_encounter_rival.o(.rodata);
        sound/songs/midi/mus_rival_exit.o(.rodata);
        sound/songs/midi/mus_dex_rating.o(.rodata);
        sound/songs/midi/mus_obtain_key_item.o(.rodata);
        sound/songs/midi/mus_caught_intro.o(.rodata);
        sound/songs/midi/mus_photo.o(.rodata);
        sound/songs/midi/mus_game_freak.o(.rodata);
        sound/songs/midi/mus_caught.o(.rodata);
        sound/songs/midi/mus_new_game_instruct.o(.rodata);
        sound/songs/midi/mus_new_game_intro.o(.rodata);
        sound/songs/midi/mus_new_game_exit.o(.rodata);
        sound/songs/midi/mus_poke_jump.o(.rodata);
        sound/songs/midi/mus_union_room.o(.rodata);
        sound/songs/midi/mus_net_center.o(.rodata);
        sound/songs/midi/mus_mystery_gift.o(.rodata);
        sound/songs/midi/mus_berry_pick.o(.rodata);
        sound/songs/midi/mus_sevii_cave.o(.rodata);
        sound/songs/midi/mus_teachy_tv_show.o(.rodata);
        sound/songs/midi/mus_sevii_route.o(.rodata);
        sound/songs/midi/mus_sevii_dungeon.o(.rodata);
        sound/songs/midi/mus_sevii_123.o(.rodata);
        sound/songs/midi/mus_sevii_45.o(.rodata);
        sound/songs/midi/mus_sevii_67.o(.rodata);
        sound/songs/midi/mus_poke_flute.o(.rodata);
        sound/songs/midi/mus_vs_deoxys.o(.rodata);
        sound/songs/midi/mus_vs_mewtwo.o(.rodata);
        sound/songs/midi/mus_vs_legend.o(.rodata);
        sound/songs/midi/mus_encounter_gym_leader.o(.rodata);
        sound/songs/midi/mus_encounter_deoxys.o(.rodata);
        sound/songs/midi/mus_trainer_tower.o(.rodata);
        sound/songs/midi/mus_slow_pallet.o(.rodata);
        sound/songs/midi/mus_teachy_tv_menu.o(.rodata);
    } > ROM =0

    new_sound_data :
    ALIGN(4)
    {
        data/sound_data_2.o(.rodata);
    } > ROM =0

    new_song_data :
    ALIGN(4)
    {
        sound/songs/midi/mus_hg_ecruteak.o(.rodata);
        sound/songs/midi/mus_hg_national_park.o(.rodata);
        sound/songs/midi/mus_hg_oak_theme.o(.rodata);
        sound/songs/midi/mus_hg_vs_raikou.o(.rodata);
        sound/songs/midi/mus_hg_vs_entei.o(.rodata);
        sound/songs/midi/mus_hg_vs_suicune.o(.rodata);
        sound/songs/midi/mus_hg_vs_lugia.o(.rodata);
        sound/songs/midi/mus_hg_vs_ho_oh.o(.rodata);
        sound/songs/midi/mus_hg_vs_kyogre_groudon.o(.rodata);
    
        sound/songs/midi/mus_bw_intro2.o(.rodata);
        sound/songs/midi/mus_bw_title.o(.rodata);
        sound/songs/midi/mus_bw_starting.o(.rodata);
        sound/songs/midi/mus_bw_starting2.o(.rodata);
        sound/songs/midi/mus_bw_route4.o(.rodata);
        sound/songs/midi/mus_bw_aspertia.o(.rodata);
        sound/songs/midi/mus_bw_lab.o(.rodata);
        sound/songs/midi/mus_bw_obtain_key_item.o(.rodata);
        sound/songs/midi/mus_bw_evolved.o(.rodata);
        sound/songs/midi/mus_bw_level_up.o(.rodata);
        sound/songs/midi/mus_bw_obtain_egg.o(.rodata);
        sound/songs/midi/mus_bw_obtain_item.o(.rodata);
        sound/songs/midi/mus_bw_encounter_n.o(.rodata);
        sound/songs/midi/mus_bw_victory_trainer.o(.rodata);
        sound/songs/midi/mus_bw_heal.o(.rodata);
        sound/songs/midi/mus_bw_obtain_badge.o(.rodata);
        sound/songs/midi/mus_bw_obtain_tmhm.o(.rodata);
        sound/songs/midi/mus_bw_obtain_berry.o(.rodata);
        sound/songs/midi/mus_bw_move_deleted.o(.rodata);
        sound/songs/midi/mus_bw_dex_rating.o(.rodata);
        sound/songs/midi/mus_bw_evolution_intro.o(.rodata);
        sound/songs/midi/mus_bw_evolution.o(.rodata);
        sound/songs/midi/mus_bw_vs_trainer.o(.rodata);
        sound/songs/midi/mus_bw_low_hp.o(.rodata);
        sound/songs/midi/mus_bw_vs_wild.o(.rodata);
        sound/songs/midi/mus_bw_victory_wild.o(.rodata);
        sound/songs/midi/mus_bw_route1.o(.rodata);
        sound/songs/midi/mus_bw_vs_n.o(.rodata);
        sound/songs/midi/mus_bw_victory_plasma.o(.rodata);
        sound/songs/midi/mus_bw_victory_boss.o(.rodata);
        sound/songs/midi/mus_bw_victory_gym_leader.o(.rodata);
        sound/songs/midi/mus_bw_poke_center.o(.rodata);
        sound/songs/midi/mus_bw_striaton.o(.rodata);
        sound/songs/midi/mus_bw_route2.o(.rodata);
        sound/songs/midi/mus_bw_dreamyard.o(.rodata);
        sound/songs/midi/mus_bw_mart.o(.rodata);
        sound/songs/midi/mus_bw_gate.o(.rodata);
        sound/songs/midi/mus_bw_gym.o(.rodata);
        sound/songs/midi/mus_bw_nacrene.o(.rodata);
        sound/songs/midi/mus_bw_vs_gym_leader_final.o(.rodata);
        sound/songs/midi/mus_bw_vs_gym_leader.o(.rodata);
        sound/songs/midi/mus_bw_follow_me.o(.rodata);
        sound/songs/midi/mus_bw_encounter_boy.o(.rodata);
        sound/songs/midi/mus_bw_encounter_girl.o(.rodata);
        sound/songs/midi/mus_bw_encounter_plasma.o(.rodata);
        sound/songs/midi/mus_bw_encounter_twins.o(.rodata);
        sound/songs/midi/mus_bw_encounter_cool.o(.rodata);
        sound/songs/midi/mus_bw_encounter_roughneck.o(.rodata);
        sound/songs/midi/mus_bw_encounter_female.o(.rodata);
        sound/songs/midi/mus_bw_encounter_cyclist.o(.rodata);
        sound/songs/midi/mus_bw_encounter_intense.o(.rodata);
        sound/songs/midi/mus_bw_encounter_suspicious.o(.rodata);
        sound/songs/midi/mus_bw_encounter_pokefan.o(.rodata);
        sound/songs/midi/mus_bw_encounter_hiker.o(.rodata);
        sound/songs/midi/mus_bw_encounter_clerk.o(.rodata);
        sound/songs/midi/mus_bw_encounter_rich.o(.rodata);
        sound/songs/midi/mus_bw_chargestone_cave.o(.rodata);
        sound/songs/midi/mus_bw_cold_storage.o(.rodata);
        sound/songs/midi/mus_bw_dragonspiral_tower.o(.rodata);
        sound/songs/midi/mus_bw_vs_plasma.o(.rodata);
        sound/songs/midi/mus_bw_follow_me1.o(.rodata);
        sound/songs/midi/mus_bw_vs_elite_four.o(.rodata);
        sound/songs/midi/mus_bw_vs_ghetsis.o(.rodata);
        sound/songs/midi/mus_bw_vs_n_final.o(.rodata);
        sound/songs/midi/mus_bw_vs_kyurem.o(.rodata);
        sound/songs/midi/mus_bw_vs_legend.o(.rodata);
        sound/songs/midi/mus_bw_vs_strong_wild.o(.rodata);
        sound/songs/midi/mus_bw_vs_regi.o(.rodata);
        sound/songs/midi/mus_bw_icirrus.o(.rodata);
        sound/songs/midi/mus_bw_accumula.o(.rodata);
        sound/songs/midi/mus_bw_castelia.o(.rodata);
        sound/songs/midi/mus_bw_route6.o(.rodata);
        sound/songs/midi/mus_bw_bicycle.o(.rodata);
        sound/songs/midi/mus_bw_royal_unova.o(.rodata);
        sound/songs/midi/mus_bw_opelucid_white.o(.rodata);
        sound/songs/midi/mus_bw_opelucid_black.o(.rodata);
        sound/songs/midi/mus_bw_driftveil.o(.rodata);
        sound/songs/midi/mus_bw_plasma.o(.rodata);
        sound/songs/midi/mus_bw_nimbasa.o(.rodata);
        sound/songs/midi/mus_bw_n_castle_bridge.o(.rodata);
        sound/songs/midi/mus_bw_pokemon_league.o(.rodata);
        sound/songs/midi/mus_bw_victory_road.o(.rodata);
        sound/songs/midi/mus_bw_surf.o(.rodata);
        sound/songs/midi/mus_bw_hall_of_fame.o(.rodata);
        sound/songs/midi/mus_bw_n_farewell.o(.rodata);
        sound/songs/midi/mus_bw_someones_entralink.o(.rodata);
    } > ROM =0

    extra :
    ALIGN(4)
    {
        src/*.o(.text);
        src/*.o(.rodata);
        data/*.o(.rodata);
    } > ROM =0


    /* DWARF 2 sections */
    .debug_aranges  0 : { *(.debug_aranges) }
    .debug_pubnames 0 : { *(.debug_pubnames) }
    .debug_info     0 : { *(.debug_info) }
    .debug_abbrev   0 : { *(.debug_abbrev) }
    .debug_line     0 : { *(.debug_line) }
    .debug_frame    0 : { *(.debug_frame) }
    .debug_str      0 : { *(.debug_str) }
    .debug_loc      0 : { *(.debug_loc) }
    .debug_macinfo  0 : { *(.debug_macinfo) }

    /* Discard everything not specifically mentioned above. */
    /DISCARD/ :
    {
        *(*);
    }
}
