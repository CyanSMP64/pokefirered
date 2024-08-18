// This determines how much higher above the usual position the enemy Pokémon
// is during battle. Species that float or fly have nonzero values.
const u8 gEnemyMonElevation[NUM_SPECIES] =
{
    [SPECIES_BUTTERFREE] = 13,
    [SPECIES_BEEDRILL] = 10,
    [SPECIES_PIDGEOT] = 8,
    [SPECIES_FEAROW] = 7,
    [SPECIES_ZUBAT] = 12,
    [SPECIES_GOLBAT] = 12,
    [SPECIES_VENOMOTH] = 16,
    [SPECIES_TENTACOOL] = 8,
    [SPECIES_TENTACRUEL] = 8,
    [SPECIES_MAGNEMITE] = 16,
    [SPECIES_MAGNETON] = 12,
    [SPECIES_CLOYSTER] = 9,
    [SPECIES_GASTLY] = 10,
    [SPECIES_HAUNTER] = 14,
    [SPECIES_KOFFING] = 14,
    [SPECIES_WEEZING] = 3,
    [SPECIES_HORSEA] = 16,
    [SPECIES_SEADRA] = 10,
    [SPECIES_GOLDEEN] = 13,
    [SPECIES_SEAKING] = 12,
    [SPECIES_MAGIKARP] = 10,
    [SPECIES_GYARADOS] = 1,
    [SPECIES_KABUTO] = 14,
    [SPECIES_AERODACTYL] = 9,
    [SPECIES_ZAPDOS] = 11,
    [SPECIES_MEW] = 16,
    [SPECIES_LEDIAN] = 10,
    [SPECIES_CROBAT] = 10,
    [SPECIES_CHINCHOU] = 16,
    [SPECIES_LANTURN] = 12,
    [SPECIES_TOGETIC] = 8,
    [SPECIES_HOPPIP] = 16,
    [SPECIES_SKIPLOOM] = 16,
    [SPECIES_JUMPLUFF] = 13,
    [SPECIES_YANMA] = 16,
    [SPECIES_MURKROW] = 16,
    [SPECIES_MISDREAVUS] = 16,
    [SPECIES_UNOWN] = 13,
    [SPECIES_GLIGAR] = 8,
    [SPECIES_QWILFISH] = 6,
    [SPECIES_REMORAID] = 14,
    [SPECIES_MANTINE] = 16,
    [SPECIES_KINGDRA] = 6,
    [SPECIES_PORYGON2] = 14,
    [SPECIES_LUGIA] = 8,
    [SPECIES_HO_OH] = 7,
    [SPECIES_CELEBI] = 15,
    [SPECIES_BEAUTIFLY] = 13,
    [SPECIES_DUSTOX] = 12,
    [SPECIES_NINJASK] = 15,
    [SPECIES_SHEDINJA] = 11,
    [SPECIES_TAILLOW] = 13,
    [SPECIES_SWELLOW] = 6,
    [SPECIES_WINGULL] = 15,
    [SPECIES_PELIPPER] = 8,
    [SPECIES_MASQUERAIN] = 10,
    [SPECIES_WAILORD] = 8,
    [SPECIES_CLAYDOL] = 10,
    [SPECIES_FLYGON] = 4,
    [SPECIES_LUVDISC] = 9,
    [SPECIES_VOLBEAT] = 9,
    [SPECIES_ILLUMISE] = 9,
    [SPECIES_GLALIE] = 12,
    [SPECIES_LUNATONE] = 8,
    [SPECIES_SOLROCK] = 3,
    [SPECIES_BARBOACH] = 6,
    [SPECIES_WHISCASH] = 8,
    [SPECIES_FEEBAS] = 8,
    [SPECIES_DUSKULL] = 13,
    [SPECIES_SHUPPET] = 11,
    [SPECIES_CASTFORM] = 14,
    [SPECIES_CASTFORM_SUNNY] = 11,
    [SPECIES_CASTFORM_RAINY] = 10,
    [SPECIES_CASTFORM_SNOWY] = 8,
    [SPECIES_RELICANTH] = 4,
    [SPECIES_ANORITH] = 7,
    [SPECIES_BELDUM] = 10,
    [SPECIES_RAYQUAZA] = 7,
    [SPECIES_LATIAS] = 12,
    [SPECIES_LATIOS] = 7,
    [SPECIES_JIRACHI] = 16,
    [SPECIES_CHIMECHO] = 16,
    // Gen 4
    [SPECIES_BURMY] = 12,
    [SPECIES_BURMY_SANDY_CLOAK] = 10,
    [SPECIES_BURMY_TRASH_CLOAK] = 6,
    [SPECIES_WORMADAM] = 8,
    [SPECIES_WORMADAM_SANDY_CLOAK] = 8,
    [SPECIES_WORMADAM_TRASH_CLOAK] = 8,
    [SPECIES_MOTHIM] = 13,
    [SPECIES_COMBEE] = 16,
    [SPECIES_VESPIQUEN] = 10,
    [SPECIES_DRIFLOON] = 8,
    [SPECIES_DRIFBLIM] = 7,
    [SPECIES_MISMAGIUS] = 8,
    [SPECIES_BRONZOR] = 10,
    [SPECIES_BRONZONG] = 8,
    [SPECIES_CARNIVINE] = 8,
    [SPECIES_FINNEON] = 10,
    [SPECIES_LUMINEON] = 10,
    [SPECIES_MANTYKE] = 14,
    [SPECIES_MAGNEZONE] = 4,
    [SPECIES_TOGEKISS] = 10,
    [SPECIES_YANMEGA] = 13,
    [SPECIES_GLISCOR] = 9,
    [SPECIES_PORYGON_Z] = 9,
    [SPECIES_PROBOPASS] = 5,
    [SPECIES_DUSKNOIR] = 7,
    [SPECIES_FROSLASS] = 2,
    [SPECIES_ROTOM] = 10,
    [SPECIES_UXIE] = 14,
    [SPECIES_MESPRIT] = 12,
    [SPECIES_AZELF] = 10,
    [SPECIES_PHIONE] = 10,
    [SPECIES_MANAPHY] = 10,
    [SPECIES_DARKRAI] = 8,
    // Gen 5
    [SPECIES_MUNNA] = 9,
    [SPECIES_MUSHARNA] = 5,
    [SPECIES_WOOBAT] = 16,
    [SPECIES_SWOOBAT] = 9,
    [SPECIES_SIGILYPH] = 7,
    [SPECIES_YAMASK] = 10,
    [SPECIES_ARCHEOPS] = 8,
    [SPECIES_SOLOSIS] = 14,
    [SPECIES_DUOSION] = 7,
    [SPECIES_REUNICLUS] = 8,
    [SPECIES_BASCULIN] = 8,
    [SPECIES_BASCULIN_BLUE_STRIPED] = 8,
    [SPECIES_EMOLGA] = 16,
    [SPECIES_FERROTHORN] = 10,
    [SPECIES_TYNAMO] = 16,
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
    [SPECIES_FLOETTE_ETERNAL_FLOWER] = 4,
    [SPECIES_HONEDGE] = 4,
    [SPECIES_DOUBLADE] = 5,
    [SPECIES_AEGISLASH] = 3,
    [SPECIES_SPRITZEE] = 11,
    [SPECIES_INKAY] = 14,
    [SPECIES_CLAWITZER] = 6,
    [SPECIES_CARBINK] = 4,
    [SPECIES_KLEFKI] = 5,
    [SPECIES_PHANTUMP] = 5,
    [SPECIES_PUMPKABOO] = 7,
    [SPECIES_PUMPKABOO_SMALL] = 7,
    [SPECIES_PUMPKABOO_LARGE] = 7,
    [SPECIES_PUMPKABOO_SUPER] = 7,
    [SPECIES_NOIBAT] = 8,
    [SPECIES_YVELTAL] = 5,
    [SPECIES_HOOPA] = 13,
    // Gen 7
    [SPECIES_VIKAVOLT] = 8,
    [SPECIES_CUTIEFLY] = 10,
    [SPECIES_RIBOMBEE] = 6,
    [SPECIES_WISHIWASHI] = 9,
    [SPECIES_WISHIWASHI_SCHOOL] = 4,
    [SPECIES_COMFEY] = 8,
    [SPECIES_MINIOR] = 16,
    [SPECIES_MINIOR_CORE_RED] = 16,
    [SPECIES_BRUXISH] = 9,
    [SPECIES_TAPU_KOKO] = 9,
    [SPECIES_TAPU_LELE] = 8,
    [SPECIES_TAPU_BULU] = 5,
    [SPECIES_TAPU_FINI] = 6,
    [SPECIES_COSMOG] = 10,
    [SPECIES_COSMOEM] = 3,
    [SPECIES_LUNALA] = 6,
    [SPECIES_NIHILEGO] = 6,
    [SPECIES_KARTANA] = 8,
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
    [SPECIES_OVERQWIL] = 6,
    [SPECIES_ENAMORUS] = 7,
    [SPECIES_TADBULB] = 12,
    [SPECIES_GLIMMET] = 8,
    [SPECIES_GLIMMORA] = 7,
    [SPECIES_VELUZA] = 5,
    [SPECIES_DONDOZO] = 5,
    [SPECIES_FLUTTER_MANE] = 8,
    [SPECIES_IRON_JUGULIS] = 7,
    [SPECIES_IRON_MOTH] = 4,
    [SPECIES_CHI_YU] = 8,
    [SPECIES_POLTCHAGEIST] = 11,
    [SPECIES_SINISTCHA] = 9,
    [SPECIES_PECHARUNT] = 16,
    // Alolan Forms
    [SPECIES_RAICHU_ALOLAN] = 4,
    // Galarian Forms
    [SPECIES_WEEZING_GALARIAN] = 6,
    [SPECIES_ARTICUNO_GALARIAN] = 10,
    [SPECIES_YAMASK_GALARIAN] = 10,
    [SPECIES_BRAVIARY_HISUIAN] = 8,
    [SPECIES_QWILFISH_HISUIAN] = 16,
    [SPECIES_BASCULIN_WHITE_STRIPED] = 8,
    // Other Forms
    [SPECIES_BEEDRILL_MEGA] = 5,
    [SPECIES_PIDGEOT_MEGA] = 9,
    [SPECIES_ALAKAZAM_MEGA] = 7,
    [SPECIES_PINSIR_MEGA] = 6,
    [SPECIES_AERODACTYL_MEGA] = 6,
    [SPECIES_ALTARIA_MEGA] = 4,
    [SPECIES_GLALIE_MEGA] = 5,
    [SPECIES_METAGROSS_MEGA] = 5,
    [SPECIES_LATIAS_MEGA] = 8,
    [SPECIES_LATIOS_MEGA] = 4,
    [SPECIES_DIANCIE_MEGA] = 5,
    [SPECIES_RAYQUAZA_MEGA] = 7,
    [SPECIES_GIRATINA_ORIGIN] = 4,
    [SPECIES_ROTOM_HEAT] = 6,
    [SPECIES_ROTOM_WASH] = 6,
    [SPECIES_ROTOM_FROST] = 6,
    [SPECIES_ROTOM_FAN] = 6,
    [SPECIES_ROTOM_MOW] = 6,
    [SPECIES_THUNDURUS_THERIAN] = 7,
    [SPECIES_AEGISLASH_BLADE] = 3,
    [SPECIES_NECROZMA_DAWN_WINGS] = 6,
    [SPECIES_NECROZMA_ULTRA] = 5,
    [SPECIES_ETERNATUS_ETERNAMAX] = 12,
};
