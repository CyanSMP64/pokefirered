// This determines how much higher above the usual position the enemy Pokémon
// is during battle. Species that float or fly have nonzero values.
const u8 gEnemyMonElevation[NUM_SPECIES] =
{
    [SPECIES_BUTTERFREE] = 13,
    [SPECIES_BEEDRILL] = 9,
    [SPECIES_PIDGEOT] = 5,
    [SPECIES_FEAROW] = 6,
    [SPECIES_ZUBAT] = 12,
    [SPECIES_GOLBAT] = 10,
    [SPECIES_VENOMOTH] = 16,
    [SPECIES_MAGNEMITE] = 17,
    [SPECIES_MAGNETON] = 9,
    [SPECIES_GASTLY] = 10,
    [SPECIES_HAUNTER] = 14,
    [SPECIES_KOFFING] = 14,
    [SPECIES_WEEZING] = 3,
    [SPECIES_GOLDEEN] = 8,
    [SPECIES_SEAKING] = 4,
    [SPECIES_GYARADOS] = 2,
    [SPECIES_AERODACTYL] = 9,
    [SPECIES_ZAPDOS] = 8,
    [SPECIES_MEW] = 11,
    [SPECIES_LEDIAN] = 10,
    [SPECIES_CROBAT] = 9,
    [SPECIES_CHINCHOU] = 8,
    [SPECIES_LANTURN] = 8,
    [SPECIES_TOGETIC] = 8,
    [SPECIES_HOPPIP] = 15,
    [SPECIES_SKIPLOOM] = 18,
    [SPECIES_JUMPLUFF] = 13,
    [SPECIES_YANMA] = 17,
    [SPECIES_MURKROW] = 18,
    [SPECIES_MISDREAVUS] = 14,
    [SPECIES_UNOWN] = 8,
    [SPECIES_GLIGAR] = 8,
    [SPECIES_QWILFISH] = 5,
    [SPECIES_MANTINE] = 12,
    [SPECIES_PORYGON2] = 14,
    [SPECIES_LUGIA] = 6,
    [SPECIES_HO_OH] = 6,
    [SPECIES_CELEBI] = 15,
    [SPECIES_BEAUTIFLY] = 10,
    [SPECIES_DUSTOX] = 12,
    [SPECIES_NINJASK] = 10,
    [SPECIES_SHEDINJA] = 11,
    [SPECIES_SWELLOW] = 6,
    [SPECIES_WINGULL] = 15,
    [SPECIES_PELIPPER] = 8,
    [SPECIES_MASQUERAIN] = 10,
    [SPECIES_BALTOY] = 8,
    [SPECIES_CLAYDOL] = 10,
    [SPECIES_FLYGON] = 7,
    [SPECIES_LUVDISC] = 12,
    [SPECIES_GLALIE] = 12,
    [SPECIES_LUNATONE] = 13,
    [SPECIES_SOLROCK] = 4,
    [SPECIES_BARBOACH] = 8,
    [SPECIES_DUSKULL] = 13,
    [SPECIES_SHUPPET] = 14,
    [SPECIES_CASTFORM] = 13,
    [SPECIES_CASTFORM_SUNNY] = 14,
    [SPECIES_CASTFORM_RAINY] = 13,
    [SPECIES_CASTFORM_SNOWY] = 13,
    [SPECIES_BELDUM] = 10,
    [SPECIES_RAYQUAZA] = 6,
    [SPECIES_LATIAS] = 12,
    [SPECIES_LATIOS] = 6,
    [SPECIES_JIRACHI] = 14,
    [SPECIES_CHIMECHO] = 16,
    // Gen 4
    [SPECIES_BURMY] = 8,
    [SPECIES_BURMY_SANDY_CLOAK] = 8,
    [SPECIES_BURMY_TRASH_CLOAK] = 8,
    [SPECIES_WORMADAM] = 8,
    [SPECIES_WORMADAM_SANDY_CLOAK] = 8,
    [SPECIES_WORMADAM_TRASH_CLOAK] = 8,
    [SPECIES_MOTHIM] = 10,
    [SPECIES_COMBEE] = 14,
    [SPECIES_VESPIQUEN] = 10,
    [SPECIES_DRIFLOON] = 9,
    [SPECIES_DRIFBLIM] = 7,
    [SPECIES_MISMAGIUS] = 3,
    [SPECIES_BRONZOR] = 10,
    [SPECIES_BRONZONG] = 8,
    [SPECIES_CARNIVINE] = 8,
    [SPECIES_MANTYKE] = 14,
    [SPECIES_MAGNEZONE] = 4,
    [SPECIES_TOGEKISS] = 14,
    [SPECIES_YANMEGA] = 6,
    [SPECIES_GLISCOR] = 9,
    [SPECIES_PORYGON_Z] = 9,
    [SPECIES_PROBOPASS] = 6,
    [SPECIES_DUSKNOIR] = 8,
    [SPECIES_FROSLASS] = 6,
    [SPECIES_ROTOM] = 10,
    [SPECIES_UXIE] = 6,
    [SPECIES_MESPRIT] = 6,
    [SPECIES_AZELF] = 6,
    [SPECIES_CRESSELIA] = 7,
    [SPECIES_PHIONE] = 8,
    [SPECIES_MANAPHY] = 7,
    [SPECIES_DARKRAI] = 4,
    // Gen 5
    [SPECIES_MUNNA] = 9,
    [SPECIES_MUSHARNA] = 5,
    [SPECIES_WOOBAT] = 19,
    [SPECIES_SWOOBAT] = 12,
    [SPECIES_SIGILYPH] = 7,
    [SPECIES_YAMASK] = 10,
    [SPECIES_ARCHEOPS] = 8,
    [SPECIES_SOLOSIS] = 14,
    [SPECIES_DUOSION] = 7,
    [SPECIES_REUNICLUS] = 8,
    [SPECIES_BASCULIN] = 8,
    [SPECIES_EMOLGA] = 19,
    [SPECIES_FERROTHORN] = 10,
    [SPECIES_TYNAMO] = 16,
    [SPECIES_EELEKTRIK] = 8,
    [SPECIES_EELEKTROSS] = 8,
    [SPECIES_KLINK] = 11,
    [SPECIES_KLANG] = 6,
    [SPECIES_KLINKLANG] = 4,
    [SPECIES_CRYOGONAL] = 3,
    [SPECIES_LAMPENT] = 4,
    [SPECIES_CHANDELURE] = 8,
    [SPECIES_BRAVIARY] = 8,
    [SPECIES_HYDREIGON] = 3,
    [SPECIES_VOLCARONA] = 6,
    [SPECIES_TORNADUS] = 7,
    [SPECIES_THUNDURUS] = 7,
    [SPECIES_LANDORUS] = 7,
    [SPECIES_MELOETTA] = 8,
    [SPECIES_MELOETTA_PIROUETTE] = 8,
    // Gen 6
    [SPECIES_FLETCHINDER] = 9,
    [SPECIES_TALONFLAME] = 7,
    [SPECIES_VIVILLON] = 9,
    [SPECIES_FLABEBE] = 6,
    [SPECIES_FLOETTE] = 4,
    [SPECIES_HONEDGE] = 4,
    [SPECIES_DOUBLADE] = 5,
    [SPECIES_AEGISLASH] = 3,
    [SPECIES_SPRITZEE] = 11,
    [SPECIES_INKAY] = 14,
    [SPECIES_CARBINK] = 4,
    [SPECIES_KLEFKI] = 5,
    [SPECIES_PHANTUMP] = 5,
    [SPECIES_NOIBAT] = 8,
    [SPECIES_YVELTAL] = 5,
    [SPECIES_HOOPA] = 13,
    // Gen 7
    [SPECIES_VIKAVOLT] = 8,
    [SPECIES_CUTIEFLY] = 10,
    [SPECIES_RIBOMBEE] = 6,
    [SPECIES_WISHIWASHI] = 9,
    [SPECIES_COMFEY] = 8,
    [SPECIES_MINIOR] = 17,
    [SPECIES_MINIOR_CORE_RED] = 17,
    [SPECIES_TAPU_KOKO] = 9,
    [SPECIES_TAPU_LELE] = 8,
    [SPECIES_TAPU_BULU] = 5,
    [SPECIES_TAPU_FINI] = 6,
    [SPECIES_COSMOG] = 10,
    [SPECIES_COSMOEM] = 3,
    [SPECIES_LUNALA] = 6,
    [SPECIES_NIHILEGO] = 6,
    [SPECIES_KARTANA] = 3,
    [SPECIES_NECROZMA] = 6,
    [SPECIES_POIPOLE] = 9,
    [SPECIES_NAGANADEL] = 7,
    // Gen 8
    [SPECIES_CORVISQUIRE] = 10,
    [SPECIES_ORBEETLE] = 8,
    [SPECIES_FLAPPLE] = 9,
    [SPECIES_ARROKUDA] = 8,
    [SPECIES_SINISTEA] = 9,
    [SPECIES_POLTEAGEIST] = 11,
    [SPECIES_RUNERIGUS] = 5,
    [SPECIES_MILCERY] = 10,
    [SPECIES_FROSMOTH] = 7,
    [SPECIES_DREEPY] = 5,
    [SPECIES_DRAKLOAK] = 5,
    [SPECIES_DRAGAPULT] = 3,
    [SPECIES_ETERNATUS] = 4,
    [SPECIES_REGIELEKI] = 8,
    [SPECIES_REGIDRAGO] = 5,
    [SPECIES_ENAMORUS] = 6,
    [SPECIES_TADBULB] = 12,
    [SPECIES_GLIMMET] = 8,
    [SPECIES_GLIMMORA] = 7,
    [SPECIES_VELUZA] = 5,
    [SPECIES_DONDOZO] = 5,
    [SPECIES_FLUTTER_MANE] = 5,
    [SPECIES_IRON_JUGULIS] = 7,
    [SPECIES_IRON_MOTH] = 4,
    [SPECIES_CHI_YU] = 8,
    [SPECIES_ROARING_MOON] = 7,
    [SPECIES_POLTCHAGEIST] = 11,
    [SPECIES_SINISTCHA] = 9,
    // Alolan Forms
    [SPECIES_RAICHU_ALOLAN] = 4,
    // Galarian Forms
    [SPECIES_WEEZING_GALARIAN] = 6,
    [SPECIES_ARTICUNO_GALARIAN] = 10,
    [SPECIES_YAMASK_GALARIAN] = 7,
    [SPECIES_BRAVIARY_HISUIAN] = 3,
    [SPECIES_QWILFISH_HISUIAN] = 10,
    [SPECIES_BASCULIN_WHITE_STRIPED] = 8,
    // Other Forms
    [SPECIES_BEEDRILL_MEGA] = 5,
    [SPECIES_PIDGEOT_MEGA] = 9,
    [SPECIES_ALAKAZAM_MEGA] = 7,
    [SPECIES_PINSIR_MEGA] = 6,
    [SPECIES_AERODACTYL_MEGA] = 6,
    [SPECIES_ALTARIA_MEGA] = 4,
    [SPECIES_GLALIE_MEGA] = 5,
    [SPECIES_LATIAS_MEGA] = 8,
    [SPECIES_LATIOS_MEGA] = 4,
    [SPECIES_RAYQUAZA_MEGA] = 4,
    [SPECIES_GIRATINA_ORIGIN] = 4,
    [SPECIES_ROTOM_HEAT] = 6,
    [SPECIES_ROTOM_WASH] = 6,
    [SPECIES_ROTOM_FROST] = 6,
    [SPECIES_ROTOM_FAN] = 6,
    [SPECIES_ROTOM_MOW] = 6,
    [SPECIES_THUNDURUS_THERIAN] = 7,
    [SPECIES_NECROZMA_DAWN_WINGS] = 6,
    [SPECIES_NECROZMA_ULTRA] = 5,
};
