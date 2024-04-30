.equ LOCALID_ROCKET, 1
.equ LOCALID_POLICEMAN, 9

Route24_MapScripts::
	.byte 0

Route24_EventScript_Rocket::
	lock
	faceplayer
	goto_if_ge VAR_MAP_SCENE_ROUTE24, 1, Route24_EventScript_RocketPostBattle
	msgbox Route24_Text_JustEarnedFabulousPrize
	checkitemspace ITEM_NUGGET
	goto_if_eq VAR_RESULT, FALSE, Route24_EventScript_NoRoomForNugget
	call Route24_EventScript_BattleRocket
	release
	end

Route24_EventScript_NoRoomForNugget::
	msgbox Route24_Text_YouDontHaveAnyRoom
	release
	end

Route24_EventScript_RocketPostBattle::
	msgbox Route24_Text_YoudBecomeTopRocketLeader
	release
	end

Route24_EventScript_RocketTriggerLeft::
	lockall
	setvar VAR_TEMP_1, 0
	goto Route24_EventScript_RocketTrigger
	end

Route24_EventScript_RocketTriggerRight::
	lockall
	setvar VAR_TEMP_1, 1
	goto Route24_EventScript_RocketTrigger
	end

Route24_EventScript_RocketTrigger::
	textcolor NPC_TEXT_COLOR_MALE
	call_if_eq VAR_TEMP_1, 0, Route24_EventScript_RocketApproachPlayer
	call_if_eq VAR_TEMP_1, 1, Route24_EventScript_RocketMotionToPlayer
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	msgbox Route24_Text_JustEarnedFabulousPrize
	checkitemspace ITEM_NUGGET
	goto_if_eq VAR_RESULT, FALSE, Route24_EventScript_NoRoomForNuggetTrigger
	call Route24_EventScript_BattleRocket
	releaseall
	end

Route24_EventScript_BattleRocket::
	giveitem_msg Route24_Text_ReceivedNuggetFromMysteryTrainer, ITEM_NUGGET
	message Route24_Text_JoinTeamRocket
	waitmessage
	playbgm MUS_RG_ENCOUNTER_ROCKET, 0
	waitbuttonpress
	setvar VAR_LAST_TALKED, LOCALID_ROCKET
	trainerbattle_no_intro TRAINER_TEAM_ROCKET_GRUNT_6, Route24_Text_RocketDefeat
	msgbox Route24_Text_YoudBecomeTopRocketLeader
	setvar VAR_MAP_SCENE_ROUTE24, 1
	return

Route24_EventScript_RocketApproachPlayer::
	applymovement LOCALID_ROCKET, Route24_Movement_RocketApproachPlayer
	waitmovement 0
	return

Route24_EventScript_RocketMotionToPlayer::
	applymovement LOCALID_ROCKET, Common_Movement_WalkInPlaceFasterLeft
	waitmovement 0
	return

Route24_EventScript_NoRoomForNuggetTrigger::
	msgbox Route24_Text_YouDontHaveAnyRoom
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Route24_Movement_WalkDown
	waitmovement 0
	call_if_eq VAR_TEMP_1, 0, Route24_EventScript_RocketWalkBackToPos
	release
	end

Route24_EventScript_RocketWalkBackToPos::
	applymovement LOCALID_ROCKET, Route24_Movement_RocketWalkBackToPos
	waitmovement 0
	return

Route24_EventScript_CascadeBadgeCheck::
	lock
	faceplayer
	goto_if_eq VAR_MAP_SCENE_ROUTE24, 3, Route24_EventScript_CascadeBadgeCheckSuccess
	msgbox Route24_Text_ShowMeYourCascadeBadge
	closemessage
	delay 5
	playse SE_M_DIG
	delay 25
	playse SE_M_DIG
	delay 60
	goto_if_unset FLAG_BADGE02_GET, Route24_EventScript_CascadeBadgeCheckFail
	setvar VAR_MAP_SCENE_ROUTE24, 3
	playse SE_PIN
	applymovement LOCALID_POLICEMAN, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_POLICEMAN, Common_Movement_Delay48
	waitmovement 0
Route24_EventScript_CascadeBadgeCheckSuccess::
	msgbox Route24_Text_ThatsTheCascadeBadge
	closemessage
	release
	end

Route24_EventScript_CascadeBadgeCheckFail::
	setvar VAR_MAP_SCENE_ROUTE24, 2
	playse SE_FAILURE
	msgbox Route24_Text_NoCascadeBadge
	closemessage
	warpsilent MAP_CERULEAN_CITY, 23, 5
	waitstate
	release
	end

Route24_EventScript_PoliceTrigger1::
	lockall
	goto_if_unset FLAG_SUPER_KAIZO, Route24_EventScript_SetVarMap3
	call Route24_EventScript_PoliceNotice
	applymovement LOCALID_POLICEMAN, Route24_Movement_PoliceApproachPlayer1
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	goto Route24_EventScript_CascadeBadgeCheck2

Route24_EventScript_PoliceTrigger2::
	lockall
	goto_if_unset FLAG_SUPER_KAIZO, Route24_EventScript_SetVarMap3
	call Route24_EventScript_PoliceNotice
	applymovement LOCALID_POLICEMAN, Route24_Movement_PoliceApproachPlayer2
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	goto Route24_EventScript_CascadeBadgeCheck2

Route24_EventScript_PoliceTrigger3::
	lockall
	goto_if_unset FLAG_SUPER_KAIZO, Route24_EventScript_SetVarMap3
	call Route24_EventScript_PoliceNotice
	applymovement LOCALID_POLICEMAN, Route24_Movement_PoliceApproachPlayer3
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	goto Route24_EventScript_CascadeBadgeCheck2

Route24_EventScript_PoliceTrigger5::
	lockall
	goto_if_unset FLAG_SUPER_KAIZO, Route24_EventScript_SetVarMap3
	call Route24_EventScript_PoliceNotice
	applymovement LOCALID_POLICEMAN, Route24_Movement_PoliceApproachPlayer5
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	goto Route24_EventScript_CascadeBadgeCheck2

Route24_EventScript_PoliceTrigger6::
	lockall
	goto_if_unset FLAG_SUPER_KAIZO, Route24_EventScript_SetVarMap3
	call Route24_EventScript_PoliceNotice
	applymovement LOCALID_POLICEMAN, Route24_Movement_PoliceApproachPlayer6
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
	waitmovement 0
	goto Route24_EventScript_CascadeBadgeCheck2

Route24_EventScript_PoliceTrigger7::
	lockall
	goto_if_unset FLAG_SUPER_KAIZO, Route24_EventScript_SetVarMap3
	call Route24_EventScript_PoliceNotice
	applymovement LOCALID_POLICEMAN, Route24_Movement_PoliceApproachPlayer7
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
	waitmovement 0
	goto Route24_EventScript_CascadeBadgeCheck2

Route24_EventScript_PoliceTrigger8::
	lockall
	goto_if_unset FLAG_SUPER_KAIZO, Route24_EventScript_SetVarMap3
	call Route24_EventScript_PoliceNotice
	applymovement LOCALID_POLICEMAN, Route24_Movement_PoliceApproachPlayer8
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
	waitmovement 0
	goto Route24_EventScript_CascadeBadgeCheck2

Route24_EventScript_PoliceTrigger9::
	lockall
	goto_if_unset FLAG_SUPER_KAIZO, Route24_EventScript_SetVarMap3
	call Route24_EventScript_PoliceNotice
	applymovement LOCALID_POLICEMAN, Route24_Movement_PoliceApproachPlayer9
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
	waitmovement 0
	goto Route24_EventScript_CascadeBadgeCheck2

Route24_EventScript_PoliceTrigger10::
	lockall
	goto_if_unset FLAG_SUPER_KAIZO, Route24_EventScript_SetVarMap3
	call Route24_EventScript_PoliceNotice
	applymovement LOCALID_POLICEMAN, Route24_Movement_PoliceApproachPlayer10
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
	waitmovement 0
	goto Route24_EventScript_CascadeBadgeCheck2

Route24_EventScript_PoliceNotice::
	textcolor NPC_TEXT_COLOR_MALE
	applymovement LOCALID_POLICEMAN, Route24_Movement_WalkInPlaceFastUp
	waitmovement 0
	playse SE_PIN
	applymovement LOCALID_POLICEMAN, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_POLICEMAN, Common_Movement_Delay48
	waitmovement 0
	return

Route24_EventScript_CascadeBadgeCheck2::
	msgbox Route24_Text_ShowMeYourCascadeBadge
	closemessage
	delay 5
	playse SE_M_DIG
	delay 25
	playse SE_M_DIG
	delay 60
	goto_if_unset FLAG_BADGE02_GET, Route24_EventScript_CascadeBadgeCheck2Fail
	setvar VAR_MAP_SCENE_ROUTE24, 3
	playse SE_PIN
	applymovement LOCALID_POLICEMAN, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_POLICEMAN, Common_Movement_Delay48
	waitmovement 0
	msgbox Route24_Text_ThatsTheCascadeBadge
	closemessage
	getplayerxy VAR_0x8004, VAR_0x8005
	call_if_eq VAR_0x8005, 14, Route24_EventScript_PoliceMoveBack1
	call_if_eq VAR_0x8005, 13, Route24_EventScript_PoliceMoveBack2
	call_if_eq VAR_0x8005, 12, Route24_EventScript_PoliceMoveBack3
	call_if_eq VAR_0x8004, 7, Route24_EventScript_PoliceMoveBack5
	call_if_eq VAR_0x8004, 8, Route24_EventScript_PoliceMoveBack6
	call_if_eq VAR_0x8004, 9, Route24_EventScript_PoliceMoveBack7
	call_if_eq VAR_0x8004, 10, Route24_EventScript_PoliceMoveBack8
	call_if_eq VAR_0x8004, 11, Route24_EventScript_PoliceMoveBack9
	call_if_eq VAR_0x8004, 12, Route24_EventScript_PoliceMoveBack10
	waitmovement 0
	applymovement LOCALID_POLICEMAN, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	releaseall
	end

Route24_EventScript_CascadeBadgeCheck2Fail::
	setvar VAR_MAP_SCENE_ROUTE24, 2
	playse SE_FAILURE
	msgbox Route24_Text_NoCascadeBadge
	closemessage
	warpsilent MAP_CERULEAN_CITY, 23, 5
	waitstate
	releaseall
	end

Route24_EventScript_PoliceMoveBack1::
	applymovement LOCALID_POLICEMAN, Route24_Movement_PoliceMoveBack1
	return

Route24_EventScript_PoliceMoveBack2::
	applymovement LOCALID_POLICEMAN, Route24_Movement_PoliceMoveBack2
	return

Route24_EventScript_PoliceMoveBack3::
	applymovement LOCALID_POLICEMAN, Route24_Movement_PoliceMoveBack3
	return

Route24_EventScript_PoliceMoveBack5::
	applymovement LOCALID_POLICEMAN, Route24_Movement_PoliceMoveBack5
	return

Route24_EventScript_PoliceMoveBack6::
	applymovement LOCALID_POLICEMAN, Route24_Movement_PoliceMoveBack6
	return

Route24_EventScript_PoliceMoveBack7::
	applymovement LOCALID_POLICEMAN, Route24_Movement_PoliceMoveBack7
	return

Route24_EventScript_PoliceMoveBack8::
	applymovement LOCALID_POLICEMAN, Route24_Movement_PoliceMoveBack8
	return

Route24_EventScript_PoliceMoveBack9::
	applymovement LOCALID_POLICEMAN, Route24_Movement_PoliceMoveBack9
	return

Route24_EventScript_PoliceMoveBack10::
	applymovement LOCALID_POLICEMAN, Route24_Movement_PoliceMoveBack10
	return

Route24_EventScript_SetVarMap3::
	setvar VAR_MAP_SCENE_ROUTE24, 3
	releaseall
	end

Route24_Movement_RocketApproachPlayer::
	walk_left
	step_end

Route24_Movement_RocketWalkBackToPos::
	walk_right
	walk_in_place_faster_left
	step_end

Route24_Movement_WalkDown::
	walk_down
	step_end

Route24_Movement_WalkInPlaceFastUp::
	walk_in_place_fast_up
	step_end

Route24_Movement_PoliceApproachPlayer3::
	walk_fast_up
Route24_Movement_PoliceApproachPlayer2::
	walk_fast_up
Route24_Movement_PoliceApproachPlayer1::
	walk_fast_up
	walk_in_place_faster_left
	step_end

Route24_Movement_PoliceApproachPlayer5::
	walk_fast_up
	walk_fast_up
	walk_fast_up
	step_end

Route24_Movement_PoliceApproachPlayer6::
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_in_place_faster_right
	step_end

Route24_Movement_PoliceApproachPlayer7::
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_right
	step_end

Route24_Movement_PoliceApproachPlayer8::
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_right
	walk_fast_right
	step_end

Route24_Movement_PoliceApproachPlayer9::
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_right
	walk_fast_right
	walk_fast_right
	step_end

Route24_Movement_PoliceApproachPlayer10::
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	step_end

Route24_Movement_PoliceMoveBack10::
	walk_fast_left
Route24_Movement_PoliceMoveBack9::
	walk_fast_left
Route24_Movement_PoliceMoveBack8::
	walk_fast_left
Route24_Movement_PoliceMoveBack7::
	walk_fast_left
Route24_Movement_PoliceMoveBack6::
	walk_fast_down
Route24_Movement_PoliceMoveBack5::
Route24_Movement_PoliceMoveBack3::
	walk_fast_down
Route24_Movement_PoliceMoveBack2::
	walk_fast_down
Route24_Movement_PoliceMoveBack1::
	walk_fast_down
	step_end
