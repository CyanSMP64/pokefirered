Route1_MapScripts::
	.byte 0

Route1_EventScript_MartClerk::
	lock
	faceplayer
	goto_if_set FLAG_GOT_POTION_ON_ROUTE_1, Route1_EventScript_AlreadyGotPotion
	textcolor NPC_TEXT_COLOR_NEUTRAL
	checkitemspace ITEM_POTION
	goto_if_eq VAR_RESULT, FALSE, EventScript_BagIsFull
	bufferitemname STR_VAR_2, ITEM_POTION
	playfanfare MUS_LEVEL_UP
	message Text_ObtainedTheX
	waitmessage
	waitfanfare
	additem ITEM_POTION
	msgbox Route1_Text_PutPotionAway
	call EventScript_RestorePrevTextColor
	setflag FLAG_GOT_POTION_ON_ROUTE_1
	closemessage
	playse SE_M_TELEPORT
	applymovement 1, Route1_Movement_ClerkLeave
	waitmovement 1
	removeobject 1
	special DrawWholeMapView
	release
	end

Route1_EventScript_AlreadyGotPotion::
	msgbox Route1_Text_ComeSeeUsIfYouNeedPokeBalls
	release
	end

Route1_EventScript_Boy::
	msgbox Route1_Text_CanJumpFromLedges, MSGBOX_NPC
	end

Route1_EventScript_RouteSign::
	msgbox Route1_Text_RouteSign, MSGBOX_SIGN
	end

Route1_Movement_ClerkLeave:
	face_right
	face_down
	slide_up
	face_left
	face_up
	slide_up
	face_right
	face_down
	slide_up
	face_left
	face_up
	slide_up
	face_right
	face_down
	slide_up
	face_left
	face_up
	slide_up
	step_end

Route1_EventScript_NewMartClerkTrigger1::
	lockall
	setvar VAR_TEMP_1, 0
	goto Route1_EventScript_NewMartClerk

Route1_EventScript_NewMartClerkTrigger2::
	lockall
	setvar VAR_TEMP_1, 1
	goto Route1_EventScript_NewMartClerk

Route1_EventScript_NewMartClerkTrigger3::
	lockall
	setvar VAR_TEMP_1, 2
	goto Route1_EventScript_NewMartClerk

Route1_EventScript_NewMartClerkTrigger4::
	lockall
	setvar VAR_TEMP_1, 3
	goto Route1_EventScript_NewMartClerk

Route1_EventScript_NewMartClerk::
	call_if_eq VAR_TEMP_1, 0, Route1_EventScript_NewMartClerkMove1
	call_if_eq VAR_TEMP_1, 1, Route1_EventScript_NewMartClerkMove2
	call_if_eq VAR_TEMP_1, 2, Route1_EventScript_NewMartClerkMove3
	call_if_eq VAR_TEMP_1, 3, Route1_EventScript_NewMartClerkMove4
	textcolor NPC_TEXT_COLOR_MALE
	msgbox Route1_Text_WorkAtPokeMartTakeSample
	closemessage
	setvar VAR_MAP_SCENE_VIRIDIAN_CITY_MART, 1
	giveitem_msg ViridianCity_Mart_Text_ReceivedOaksParcelFromClerk, ITEM_OAKS_PARCEL, 1, MUS_RG_OBTAIN_KEY_ITEM
	closemessage
	applymovement 3, Route1_Movement_NewClerkLeave
	waitmovement 3
	removeobject 3
	fadedefaultbgm
	setflag FLAG_HIDE_ROUTE1_MART_CLERK_CUTSCENE
	clearflag FLAG_HIDE_OAK_PALLET_TOWN_BALL_CUTSCENE
	setvar VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 5
	releaseall
	end

Route1_EventScript_NewMartClerkMove1::
	applymovement 3, Route1_Movement_NewMartClerkMove1
	waitmovement 3
	return

Route1_EventScript_NewMartClerkMove2::
	applymovement 3, Route1_Movement_NewMartClerkMove2
	waitmovement 3
	return

Route1_EventScript_NewMartClerkMove3::
	applymovement 3, Route1_Movement_NewMartClerkMove3
	waitmovement 3
	return

Route1_EventScript_NewMartClerkMove4::
	applymovement 3, Route1_Movement_NewMartClerkMove4
	waitmovement 3
	return

Route1_Movement_NewMartClerkMove1:
	walk_fast_left
	walk_fast_left
	walk_fast_left
	face_down_fast
	step_end

Route1_Movement_NewMartClerkMove2:
	walk_fast_left
	walk_fast_left
	face_down_fast
	step_end

Route1_Movement_NewMartClerkMove3:
	walk_fast_left
	face_down_fast
	step_end

Route1_Movement_NewMartClerkMove4:
	face_down_fast
	step_end

Route1_Movement_NewClerkLeave:
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	step_end
