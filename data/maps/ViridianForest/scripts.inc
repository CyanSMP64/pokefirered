ViridianForest_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, ViridianForest_OnTransition
	.byte 0

ViridianForest_OnTransition::
	setworldmapflag FLAG_WORLD_MAP_VIRIDIAN_FOREST
	end

ViridianForest_EventScript_Nurse::
	lock
	faceplayer
	specialvar VAR_RESULT, IsPoisonInParty
	goto_if_eq VAR_RESULT, TRUE, Route102_EventScript_NurseCantHealPoison
	msgbox Route102_Text_HealPokemon, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, Route102_EventScript_NurseHeal
	msgbox Route102_Text_PokemonNotHealed, MSGBOX_DEFAULT
	release
	end

Route102_EventScript_NurseHeal::
	closemessage
	special HealPlayerParty
	playse SE_USE_ITEM
	waitse
	msgbox Route102_Text_PokemonHealed, MSGBOX_DEFAULT
	release
	end

Route102_EventScript_NurseCantHealPoison::
	msgbox Route102_Text_CantHealPoison, MSGBOX_DEFAULT
	release
	end

Route102_Text_HealPokemon:
	.string "Want me to heal your Pokémon?$"

Route102_Text_PokemonHealed:
	.string "Your Pokémon is healthy.\n"
Route102_Text_PokemonNotHealed:
	.string "Come again!$"

Route102_Text_CantHealPoison:
	.string "Sorry, but I can't heal if\n"
	.string "you have a poisoned Pokémon.\p"
	.string "Please visit a Pokémon Center\n"
	.string "to cure poisoning.$"

ViridianForest_EventScript_Boy::
	msgbox ViridianForest_Text_RanOutOfPokeBalls, MSGBOX_NPC
	end

ViridianForest_EventScript_TrainerTips1::
	msgbox ViridianForest_Text_AvoidGrassyAreasWhenWeak, MSGBOX_SIGN
	end

ViridianForest_EventScript_TrainerTips2::
	msgbox ViridianForest_Text_UseAntidoteForPoison, MSGBOX_SIGN
	end

ViridianForest_EventScript_TrainerTips3::
	msgbox ViridianForest_Text_ContactOakViaPCToRatePokedex, MSGBOX_SIGN
	end

ViridianForest_EventScript_TrainerTips4::
	msgbox ViridianForest_Text_CantCatchOwnedMons, MSGBOX_SIGN
	end

ViridianForest_EventScript_TrainerTips5::
	msgbox ViridianForest_Text_WeakenMonsBeforeCapture, MSGBOX_SIGN
	end

ViridianForest_EventScript_ExitSign::
	msgbox ViridianForest_Text_LeavingViridianForest, MSGBOX_SIGN
	end

ViridianForest_EventScript_Rick::
	trainerbattle_single TRAINER_BUG_CATCHER_RICK, ViridianForest_Text_RickIntro, ViridianForest_Text_RickDefeat
	msgbox ViridianForest_Text_RickPostBattle, MSGBOX_AUTOCLOSE
	end

ViridianForest_EventScript_Doug::
	trainerbattle_single TRAINER_BUG_CATCHER_DOUG, ViridianForest_Text_DougIntro, ViridianForest_Text_DougDefeat
	msgbox ViridianForest_Text_DougPostBattle, MSGBOX_AUTOCLOSE
	end

ViridianForest_EventScript_Sammy::
	trainerbattle_single TRAINER_BUG_CATCHER_SAMMY, ViridianForest_Text_SammyIntro, ViridianForest_Text_SammyDefeat
	msgbox ViridianForest_Text_SammyPostBattle, MSGBOX_AUTOCLOSE
	end

ViridianForest_EventScript_Anthony::
	trainerbattle_single TRAINER_BUG_CATCHER_ANTHONY, ViridianForest_Text_AnthonyIntro, ViridianForest_Text_AnthonyDefeat
	msgbox ViridianForest_Text_AnthonyPostBattle, MSGBOX_AUTOCLOSE
	end

ViridianForest_EventScript_Charlie::
	trainerbattle_single TRAINER_BUG_CATCHER_CHARLIE, ViridianForest_Text_CharlieIntro, ViridianForest_Text_CharlieDefeat
	msgbox ViridianForest_Text_CharliePostBattle, MSGBOX_AUTOCLOSE
	end
