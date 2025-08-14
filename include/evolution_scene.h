#ifndef GUARD_EVOLUTION_SCENE_H
#define GUARD_EVOLUTION_SCENE_H

#include "global.h"

extern void (*gCB2_AfterEvolution)(void);

void BeginEvolutionScene(struct Pokemon* mon, u16 speciesToEvolve, u8, u8 partyId);
void EvolutionScene(struct Pokemon* mon, u16 speciesToEvolve, u8, u8 partyId);
void TradeEvolutionScene(struct Pokemon* mon, u16 speciesToEvolve, u8 preEvoSpriteId, u8 partyId);
void IsMovingBackgroundTaskRunning(void);
void Task_EvolutionScene(u8 taskId);


struct EvoInfo
{
    u8 preEvoSpriteId;
    u8 postEvoSpriteId;
    u8 evoTaskId;
    u8 delayTimer;
    u16 savedPalette[48];
}*sEvoStructPtr;

#endif // GUARD_EVOLUTION_SCENE_H
