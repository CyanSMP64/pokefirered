Std_MsgboxNPC::
	lock
	faceplayer
	message 0x0
	waitmessage
	waitbuttonpress
	release
	return

Std_MsgboxSign::
	lockall
	message 0x0
	waitmessage
	waitbuttonpress
	releaseall
	return

Std_MsgboxDefault::
	message 0x0
	waitmessage
	waitbuttonpress
	return

Std_MsgboxYesNo::
	message 0x0
	waitmessage
	yesnobox 20, 8
	return

Std_ReceivedItem::
	textcolor NPC_TEXT_COLOR_NEUTRAL
	call_if_eq VAR_0x8002, MUS_OBTAIN_ITEM, EventScript_ReceivedItemFanfare1
	call_if_eq VAR_0x8002, MUS_OBTAIN_KEY_ITEM, EventScript_ReceivedItemFanfare2
	call_if_eq VAR_0x8002, MUS_OBTAIN_TMHM, EventScript_ReceivedItemFanfare3
	message 0x0
	waitmessage
	waitfanfare
	call_if_eq VAR_0x8002, MUS_OBTAIN_ITEM, EventScript_ReceivedItemWaitFanfare
	putitemaway VAR_0x8000, VAR_0x8001
	call EventScript_RestorePrevTextColor
	return

EventScript_ReceivedItemFanfare1::
	playfanfare MUS_OBTAIN_ITEM
	return

EventScript_ReceivedItemFanfare2::
	playfanfare MUS_OBTAIN_KEY_ITEM
	return

EventScript_ReceivedItemFanfare3::
	playfanfare MUS_OBTAIN_TMHM
	return

EventScript_ReceivedItemWaitFanfare::
	delay 50
	return

EventScript_AskSaveGame::
	special Field_AskSaveTheGame
	waitstate
	return
