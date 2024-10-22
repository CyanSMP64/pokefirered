#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <capstone/capstone.h>
#include "global.h"
#include "elf.h"
#include "util.h"

// Get constants from the repository
#include "constants/global.h"
#include "constants/species.h"
#include "constants/trainers.h"
#include "constants/maps.h"
#include "constants/items.h"
#include "constants/abilities.h"
#include "constants/moves.h"
#include "constants/pokemon.h"
#include "constants/event_objects.h"

/*
 * ---------------------------------------------------------
 * Type definitions
 * ---------------------------------------------------------
 */

#define len(arr) (sizeof(arr)/sizeof(*arr))

struct TMText {
    int tmno;
    int mapgp;
    int mapno;
    int scriptno;
    int offset;
    const char * text;
};

//struct TMText {
//    int tmno;
//    const char * label;
//    const char * text;
//};

struct StaticPokemon {
    const char * speciesLabel;
    int speciesOffset;
    const char * levelLabel;
    int levelOffset;
    const char * comment;
};

struct PlotlessKeyItem {
    uint16_t vanillaItem;
    const char * label;
    int offset;
};

static csh sCapstone;

static Elf32_Shdr * sh_text;
static Elf32_Shdr * sh_rodata;
static Elf32_Shdr * sh_scripts;

/*
 * ---------------------------------------------------------
 * Data
 * ---------------------------------------------------------
 */

static const char * gTypeNames[] = {
    "Normal",
    "Fighting",
    "Flying",
    "Poison",
    "Ground",
    "Rock",
    "Grass", // "Bug",
    "Ghost",
    "Steel",
    "Ghost", // "Mystery",
    "Fire",
    "Water",
    "Grass",
    "Electric",
    "Psychic",
    "Ice",
    "Dragon",
    "Dark",
    "Psychic" // "Fairy"
};

static const char * gPokeMarts[] = {
    "TrainerTower_Lobby_Mart_Items",
    "TwoIsland_Items_ShopInitial",
    "TwoIsland_Items_ShopExpanded1",
    "TwoIsland_Items_ShopExpanded2",
    "TwoIsland_Items_ShopExpanded3",
    "ViridianCity_Mart_Items",
    "PewterCity_Mart_Items",
    "CeruleanCity_Mart_Items",
    "LavenderTown_Mart_Items",
    "VermilionCity_Mart_Items",
    "CeladonCity_DepartmentStore_2F_Items",
    "CeladonCity_DepartmentStore_2F_TMs",
    "CeladonCity_DepartmentStore_4F_Items",
    "CeladonCity_DepartmentStore_5F_XItems",
    "CeladonCity_DepartmentStore_5F_Vitamins",
    "FuchsiaCity_Mart_Items",
    "CinnabarIsland_Mart_Items",
    "IndigoPlateau_PokemonCenter_1F_Items",
    "SaffronCity_Mart_Items",
    "SevenIsland_Mart_Items",
    "ThreeIsland_Mart_Items",
    "FourIsland_Mart_Items",
    "SixIsland_Mart_Items"
};

const struct StaticPokemon gStaticPokemon[][5] = {
    {{"CeladonCity_Condominiums_RoofRoom_EventScript_EeveeBall", 5, "CeladonCity_Condominiums_RoofRoom_EventScript_EeveeBall", 0xA, " // Eevee in Celadon Condominiums"}, {"CeladonCity_Condominiums_RoofRoom_EventScript_EeveeBall", 8, NULL, 0x0, NULL}, {"CeladonCity_Condominiums_RoofRoom_EventScript_GetEeveeParty", 15, NULL, 0x0, NULL}, {"CeladonCity_Condominiums_RoofRoom_EventScript_GetEeveePC", 15, NULL, 0x0, NULL}},
    {{"SaffronCity_Dojo_EventScript_HitmonleeBall", 12, "SaffronCity_Dojo_EventScript_GiveHitmon", 0x4, " // Hitmonlee in Fighting Dojo"}, {"SaffronCity_Dojo_EventScript_HitmonleeBall", 19, NULL, 0x0, NULL}},
    {{"SaffronCity_Dojo_EventScript_HitmonchanBall", 12, "SaffronCity_Dojo_EventScript_GiveHitmon", 0x4, " // Hitmonchan in Fighting Dojo"}, {"SaffronCity_Dojo_EventScript_HitmonchanBall", 19, NULL, 0x0, NULL}},
    {{"PowerPlant_EventScript_Electrode1", 17, "PowerPlant_EventScript_Electrode1", 0x13, " // Electrode in The Power Plant"}, {"PowerPlant_EventScript_Electrode1", 24, NULL, 0x0, NULL}},
    {{"PowerPlant_EventScript_Electrode2", 17, "PowerPlant_EventScript_Electrode2", 0x13, " // Electrode in The Power Plant"}, {"PowerPlant_EventScript_Electrode2", 24, NULL, 0x0, NULL}},
    {{"PowerPlant_EventScript_Zapdos", 20, "PowerPlant_EventScript_Zapdos", 0x16, " // Zapdos in The Power Plant"}, {"PowerPlant_EventScript_Zapdos", 27, NULL, 0x0, NULL}, {"PowerPlant_EventScript_RanFromZapdos", 3, NULL, 0x0, NULL}},
    {{"SeafoamIslands_B4F_EventScript_Articuno", 20, "SeafoamIslands_B4F_EventScript_Articuno", 0x16, " // Articuno (Seafoam and Route 15 Gatehouse)"}, {"SeafoamIslands_B4F_EventScript_Articuno", 27, NULL, 0x0, NULL}, {"SeafoamIslands_B4F_EventScript_RanFromArticuno", 3, NULL, 0x0, NULL}, {"Route15_WestEntrance_2F_EventScript_LeftBinoculars", 0xa, NULL, 0x0, NULL}, {"Route15_WestEntrance_2F_EventScript_LeftBinoculars", 0x16, NULL, 0x0, NULL}},
    {{"MtEmber_Summit_EventScript_Moltres", 20, "MtEmber_Summit_EventScript_Moltres", 0x16, " // Moltres in Mt.Ember"}, {"MtEmber_Summit_EventScript_Moltres", 27, NULL, 0x0, NULL}, {"MtEmber_Summit_EventScript_RanFromMoltres", 3, NULL, 0x0, NULL}},
    {{"CeruleanCave_B1F_EventScript_Mewtwo", 21, "CeruleanCave_B1F_EventScript_Mewtwo", 0x2b, " // Mewtwo in Unk. Dungeon"}, {"CeruleanCave_B1F_EventScript_Mewtwo", 41, NULL, 0x0, NULL}, {"CeruleanCave_B1F_EventScript_RanFromMewtwo", 3, NULL, 0x0, NULL}},
    {{"Route12_EventScript_Snorlax", 53, "Route12_EventScript_Snorlax", 0x37, " // Snorlax (Route 12 and S.S. Anne)"}, {"Route12_EventScript_Snorlax", 60, NULL, 0x0, NULL}, {"SSAnne_2F_Room1_EventScript_Gentleman", 0xb, NULL, 0x0, NULL}, {"SSAnne_2F_Room1_EventScript_Gentleman", 0x11, NULL, 0x0, NULL}},
    {{"Route16_EventScript_Snorlax", 53, "Route16_EventScript_Snorlax", 0x37, " // Snorlax (Route 16)"}, {"Route16_EventScript_Snorlax", 60, NULL, 0x0, NULL}},
    {{"ThreeIsland_BerryForest_EventScript_Lostelle", 57, "ThreeIsland_BerryForest_EventScript_Lostelle", 0x41, " // Hypno in Berry Forest"}, {"ThreeIsland_BerryForest_EventScript_Lostelle", 63, NULL, 0x0, NULL}},
    {{"BirthIsland_Exterior_EventScript_Deoxys", 38, "BirthIsland_Exterior_EventScript_Deoxys", 0x3b, " // Deoxys on Birth Island"}, {"BirthIsland_Exterior_EventScript_Deoxys", 54, NULL, 0x0, NULL}, {"BirthIsland_Exterior_EventScript_DefeatedDeoxys", 6, NULL, 0x0, NULL}, {"BirthIsland_Exterior_EventScript_RanFromDeoxys", 3, NULL, 0x0, NULL}},
    {{"NavelRock_Summit_EventScript_HoOh", 65, "NavelRock_Summit_EventScript_HoOh", 0x75, " // Ho-Oh on Navel Rock"}, {"NavelRock_Summit_EventScript_HoOh", 112, NULL, 0x0, NULL}, {"NavelRock_Summit_EventScript_DefeatedHoOh", 6, NULL, 0x0, NULL}, {"NavelRock_Summit_EventScript_RanFromHoOh", 3, NULL, 0x0, NULL}},
    {{"NavelRock_Base_EventScript_Lugia", 86, "NavelRock_Base_EventScript_Lugia", 0x66, " // Lugia on Navel Rock"}, {"NavelRock_Base_EventScript_Lugia", 97, NULL, 0x0, NULL}, {"NavelRock_Base_EventScript_DefeatedLugia", 6, NULL, 0x0, NULL}, {"NavelRock_Base_EventScript_RanFromLugia", 3, NULL, 0x0, NULL}},
    {{"CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_GiveAerodactyl", 3, "CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_GiveAerodactyl", 0x14, " // Old Amber"}, {"CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_GiveAerodactyl", 7, NULL, 0x0, NULL}, {"CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_GiveAerodactyl", 18, NULL, 0x0, NULL}, {"CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_ShowOldAmber", 2, NULL, 0x0, NULL}},
    {{"CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_GiveOmanyte", 3, "CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_GiveOmanyte", 0x14, " // Helix Fossil"}, {"CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_GiveOmanyte", 7, NULL, 0x0, NULL}, {"CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_GiveOmanyte", 18, NULL, 0x0, NULL}, {"CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_ShowHelixFossil", 2, NULL, 0x0, NULL}},
    {{"CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_GiveKabuto", 3, "CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_GiveKabuto", 0x14, " // Dome Fossil"}, {"CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_GiveKabuto", 7, NULL, 0x0, NULL}, {"CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_GiveKabuto", 18, NULL, 0x0, NULL}, {"CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_ShowDomeFossil", 2, NULL, 0x0, NULL}},
    {{"SilphCo_7F_EventScript_LaprasGuy", 0x16, "SilphCo_7F_EventScript_LaprasGuy", 0x1b, " // Lapras in Silph. Co"}, {"SilphCo_7F_EventScript_LaprasGuy", 25, NULL, 0x0, NULL}, {"SilphCo_7F_EventScript_ReceiveLaprasParty", 14, NULL, 0x0, NULL}, {"SilphCo_7F_EventScript_ReceiveLaprasPC", 14, NULL, 0x0, NULL}},
    {{"Route4_PokemonCenter_1F_EventScript_TryBuyMagikarp", 0x21, "Route4_PokemonCenter_1F_EventScript_TryBuyMagikarp", 0x26, " // Magikarp in Mt.Moon Center"}, {"Route4_PokemonCenter_1F_EventScript_TryBuyMagikarp", 36, NULL, 0x0, NULL}, {"Route4_PokemonCenter_1F_EventScript_PayForMagikarp", 22, NULL, 0x0, NULL}},
    {{"CeladonCity_GameCorner_PrizeRoom_EventScript_Abra", 3, "CeladonCity_GameCorner_PrizeRoom_EventScript_GiveAbra", 0x3, " // Abra"}, {"CeladonCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeMon", 47, NULL, 0x0, NULL}},
    {{"CeladonCity_GameCorner_PrizeRoom_EventScript_Clefairy", 3, "CeladonCity_GameCorner_PrizeRoom_EventScript_GiveClefairy", 0x3, " // Clefairy"}, {"CeladonCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeMon", 58, NULL, 0x0, NULL}},
    {{"CeladonCity_GameCorner_PrizeRoom_EventScript_ScytherDratini", 3, "CeladonCity_GameCorner_PrizeRoom_EventScript_GiveScyther", 0x3, " // Scyther"}, {"CeladonCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeMon", 80, NULL, 0x0, NULL}},
    {{"CeladonCity_GameCorner_PrizeRoom_EventScript_DratiniPinsir", 3, "CeladonCity_GameCorner_PrizeRoom_EventScript_GiveDratini", 0x3, " // Dratini"}, {"CeladonCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeMon", 69, NULL, 0x0, NULL}},
    {{"CeladonCity_GameCorner_PrizeRoom_EventScript_Porygon", 3, "CeladonCity_GameCorner_PrizeRoom_EventScript_GivePorygon", 0x3, " // Porygon"}, {"CeladonCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeMon", 91, NULL, 0x0, NULL}},
};

const struct StaticPokemon gRoamingPokemon[][9] = {
    {{"gEmptyDataRoamers_Start", 0x24, "CreateInitialRoamerMon", 0x33, " // Raikou"}, {"sRoamerPairs", 0x8, "CreateInitialRoamerMon", 0x47, NULL}},
    {{"gEmptyDataRoamers_Start", 0x1C, "CreateInitialRoamerMon", 0x33, " // Entei"}, {"sRoamerPairs", 0x0, "CreateInitialRoamerMon", 0x47, NULL}},
    {{"gEmptyDataRoamers_Start", 0x20, "CreateInitialRoamerMon", 0x33, " // Suicune"}, {"sRoamerPairs", 0x4, "CreateInitialRoamerMon", 0x47, NULL}},
};

const struct TMText gTMTexts[] = {
    { 3,  7,  5,  3,  0x2A, "TM03 teaches [move].\\pUse it on a worthy Pokémon!"},
    { 4, 14,  3,  7,  0x2A, "TM04 is [move]."},
    { 6, 11,  3,  7,  0x91, "Sealed within that TM06 lies [move]!\\pIt is a secret technique dating back some four hundred years."},
    {16, 10,  5,  2, 0x316, "TM16 contains [move]."},
    {19, 10, 16,  7,  0xA1, "TM19 contains [move].\\pWouldn’t you agree that it’s a wonderful move?"},
    {20, 10,  5,  2, 0x322, "TM20 contains [move]."},
    {26,  5,  1,  8,  0x9E, "TM26 contains [move].\\pIt is a powerful technique.\\pI made it when I ran the Gym here, far too long ago…"},
    {27, 23,  1,  1,  0x50, "TM27 is a move called [move]…\\pIf you treat your Pokémon good, it will return your love by working its hardest in battle."},
    {28,  7,  1,  1,  0x0D, "Those miserable Rockets!\\pLook what they’ve done to my house!\\pThey stole a TM for teaching Pokémon how to [move]!\\pThat cost me a bundle, it did!"},
    {28,  7,  1,  1,  0x17, "I figure what’s lost is lost.\\pI decided to catch a Pokémon that could [move] without a TM."},
    {29, 14,  8,  1,  0x41, "You already know, don’t you? TM29 is [move]."},
    {33, 10,  5,  2, 0x32E, "TM33 contains [move]."},
    {34,  9,  6,  1,  0x9E, "TM34 contains [move]!\\pTeach it to your favorite Pokémon!"},
    {38, 12,  0,  8,  0x2A, "TM38 contains [move].\\nTeach it to strong Pokémon.\\pNecrozmaU would be ideal for that move."},
    {38, 12,  0,  8,  0x96, "[move] is the ultimate\\ntechnique.\\pDon’t waste it on weak Pokémon."},
    {39,  6,  2,  1,  0x99, "A TM, Technical Machine, contains a technique for Pokémon.\\pUsing a TM teaches the move it contains to a Pokémon.\\pA TM is good for only one use.\\pSo, when you use one, pick the Pokémon carefully.\\pAnyways… TM39 contains [move]."},
};

const struct TMText gMoveTutorTexts[] = {
    { 0,  3, 22,  5,  0x0D, "A hit of roaring ferocity!\\pPacked with destructive power!\\pWhen the chips are down, [move] is the ultimate attack! You agree, yes?\\pNow! Let me teach it to your Pokémon!"},
    { 0,  3, 22,  5,  0x60, "Now, we are comrades in the way of [move]!\\pYou should go before you’re seen by the misguided fool who trains only silly moves over there."},
    { 0,  3, 22,  5,  0x56, "You’ll be back when you understand the worth of [move]."},
    { 1,  3, 17,  1,  0x0D, "Not many people come out here.\\pIf I train here, I’m convinced that I’ll get stronger and stronger.\\pYep, stronger and stronger…\\pHow would you like to learn a strong move? It’s [move]."},
    { 2,  3, 22,  6,  0x0D, "A hit of brutal ferocity!\\pPacked with destructive power!\\pWhen you get right down to it, [move] is the ultimate attack! Don’t you agree?\\pOkay! I’ll teach it to your Pokémon!"},
    { 2,  3, 22,  6,  0x60, "Now, we are soul mates in the way of [move]!\\pYou should run before you’re seen by the deluded nitwit who trains only simple moves over there."},
    { 2,  3, 22,  6,  0x56, "You’ll come crawling back when you realize the value of [move]."},
    { 3, 35,  3,  1,  0x0D, "Ready? Boing!\\pWe’re having a wrestling match to see who wimps out first.\\pIf you were to join us, you’d be squashed like a bug, though…\\pHow about I teach [move] to a Pokémon of yours instead?"},
    { 3, 35,  3,  1,  0x30, "Which Pokémon wants to learn how to [move]?"},
    { 4,  1, 40, 13,  0x0D, "You should be proud of yourself, having battled your way through Victory Road so courageously.\\pIn recognition of your feat, I’ll teach you [move].\\pWould you like me to teach that technique?"},
    { 4,  1, 40, 13,  0x30, "Which Pokémon should I teach [move]?"},
    { 5, 10,  2,  1,  0x0D, "Oh, hi! I finally finished Pokémon.\\pNot done yet? How about I teach you a good move?\\pThe move I have in mind is [move]."},
    { 5, 10,  2,  1,  0x30, "Which Pokémon should I teach [move] to?"},
    { 5, 10,  2,  1,  0x60, "Are you using that [move] move I taught your Pokémon?"},
    { 6,  6,  0,  6,  0x0D, "The secrets of space… The mysteries of earth…\\pThere are so many things about which we know so little.\\pBut that should spur us to study harder, not toss in the towel.\\pThe only thing you should toss…\\pWell, how about [move]? Should I teach that to a Pokémon?"},
    { 6,  6,  0,  6,  0x30, "Which Pokémon wants to learn [move]?"},
    { 7, 14,  1,  4,  0x0B, "Oh wow! A Poké Doll!\\pFor me? Thank you!\\pYou know what? I can teach the move [move]."},
    { 7, 14,  1,  4,  0x2E, "I really love [move]! Who’s going to learn it?"},
    { 7, 14,  1,  4,  0x5B, "Don’t you like [move]?"},
    { 8, 12,  3,  1,  0x0D, "Tch-tch-tch! I’ll teach you a nifty move.\\pTeach it to a Pokémon, and watch the fun unfold!\\pIt’s a move called [move]. Does it strike your fancy?"},
    { 8, 12,  3,  1,  0x60, "Tch-tch-tch! That’s the sound of a metronome.\\pIt inspired me to start teaching [move] to interested trainers."},
    { 9,  3,  6,  7,  0x0D, "Hello, there!\\pI’ve seen you about, but I never had a chance to chat.\\pIt must be good luck that brought us together finally.\\pI’d like to celebrate by teaching you the move [move]."},
    { 9,  3,  6,  7,  0x30, "So, who’s the Pokémon that gets the chance to learn [move]?"},
    {10,  3,  1,  1,  0x0D, "Yawn! I must have dozed off in the sun.\\pI had this weird dream about a Drowzee eating my dream.\\pAnd… I learned how to teach [move]…\\pOogh, this is too spooky!\\pLet me teach it to a Pokémon so I can forget about it!"},
    {10,  3,  1,  1,  0x30, "Which Pokémon wants to learn [move]?"},
    {11,  1, 48,  5,  0x0D, "Eeek! No! Stop! Help!\\pOh, you’re not with Team Rocket. I’m sorry, I thought…\\pWill you forgive me if I teach you the [move] technique?"},
    {11,  1, 48,  5,  0x30, "Which Pokémon should I teach [move]?"},
    {11,  1, 48,  5,  0x60, "[move] is a useful move, but it might not work on some Pokémon."},
    {11,  1, 48,  5,  0x56, "Oh… But [move] is convenient…"},
    {12,  1, 97,  1,  0x0D, "Can you imagine? If this volcano were to erupt?\\pThe explosion would be the end of us. How terrifying is that?\\pWhile we’re terrified, would you like me to teach [move]?"},
    {12,  1, 97,  1,  0x30, "You’re terribly brave!\\pWhich Pokémon should I teach [move]?"},
    {12,  1, 97,  1,  0x60, "Using [move] while on this volcano…\\pWhat a terrifying thrill!"},
    {13,  1, 82,  9,  0x0D, "When you’re up on a rocky mountain like this, rockslides are a threat.\\pCan you imagine? Boulders tumbling down on you?\\pThat’d be, like, waaaaaaaaaaah! Total terror!\\pYou don’t seem to be scared. Want to try using [move]?"},
    {13,  1, 82,  9,  0x30, "Which Pokémon should I teach [move]?"},
    {14,  3,  7, 15,  0x0D, "Aww, I wish I was a Kangaskhan baby.\\pI’d love to be a substitute for the baby…\\pAnd snuggle in the mother Kangaskhan’s belly pouch.\\pBut only Pokémon can do that…\\pOn an unrelated note, want me to teach [move] to one of your Pokémon?"},
    {14,  3,  7, 15,  0x30, "Which Pokémon wants to learn [move]?"},
    {14,  3,  7, 15,  0x56, "Oh, really? [move] seems so fun…"},
};

/*
 * ----------------------------------------------
 * Capstone callbacks
 * ----------------------------------------------
 */

static int IsIntroNidoranF(const struct cs_insn * insn)
{
    cs_arm_op * ops = insn->detail->arm.operands;
    // mov r0, SPECIES_NIDORAN_F
    if (insn->id == ARM_INS_MOV
    && ops[0].type == ARM_OP_REG
    && ops[0].reg == ARM_REG_R0
    && ops[1].type == ARM_OP_IMM
    && ops[1].imm == SPECIES_NIDORAN_F)
    {
        return insn->address;
    }

    return -1;
}

static int IsIntroNidoranF2(const struct cs_insn * insn)
{
    cs_arm_op * ops = insn->detail->arm.operands;
    // mov r2, SPECIES_NIDORAN_F
    if (insn->id == ARM_INS_MOV
    && ops[0].type == ARM_OP_REG
    && ops[0].reg == ARM_REG_R2
    && ops[1].type == ARM_OP_IMM
    && ops[1].imm == SPECIES_NIDORAN_F)
    {
        return insn->address;
    }

    return -1;
}

static int IsIntroNidoranF3(const struct cs_insn * insn)
{
    static int to_return = 0;
    cs_arm_op * ops = insn->detail->arm.operands;

    // ldr r0, =gMonFrontPicTable
    if (insn->id == ARM_INS_LDR
    && ops[0].type == ARM_OP_REG
    && ops[0].reg == ARM_REG_R4
    && ops[1].type == ARM_OP_MEM
    && !ops[1].subtracted
    && ops[1].mem.base == ARM_REG_PC
    && ops[1].mem.index == ARM_REG_INVALID)
    {
        to_return = (insn->address & ~3) + ops[1].mem.disp + 4;
    }
    else if (IsIntroNidoranF2(insn) != -1 && to_return != 0)
    {
        return to_return;
    }

    return -1;
}

static int IsOldManWeedle(const struct cs_insn * insn)
{
    cs_arm_op * ops = insn->detail->arm.operands;
    // mov r1, SPECIES_WEEDLE
    if (insn->id == ARM_INS_MOV
        && ops[0].type == ARM_OP_REG
        && ops[0].reg == ARM_REG_R1
        && ops[1].type == ARM_OP_IMM
        && ops[1].imm == SPECIES_WEEDLE)
    {
        return insn->address;
    }

    return -1;
}

static int IsRunIndoorsTweakOffset(const struct cs_insn * insn)
{
    cs_arm_op * ops = insn->detail->arm.operands;
    if (insn->id == ARM_INS_AND
        && ops[0].type == ARM_OP_REG
        && ops[1].type == ARM_OP_REG
        && (insn - 1)->id == ARM_INS_MOV
        && (insn - 1)->detail->arm.operands[0].type == ARM_OP_REG
        && (insn - 1)->detail->arm.operands[1].type == ARM_OP_IMM
        && (insn - 1)->detail->arm.operands[0].reg == ops[0].reg
        && (insn - 1)->detail->arm.operands[1].imm == 2)
        return insn->address;
    return -1;
}

/*
 * ---------------------------------------------------------
 * get_instr_addr(
 *   const char * symname,
 *   int (*callback)(const struct cs_insn *)
 * )
 *
 * Disassembles the function of the provided name until the
 * callback returns a positive integer, then returns that
 * integer. If the end of the function is reached and the
 * callback never returns positive, -1 is returned instead.
 * The callback takes a single argument, a pointer to a
 * disassembled instruction. It then runs internal logic to
 * determine whether the instruction or sequence of in-
 * structions is what is desired, then returns the address
 * of that instruction.
 * ---------------------------------------------------------
 */

static int get_instr_addr(FILE * elfFile, const char * symname, int (*callback)(const struct cs_insn *))
{
    int retval = -1;
    Elf32_Sym * sym = GetSymbolByName(symname);
    fseek(elfFile, (sym->st_value & ~1) - sh_text->sh_addr + sh_text->sh_offset, SEEK_SET);
    unsigned char * data = malloc(sym->st_size);
    if (fread(data, 1, sym->st_size, elfFile) != sym->st_size)
        FATAL_ERROR("fread");
    struct cs_insn *insn;
    int count = cs_disasm(sCapstone, data, sym->st_size, sym->st_value & ~1, 0, &insn);
    for (int i = 0; i < count; i++) {
        int to_return = callback(&insn[i]);
        if (to_return >= 0) {
            retval = to_return;
            break;
        }
    }
    cs_free(insn, count);
    free(data);
    return retval;
}

int main(int argc, char ** argv)
{
    const char * romName = "Fire Red (U) 1.1";
    const char * romCode = "BPRE";
    FILE * elfFile = NULL;
    FILE * outFile = NULL;

    // Argument parser
    for (int i = 1; i < argc; i++) {
        char * arg = argv[i];
        if (strcmp(arg, "--name") == 0) {
            i++;
            if (i == argc) {
                FATAL_ERROR("missing argument to --name\n");
            }
            romName = argv[i];
        } else if (strcmp(arg, "--code") == 0) {
            i++;
            if (i == argc) {
                FATAL_ERROR("missing argument to --code\n");
            }
            romCode = argv[i];
        } else if (arg[0] == '-') {
            FATAL_ERROR("unrecognized option: \"%s\"\n", arg);
        } else if (elfFile == NULL) {
            elfFile = fopen(arg, "rb");
            if (elfFile == NULL) {
                FATAL_ERROR("unable to open file \"%s\" for reading\n", arg);
            }
        } else if (outFile == NULL) {
            outFile = fopen(arg, "w");
            if (outFile == NULL) {
                FATAL_ERROR("unable to open file \"%s\" for writing\n", arg);
            }
        } else {
            FATAL_ERROR("usage: %s ELF OUTPUT [--name NAME] [--code CODE]\n", argv[0]);
        }
    }

    if (outFile == NULL) {
        FATAL_ERROR("usage: %s ELF OUTPUT [--name NAME] [--code CODE]\n", argv[0]);
    }

    // Load the ELF metadata
    InitElf(elfFile);
#ifdef _MSC_VER
#define print(format, ...) (fprintf(outFile, format, __VA_ARGS__))
#else
#define print(format, ...) (fprintf(outFile, format, ##__VA_ARGS__))
#endif
#define config_set(name, value) (print("%s=0x%X\n", (name), (value)))
#define sym_get(name) ({Elf32_Sym * sym = GetSymbolByName((name)); if (sym == NULL) {FATAL_ERROR("Failed to get symbol named %s\n", (name));} sym->st_value;})
#define config_sym(name, symname) (config_set((name), sym_get(symname) & 0x1FFFFFF))

    // Initialize Capstone
    cs_open(CS_ARCH_ARM, CS_MODE_THUMB, &sCapstone);
    cs_option(sCapstone, CS_OPT_DETAIL, CS_OPT_ON);
    sh_text = GetSectionHeaderByName(".text");
    sh_rodata = GetSectionHeaderByName(".rodata");
    sh_scripts = GetSectionHeaderByName("script_data");

    // Start writing the INI
    print("[%s]\n", romName);
    print("Game=%s\n", romCode);
    print("Version=1\n");
    print("Type=FRLG\n");
    print("TableFile=gba_english\n");

    print("FreeSpace=0xA80228\n"); // dont write here

    // Pokemon data
    print("PokemonCount=%d\n", NUM_SPECIES - 1);
    print("PokemonNameLength=%d\n", POKEMON_NAME_LENGTH + 1);
    config_sym("PokemonMovesets", "gLevelUpLearnsets");
    config_sym("EggMoves", "gEggMoves");
    config_sym("PokemonTMHMCompat", "sTMHMLearnsets");
    config_sym("PokemonEvolutions", "gEvolutionTable");
//    Elf32_Sym * Fr_gWildMonHeaders = GetSymbolByName("gWildMonHeaders");
    print("BattleTrappersBanned=[");
//    bool foundTrapBannedMap = false;
//    int encno = 0;
//    u8 * wild_headers_raw = elfContents + Fr_gWildMonHeaders->st_value - sh_rodata->sh_addr + sh_rodata->sh_offset;
//    uint8_t mapGroup;
//    uint8_t mapNum;
//    for (int i = 0; i < Fr_gWildMonHeaders->st_size / 20; i++) {
//        mapGroup = wild_headers_raw[20 * i + 0];
//        mapNum   = wild_headers_raw[20 * i + 1];
//        for (int j = 0; j < 4; j++) {
//            if (read_dword(wild_headers_raw + 20 * i + 4 + 4 * j) != 0) {
//                if (mapGroup == MAP_GROUP(POKEMON_TOWER_3F) && mapNum >= MAP_NUM(POKEMON_TOWER_3F) && mapNum <= MAP_NUM(POKEMON_TOWER_7F)) {
//                    if (foundTrapBannedMap) print(",");
//                    print("%d", encno);
//                    foundTrapBannedMap = true;
//                }
//                encno++;
//            }
//        }
//    }
    print("55,56,57,58,59"); // dude come on
    print("]\n");
    print("StarterPokemon=0x%X\n", (sym_get("PalletTown_ProfessorOaksLab_EventScript_BulbasaurBall") + 10) & 0x1FFFFFF);
    Elf32_Sym * Fr_gTrainers = GetSymbolByName("gTrainers");
    print("TrainerData=0x%X\n", Fr_gTrainers->st_value & 0x1FFFFFF);
    print("TrainerEntrySize=%d\n", Fr_gTrainers->st_size / NUM_TRAINERS);
    config_set("TrainerCount", NUM_TRAINERS);
    Elf32_Sym * Fr_gTrainerClassNames = GetSymbolByName("gTrainerClassNames");
    print("TrainerClassNames=0x%X\n", Fr_gTrainerClassNames->st_value & 0x1FFFFFF);
    print("TrainerClassCount=%d\n", TRAINER_CLASS_COUNT);
    print("TrainerClassNameLength=%d\n", Fr_gTrainerClassNames->st_size / TRAINER_CLASS_COUNT);
    print("TrainerNameLength=%d\n", 12); // hardcoded for now
    print("DoublesTrainerClasses=[%d, %d, %d, %d, %d, %d, %d, %d, %d, %d]\n",
          TRAINER_CLASS_SR_AND_JR, TRAINER_CLASS_RS_TWINS, TRAINER_CLASS_RS_YOUNG_COUPLE, TRAINER_CLASS_OLD_COUPLE, TRAINER_CLASS_RS_SIS_AND_BRO, // RS
          TRAINER_CLASS_TWINS, TRAINER_CLASS_COOL_COUPLE, TRAINER_CLASS_YOUNG_COUPLE, TRAINER_CLASS_CRUSH_KIN, TRAINER_CLASS_SIS_AND_BRO // FRLG
      ); // hardcoded for now
    print("EliteFourIndices=[%d, %d, %d, %d, %d, %d, %d]\n",
          TRAINER_ELITE_FOUR_LORELEI, TRAINER_ELITE_FOUR_BRUNO, TRAINER_ELITE_FOUR_AGATHA, TRAINER_ELITE_FOUR_LANCE,
          TRAINER_CHAMPION_FIRST_SQUIRTLE, TRAINER_CHAMPION_FIRST_BULBASAUR, TRAINER_CHAMPION_FIRST_CHARMANDER
      ); // hardcoded for now
    Elf32_Sym * Fr_gItems = GetSymbolByName("gItems");
    print("ItemEntrySize=%d\n", Fr_gItems->st_size / ITEMS_COUNT);
    print("ItemCount=%d\n", ITEMS_COUNT - 1);
    print("MoveCount=%d\n", MOVES_COUNT - 1);
    config_sym("MoveDescriptions", "gMoveDescriptionPointers");
    Elf32_Sym * Fr_gMoveNames = GetSymbolByName("gMoveNames");
    print("MoveNameLength=%d\n", Fr_gMoveNames->st_size / MOVES_COUNT);
    Elf32_Sym * Fr_gAbilityNames = GetSymbolByName("gAbilityNames");
    print("AbilityNameLength=%d\n", Fr_gAbilityNames->st_size / ABILITIES_COUNT);
    config_sym("TmMoves", "sTMHMMoves_Duplicate");
    config_sym("TmMovesDuplicate", "sTMHMMoves");
    Elf32_Sym* Fr_gTutorMoves = GetSymbolByName("sTutorMoves");
    print("MoveTutorData=0x%X\n", Fr_gTutorMoves->st_value & 0x1FFFFFF);
    print("MoveTutorMoves=%d\n", Fr_gTutorMoves->st_size / 2);
    config_sym("ItemImages", "sItemIconTable");

    print("TmPals=[");
    char buffer[64];
    for (int i = 0; i < len(gTypeNames); i++) {
        sprintf(buffer, "gItemIconPalette_%sTMHM", gTypeNames[i]);
        if (i != 0)
            print(", ");
        print("0x%X", GetSymbolByName(buffer)->st_value & 0x1FFFFFF);
    }
    print("]\n");

    print("IntroCryOffset=0x%X\n", (sym_get("Task_OakSpeech_IsInhabitedFarAndWide") + 0xbf) & 0x1FFFFFF);
//    config_set("IntroCryOffset", get_instr_addr(elfFile, "Task_OakSpeech_IsInhabitedFarAndWide", IsIntroNidoranF) & 0x1FFFFFF);
    config_set("IntroSpriteOffset", get_instr_addr(elfFile, "CreateNidoranFSprite", IsIntroNidoranF3) & 0x1FFFFFF);
    config_set("IntroOtherOffset", get_instr_addr(elfFile, "CreateNidoranFSprite", IsIntroNidoranF) & 0x1FFFFFF);
    print("ItemBallPic=%d\n", OBJ_EVENT_GFX_ITEM_BALL);
    print("TMBallPic=%d\n", OBJ_EVENT_GFX_UNUSED_MALE_RECEPTIONIST);
    Elf32_Sym * Fr_gIngameTrades = GetSymbolByName("sInGameTrades");
    print("TradeTableOffset=0x%X\n", Fr_gIngameTrades->st_value & 0x1FFFFFF);
    print("TradeTableSize=%d\n", Fr_gIngameTrades->st_size / 60); // hardcoded for now
    print("TradesUnused=[]\n"); // so randomizer doesn't complain
    config_set("RunIndoorsTweakOffset", get_instr_addr(elfFile, "IsRunningDisallowed", IsRunIndoorsTweakOffset) & 0x1FFFFFF);
    config_sym("TextSpeedValuesOffset", "sTextSpeedFrameDelays");
    print("InstantTextTweak=instant_text/fr_11_instant_text\n"); // so randomizer doesn't complain
    config_set("CatchingTutorialOpponentMonOffset", get_instr_addr(elfFile, "StartOldManTutorialBattle", IsOldManWeedle) & 0x1FFFFFF);
    config_sym("PCPotionOffset", "gNewGamePCItems");
    print("PickupTableStartLocator=8B000F00850019008600230087002D\n"); // hardcoded
    Elf32_Sym * Fr_gPickupItems = GetSymbolByName("sPickupItems");
    print("PickupItemCount=%d\n", (Fr_gPickupItems->st_size / 4)); // hardcoded for now
    config_sym("TypeEffectivenessOffset", "gTypeEffectiveness");
    print("DeoxysStatPrefix=7F002301FFFF\n"); // hardcoded
    // These may need some fixing to support dynamic offsets.
    print("StaticPokemonSupport=1\n");
    for (int i = 0; i < len(gStaticPokemon); i++) {
        print("StaticPokemon{}={Species=[");
        for (int j = 0; j < 5; j++) {
            if (gStaticPokemon[i][j].speciesLabel == NULL) break;
            if (j != 0)
                print(", ");
            print("0x%X", (sym_get(gStaticPokemon[i][j].speciesLabel) & 0x1FFFFFF) + gStaticPokemon[i][j].speciesOffset);
        }
        print("]");
        for (int j = 0; j < 5; j++) {
            if (gStaticPokemon[i][j].levelLabel == NULL) break;
            print(", Level=[0x%X]", (sym_get(gStaticPokemon[i][j].levelLabel) & 0x1FFFFFF) + gStaticPokemon[i][j].levelOffset);
        }
        print("}");
        for (int j = 0; j < 5; j++) {
            if (gStaticPokemon[i][j].comment == NULL) break;
            print("%s\n", gStaticPokemon[i][j].comment);
        }
    }
    for (int i = 0; i < len(gRoamingPokemon); i++) {
        print("RoamingPokemon{}={Species=[");
        for (int j = 0; j < 5; j++) {
            if (gRoamingPokemon[i][j].speciesLabel == NULL) break;
            if (j != 0)
                print(", ");
            print("0x%X", (sym_get(gRoamingPokemon[i][j].speciesLabel) & 0x1FFFFFF) + gRoamingPokemon[i][j].speciesOffset);
        }
        print("]");
        for (int j = 0; j < 5; j++) {
            if (j == 0)
                print(", Level=[");
            else if (gRoamingPokemon[i][j].levelLabel == NULL) {
                print("]");
                break;
            }
            else
                print(", ");
            print("0x%X", (sym_get(gRoamingPokemon[i][j].levelLabel) & 0x1FFFFFF) + gRoamingPokemon[i][j].levelOffset);
        }
        print("}");
        for (int j = 0; j < 5; j++) {
            if (gRoamingPokemon[i][j].comment == NULL) break;
            if (j != 0)
                print(", ");
            print("%s\n", gRoamingPokemon[i][j].comment);
        }
    }

    print("RoamingPokemonTweak=hardcoded_statics/roamers/fr_roamers_11\n"); // hardcoded
    print("FossilLevelOffsets=[0x%X, 0x%X, 0x%X]\n",
          ((sym_get("CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_GiveAerodactyl") + 0x14) & 0x1FFFFFF),
          ((sym_get("CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_GiveOmanyte") + 0x14) & 0x1FFFFFF),
          ((sym_get("CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_GiveKabuto") + 0x14) & 0x1FFFFFF));
    print("GhostMarowakTweak=hardcoded_statics/fr_marowak_11\n"); // hardcoded
    print("GhostMarowakSpeciesOffsets=[0x%X, 0x%X, 0x%X]\n",
          ((sym_get("gEmptyDataMarowak_Start") + 0x24) & 0x1FFFFFF),
          ((sym_get("PokemonTower_6F_EventScript_MarowakGhost") + 0x1a) & 0x1FFFFFF),
          ((sym_get("PokemonTower_6F_EventScript_DefeatedMarowakGhost") + 0x8) & 0x1FFFFFF));
    print("GhostMarowakLevelOffsets=[0x%X, 0x%X]\n",
          ((sym_get("gEmptyDataMarowak_Start") + 0x12) & 0x1FFFFFF),
          ((sym_get("PokemonTower_6F_EventScript_MarowakGhost") + 0x1c) & 0x1FFFFFF));
    print("GhostMarowakGenderOffset=0x%X\n", (sym_get("gEmptyDataMarowak_Start") + 0x4) & 0x1FFFFFF);
    print("GhostMarowakOffset=25\n"); // hardcoded

    for (int i = 0; i < len(gTMTexts); i++) {
        print("TMText[]=[%d,%d,%d,%d,0x%02X,%s]\n", gTMTexts[i].tmno, gTMTexts[i].mapgp, gTMTexts[i].mapno, gTMTexts[i].scriptno, gTMTexts[i].offset, gTMTexts[i].text);
    }
    for (int i = 0; i < len(gMoveTutorTexts); i++) {
        print("MoveTutorText[]=[%d,%d,%d,%d,0x%02X,%s]\n", gMoveTutorTexts[i].tmno, gMoveTutorTexts[i].mapgp, gMoveTutorTexts[i].mapno, gMoveTutorTexts[i].scriptno, gMoveTutorTexts[i].offset, gMoveTutorTexts[i].text);
    }

    print("SpecialMusicStatics=[%d,%d,%d,%d,%d,%d,%d]\n", 144, 145, 146, 150, 249, 250, 386); // hardcoded for now
    print("NewIndexToMusicTweak=musicfix/fr_musicfix_11\n"); // hardcoded
    print("NewIndexToMusicPoolOffset=0x%X\n", (sym_get("gEmptyDataMusicFix_Start") + 0x40) & 0x1FFFFFF);

    print("ShopItemOffsets=[");
    char buffer2[64];
    for (int i = 0; i < len(gPokeMarts); i++) {
        sprintf(buffer2, "%s", gPokeMarts[i]);
        if (i != 0)
            print(", ");
        print("0x%X", GetSymbolByName(buffer2)->st_value & 0x1FFFFFF);
    }
    print("]\n");

    print("SkipShops=[0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 15, 16, 17, 18, 19, 20, 21, 22]\n"); // hardcoded
    print("MainGameShops=[12, 13, 14]\n"); // hardcoded
    print("CRC32=84EE4776\n"); // CRC32 of an official FireRed 1.1 ROM. Unless you change it the rando will tell you that it's unofficial, but it doesn't matter,

    DestroyResources();
    fclose(outFile);
    fclose(elfFile);
    return 0;
}


/******************************************************************************
 * 
 * IMPORTANT!!
 * 
 * Binary patches are included in the randomizer program, so please use
 * hard-coded linker addresses to make sure the following symbols have their
 * addresses unchanged from vanilla FireRed:
 * 
 * src/text_printer.o(ewram_data)
 *         sTextPrinters                       - 0x02020034 (instant text)  // intentional crash, moved
 * 
 * src/text_printer.o(.text)
 *         RunTextPrinters                     - 0x08002dfc (instant text)  // intentional crash, moved
 *         RenderFont                          - 0x08002e90 (instant text)  // intentional crash, moved
 * 
 * src/window.o(.text)
 *         CopyWindowToVram                    - 0x08003f34 (instant text)  // intentional crash, moved
 * 
 * src/pokemon.o(.text)
 *         CreateMonWithGenderNatureLetter     - 0x0803de14 (random statics - marowak)
 * 
 * src/battle_setup.o(.text)
 *         StartMarowakBattle                  - 0x0807f918 (random statics - marowak)
 *         StartLegendaryBattle                - 0x0807f9ec (fix music)
 * 
 * src/roamer.o(.text)
 *         CreateInitialRoamerMon              - 0x08141d0c (random statics - roamers)
 * 
 * *libgcc.a:_call_via_rX.o(.text)
 *         _call_via_r2                        - 0x081e3c20 (instant text)  // intentional crash, moved
 * 
 * src/new_menu_helpers.o(.rodata)
 *         sTextSpeedFrameDelays               - 0x0841f498 (instant text)  // intentional crash, moved
 * 
 * Also please make sure no data is written to the following addresses:
 * 
 * 0x08a00000 - 0x08a000cf (instant text)               only 0xFF bytes
 * 0x08a80000 - 0x08a8002b (random statics - marowak)   only 0xFF bytes
 * 0x08a80100 - 0x08a80167 (fix music)                  only 0xFF bytes
 * 0x08a80200 - 0x08a80227 (random statics - roamers)   only 0xFF bytes
 * 
******************************************************************************/

