EventScript_CutTree::
	goto_if_questlog EventScript_ReleaseEnd
	lockall
	checkitem ITEM_HM01
    goto_if_eq VAR_RESULT, FALSE, EventScript_CantCutTree
	goto_if_unset FLAG_BADGE02_GET, EventScript_CantCutTree
	dofieldeffect FLDEFF_USE_CUT_ON_TREE
	waitstate
	goto EventScript_CutTreeDown
	end

EventScript_FldEffCut::
	lockall
	dofieldeffect FLDEFF_USE_CUT_ON_TREE
	waitstate
	goto EventScript_CutTreeDown
	end

EventScript_UseCutOnGrass::
	lockall
    callnative SetUpFieldMove_Cut_grass
	dofieldeffect FLDEFF_USE_CUT_ON_GRASS
	waitstate
	releaseall
	end

EventScript_CutTreeDown::
	applymovement VAR_LAST_TALKED, Movement_CutTreeDown
	waitmovement 0
	removeobject VAR_LAST_TALKED
	releaseall
	end

Movement_CutTreeDown::
	cut_tree
	step_end

EventScript_CantCutTree::
	msgbox Text_TreeCanBeCutDown, MSGBOX_SIGN
	releaseall
	end

Text_CutTreeDown::
	.string "This tree looks like it can be Cut\n"
	.string "down!\p"
	.string "Would you like to Cut it?$"

Text_MonUsedMove::
	.string "{STR_VAR_1} used {STR_VAR_2}!$"

Text_TreeCanBeCutDown::
	.string "This tree looks like it can be Cut\n"
	.string "down!$"

EventScript_RockSmash::
	goto_if_questlog EventScript_ReleaseEnd
	lockall
	checkitem ITEM_HM06
    goto_if_eq VAR_RESULT, FALSE, EventScript_CantSmashRock
	goto_if_unset FLAG_BADGE06_GET, EventScript_CantSmashRock
	dofieldeffect FLDEFF_USE_ROCK_SMASH
	waitstate
	goto EventScript_UseRockSmash
	end

EventScript_FldEffRockSmash::
	lockall
	dofieldeffect FLDEFF_USE_ROCK_SMASH
	waitstate
	goto EventScript_UseRockSmash
	end

EventScript_UseRockSmash::
	applymovement VAR_LAST_TALKED, Movement_BreakRock
	waitmovement 0
	removeobject VAR_LAST_TALKED
	special RockSmashWildEncounter
	goto_if_eq VAR_RESULT, FALSE, EventScript_RockSmashNoEncounter
	waitstate
	releaseall
	end

EventScript_RockSmashNoEncounter::
	releaseall
	end

Movement_BreakRock::
	rock_smash_break
	step_end

EventScript_CantSmashRock::
	msgbox Text_MonMaySmashRock, MSGBOX_SIGN
	end

EventScript_DontSmashRock::
	closemessage
	releaseall
	end

Text_UseRockSmash::
	.string "This rock appears to be breakable.\n"
	.string "Would you like to use Rock Smash?$"

Text_MonMaySmashRock::
	.string "It's a rugged rock, but a Pokémon\n"
	.string "may be able to smash it.$"

EventScript_StrengthBoulder::
	goto_if_questlog EventScript_ReleaseEnd
	lockall
	goto_if_unset FLAG_BADGE04_GET, EventScript_CantMoveBoulder
	goto_if_set FLAG_SYS_USE_STRENGTH, EventScript_AlreadyUsedStrength
	dofieldeffect FLDEFF_USE_STRENGTH
	waitstate
	goto EventScript_UseStrength
	end

EventScript_FldEffStrength::
	lockall
	dofieldeffect FLDEFF_USE_STRENGTH
	waitstate
	goto EventScript_UseStrength
	end

EventScript_UseStrength::
	setflag FLAG_SYS_USE_STRENGTH
	msgbox Text_StrengthMadeMovingBouldersPossible, MSGBOX_SIGN
	end

EventScript_CantMoveBoulder::
	msgbox Text_MonMayPushBoulder, MSGBOX_SIGN
	end

EventScript_AlreadyUsedStrength::
	msgbox Text_StrengthMadeMovingBouldersPossible, MSGBOX_SIGN
	end

EventScript_DontUseStrength::
	closemessage
	releaseall
	end

Text_UseStrength::
	.string "It's a big boulder, but a Pokémon\n"
	.string "may be able to push it aside.\p"
	.string "Would you like to use Strength?$"

Text_MonUsedStrengthCanMoveBoulders::
	.string "{STR_VAR_1} used Strength!\p"
	.string "{STR_VAR_1}'s Strength made it\n"
	.string "possible to move boulders around!$"

Text_MonMayPushBoulder::
	.string "It's a big boulder, but a Pokémon\n"
	.string "may be able to push it aside.$"

Text_StrengthMadeMovingBouldersPossible::
	.string "Strength made it possible to move\n"
	.string "boulders around.$"

EventScript_Waterfall::
	goto_if_questlog EventScript_ReleaseEnd
	lockall
	dofieldeffect FLDEFF_USE_WATERFALL
	goto EventScript_EndWaterfall

EventScript_CantUseWaterfall::
	lockall
EventScript_WaterCrashingDown:
	msgbox Text_WallOfWaterCrashingDown
EventScript_EndWaterfall:
	releaseall
	end

Text_WallOfWaterCrashingDown::
	.string "A wall of water is crashing down\n"
	.string "with a mighty roar.$"

Text_UseWaterfall::
	.string "It's a large waterfall.\n"
	.string "Would you like to use Waterfall?$"

Text_MonUsedWaterfall::
	.string "{STR_VAR_1} used Waterfall.$"

EventScript_FailSweetScent::
	msgbox Text_LooksLikeNothingHere, MSGBOX_SIGN
	end

Text_LooksLikeNothingHere::
	.string "Looks like there's nothing here…$"
