ViridianCity_House_MapScripts::
	.byte 0

ViridianCity_House_EventScript_BaldingMan::
	lock
	faceplayer
	goto_if_set FLAG_USED_FRIENDSHIP, OldaleTown_House1_EventScript_CantRaiseFriendship
	msgbox OldaleTown_House1_Text_LikeMeToRaiseFriendship, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, OldaleTown_House1_EventScript_DeclineFriendship
	msgbox OldaleTown_House1_Text_WhichOne, MSGBOX_DEFAULT
	special ChoosePartyMon
	waitstate
	lock
	faceplayer
	goto_if_ge VAR_0x8004, PARTY_SIZE, OldaleTown_House1_EventScript_DeclineFriendship
	specialvar VAR_RESULT, GetPartyMonSpecies
	goto_if_eq VAR_RESULT, SPECIES_EGG, OldaleTown_House1_EventScript_NotEgg
	msgbox OldaleTown_House1_Text_Alright, MSGBOX_DEFAULT
	closemessage
	setflag FLAG_USED_FRIENDSHIP
	fadescreen FADE_TO_BLACK
	playfanfare MUS_HEAL
	waitfanfare
	special DaisyMassageServices
	special DaisyMassageServices
	fadescreen FADE_FROM_BLACK
	msgbox OldaleTown_House1_Text_AllDone, MSGBOX_DEFAULT
	release
	end

OldaleTown_House1_EventScript_CantRaiseFriendship::
	msgbox OldaleTown_House1_Text_NoMore
	release
	end

OldaleTown_House1_EventScript_DeclineFriendship::
	msgbox OldaleTown_House1_Text_ComeBackWhenReady
	release
	end

OldaleTown_House1_EventScript_NotEgg::
	msgbox OldaleTown_House1_Text_Egg
	release
	end

ViridianCity_House_EventScript_LittleGirl::
	msgbox ViridianCity_House_Text_MyDaddyLovesMonsToo, MSGBOX_NPC
	end

ViridianCity_House_EventScript_Speary::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_SPEAROW, CRY_MODE_NORMAL
	msgbox ViridianCity_House_Text_Speary
	waitmoncry
	release
	end

ViridianCity_House_EventScript_NicknameSign::
	msgbox ViridianCity_House_Text_SpearowNameSpeary, MSGBOX_SIGN
	end

OldaleTown_House1_Text_LikeMeToRaiseFriendship:
	.string "Would you like me to maximize your\n"
	.string "Pokémon's friendship?$"


OldaleTown_House1_Text_WhichOne:
	.string "You may only use my service once.\p"
	.string "Which Pokémon would you like me\n"
	.string "to make more friendly?$"

OldaleTown_House1_Text_Alright:
	.string "Okay, here goes!$"

OldaleTown_House1_Text_AllDone:
	.string "Good luck in the tournament!\p"
OldaleTown_House1_Text_NoMore:
	.string "You may no longer use my service\n"
	.string "for the rest of the run.$"

OldaleTown_House1_Text_ComeBackWhenReady:
	.string "Just let me know if you do!$"

OldaleTown_House1_Text_Egg:
	.string "I can't do this to an Egg.$"
