static const u16 sTutorMoves[TUTOR_MOVE_COUNT] =
{
    [TUTOR_MOVE_MEGA_PUNCH] = MOVE_MEGA_PUNCH,
    [TUTOR_MOVE_SWORDS_DANCE] = MOVE_SWORDS_DANCE,
    [TUTOR_MOVE_MEGA_KICK] = MOVE_MEGA_KICK,
    [TUTOR_MOVE_BODY_SLAM] = MOVE_BODY_SLAM,
    [TUTOR_MOVE_DOUBLE_EDGE] = MOVE_DOUBLE_EDGE,
    [TUTOR_MOVE_COUNTER] = MOVE_COUNTER,
    [TUTOR_MOVE_SEISMIC_TOSS] = MOVE_SEISMIC_TOSS,
    [TUTOR_MOVE_MIMIC] = MOVE_MIMIC,
    [TUTOR_MOVE_METRONOME] = MOVE_METRONOME,
    [TUTOR_MOVE_SOFT_BOILED] = MOVE_SOFT_BOILED,
    [TUTOR_MOVE_DREAM_EATER] = MOVE_DREAM_EATER,
    [TUTOR_MOVE_THUNDER_WAVE] = MOVE_THUNDER_WAVE,
    [TUTOR_MOVE_EXPLOSION] = MOVE_EXPLOSION,
    [TUTOR_MOVE_ROCK_SLIDE] = MOVE_ROCK_SLIDE,
    [TUTOR_MOVE_SUBSTITUTE] = MOVE_SUBSTITUTE,
};

#define TUTOR(move) (1 << (TUTOR_##move))

static const u16 sTutorLearnsets[] =
{
    [SPECIES_NONE]                        = 0,

    [SPECIES_BULBASAUR]                   =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_MIMIC),

    [SPECIES_IVYSAUR]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_MIMIC),

    [SPECIES_VENUSAUR]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_MIMIC),

    [SPECIES_CHARMANDER]                  =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_SEISMIC_TOSS)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_CHARMELEON]                  =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_SEISMIC_TOSS)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_CHARIZARD]                   =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_SEISMIC_TOSS)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_SQUIRTLE]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_SEISMIC_TOSS)
                                          |  TUTOR(MOVE_MIMIC),

    [SPECIES_WARTORTLE]                   =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_SEISMIC_TOSS)
                                          |  TUTOR(MOVE_MIMIC),

    [SPECIES_BLASTOISE]                   =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_SEISMIC_TOSS)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_CATERPIE]                    = 0,

    [SPECIES_METAPOD]                     = 0,

    [SPECIES_BUTTERFREE]                  =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_DREAM_EATER),

    [SPECIES_WEEDLE]                      = 0,

    [SPECIES_KAKUNA]                      = 0,

    [SPECIES_BEEDRILL]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_MIMIC),

    [SPECIES_PIDGEY]                      =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_MIMIC),

    [SPECIES_PIDGEOTTO]                   =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_MIMIC),

    [SPECIES_PIDGEOT]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_MIMIC),

    [SPECIES_RATTATA]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_MIMIC),

    [SPECIES_RATICATE]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_MIMIC),

    [SPECIES_SPEAROW]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_MIMIC),

    [SPECIES_FEAROW]                      =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_MIMIC),

    [SPECIES_EKANS]                       =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_ARBOK]                       =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_PIKACHU]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_SEISMIC_TOSS)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_MIMIC),

    [SPECIES_RAICHU]                      =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_SEISMIC_TOSS)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_MIMIC),

    [SPECIES_SANDSHREW]                   =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_SEISMIC_TOSS)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_SANDSLASH]                   =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_SEISMIC_TOSS)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_NIDORAN_F]                   =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_MIMIC),

    [SPECIES_NIDORINA]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_MIMIC),

    [SPECIES_NIDOQUEEN]                   =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_SEISMIC_TOSS)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_NIDORAN_M]                   =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_MIMIC),

    [SPECIES_NIDORINO]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_MIMIC),

    [SPECIES_NIDOKING]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_SEISMIC_TOSS)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_CLEFAIRY]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_SEISMIC_TOSS)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_METRONOME)
                                          |  TUTOR(MOVE_SOFT_BOILED)
                                          |  TUTOR(MOVE_DREAM_EATER),

    [SPECIES_CLEFABLE]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_SEISMIC_TOSS)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_METRONOME)
                                          |  TUTOR(MOVE_SOFT_BOILED)
                                          |  TUTOR(MOVE_DREAM_EATER),

    [SPECIES_VULPIX]                      =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_MIMIC),

    [SPECIES_NINETALES]                   =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_DREAM_EATER),

    [SPECIES_JIGGLYPUFF]                  =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_SEISMIC_TOSS)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_METRONOME)
                                          |  TUTOR(MOVE_DREAM_EATER),

    [SPECIES_WIGGLYTUFF]                  =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_SEISMIC_TOSS)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_METRONOME)
                                          |  TUTOR(MOVE_DREAM_EATER),

    [SPECIES_ZUBAT]                       =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_MIMIC),

    [SPECIES_GOLBAT]                      =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_MIMIC),

    [SPECIES_ODDISH]                      =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_MIMIC),

    [SPECIES_GLOOM]                       =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_MIMIC),

    [SPECIES_VILEPLUME]                   =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_MIMIC),

    [SPECIES_PARAS]                       =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_MIMIC),

    [SPECIES_PARASECT]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_MIMIC),

    [SPECIES_VENONAT]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MIMIC),

    [SPECIES_VENOMOTH]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_MIMIC),

    [SPECIES_DIGLETT]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_DUGTRIO]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_MEOWTH]                      =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_DREAM_EATER),

    [SPECIES_PERSIAN]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_DREAM_EATER),

    [SPECIES_PSYDUCK]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_SEISMIC_TOSS)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_METRONOME),

    [SPECIES_GOLDUCK]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_SEISMIC_TOSS)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_METRONOME),

    [SPECIES_MANKEY]                      =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_SEISMIC_TOSS)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_METRONOME)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_PRIMEAPE]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_SEISMIC_TOSS)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_METRONOME)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_GROWLITHE]                   =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_MIMIC),

    [SPECIES_ARCANINE]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_MIMIC),

    [SPECIES_POLIWAG]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_MIMIC),

    [SPECIES_POLIWHIRL]                   =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_SEISMIC_TOSS)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_METRONOME),

    [SPECIES_POLIWRATH]                   =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_SEISMIC_TOSS)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_METRONOME)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_ABRA]                        =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_SEISMIC_TOSS)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_METRONOME)
                                          |  TUTOR(MOVE_DREAM_EATER),

    [SPECIES_KADABRA]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_SEISMIC_TOSS)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_METRONOME)
                                          |  TUTOR(MOVE_DREAM_EATER),

    [SPECIES_ALAKAZAM]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_SEISMIC_TOSS)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_METRONOME)
                                          |  TUTOR(MOVE_DREAM_EATER),

    [SPECIES_MACHOP]                      =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_SEISMIC_TOSS)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_METRONOME)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_MACHOKE]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_SEISMIC_TOSS)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_METRONOME)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_MACHAMP]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_SEISMIC_TOSS)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_METRONOME)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_BELLSPROUT]                  =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_MIMIC),

    [SPECIES_WEEPINBELL]                  =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_MIMIC),

    [SPECIES_VICTREEBEL]                  =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_MIMIC),

    [SPECIES_TENTACOOL]                   =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_MIMIC),

    [SPECIES_TENTACRUEL]                  =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_MIMIC),

    [SPECIES_GEODUDE]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_SEISMIC_TOSS)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_METRONOME)
                                          |  TUTOR(MOVE_EXPLOSION)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_GRAVELER]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_SEISMIC_TOSS)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_METRONOME)
                                          |  TUTOR(MOVE_EXPLOSION)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_GOLEM]                       =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_SEISMIC_TOSS)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_METRONOME)
                                          |  TUTOR(MOVE_EXPLOSION)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_PONYTA]                      =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_MIMIC),

    [SPECIES_RAPIDASH]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_MIMIC),

    [SPECIES_SLOWPOKE]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_DREAM_EATER),

    [SPECIES_SLOWBRO]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_SEISMIC_TOSS)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_METRONOME)
                                          |  TUTOR(MOVE_DREAM_EATER),

    [SPECIES_MAGNEMITE]                   =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_EXPLOSION),

    [SPECIES_MAGNETON]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_EXPLOSION),

    [SPECIES_FARFETCHD]                   =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_MIMIC),

    [SPECIES_DODUO]                       =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_MIMIC),

    [SPECIES_DODRIO]                      =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_MIMIC),

    [SPECIES_SEEL]                        =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_MIMIC),

    [SPECIES_DEWGONG]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_MIMIC),

    [SPECIES_GRIMER]                      =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_METRONOME)
                                          |  TUTOR(MOVE_EXPLOSION)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_MUK]                         =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_METRONOME)
                                          |  TUTOR(MOVE_EXPLOSION)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_SHELLDER]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_EXPLOSION),

    [SPECIES_CLOYSTER]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_EXPLOSION),

    [SPECIES_GASTLY]                      =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_DREAM_EATER)
                                          |  TUTOR(MOVE_EXPLOSION),

    [SPECIES_HAUNTER]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_METRONOME)
                                          |  TUTOR(MOVE_DREAM_EATER)
                                          |  TUTOR(MOVE_EXPLOSION),

    [SPECIES_GENGAR]                      =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_SEISMIC_TOSS)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_METRONOME)
                                          |  TUTOR(MOVE_DREAM_EATER)
                                          |  TUTOR(MOVE_EXPLOSION),

    [SPECIES_ONIX]                        =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_EXPLOSION)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_DROWZEE]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_SEISMIC_TOSS)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_METRONOME)
                                          |  TUTOR(MOVE_DREAM_EATER),

    [SPECIES_HYPNO]                       =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_SEISMIC_TOSS)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_METRONOME)
                                          |  TUTOR(MOVE_DREAM_EATER),

    [SPECIES_KRABBY]                      =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_KINGLER]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_VOLTORB]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_EXPLOSION),

    [SPECIES_ELECTRODE]                   =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_EXPLOSION),

    [SPECIES_EXEGGCUTE]                   =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_DREAM_EATER)
                                          |  TUTOR(MOVE_EXPLOSION),

    [SPECIES_EXEGGUTOR]                   =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_DREAM_EATER)
                                          |  TUTOR(MOVE_EXPLOSION),

    [SPECIES_CUBONE]                      =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_SEISMIC_TOSS)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_MAROWAK]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_SEISMIC_TOSS)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_HITMONLEE]                   =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_SEISMIC_TOSS)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_METRONOME)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_HITMONCHAN]                  =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_SEISMIC_TOSS)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_METRONOME)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_LICKITUNG]                   =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_SEISMIC_TOSS)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_DREAM_EATER)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_KOFFING]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_EXPLOSION),

    [SPECIES_WEEZING]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_EXPLOSION),

    [SPECIES_RHYHORN]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_RHYDON]                      =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_SEISMIC_TOSS)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_CHANSEY]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_SEISMIC_TOSS)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_METRONOME)
                                          |  TUTOR(MOVE_SOFT_BOILED)
                                          |  TUTOR(MOVE_DREAM_EATER)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_TANGELA]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_MIMIC),

    [SPECIES_KANGASKHAN]                  =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_SEISMIC_TOSS)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_HORSEA]                      =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MIMIC),

    [SPECIES_SEADRA]                      =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MIMIC),

    [SPECIES_GOLDEEN]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_MIMIC),

    [SPECIES_SEAKING]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_MIMIC),

    [SPECIES_STARYU]                      =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_MIMIC),

    [SPECIES_STARMIE]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_DREAM_EATER),

    [SPECIES_MR_MIME]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_SEISMIC_TOSS)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_METRONOME)
                                          |  TUTOR(MOVE_DREAM_EATER),

    [SPECIES_SCYTHER]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_MIMIC),

    [SPECIES_JYNX]                        =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_SEISMIC_TOSS)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_METRONOME)
                                          |  TUTOR(MOVE_DREAM_EATER),

    [SPECIES_ELECTABUZZ]                  =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_SEISMIC_TOSS)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_METRONOME),

    [SPECIES_MAGMAR]                      =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_SEISMIC_TOSS)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_METRONOME),

    [SPECIES_PINSIR]                      =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_SEISMIC_TOSS)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_TAUROS]                      =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_MAGIKARP]                    = 0,

    [SPECIES_GYARADOS]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_MIMIC),

    [SPECIES_LAPRAS]                      =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_DREAM_EATER),

    [SPECIES_DITTO]                       = 0,

    [SPECIES_EEVEE]                       =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_MIMIC),

    [SPECIES_VAPOREON]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_MIMIC),

    [SPECIES_JOLTEON]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_MIMIC),

    [SPECIES_FLAREON]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_MIMIC),

    [SPECIES_PORYGON]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_DREAM_EATER),

    [SPECIES_OMANYTE]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_OMASTAR]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_SEISMIC_TOSS)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_KABUTO]                      =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_KABUTOPS]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_SEISMIC_TOSS)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_AERODACTYL]                  =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_SNORLAX]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_SEISMIC_TOSS)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_METRONOME)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_ARTICUNO]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_MIMIC),

    [SPECIES_ZAPDOS]                      =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_MIMIC),

    [SPECIES_MOLTRES]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_MIMIC),

    [SPECIES_DRATINI]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_MIMIC),

    [SPECIES_DRAGONAIR]                   =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_MIMIC),

    [SPECIES_DRAGONITE]                   =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_METRONOME)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_MEWTWO]                      =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_SEISMIC_TOSS)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_METRONOME)
                                          |  TUTOR(MOVE_DREAM_EATER)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_MEW]                         =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_SEISMIC_TOSS)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_METRONOME)
                                          |  TUTOR(MOVE_SOFT_BOILED)
                                          |  TUTOR(MOVE_DREAM_EATER)
                                          |  TUTOR(MOVE_EXPLOSION)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_CHIKORITA]                   =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_MIMIC),

    [SPECIES_BAYLEEF]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_MIMIC),

    [SPECIES_MEGANIUM]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_MIMIC),

    [SPECIES_CYNDAQUIL]                   =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_MIMIC),

    [SPECIES_QUILAVA]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_MIMIC),

    [SPECIES_TYPHLOSION]                  =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_SEISMIC_TOSS)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_TOTODILE]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_SEISMIC_TOSS)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_CROCONAW]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_SEISMIC_TOSS)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_FERALIGATR]                  =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_SEISMIC_TOSS)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_SENTRET]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_MIMIC),

    [SPECIES_FURRET]                      =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_MIMIC),

    [SPECIES_HOOTHOOT]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_DREAM_EATER),

    [SPECIES_NOCTOWL]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_DREAM_EATER),

    [SPECIES_LEDYBA]                      =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_MIMIC),

    [SPECIES_LEDIAN]                      =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_MIMIC),

    [SPECIES_SPINARAK]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MIMIC),

    [SPECIES_ARIADOS]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_MIMIC),

    [SPECIES_CROBAT]                      =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_MIMIC),

    [SPECIES_CHINCHOU]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_MIMIC),

    [SPECIES_LANTURN]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_MIMIC),

    [SPECIES_PICHU]                       =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_SEISMIC_TOSS)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_MIMIC),

    [SPECIES_CLEFFA]                      =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_SEISMIC_TOSS)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_METRONOME)
                                          |  TUTOR(MOVE_SOFT_BOILED)
                                          |  TUTOR(MOVE_DREAM_EATER),

    [SPECIES_IGGLYBUFF]                   =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_SEISMIC_TOSS)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_DREAM_EATER),

    [SPECIES_TOGEPI]                      =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_SEISMIC_TOSS)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_METRONOME)
                                          |  TUTOR(MOVE_SOFT_BOILED)
                                          |  TUTOR(MOVE_DREAM_EATER),

    [SPECIES_TOGETIC]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_SEISMIC_TOSS)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_METRONOME)
                                          |  TUTOR(MOVE_SOFT_BOILED)
                                          |  TUTOR(MOVE_DREAM_EATER),

    [SPECIES_NATU]                        =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_DREAM_EATER),

    [SPECIES_XATU]                        =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_DREAM_EATER),

    [SPECIES_MAREEP]                      =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_MIMIC),

    [SPECIES_FLAAFFY]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_SEISMIC_TOSS)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_MIMIC),

    [SPECIES_AMPHAROS]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_SEISMIC_TOSS)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_MIMIC),

    [SPECIES_BELLOSSOM]                   =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_MIMIC),

    [SPECIES_MARILL]                      =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_SEISMIC_TOSS)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_METRONOME),

    [SPECIES_AZUMARILL]                   =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_SEISMIC_TOSS)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_METRONOME),

    [SPECIES_SUDOWOODO]                   =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_SEISMIC_TOSS)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_EXPLOSION)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_POLITOED]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_SEISMIC_TOSS)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_METRONOME),

    [SPECIES_HOPPIP]                      =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_MIMIC),

    [SPECIES_SKIPLOOM]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_MIMIC),

    [SPECIES_JUMPLUFF]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_MIMIC),

    [SPECIES_AIPOM]                       =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_SEISMIC_TOSS)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_METRONOME)
                                          |  TUTOR(MOVE_DREAM_EATER),

    [SPECIES_SUNKERN]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_MIMIC),

    [SPECIES_SUNFLORA]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_MIMIC),

    [SPECIES_YANMA]                       =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_DREAM_EATER),

    [SPECIES_WOOPER]                      =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_QUAGSIRE]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_SEISMIC_TOSS)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_ESPEON]                      =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_DREAM_EATER),

    [SPECIES_UMBREON]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_DREAM_EATER),

    [SPECIES_MURKROW]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_DREAM_EATER),

    [SPECIES_SLOWKING]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_SEISMIC_TOSS)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_METRONOME)
                                          |  TUTOR(MOVE_DREAM_EATER)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_MISDREAVUS]                  =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_DREAM_EATER),

    [SPECIES_UNOWN]                       = 0,

    [SPECIES_WOBBUFFET]                   =  TUTOR(MOVE_COUNTER),

    [SPECIES_GIRAFARIG]                   =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_DREAM_EATER),

    [SPECIES_PINECO]                      =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_EXPLOSION)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_FORRETRESS]                  =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_EXPLOSION)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_DUNSPARCE]                   =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_DREAM_EATER)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_GLIGAR]                      =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_STEELIX]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_EXPLOSION)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_SNUBBULL]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_SEISMIC_TOSS)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_METRONOME),

    [SPECIES_GRANBULL]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_SEISMIC_TOSS)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_METRONOME)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_QWILFISH]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_EXPLOSION),

    [SPECIES_SCIZOR]                      =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_MIMIC),

    [SPECIES_SHUCKLE]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_HERACROSS]                   =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_SEISMIC_TOSS)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_SNEASEL]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_DREAM_EATER),

    [SPECIES_TEDDIURSA]                   =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_SEISMIC_TOSS)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_METRONOME)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_URSARING]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_SEISMIC_TOSS)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_METRONOME)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_SLUGMA]                      =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_MAGCARGO]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_EXPLOSION)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_SWINUB]                      =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_PILOSWINE]                   =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_CORSOLA]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_EXPLOSION)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_REMORAID]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_MIMIC),

    [SPECIES_OCTILLERY]                   =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_SEISMIC_TOSS)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_MIMIC),

    [SPECIES_DELIBIRD]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_SEISMIC_TOSS)
                                          |  TUTOR(MOVE_MIMIC),

    [SPECIES_MANTINE]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_SKARMORY]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_HOUNDOUR]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_DREAM_EATER),

    [SPECIES_HOUNDOOM]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_DREAM_EATER),

    [SPECIES_KINGDRA]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_MIMIC),

    [SPECIES_PHANPY]                      =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_DONPHAN]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_PORYGON2]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_DREAM_EATER),

    [SPECIES_STANTLER]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_DREAM_EATER),

    [SPECIES_SMEARGLE]                    = 0,

    [SPECIES_TYROGUE]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_SEISMIC_TOSS)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_HITMONTOP]                   =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_SEISMIC_TOSS)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_SMOOCHUM]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_SEISMIC_TOSS)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_METRONOME)
                                          |  TUTOR(MOVE_DREAM_EATER),

    [SPECIES_ELEKID]                      =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_SEISMIC_TOSS)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_MIMIC),

    [SPECIES_MAGBY]                       =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_SEISMIC_TOSS)
                                          |  TUTOR(MOVE_MIMIC),

    [SPECIES_MILTANK]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_SEISMIC_TOSS)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_METRONOME)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_BLISSEY]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_SEISMIC_TOSS)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_METRONOME)
                                          |  TUTOR(MOVE_SOFT_BOILED)
                                          |  TUTOR(MOVE_DREAM_EATER)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_RAIKOU]                      =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_MIMIC),

    [SPECIES_ENTEI]                       =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_MIMIC),

    [SPECIES_SUICUNE]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_MIMIC),

    [SPECIES_LARVITAR]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_PUPITAR]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_TYRANITAR]                   =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_SEISMIC_TOSS)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_LUGIA]                       =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_DREAM_EATER),

    [SPECIES_HO_OH]                       =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_DREAM_EATER),

    [SPECIES_CELEBI]                      =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_METRONOME)
                                          |  TUTOR(MOVE_DREAM_EATER),

    [SPECIES_OLD_UNOWN_B]                 = 0,
    [SPECIES_OLD_UNOWN_C]                 = 0,
    [SPECIES_OLD_UNOWN_D]                 = 0,
    [SPECIES_OLD_UNOWN_E]                 = 0,
    [SPECIES_OLD_UNOWN_F]                 = 0,
    [SPECIES_OLD_UNOWN_G]                 = 0,
    [SPECIES_OLD_UNOWN_H]                 = 0,
    [SPECIES_OLD_UNOWN_I]                 = 0,
    [SPECIES_OLD_UNOWN_J]                 = 0,
    [SPECIES_OLD_UNOWN_K]                 = 0,
    [SPECIES_OLD_UNOWN_L]                 = 0,
    [SPECIES_OLD_UNOWN_M]                 = 0,
    [SPECIES_OLD_UNOWN_N]                 = 0,
    [SPECIES_OLD_UNOWN_O]                 = 0,
    [SPECIES_OLD_UNOWN_P]                 = 0,
    [SPECIES_OLD_UNOWN_Q]                 = 0,
    [SPECIES_OLD_UNOWN_R]                 = 0,
    [SPECIES_OLD_UNOWN_S]                 = 0,
    [SPECIES_OLD_UNOWN_T]                 = 0,
    [SPECIES_OLD_UNOWN_U]                 = 0,
    [SPECIES_OLD_UNOWN_V]                 = 0,
    [SPECIES_OLD_UNOWN_W]                 = 0,
    [SPECIES_OLD_UNOWN_X]                 = 0,
    [SPECIES_OLD_UNOWN_Y]                 = 0,
    [SPECIES_OLD_UNOWN_Z]                 = 0,

    [SPECIES_TREECKO]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_SEISMIC_TOSS)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_GROVYLE]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_SEISMIC_TOSS)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_SCEPTILE]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_SEISMIC_TOSS)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_TORCHIC]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_SEISMIC_TOSS)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_COMBUSKEN]                   =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_SEISMIC_TOSS)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_BLAZIKEN]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_SEISMIC_TOSS)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_MUDKIP]                      =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_MARSHTOMP]                   =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_SEISMIC_TOSS)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_SWAMPERT]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_SEISMIC_TOSS)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_POOCHYENA]                   =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_MIMIC),

    [SPECIES_MIGHTYENA]                   =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_MIMIC),

    [SPECIES_ZIGZAGOON]                   =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_MIMIC),

    [SPECIES_LINOONE]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_MIMIC),

    [SPECIES_WURMPLE]                     = 0,

    [SPECIES_SILCOON]                     = 0,

    [SPECIES_BEAUTIFLY]                   =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_MIMIC),

    [SPECIES_CASCOON]                     = 0,

    [SPECIES_DUSTOX]                      =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_MIMIC),

    [SPECIES_LOTAD]                       =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_MIMIC),

    [SPECIES_LOMBRE]                      =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_METRONOME),

    [SPECIES_LUDICOLO]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_SEISMIC_TOSS)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_METRONOME),

    [SPECIES_SEEDOT]                      =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_EXPLOSION),

    [SPECIES_NUZLEAF]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_EXPLOSION)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_SHIFTRY]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_EXPLOSION)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_NINCADA]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_MIMIC),

    [SPECIES_NINJASK]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_MIMIC),

    [SPECIES_SHEDINJA]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_DREAM_EATER),

    [SPECIES_TAILLOW]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_MIMIC),

    [SPECIES_SWELLOW]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_MIMIC),

    [SPECIES_SHROOMISH]                   =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_MIMIC),

    [SPECIES_BRELOOM]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_SEISMIC_TOSS)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_SPINDA]                      =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_SEISMIC_TOSS)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_METRONOME)
                                          |  TUTOR(MOVE_DREAM_EATER)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_WINGULL]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MIMIC),

    [SPECIES_PELIPPER]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_MIMIC),

    [SPECIES_SURSKIT]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MIMIC),

    [SPECIES_MASQUERAIN]                  =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MIMIC),

    [SPECIES_WAILMER]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_MIMIC),

    [SPECIES_WAILORD]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_MIMIC),

    [SPECIES_SKITTY]                      =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_DREAM_EATER),

    [SPECIES_DELCATTY]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_DREAM_EATER),

    [SPECIES_KECLEON]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_SEISMIC_TOSS)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_METRONOME)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_BALTOY]                      =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_DREAM_EATER)
                                          |  TUTOR(MOVE_EXPLOSION)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_CLAYDOL]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_DREAM_EATER)
                                          |  TUTOR(MOVE_EXPLOSION)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_NOSEPASS]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_EXPLOSION)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_TORKOAL]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_EXPLOSION)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_SABLEYE]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_SEISMIC_TOSS)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_METRONOME)
                                          |  TUTOR(MOVE_DREAM_EATER),

    [SPECIES_BARBOACH]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_WHISCASH]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_LUVDISC]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MIMIC),

    [SPECIES_CORPHISH]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_CRAWDAUNT]                   =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_FEEBAS]                      =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_MIMIC),

    [SPECIES_MILOTIC]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_MIMIC),

    [SPECIES_CARVANHA]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_MIMIC),

    [SPECIES_SHARPEDO]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_MIMIC),

    [SPECIES_TRAPINCH]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_VIBRAVA]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_FLYGON]                      =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_MAKUHITA]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_SEISMIC_TOSS)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_METRONOME)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_HARIYAMA]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_SEISMIC_TOSS)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_METRONOME)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_ELECTRIKE]                   =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_MIMIC),

    [SPECIES_MANECTRIC]                   =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_MIMIC),

    [SPECIES_NUMEL]                       =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_CAMERUPT]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_EXPLOSION)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_SPHEAL]                      =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_SEALEO]                      =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_WALREIN]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_CACNEA]                      =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_SEISMIC_TOSS)
                                          |  TUTOR(MOVE_MIMIC),

    [SPECIES_CACTURNE]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_SEISMIC_TOSS)
                                          |  TUTOR(MOVE_MIMIC),

    [SPECIES_SNORUNT]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_MIMIC),

    [SPECIES_GLALIE]                      =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_EXPLOSION),

    [SPECIES_LUNATONE]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_DREAM_EATER)
                                          |  TUTOR(MOVE_EXPLOSION)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_SOLROCK]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_DREAM_EATER)
                                          |  TUTOR(MOVE_EXPLOSION)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_AZURILL]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_MIMIC),

    [SPECIES_SPOINK]                      =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_DREAM_EATER),

    [SPECIES_GRUMPIG]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_SEISMIC_TOSS)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_METRONOME)
                                          |  TUTOR(MOVE_DREAM_EATER),

    [SPECIES_PLUSLE]                      =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_SEISMIC_TOSS)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_MIMIC),

    [SPECIES_MINUN]                       =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_SEISMIC_TOSS)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_MIMIC),

    [SPECIES_MAWILE]                      =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_SEISMIC_TOSS)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_MEDITITE]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_SEISMIC_TOSS)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_METRONOME)
                                          |  TUTOR(MOVE_DREAM_EATER)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_MEDICHAM]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_SEISMIC_TOSS)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_METRONOME)
                                          |  TUTOR(MOVE_DREAM_EATER)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_SWABLU]                      =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_DREAM_EATER),

    [SPECIES_ALTARIA]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_DREAM_EATER),

    [SPECIES_WYNAUT]                      =  TUTOR(MOVE_COUNTER),

    [SPECIES_DUSKULL]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_DREAM_EATER),

    [SPECIES_DUSCLOPS]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_SEISMIC_TOSS)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_METRONOME)
                                          |  TUTOR(MOVE_DREAM_EATER),

    [SPECIES_ROSELIA]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_MIMIC),

    [SPECIES_SLAKOTH]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_SEISMIC_TOSS)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_METRONOME)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_VIGOROTH]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_SEISMIC_TOSS)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_METRONOME)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_SLAKING]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_SEISMIC_TOSS)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_METRONOME)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_GULPIN]                      =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_DREAM_EATER)
                                          |  TUTOR(MOVE_EXPLOSION),

    [SPECIES_SWALOT]                      =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_METRONOME)
                                          |  TUTOR(MOVE_DREAM_EATER)
                                          |  TUTOR(MOVE_EXPLOSION),

    [SPECIES_TROPIUS]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_MIMIC),

    [SPECIES_WHISMUR]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_SEISMIC_TOSS)
                                          |  TUTOR(MOVE_MIMIC),

    [SPECIES_LOUDRED]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_SEISMIC_TOSS)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_EXPLOUD]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_SEISMIC_TOSS)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_CLAMPERL]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_MIMIC),

    [SPECIES_HUNTAIL]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_MIMIC),

    [SPECIES_GOREBYSS]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_MIMIC),

    [SPECIES_ABSOL]                       =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_DREAM_EATER)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_SHUPPET]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_METRONOME)
                                          |  TUTOR(MOVE_DREAM_EATER),

    [SPECIES_BANETTE]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_METRONOME)
                                          |  TUTOR(MOVE_DREAM_EATER),

    [SPECIES_SEVIPER]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_MIMIC),

    [SPECIES_ZANGOOSE]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_SEISMIC_TOSS)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_RELICANTH]                   =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_ARON]                        =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_LAIRON]                      =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_AGGRON]                      =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_SEISMIC_TOSS)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_CASTFORM]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_MIMIC),

    [SPECIES_VOLBEAT]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_SEISMIC_TOSS)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_METRONOME),

    [SPECIES_ILLUMISE]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_SEISMIC_TOSS)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_METRONOME),

    [SPECIES_LILEEP]                      =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_CRADILY]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_ANORITH]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_ARMALDO]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_SEISMIC_TOSS)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_RALTS]                       =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_METRONOME)
                                          |  TUTOR(MOVE_DREAM_EATER),

    [SPECIES_KIRLIA]                      =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_METRONOME)
                                          |  TUTOR(MOVE_DREAM_EATER),

    [SPECIES_GARDEVOIR]                   =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_METRONOME)
                                          |  TUTOR(MOVE_DREAM_EATER),

    [SPECIES_BAGON]                       =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_SHELGON]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_SALAMENCE]                   =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_BELDUM]                      = 0,

    [SPECIES_METANG]                      =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_EXPLOSION)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_METAGROSS]                   =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_EXPLOSION)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_REGIROCK]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_SEISMIC_TOSS)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_EXPLOSION)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_REGICE]                      =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_SEISMIC_TOSS)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_EXPLOSION)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_REGISTEEL]                   =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_SEISMIC_TOSS)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_EXPLOSION)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_KYOGRE]                      =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_GROUDON]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_SEISMIC_TOSS)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_RAYQUAZA]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_LATIAS]                      =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_DREAM_EATER),

    [SPECIES_LATIOS]                      =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_DREAM_EATER),

    [SPECIES_JIRACHI]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_METRONOME)
                                          |  TUTOR(MOVE_DREAM_EATER),

    [SPECIES_DEOXYS]                      =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_SEISMIC_TOSS)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_DREAM_EATER)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_CHIMECHO]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_DREAM_EATER),

    [SPECIES_TURTWIG]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE),

    [SPECIES_GROTLE]                      =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE),

    [SPECIES_TORTERRA]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_CHIMCHAR]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_METRONOME)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_MONFERNO]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_METRONOME)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_INFERNAPE]                   =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_METRONOME)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_PIPLUP]                      =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_DOUBLE_EDGE),

    [SPECIES_PRINPLUP]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_DOUBLE_EDGE),

    [SPECIES_EMPOLEON]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_STARLY]                      =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_DOUBLE_EDGE),

    [SPECIES_STARAVIA]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_DOUBLE_EDGE),

    [SPECIES_STARAPTOR]                   =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_DOUBLE_EDGE),

    [SPECIES_BIDOOF]                      =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_THUNDER_WAVE),

    [SPECIES_BIBAREL]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_THUNDER_WAVE),

    [SPECIES_KRICKETOT]                   = 0,

    [SPECIES_KRICKETUNE]                  =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE),

    [SPECIES_SHINX]                       =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_THUNDER_WAVE),

    [SPECIES_LUXIO]                       =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_THUNDER_WAVE),

    [SPECIES_LUXRAY]                      =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_THUNDER_WAVE),

    [SPECIES_BUDEW]                       =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE),

    [SPECIES_ROSERADE]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_MIMIC),

    [SPECIES_CRANIDOS]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_RAMPARDOS]                   =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_SHIELDON]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_BASTIODON]                   =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_BURMY]                       = 0,

    [SPECIES_WORMADAM]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_DREAM_EATER),

    [SPECIES_MOTHIM]                      =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_DREAM_EATER),

    [SPECIES_COMBEE]                      = 0,

    [SPECIES_VESPIQUEN]                   =  TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_PACHIRISU]                   =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_THUNDER_WAVE),

    [SPECIES_BUIZEL]                      =  TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_FLOATZEL]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_METRONOME),

    [SPECIES_CHERUBI]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_DOUBLE_EDGE),

    [SPECIES_CHERRIM]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_DOUBLE_EDGE),

    [SPECIES_SHELLOS]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_GASTRODON]                   =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_AMBIPOM]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_SEISMIC_TOSS)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_METRONOME)
                                          |  TUTOR(MOVE_DREAM_EATER),

    [SPECIES_DRIFLOON]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_DREAM_EATER)
                                          |  TUTOR(MOVE_EXPLOSION),

    [SPECIES_DRIFBLIM]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_DREAM_EATER)
                                          |  TUTOR(MOVE_EXPLOSION),

    [SPECIES_BUNEARY]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_THUNDER_WAVE),

    [SPECIES_LOPUNNY]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_THUNDER_WAVE),

    [SPECIES_MISMAGIUS]                   =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_DREAM_EATER),

    [SPECIES_HONCHKROW]                   =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_DREAM_EATER),

    [SPECIES_GLAMEOW]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_DREAM_EATER),

    [SPECIES_PURUGLY]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_DREAM_EATER),

    [SPECIES_CHINGLING]                   =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_DREAM_EATER),

    [SPECIES_STUNKY]                      =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_EXPLOSION),

    [SPECIES_SKUNTANK]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_EXPLOSION),

    [SPECIES_BRONZOR]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DREAM_EATER)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_BRONZONG]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DREAM_EATER)
                                          |  TUTOR(MOVE_EXPLOSION)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_BONSLY]                      =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_EXPLOSION)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_MIME_JR]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_DREAM_EATER),

    [SPECIES_HAPPINY]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_SEISMIC_TOSS)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_METRONOME)
                                          |  TUTOR(MOVE_SOFT_BOILED)
                                          |  TUTOR(MOVE_DREAM_EATER),

    [SPECIES_CHATOT]                      =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MIMIC),

    [SPECIES_SPIRITOMB]                   =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DREAM_EATER),

    [SPECIES_GIBLE]                       =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_GABITE]                      =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_GARCHOMP]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_MUNCHLAX]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_METRONOME)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_RIOLU]                       =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_LUCARIO]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_METRONOME)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_HIPPOPOTAS]                  =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_HIPPOWDON]                   =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_SKORUPI]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE),

    [SPECIES_DRAPION]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_CROAGUNK]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_TOXICROAK]                   =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_CARNIVINE]                   =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE),

    [SPECIES_FINNEON]                     =  TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_LUMINEON]                    =  TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_MANTYKE]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_SNOVER]                      =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE),

    [SPECIES_ABOMASNOW]                   =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_WEAVILE]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_METRONOME)
                                          |  TUTOR(MOVE_DREAM_EATER),

    [SPECIES_MAGNEZONE]                   =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_EXPLOSION),

    [SPECIES_LICKILICKY]                  =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_SEISMIC_TOSS)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_DREAM_EATER)
                                          |  TUTOR(MOVE_EXPLOSION)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_RHYPERIOR]                   =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_SEISMIC_TOSS)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_TANGROWTH]                   =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_ELECTIVIRE]                  =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_SEISMIC_TOSS)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_METRONOME)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_MAGMORTAR]                   =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_SEISMIC_TOSS)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_METRONOME)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_TOGEKISS]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_SEISMIC_TOSS)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_METRONOME)
                                          |  TUTOR(MOVE_SOFT_BOILED)
                                          |  TUTOR(MOVE_DREAM_EATER),

    [SPECIES_YANMEGA]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_DREAM_EATER),

    [SPECIES_LEAFEON]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_MIMIC),

    [SPECIES_GLACEON]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_MIMIC),

    [SPECIES_GLISCOR]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_MAMOSWINE]                   =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_PORYGON_Z]                   =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_DREAM_EATER),

    [SPECIES_GALLADE]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_METRONOME)
                                          |  TUTOR(MOVE_DREAM_EATER)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_PROBOPASS]                   =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_EXPLOSION)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_DUSKNOIR]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_SEISMIC_TOSS)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_METRONOME)
                                          |  TUTOR(MOVE_DREAM_EATER)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_FROSLASS]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_DREAM_EATER),

    [SPECIES_ROTOM]                       =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_DREAM_EATER),

    [SPECIES_UXIE]                        =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_METRONOME)
                                          |  TUTOR(MOVE_DREAM_EATER),

    [SPECIES_MESPRIT]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_METRONOME)
                                          |  TUTOR(MOVE_DREAM_EATER),

    [SPECIES_AZELF]                       =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_METRONOME)
                                          |  TUTOR(MOVE_DREAM_EATER)
                                          |  TUTOR(MOVE_EXPLOSION),

    [SPECIES_DIALGA]                      =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_PALKIA]                      =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_HEATRAN]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_EXPLOSION)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_REGIGIGAS]                   =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_GIRATINA]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_DREAM_EATER),

    [SPECIES_CRESSELIA]                   =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_DREAM_EATER),

    [SPECIES_PHIONE]                      =  TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_MANAPHY]                     =  TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_DARKRAI]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_DREAM_EATER)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_SHAYMIN]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_DOUBLE_EDGE),

    [SPECIES_ARCEUS]                      =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_SEISMIC_TOSS)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_DREAM_EATER)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_VICTINI]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_THUNDER_WAVE),

    [SPECIES_SNIVY]                       =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_DOUBLE_EDGE),

    [SPECIES_SERVINE]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_DOUBLE_EDGE),

    [SPECIES_SERPERIOR]                   =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE),

    [SPECIES_TEPIG]                       =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE),

    [SPECIES_PIGNITE]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_EMBOAR]                      =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_OSHAWOTT]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE),

    [SPECIES_DEWOTT]                      =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE),

    [SPECIES_SAMUROTT]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_BODY_SLAM),

    [SPECIES_PATRAT]                      =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE),

    [SPECIES_WATCHOG]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_DREAM_EATER),

    [SPECIES_LILLIPUP]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_THUNDER_WAVE),

    [SPECIES_HERDIER]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_THUNDER_WAVE),

    [SPECIES_STOUTLAND]                   =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_THUNDER_WAVE),

    [SPECIES_PURRLOIN]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_DREAM_EATER),

    [SPECIES_LIEPARD]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_DREAM_EATER),

    [SPECIES_PANSAGE]                     =  TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SIMISAGE]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_PANSEAR]                     =  TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SIMISEAR]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_PANPOUR]                     =  TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SIMIPOUR]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_MUNNA]                       =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_DREAM_EATER)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_MUSHARNA]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_DREAM_EATER)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_PIDOVE]                      =  TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_TRANQUILL]                   =  TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_UNFEZANT]                    =  TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_BLITZLE]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_THUNDER_WAVE),

    [SPECIES_ZEBSTRIKA]                   =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_THUNDER_WAVE),

    [SPECIES_ROGGENROLA]                  =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_EXPLOSION)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_BOLDORE]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_EXPLOSION)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_GIGALITH]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_EXPLOSION)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_WOOBAT]                      =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_DREAM_EATER),

    [SPECIES_SWOOBAT]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_DREAM_EATER),

    [SPECIES_DRILBUR]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_EXCADRILL]                   =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_AUDINO]                      =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_DREAM_EATER),

    [SPECIES_TIMBURR]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_GURDURR]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_CONKELDURR]                  =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_TYMPOLE]                     =  TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_PALPITOAD]                   =  TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SEISMITOAD]                  =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_THROH]                       =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_SEISMIC_TOSS)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_SAWK]                        =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_SEWADDLE]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_DREAM_EATER),

    [SPECIES_SWADLOON]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_DREAM_EATER),

    [SPECIES_LEAVANNY]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_DREAM_EATER),

    [SPECIES_VENIPEDE]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_DOUBLE_EDGE),

    [SPECIES_WHIRLIPEDE]                  =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_DOUBLE_EDGE),

    [SPECIES_SCOLIPEDE]                   =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_COTTONEE]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_DREAM_EATER),

    [SPECIES_WHIMSICOTT]                  =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_DREAM_EATER),

    [SPECIES_PETILIL]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_DREAM_EATER),

    [SPECIES_LILLIGANT]                   =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_DREAM_EATER),

    [SPECIES_BASCULIN]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_DOUBLE_EDGE),

    [SPECIES_SANDILE]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_KROKOROK]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_KROOKODILE]                  =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_DARUMAKA]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_DARMANITAN]                  =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_MARACTUS]                    =  TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_DWEBBLE]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_CRUSTLE]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_SCRAGGY]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_SCRAFTY]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_METRONOME)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_SIGILYPH]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_DREAM_EATER),

    [SPECIES_YAMASK]                      =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_DREAM_EATER),

    [SPECIES_COFAGRIGUS]                  =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_DREAM_EATER),

    [SPECIES_TIRTOUGA]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_CARRACOSTA]                  =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_ARCHEN]                      =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_ARCHEOPS]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_TRUBBISH]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_EXPLOSION),

    [SPECIES_GARBODOR]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_EXPLOSION),

    [SPECIES_ZORUA]                       =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_COUNTER),

    [SPECIES_ZOROARK]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_COUNTER),

    [SPECIES_MINCCINO]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_THUNDER_WAVE),

    [SPECIES_CINCCINO]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_THUNDER_WAVE),

    [SPECIES_GOTHITA]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_DREAM_EATER)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_GOTHORITA]                   =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_METRONOME)
                                          |  TUTOR(MOVE_DREAM_EATER)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_GOTHITELLE]                  =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_METRONOME)
                                          |  TUTOR(MOVE_DREAM_EATER)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_SOLOSIS]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_DREAM_EATER)
                                          |  TUTOR(MOVE_EXPLOSION)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_DUOSION]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_DREAM_EATER)
                                          |  TUTOR(MOVE_EXPLOSION)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_REUNICLUS]                   =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_DREAM_EATER)
                                          |  TUTOR(MOVE_EXPLOSION)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_DUCKLETT]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_DOUBLE_EDGE),

    [SPECIES_SWANNA]                      =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_DOUBLE_EDGE),

    [SPECIES_VANILLITE]                   =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_EXPLOSION),

    [SPECIES_VANILLISH]                   =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_EXPLOSION),

    [SPECIES_VANILLUXE]                   =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_EXPLOSION),

    [SPECIES_DEERLING]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_THUNDER_WAVE),

    [SPECIES_SAWSBUCK]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_THUNDER_WAVE),

    [SPECIES_EMOLGA]                      =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_THUNDER_WAVE),

    [SPECIES_KARRABLAST]                  =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER),

    [SPECIES_ESCAVALIER]                  =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER),

    [SPECIES_FOONGUS]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM),

    [SPECIES_AMOONGUSS]                   =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM),

    [SPECIES_FRILLISH]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_DREAM_EATER),

    [SPECIES_JELLICENT]                   =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_DREAM_EATER),

    [SPECIES_ALOMOMOLA]                   =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM),

    [SPECIES_JOLTIK]                      =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_THUNDER_WAVE),

    [SPECIES_GALVANTULA]                  =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_THUNDER_WAVE),

    [SPECIES_FERROSEED]                   =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_EXPLOSION),

    [SPECIES_FERROTHORN]                  =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_EXPLOSION),

    [SPECIES_KLINK]                       =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_THUNDER_WAVE),

    [SPECIES_KLANG]                       =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_THUNDER_WAVE),

    [SPECIES_KLINKLANG]                   =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_THUNDER_WAVE),

    [SPECIES_TYNAMO]                      =  TUTOR(MOVE_THUNDER_WAVE),

    [SPECIES_EELEKTRIK]                   =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_THUNDER_WAVE),

    [SPECIES_EELEKTROSS]                  =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_ELGYEM]                      =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_DREAM_EATER)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_BEHEEYEM]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_DREAM_EATER)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_LITWICK]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_DREAM_EATER),

    [SPECIES_LAMPENT]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_DREAM_EATER),

    [SPECIES_CHANDELURE]                  =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_DREAM_EATER),

    [SPECIES_AXEW]                        =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER),

    [SPECIES_FRAXURE]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER),

    [SPECIES_HAXORUS]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_CUBCHOO]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_BEARTIC]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_CRYOGONAL]                   =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_EXPLOSION),

    [SPECIES_SHELMET]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM),

    [SPECIES_ACCELGOR]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM),

    [SPECIES_STUNFISK]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_MIENFOO]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_MEGA_KICK),

    [SPECIES_MIENSHAO]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_DOUBLE_EDGE),

    [SPECIES_DRUDDIGON]                   =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_GOLETT]                      =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_GOLURK]                      =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_PAWNIARD]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_THUNDER_WAVE),

    [SPECIES_BISHARP]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_THUNDER_WAVE),

    [SPECIES_BOUFFALANT]                  =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_RUFFLET]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_BRAVIARY]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_VULLABY]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_DOUBLE_EDGE),

    [SPECIES_MANDIBUZZ]                   =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_DOUBLE_EDGE),

    [SPECIES_HEATMOR]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM),

    [SPECIES_DURANT]                      =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_DEINO]                       =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_THUNDER_WAVE),

    [SPECIES_ZWEILOUS]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_THUNDER_WAVE),

    [SPECIES_HYDREIGON]                   =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_LARVESTA]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE),

    [SPECIES_VOLCARONA]                   =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE),

    [SPECIES_COBALION]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_THUNDER_WAVE),

    [SPECIES_TERRAKION]                   =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_VIRIZION]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE),

    [SPECIES_TORNADUS]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_METRONOME),

    [SPECIES_THUNDURUS]                   =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_THUNDER_WAVE),

    [SPECIES_RESHIRAM]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_ZEKROM]                      =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_LANDORUS]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_EXPLOSION)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_KYUREM]                      =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_KELDEO]                      =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_DOUBLE_EDGE),

    [SPECIES_MELOETTA]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_METRONOME)
                                          |  TUTOR(MOVE_DREAM_EATER),

    [SPECIES_GENESECT]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_EXPLOSION),

    [SPECIES_CHESPIN]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_QUILLADIN]                   =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_CHESNAUGHT]                  =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_FENNEKIN]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_DREAM_EATER),

    [SPECIES_BRAIXEN]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_DREAM_EATER),

    [SPECIES_DELPHOX]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_METRONOME)
                                          |  TUTOR(MOVE_DREAM_EATER),

    [SPECIES_FROAKIE]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_FROGADIER]                   =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_GRENINJA]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_BUNNELBY]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_DIGGERSBY]                   =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_FLETCHLING]                  =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_DOUBLE_EDGE),

    [SPECIES_FLETCHINDER]                 =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_DOUBLE_EDGE),

    [SPECIES_TALONFLAME]                  =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_DOUBLE_EDGE),

    [SPECIES_SCATTERBUG]                  = 0,

    [SPECIES_SPEWPA]                      = 0,

    [SPECIES_VIVILLON]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_DREAM_EATER),

    [SPECIES_LITLEO]                      =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE),

    [SPECIES_PYROAR]                      =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE),

    [SPECIES_FLABEBE]                     =  TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_FLOETTE]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_METRONOME),

    [SPECIES_FLORGES]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_METRONOME),

    [SPECIES_SKIDDO]                      =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_GOGOAT]                      =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_PANCHAM]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_SEISMIC_TOSS)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_PANGORO]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_SEISMIC_TOSS)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_FURFROU]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_MIMIC),

    [SPECIES_ESPURR]                      =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_DREAM_EATER),

    [SPECIES_MEOWSTIC]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_DREAM_EATER),

    [SPECIES_HONEDGE]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_DOUBLADE]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_AEGISLASH]                   =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_SPRITZEE]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_DREAM_EATER),

    [SPECIES_AROMATISSE]                  =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_METRONOME)
                                          |  TUTOR(MOVE_DREAM_EATER),

    [SPECIES_SWIRLIX]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_DREAM_EATER),

    [SPECIES_SLURPUFF]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_METRONOME)
                                          |  TUTOR(MOVE_DREAM_EATER),

    [SPECIES_INKAY]                       =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_MALAMAR]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_BINACLE]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_BARBARACLE]                  =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_SKRELP]                      =  TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_DRAGALGE]                    =  TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_CLAUNCHER]                   =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_CLAWITZER]                   =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_HELIOPTILE]                  =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_HELIOLISK]                   =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_TYRUNT]                      =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_TYRANTRUM]                   =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_AMAURA]                      =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_DREAM_EATER)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_AURORUS]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_DREAM_EATER)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_SYLVEON]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_MIMIC),

    [SPECIES_HAWLUCHA]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_DEDENNE]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_THUNDER_WAVE),

    [SPECIES_CARBINK]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_EXPLOSION)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_GOOMY]                       =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_SLIGGOO]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_GOODRA]                      =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_KLEFKI]                      =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_THUNDER_WAVE),

    [SPECIES_PHANTUMP]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_DREAM_EATER)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_TREVENANT]                   =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_DREAM_EATER)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_PUMPKABOO]                   =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_DREAM_EATER)
                                          |  TUTOR(MOVE_EXPLOSION)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_GOURGEIST]                   =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_DREAM_EATER)
                                          |  TUTOR(MOVE_EXPLOSION)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_BERGMITE]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_AVALUGG]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_NOIBAT]                      =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_DREAM_EATER),

    [SPECIES_NOIVERN]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_DREAM_EATER),

    [SPECIES_XERNEAS]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_YVELTAL]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DREAM_EATER)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_ZYGARDE]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_DIANCIE]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_METRONOME)
                                          |  TUTOR(MOVE_EXPLOSION)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_HOOPA]                       =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_DREAM_EATER),

    [SPECIES_VOLCANION]                   =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_EXPLOSION)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_ROWLET]                      =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE),

    [SPECIES_DARTRIX]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE),

    [SPECIES_DECIDUEYE]                   =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE),

    [SPECIES_LITTEN]                      =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE),

    [SPECIES_TORRACAT]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE),

    [SPECIES_INCINEROAR]                  =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE),

    [SPECIES_POPPLIO]                     =  TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_BRIONNE]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM),

    [SPECIES_PRIMARINA]                   =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM),

    [SPECIES_PIKIPEK]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE),

    [SPECIES_TRUMBEAK]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE),

    [SPECIES_TOUCANNON]                   =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE),

    [SPECIES_YUNGOOS]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_DOUBLE_EDGE),

    [SPECIES_GUMSHOOS]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE),

    [SPECIES_GRUBBIN]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_THUNDER_WAVE),

    [SPECIES_CHARJABUG]                   =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_THUNDER_WAVE),

    [SPECIES_VIKAVOLT]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_THUNDER_WAVE),

    [SPECIES_CRABRAWLER]                  =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_CRABOMINABLE]                =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_ORICORIO]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE),

    [SPECIES_CUTIEFLY]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_DREAM_EATER),

    [SPECIES_RIBOMBEE]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_DREAM_EATER),

    [SPECIES_ROCKRUFF]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_LYCANROC]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_WISHIWASHI]                  =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_DOUBLE_EDGE),

    [SPECIES_MAREANIE]                    =  TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_TOXAPEX]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM),

    [SPECIES_MUDBRAY]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_MUDSDALE]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_DEWPIDER]                    =  TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_ARAQUANID]                   =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM),

    [SPECIES_FOMANTIS]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE),

    [SPECIES_LURANTIS]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE),

    [SPECIES_MORELULL]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_DREAM_EATER),

    [SPECIES_SHIINOTIC]                   =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_DREAM_EATER),

    [SPECIES_SALANDIT]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_THUNDER_WAVE),

    [SPECIES_SALAZZLE]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_THUNDER_WAVE),

    [SPECIES_STUFFUL]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_BEWEAR]                      =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_BOUNSWEET]                   =  TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_STEENEE]                     =  TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_TSAREENA]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_KICK),

    [SPECIES_COMFEY]                      =  TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_ORANGURU]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DREAM_EATER)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_PASSIMIAN]                   =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_SEISMIC_TOSS)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_WIMPOD]                      =  TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_GOLISOPOD]                   =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_SANDYGAST]                   =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_PALOSSAND]                   =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_PYUKUMUKU]                   =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_COUNTER),

    [SPECIES_TYPE_NULL]                   =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_SILVALLY]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_EXPLOSION)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_MINIOR]                      =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_EXPLOSION)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_KOMALA]                      =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_TURTONATOR]                  =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_EXPLOSION),

    [SPECIES_TOGEDEMARU]                  =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_THUNDER_WAVE),

    [SPECIES_MIMIKYU]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_DREAM_EATER),

    [SPECIES_BRUXISH]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_DREAM_EATER),

    [SPECIES_DRAMPA]                      =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_DHELMISE]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_JANGMO_O]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_HAKAMO_O]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_KOMMO_O]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_TAPU_KOKO]                   =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_THUNDER_WAVE),

    [SPECIES_TAPU_LELE]                   =  TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_TAPU_BULU]                   =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_TAPU_FINI]                   =  TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_COSMOG]                      = 0,

    [SPECIES_COSMOEM]                     = 0,

    [SPECIES_SOLGALEO]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_LUNALA]                      =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_DREAM_EATER),

    [SPECIES_NIHILEGO]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_BUZZWOLE]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_PHEROMOSA]                   =  TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_XURKITREE]                   =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_THUNDER_WAVE),

    [SPECIES_CELESTEELA]                  =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_EXPLOSION)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_KARTANA]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE),

    [SPECIES_GUZZLORD]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_NECROZMA]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_MAGEARNA]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_EXPLOSION),

    [SPECIES_MARSHADOW]                   =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_POIPOLE]                     =  TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_NAGANADEL]                   =  TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_STAKATAKA]                   =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_BLACEPHALON]                 =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_EXPLOSION),

    [SPECIES_ZERAORA]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_THUNDER_WAVE),

    [SPECIES_MELTAN]                      =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_THUNDER_WAVE),

    [SPECIES_MELMETAL]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_GROOKEY]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM),

    [SPECIES_THWACKEY]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE),

    [SPECIES_RILLABOOM]                   =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE),

    [SPECIES_SCORBUNNY]                   =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER),

    [SPECIES_RABOOT]                      =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER),

    [SPECIES_CINDERACE]                   =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER),

    [SPECIES_SOBBLE]                      =  TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_DRIZZILE]                    =  TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_INTELEON]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_METRONOME),

    [SPECIES_SKWOVET]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER),

    [SPECIES_GREEDENT]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER),

    [SPECIES_ROOKIDEE]                    =  TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_CORVISQUIRE]                 =  TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_CORVIKNIGHT]                 =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE),

    [SPECIES_BLIPBUG]                     = 0,

    [SPECIES_DOTTLER]                     =  TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_ORBEETLE]                    =  TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_NICKIT]                      =  TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_THIEVUL]                     =  TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_GOSSIFLEUR]                  =  TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_ELDEGOSS]                    =  TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_WOOLOO]                      =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_THUNDER_WAVE),

    [SPECIES_DUBWOOL]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_THUNDER_WAVE),

    [SPECIES_CHEWTLE]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_COUNTER),

    [SPECIES_DREDNAW]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_YAMPER]                      =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_THUNDER_WAVE),

    [SPECIES_BOLTUND]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_THUNDER_WAVE),

    [SPECIES_ROLYCOLY]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_EXPLOSION)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_CARKOL]                      =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_EXPLOSION)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_COALOSSAL]                   =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_EXPLOSION)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_APPLIN]                      = 0,

    [SPECIES_FLAPPLE]                     =  TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_APPLETUN]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM),

    [SPECIES_SILICOBRA]                   =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_SANDACONDA]                  =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_CRAMORANT]                   =  TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_ARROKUDA]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_DOUBLE_EDGE),

    [SPECIES_BARRASKEWDA]                 =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_DOUBLE_EDGE),

    [SPECIES_TOXEL]                       =  TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_TOXTRICITY]                  =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_METRONOME),

    [SPECIES_SIZZLIPEDE]                  =  TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_CENTISKORCH]                 =  TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_CLOBBOPUS]                   =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_SEISMIC_TOSS),

    [SPECIES_GRAPPLOCT]                   =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_SEISMIC_TOSS),

    [SPECIES_SINISTEA]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_METRONOME),

    [SPECIES_POLTEAGEIST]                 =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_METRONOME),

    [SPECIES_HATENNA]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_METRONOME),

    [SPECIES_HATTREM]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_METRONOME),

    [SPECIES_HATTERENE]                   =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_METRONOME),

    [SPECIES_IMPIDIMP]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_METRONOME),

    [SPECIES_MORGREM]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_METRONOME),

    [SPECIES_GRIMMSNARL]                  =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_METRONOME),

    [SPECIES_OBSTAGOON]                   =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_THUNDER_WAVE),

    [SPECIES_PERRSERKER]                  =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_METRONOME),

    [SPECIES_CURSOLA]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_SIRFETCHD]                   =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_COUNTER),

    [SPECIES_MR_RIME]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_METRONOME)
                                          |  TUTOR(MOVE_DREAM_EATER),

    [SPECIES_RUNERIGUS]                   =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_MILCERY]                     =  TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_ALCREMIE]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_METRONOME),

    [SPECIES_FALINKS]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_PINCURCHIN]                  =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_THUNDER_WAVE),

    [SPECIES_SNOM]                        =  TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_FROSMOTH]                    =  TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_STONJOURNER]                 =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_EISCUE]                      =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE),

    [SPECIES_INDEEDEE]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_METRONOME),

    [SPECIES_MORPEKO]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_THUNDER_WAVE),

    [SPECIES_CUFANT]                      =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_COPPERAJAH]                  =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_DRACOZOLT]                   =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_ARCTOZOLT]                   =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_DRACOVISH]                   =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_ARCTOVISH]                   =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_DURALUDON]                   =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_DREEPY]                      =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_THUNDER_WAVE),

    [SPECIES_DRAKLOAK]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_THUNDER_WAVE),

    [SPECIES_DRAGAPULT]                   =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_THUNDER_WAVE),

    [SPECIES_ZACIAN]                      =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_BODY_SLAM),

    [SPECIES_ZAMAZENTA]                   =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM),

    [SPECIES_ETERNATUS]                   =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM),

    [SPECIES_KUBFU]                       =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER),

    [SPECIES_URSHIFU]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_ZARUDE]                      =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_REGIELEKI]                   =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_EXPLOSION),

    [SPECIES_REGIDRAGO]                   =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_EXPLOSION),

    [SPECIES_GLASTRIER]                   =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE),

    [SPECIES_SPECTRIER]                   =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE),

    [SPECIES_CALYREX]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_METRONOME),

    [SPECIES_WYRDEER]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_DREAM_EATER),

    [SPECIES_KLEAVOR]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_URSALUNA]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_SEISMIC_TOSS)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_METRONOME)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_BASCULEGION]                 =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_DOUBLE_EDGE),

    [SPECIES_SNEASLER]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_OVERQWIL]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_DOUBLE_EDGE),

    [SPECIES_ENAMORUS]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM),

    [SPECIES_SPRIGATITO]                  =  TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_FLORAGATO]                   =  TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_MEOWSCARADA]                 =  TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_FUECOCO]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM),

    [SPECIES_CROCALOR]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM),

    [SPECIES_SKELEDIRGE]                  =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM),

    [SPECIES_QUAXLY]                      =  TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_QUAXWELL]                    =  TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_QUAQUAVAL]                   =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_COUNTER),

    [SPECIES_LECHONK]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE),

    [SPECIES_OINKOLOGNE]                  =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE),

    [SPECIES_TAROUNTULA]                  =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_COUNTER),

    [SPECIES_SPIDOPS]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_COUNTER),

    [SPECIES_NYMBLE]                      =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_COUNTER),

    [SPECIES_LOKIX]                       =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER),

    [SPECIES_PAWMI]                       =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_THUNDER_WAVE),

    [SPECIES_PAWMO]                       =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_THUNDER_WAVE),

    [SPECIES_PAWMOT]                      =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_METRONOME),

    [SPECIES_TANDEMAUS]                   =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_THUNDER_WAVE),

    [SPECIES_MAUSHOLD]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_THUNDER_WAVE),

    [SPECIES_FIDOUGH]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE),

    [SPECIES_DACHSBUN]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE),

    [SPECIES_SMOLIV]                      =  TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_DOLLIV]                      =  TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_ARBOLIVA]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_METRONOME),

    [SPECIES_SQUAWKABILLY]                =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_MIMIC),

    [SPECIES_NACLI]                       =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_NACLSTACK]                   =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_GARGANACL]                   =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_EXPLOSION)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_CHARCADET]                   =  TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_ARMAROUGE]                   =  TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_CERULEDGE]                   =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE),

    [SPECIES_TADBULB]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_THUNDER_WAVE),

    [SPECIES_BELLIBOLT]                   =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_THUNDER_WAVE),

    [SPECIES_WATTREL]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_THUNDER_WAVE),

    [SPECIES_KILOWATTREL]                 =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_THUNDER_WAVE),

    [SPECIES_MASCHIFF]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE),

    [SPECIES_MABOSSTIFF]                  =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE),

    [SPECIES_SHROODLE]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_METRONOME),

    [SPECIES_GRAFAIAI]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_METRONOME),

    [SPECIES_BRAMBLIN]                    =  TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_BRAMBLEGHAST]                =  TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_TOEDSCOOL]                   =  TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_TOEDSCRUEL]                  =  TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_KLAWF]                       =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_CAPSAKID]                    =  TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SCOVILLAIN]                  =  TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_RELLOR]                      =  TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_RABSCA]                      =  TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_FLITTLE]                     =  TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_ESPATHRA]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE),

    [SPECIES_TINKATINK]                   =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_METRONOME)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_TINKATUFF]                   =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_METRONOME)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_TINKATON]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_METRONOME)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_WIGLETT]                     =  TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_WUGTRIO]                     =  TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_BOMBIRDIER]                  =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_FINIZEN]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_COUNTER),

    [SPECIES_PALAFIN]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_COUNTER),

    [SPECIES_VAROOM]                      =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE),

    [SPECIES_REVAVROOM]                   =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE),

    [SPECIES_CYCLIZAR]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE),

    [SPECIES_ORTHWORM]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_GLIMMET]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_EXPLOSION)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_GLIMMORA]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_EXPLOSION)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_GREAVARD]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_DOUBLE_EDGE),

    [SPECIES_HOUNDSTONE]                  =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_DOUBLE_EDGE),

    [SPECIES_FLAMIGO]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_MEGA_KICK),

    [SPECIES_CETODDLE]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE),

    [SPECIES_CETITAN]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE),

    [SPECIES_VELUZA]                      =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE),

    [SPECIES_DONDOZO]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_TATSUGIRI]                   =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_COUNTER),

    [SPECIES_ANNIHILAPE]                  =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_SEISMIC_TOSS)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_METRONOME)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_CLODSIRE]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_FARIGIRAF]                   =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_DREAM_EATER),

    [SPECIES_DUDUNSPARCE]                 =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_DREAM_EATER)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_KINGAMBIT]                   =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_THUNDER_WAVE),

    [SPECIES_GREAT_TUSK]                  =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_SCREAM_TAIL]                 =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_METRONOME),

    [SPECIES_BRUTE_BONNET]                =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE),

    [SPECIES_FLUTTER_MANE]                =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_THUNDER_WAVE),

    [SPECIES_SLITHER_WING]                =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE),

    [SPECIES_SANDY_SHOCKS]                =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_THUNDER_WAVE),

    [SPECIES_IRON_TREADS]                 =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_IRON_BUNDLE]                 =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM),

    [SPECIES_IRON_HANDS]                  =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_SEISMIC_TOSS)
                                          |  TUTOR(MOVE_METRONOME)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_IRON_JUGULIS]                =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE),

    [SPECIES_IRON_MOTH]                   =  TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_IRON_THORNS]                 =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_FRIGIBAX]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_BODY_SLAM),

    [SPECIES_ARCTIBAX]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_BODY_SLAM),

    [SPECIES_BAXCALIBUR]                  =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE),

    [SPECIES_GIMMIGHOUL]                  =  TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_GHOLDENGO]                   =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_THUNDER_WAVE),

    [SPECIES_WO_CHIEN]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM),

    [SPECIES_CHIEN_PAO]                   =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE),

    [SPECIES_TING_LU]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_CHI_YU]                      =  TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_ROARING_MOON]                =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_IRON_VALIANT]                =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_METRONOME),

    [SPECIES_KORAIDON]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER),

    [SPECIES_MIRAIDON]                    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_THUNDER_WAVE),

    [SPECIES_WALKING_WAKE]                =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE),

    [SPECIES_IRON_LEAVES]                 =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_DOUBLE_EDGE),

    [SPECIES_DIPPLIN]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM),

    [SPECIES_POLTCHAGEIST]                =  TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SINISTCHA]                   =  TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_OKIDOGI]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER),

    [SPECIES_MUNKIDORI]                   =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_METRONOME),

    [SPECIES_FEZANDIPITI]                 =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE),

    [SPECIES_OGERPON]                     =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_COUNTER),

    [SPECIES_ARCHALUDON]                  =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_HYDRAPPLE]                   =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE),

    [SPECIES_GOUGING_FIRE]                =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE),

    [SPECIES_RAGING_BOLT]                 =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_THUNDER_WAVE),

    [SPECIES_IRON_BOULDER]                =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER),

    [SPECIES_IRON_CROWN]                  =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE),

    [SPECIES_TERAPAGOS]                   =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_PECHARUNT]                   =  TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_VENUSAUR_MEGA]               =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_MIMIC),

    [SPECIES_CHARIZARD_MEGA_X]            =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_SEISMIC_TOSS)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_CHARIZARD_MEGA_Y]            =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_SEISMIC_TOSS)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_BLASTOISE_MEGA]              =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_SEISMIC_TOSS)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_BEEDRILL_MEGA]               =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_MIMIC),

    [SPECIES_PIDGEOT_MEGA]                =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_MIMIC),

    [SPECIES_ALAKAZAM_MEGA]               =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_SEISMIC_TOSS)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_METRONOME)
                                          |  TUTOR(MOVE_DREAM_EATER),

    [SPECIES_SLOWBRO_MEGA]                =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_SEISMIC_TOSS)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_METRONOME)
                                          |  TUTOR(MOVE_DREAM_EATER),

    [SPECIES_GENGAR_MEGA]                 =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_SEISMIC_TOSS)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_METRONOME)
                                          |  TUTOR(MOVE_DREAM_EATER)
                                          |  TUTOR(MOVE_EXPLOSION),

    [SPECIES_KANGASKHAN_MEGA]             =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_SEISMIC_TOSS)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_PINSIR_MEGA]                 =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_SEISMIC_TOSS)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_GYARADOS_MEGA]               =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_MIMIC),

    [SPECIES_AERODACTYL_MEGA]             =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_MEWTWO_MEGA_X]               =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_SEISMIC_TOSS)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_METRONOME)
                                          |  TUTOR(MOVE_DREAM_EATER)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_MEWTWO_MEGA_Y]               =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_SEISMIC_TOSS)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_METRONOME)
                                          |  TUTOR(MOVE_DREAM_EATER)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_AMPHAROS_MEGA]               =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_SEISMIC_TOSS)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_MIMIC),

    [SPECIES_STEELIX_MEGA]                =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_EXPLOSION)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_SCIZOR_MEGA]                 =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_MIMIC),

    [SPECIES_HERACROSS_MEGA]              =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_SEISMIC_TOSS)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_HOUNDOOM_MEGA]               =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_DREAM_EATER),

    [SPECIES_TYRANITAR_MEGA]              =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_SEISMIC_TOSS)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_SCEPTILE_MEGA]               =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_SEISMIC_TOSS)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_BLAZIKEN_MEGA]               =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_SEISMIC_TOSS)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_SWAMPERT_MEGA]               =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_SEISMIC_TOSS)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_GARDEVOIR_MEGA]              =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_METRONOME)
                                          |  TUTOR(MOVE_DREAM_EATER),

    [SPECIES_SABLEYE_MEGA]                =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_SEISMIC_TOSS)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_METRONOME)
                                          |  TUTOR(MOVE_DREAM_EATER),

    [SPECIES_MAWILE_MEGA]                 =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_SEISMIC_TOSS)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_AGGRON_MEGA]                 =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_SEISMIC_TOSS)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_MEDICHAM_MEGA]               =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_SEISMIC_TOSS)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_METRONOME)
                                          |  TUTOR(MOVE_DREAM_EATER)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_MANECTRIC_MEGA]              =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_MIMIC),

    [SPECIES_SHARPEDO_MEGA]               =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_MIMIC),

    [SPECIES_CAMERUPT_MEGA]               =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_EXPLOSION)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_ALTARIA_MEGA]                =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_DREAM_EATER),

    [SPECIES_BANETTE_MEGA]                =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_METRONOME)
                                          |  TUTOR(MOVE_DREAM_EATER),

    [SPECIES_ABSOL_MEGA]                  =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_DREAM_EATER)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_GLALIE_MEGA]                 =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_EXPLOSION),

    [SPECIES_SALAMENCE_MEGA]              =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_METAGROSS_MEGA]              =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_EXPLOSION)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_LATIAS_MEGA]                 =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_DREAM_EATER),

    [SPECIES_LATIOS_MEGA]                 =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_DREAM_EATER),

    [SPECIES_LOPUNNY_MEGA]                =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_THUNDER_WAVE),

    [SPECIES_GARCHOMP_MEGA]               =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_LUCARIO_MEGA]                =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_METRONOME)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_ABOMASNOW_MEGA]              =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_GALLADE_MEGA]                =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_METRONOME)
                                          |  TUTOR(MOVE_DREAM_EATER)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_AUDINO_MEGA]                 =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_DREAM_EATER),

    [SPECIES_DIANCIE_MEGA]                =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_METRONOME)
                                          |  TUTOR(MOVE_EXPLOSION)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_RAYQUAZA_MEGA]               =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_KYOGRE_PRIMAL]               =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_GROUDON_PRIMAL]              =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_SEISMIC_TOSS)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_RATTATA_ALOLAN]              =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER),

    [SPECIES_RATICATE_ALOLAN]             =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER),

    [SPECIES_RAICHU_ALOLAN]               =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_SEISMIC_TOSS)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_MIMIC),

    [SPECIES_SANDSHREW_ALOLAN]            =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_SEISMIC_TOSS)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_SANDSLASH_ALOLAN]            =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_SEISMIC_TOSS)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_VULPIX_ALOLAN]               =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_DOUBLE_EDGE),

    [SPECIES_NINETALES_ALOLAN]            =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_DREAM_EATER),

    [SPECIES_DIGLETT_ALOLAN]              =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_DUGTRIO_ALOLAN]              =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_MEOWTH_ALOLAN]               =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_DREAM_EATER),

    [SPECIES_PERSIAN_ALOLAN]              =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_DREAM_EATER),

    [SPECIES_GEODUDE_ALOLAN]              =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_SEISMIC_TOSS)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_EXPLOSION)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_GRAVELER_ALOLAN]             =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_SEISMIC_TOSS)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_METRONOME)
                                          |  TUTOR(MOVE_EXPLOSION)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_GOLEM_ALOLAN]                =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_SEISMIC_TOSS)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_METRONOME)
                                          |  TUTOR(MOVE_EXPLOSION)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_GRIMER_ALOLAN]               =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_METRONOME)
                                          |  TUTOR(MOVE_EXPLOSION)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_MUK_ALOLAN]                  =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_METRONOME)
                                          |  TUTOR(MOVE_EXPLOSION)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_EXEGGUTOR_ALOLAN]            =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_DREAM_EATER)
                                          |  TUTOR(MOVE_EXPLOSION),

    [SPECIES_MAROWAK_ALOLAN]              =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_SEISMIC_TOSS)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_DREAM_EATER)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_MEOWTH_GALARIAN]             =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_METRONOME),

    [SPECIES_PONYTA_GALARIAN]             =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM),

    [SPECIES_RAPIDASH_GALARIAN]           =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_BODY_SLAM),

    [SPECIES_SLOWPOKE_GALARIAN]           =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_THUNDER_WAVE),

    [SPECIES_SLOWBRO_GALARIAN]            =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_METRONOME),

    [SPECIES_FARFETCHD_GALARIAN]          =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_COUNTER),

    [SPECIES_WEEZING_GALARIAN]            =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_EXPLOSION),

    [SPECIES_MR_MIME_GALARIAN]            =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_METRONOME)
                                          |  TUTOR(MOVE_DREAM_EATER),

    [SPECIES_ARTICUNO_GALARIAN]           =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_DREAM_EATER),

    [SPECIES_ZAPDOS_GALARIAN]             =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER),

    [SPECIES_MOLTRES_GALARIAN]            =  TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SLOWKING_GALARIAN]           =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_METRONOME),

    [SPECIES_CORSOLA_GALARIAN]            =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_ZIGZAGOON_GALARIAN]          =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_THUNDER_WAVE),

    [SPECIES_LINOONE_GALARIAN]            =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_THUNDER_WAVE),

    [SPECIES_DARUMAKA_GALARIAN]           =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_DARMANITAN_GALARIAN]         =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_YAMASK_GALARIAN]             =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_STUNFISK_GALARIAN]           =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_GROWLITHE_HISUIAN]           =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_ARCANINE_HISUIAN]            =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_VOLTORB_HISUIAN]             =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_EXPLOSION),

    [SPECIES_ELECTRODE_HISUIAN]           =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_EXPLOSION),

    [SPECIES_TYPHLOSION_HISUIAN]          =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_QWILFISH_HISUIAN]            =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_DOUBLE_EDGE),

    [SPECIES_SNEASEL_HISUIAN]             =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_COUNTER),

    [SPECIES_SAMUROTT_HISUIAN]            =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_BODY_SLAM),

    [SPECIES_LILLIGANT_HISUIAN]           =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_METRONOME)
                                          |  TUTOR(MOVE_DREAM_EATER),

    [SPECIES_ZORUA_HISUIAN]               =  TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_ZOROARK_HISUIAN]             =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_BODY_SLAM),

    [SPECIES_BRAVIARY_HISUIAN]            =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_SLIGGOO_HISUIAN]             =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_GOODRA_HISUIAN]              =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_AVALUGG_HISUIAN]             =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_DECIDUEYE_HISUIAN]           =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE),

    [SPECIES_TAUROS_PALDEAN]              =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_WOOPER_PALDEAN]              =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_PIKACHU_CAP]                 =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_SEISMIC_TOSS)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_MIMIC),

    [SPECIES_PIKACHU_PARTNER]             =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_SEISMIC_TOSS)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_MIMIC),

    [SPECIES_TAUROS_PALDEAN_BLAZE_BREED]  =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_TAUROS_PALDEAN_AQUA_BREED]   =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_EEVEE_PARTNER]               =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_MIMIC),

    [SPECIES_PICHU_SPIKY_EARED]           =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_SEISMIC_TOSS)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_MIMIC),

    [SPECIES_CASTFORM_SUNNY]              =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_MIMIC),

    [SPECIES_CASTFORM_RAINY]              =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_MIMIC),

    [SPECIES_CASTFORM_SNOWY]              =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_MIMIC),

    [SPECIES_DEOXYS_ATTACK]               =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_SEISMIC_TOSS)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_DREAM_EATER)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_DEOXYS_DEFENSE]              =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_SEISMIC_TOSS)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_DREAM_EATER)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_DEOXYS_SPEED]                =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_SEISMIC_TOSS)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_DREAM_EATER)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_BURMY_SANDY_CLOAK]           = 0,

    [SPECIES_BURMY_TRASH_CLOAK]           = 0,

    [SPECIES_WORMADAM_SANDY_CLOAK]        =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_DREAM_EATER),

    [SPECIES_WORMADAM_TRASH_CLOAK]        =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_DREAM_EATER),

    [SPECIES_CHERRIM_SUNSHINE]            =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_DOUBLE_EDGE),

    [SPECIES_ROTOM_HEAT]                  =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_DREAM_EATER),

    [SPECIES_ROTOM_WASH]                  =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_DREAM_EATER),

    [SPECIES_ROTOM_FROST]                 =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_DREAM_EATER),

    [SPECIES_ROTOM_FAN]                   =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_DREAM_EATER),

    [SPECIES_ROTOM_MOW]                   =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_DREAM_EATER),

    [SPECIES_DIALGA_ORIGIN]               =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_PALKIA_ORIGIN]               =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_GIRATINA_ORIGIN]             =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_DREAM_EATER),

    [SPECIES_SHAYMIN_SKY]                 =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_DOUBLE_EDGE),

    [SPECIES_BASCULIN_BLUE_STRIPED]       =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_DOUBLE_EDGE),

    [SPECIES_BASCULIN_WHITE_STRIPED]      =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_DOUBLE_EDGE),

    [SPECIES_DARMANITAN_ZEN_MODE]         =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_DARMANITAN_ZEN_MODE_GALARIAN]=  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_TORNADUS_THERIAN]            =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_METRONOME),

    [SPECIES_THUNDURUS_THERIAN]           =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_THUNDER_WAVE),

    [SPECIES_LANDORUS_THERIAN]            =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_EXPLOSION)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_KYUREM_WHITE]                =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_KYUREM_BLACK]                =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_MELOETTA_PIROUETTE]          =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_METRONOME)
                                          |  TUTOR(MOVE_DREAM_EATER),

    [SPECIES_GRENINJA_ASH]                =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_FLOETTE_ETERNAL_FLOWER]      =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_METRONOME),

    [SPECIES_MEOWSTIC_FEMALE]             =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_DREAM_EATER),

    [SPECIES_AEGISLASH_BLADE]             =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_PUMPKABOO_SMALL]             =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_DREAM_EATER)
                                          |  TUTOR(MOVE_EXPLOSION)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_PUMPKABOO_LARGE]             =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_DREAM_EATER)
                                          |  TUTOR(MOVE_EXPLOSION)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_PUMPKABOO_SUPER]             =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_DREAM_EATER)
                                          |  TUTOR(MOVE_EXPLOSION)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_GOURGEIST_SMALL]             =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_DREAM_EATER)
                                          |  TUTOR(MOVE_EXPLOSION)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_GOURGEIST_LARGE]             =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_DREAM_EATER)
                                          |  TUTOR(MOVE_EXPLOSION)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_GOURGEIST_SUPER]             =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_DREAM_EATER)
                                          |  TUTOR(MOVE_EXPLOSION)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_ZYGARDE_10]                  =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_ZYGARDE_COMPLETE]            =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_HOOPA_UNBOUND]               =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_DREAM_EATER),

    [SPECIES_ORICORIO_POM_POM]            =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE),

    [SPECIES_ORICORIO_PAU]                =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE),

    [SPECIES_ORICORIO_SENSU]              =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE),

    [SPECIES_LYCANROC_MIDNIGHT]           =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_LYCANROC_DUSK]               =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_WISHIWASHI_SCHOOL]           =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_DOUBLE_EDGE),

    [SPECIES_MINIOR_CORE_RED]             =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_EXPLOSION)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_NECROZMA_DUSK_MANE]          =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_NECROZMA_DAWN_WINGS]         =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_NECROZMA_ULTRA]              =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_TOXTRICITY_LOW_KEY]          =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_THUNDER_WAVE)
                                          |  TUTOR(MOVE_METRONOME),

    [SPECIES_EISCUE_NOICE_FACE]           =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE),

    [SPECIES_INDEEDEE_FEMALE]             =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_METRONOME),

    [SPECIES_MORPEKO_HANGRY]              =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_THUNDER_WAVE),

    [SPECIES_ZACIAN_CROWNED_SWORD]        =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_BODY_SLAM),

    [SPECIES_ZAMAZENTA_CROWNED_SHIELD]    =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM),

    [SPECIES_ETERNATUS_ETERNAMAX]         =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM),

    [SPECIES_URSHIFU_RAPID_STRIKE_STYLE]  =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_CALYREX_ICE_RIDER]           =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_METRONOME),

    [SPECIES_CALYREX_SHADOW_RIDER]        =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_METRONOME),

    [SPECIES_URSALUNA_BLOODMOON]          =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_MEGA_PUNCH)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_MEGA_KICK)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_COUNTER)
                                          |  TUTOR(MOVE_SEISMIC_TOSS)
                                          |  TUTOR(MOVE_MIMIC)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_BASCULEGION_FEMALE]          =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_DOUBLE_EDGE),

    [SPECIES_ENAMORUS_THERIAN]            =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM),

    [SPECIES_OINKOLOGNE_FEMALE]           =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE),

    [SPECIES_PALAFIN_HERO]                =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_COUNTER),

    [SPECIES_GIMMIGHOUL_ROAMING]          =  TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_OGERPON_WELLSPRING]          =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_COUNTER),

    [SPECIES_OGERPON_HEARTHFLAME]         =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_COUNTER),

    [SPECIES_OGERPON_CORNERSTONE]         =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_SWORDS_DANCE)
                                          |  TUTOR(MOVE_COUNTER),

    [SPECIES_TERAPAGOS_TERASTAL]          =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_ROCK_SLIDE),

    [SPECIES_TERAPAGOS_STELLAR]           =  TUTOR(MOVE_SUBSTITUTE)
                                          |  TUTOR(MOVE_BODY_SLAM)
                                          |  TUTOR(MOVE_DOUBLE_EDGE)
                                          |  TUTOR(MOVE_ROCK_SLIDE),
};
