.set LOCALID_HOOPA_CLERK, 5

LavenderTown_Mart_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, LavenderTown_Mart_OnTransition
	.byte 0

LavenderTown_Mart_OnTransition:
	setvar VAR_0x8004, SPECIES_HOOPA
	specialvar VAR_RESULT, DoesPlayerPartyContainSpecies
	goto_if_eq VAR_RESULT, TRUE, LavenderTown_Mart_UnhideHoopaClerk
	end

LavenderTown_Mart_UnhideHoopaClerk::
	goto_if_set FLAG_RECEIVED_PRISON_BOTTLE, LavenderTown_Mart_End
	clearflag FLAG_HIDE_HOOPA_CLERK
	addobject LOCALID_HOOPA_CLERK
LavenderTown_Mart_End::
	end

LavenderTown_Mart_EventScript_BaldingMan::
	msgbox LavenderTown_Mart_Text_SearchingForStatRaiseItems, MSGBOX_NPC
	end

LavenderTown_Mart_EventScript_Rocker::
	msgbox LavenderTown_Mart_Text_DidYouBuyRevives, MSGBOX_NPC
	end

LavenderTown_Mart_EventScript_Youngster::
	msgbox LavenderTown_Mart_Text_TrainerDuosCanChallengeYou, MSGBOX_NPC
	end

LavenderTown_Mart_EventScript_Clerk::
	goto_if_questlog EventScript_ReleaseEnd
	lock
	faceplayer
	message Text_MayIHelpYou
	waitmessage
	pokemart LavenderTown_Mart_Items
	msgbox Text_PleaseComeAgain
	release
	end

	.align 2
LavenderTown_Mart_Items::
	.2byte ITEM_GREAT_BALL
	.2byte ITEM_SUPER_POTION
	.2byte ITEM_REVIVE
	.2byte ITEM_ANTIDOTE
	.2byte ITEM_PARALYZE_HEAL
	.2byte ITEM_BURN_HEAL
	.2byte ITEM_ICE_HEAL
	.2byte ITEM_ESCAPE_ROPE
	.2byte ITEM_SUPER_REPEL
	.2byte ITEM_NONE
	release
	end
