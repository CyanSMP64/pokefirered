.set LOCALID_CLERK, 1
.set LOCALID_HOOPA_CLERK, 4

ViridianCity_Mart_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, ViridianCity_Mart_OnLoad
	map_script MAP_SCRIPT_ON_FRAME_TABLE, ViridianCity_Mart_OnFrame
	map_script MAP_SCRIPT_ON_TRANSITION, ViridianCity_Mart_OnTransition
	.byte 0

ViridianCity_Mart_OnTransition:
	setvar VAR_0x8004, SPECIES_HOOPA
	specialvar VAR_RESULT, DoesPlayerPartyContainSpecies
	goto_if_eq VAR_RESULT, TRUE, OldaleTown_Mart_UnhideHoopaClerk
	end

OldaleTown_Mart_UnhideHoopaClerk::
	goto_if_set FLAG_RECEIVED_PRISON_BOTTLE, OldaleTown_Mart_End
	clearflag FLAG_HIDE_HOOPA_CLERK
	addobject LOCALID_HOOPA_CLERK
OldaleTown_Mart_End::
	end

ViridianCity_Mart_OnLoad::
	goto_if_unset FLAG_SYS_POKEDEX_GET, ViridianCity_Mart_EventScript_HideQuestionnaire
	end

ViridianCity_Mart_EventScript_HideQuestionnaire::
	setmetatile 1, 3, METATILE_Mart_CounterMid_Top, 1
	setmetatile 1, 4, METATILE_Mart_CounterMid_Bottom, 1
	end

ViridianCity_Mart_OnFrame::
	map_script_2 VAR_MAP_SCENE_VIRIDIAN_CITY_MART, 0, ViridianCity_Mart_EventScript_ParcelScene
	.2byte 0

ViridianCity_Mart_EventScript_ParcelScene::
	lockall
	textcolor NPC_TEXT_COLOR_MALE
	applymovement LOCALID_CLERK, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	msgbox ViridianCity_Mart_Text_YouCameFromPallet
	closemessage
	applymovement LOCALID_CLERK, ViridianCity_Mart_Movement_FacePlayer
	applymovement OBJ_EVENT_ID_PLAYER, ViridianCity_Mart_Movement_ApproachCounter
	waitmovement 0
	msgbox ViridianCity_Mart_Text_TakeThisToProfOak
	setvar VAR_MAP_SCENE_VIRIDIAN_CITY_MART, 1
	giveitem_msg ViridianCity_Mart_Text_ReceivedOaksParcelFromClerk, ITEM_OAKS_PARCEL, 1, MUS_RG_OBTAIN_KEY_ITEM
	setvar VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 5
	releaseall
	end

ViridianCity_Mart_Movement_ApproachCounter::
	walk_up
	walk_up
	walk_up
	walk_up
	walk_in_place_faster_left
	step_end

ViridianCity_Mart_Movement_FacePlayer::
	delay_16
	delay_16
	delay_16
	delay_16
	walk_in_place_faster_right
	step_end

ViridianCity_Mart_EventScript_Clerk::
	lock
	faceplayer
	goto_if_eq VAR_MAP_SCENE_VIRIDIAN_CITY_MART, 1, ViridianCity_Mart_EventScript_SayHiToOak
	goto_if_questlog EventScript_ReleaseEnd
	message Text_MayIHelpYou
	waitmessage
	pokemart ViridianCity_Mart_Items
	msgbox Text_PleaseComeAgain
	release
	end

	.align 2
ViridianCity_Mart_Items::
	.2byte ITEM_POKE_BALL
	.2byte ITEM_POTION
	.2byte ITEM_ANTIDOTE
	.2byte ITEM_PARALYZE_HEAL
	.2byte ITEM_NONE
	release
	end

ViridianCity_Mart_EventScript_SayHiToOak::
	msgbox ViridianCity_Mart_Text_SayHiToOakForMe
	release
	end

ViridianCity_Mart_EventScript_Woman::
	msgbox ViridianCity_Mart_Text_ShopDoesGoodBusinessInAntidotes, MSGBOX_NPC
	end

ViridianCity_Mart_EventScript_Youngster::
	msgbox ViridianCity_Mart_Text_GotToBuySomePotions, MSGBOX_NPC
	end

OldaleTown_Mart_EventScript_HoopaClerk::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_PRISON_BOTTLE, OldaleTown_Mart_EventScript_HoopaClerkPost
	msgbox OldaleTown_Mart_Text_HoopaStory1, MSGBOX_DEFAULT
	closemessage
	delay 16
	msgbox OldaleTown_Mart_Text_HoopaStory6, MSGBOX_DEFAULT
	giveitem ITEM_PRISON_BOTTLE
	setflag FLAG_RECEIVED_PRISON_BOTTLE
	setflag FLAG_HIDE_HOOPA_CLERK
OldaleTown_Mart_EventScript_HoopaClerkPost::
	msgbox OldaleTown_Mart_Text_HoopaStoryPost, MSGBOX_DEFAULT
	release
	end

OldaleTown_Mart_Text_HoopaStory1:
	.string "Hey, do you have a minute for a\n"
	.string "story?\p"
	.string "This is something that happened when\n"
	.string "I was watching the store one time…$"

@OldaleTown_Mart_Text_HoopaStory2:
@	.string "It was, like, a totally dark night.\n"
@	.string "Moonless. And I was all, “No way!\l"
@	.string "This is so-o-o-o creepy!”\l"
@	.string "Then, suddenly--whoosh!\p"
@	.string "Out of nowhere, the automatic sliding\n"
@	.string "door… slides open.\p"
@	.string "And then this super-duper scary old\n"
@	.string "guy comes in, kinda unsteady,\l"
@	.string "you know? Kinda shambling…$"
@
@OldaleTown_Mart_Text_HoopaStory3:
@	.string "So I'm thinking how terrible and scary\n"
@	.string "is this, and then the old guy\l"
@	.string "shuffles over to me…\p"
@	.string "He has a package, like, clutched in\n"
@	.string "his hands… He's mumbling that he\l"
@	.string "has to show it to me…\p"
@	.string "Then he asks, “Do you know what this\n"
@	.string "is worth?”\p"
@	.string "He keeps staring right at me and not\n"
@	.string "even blinking. I was so freaked\l"
@	.string "out. I was, like…\p"
@	.string "“Oh yes. It's, uh, really something,\n"
@	.string "isn't it?”$"
@
@OldaleTown_Mart_Text_HoopaStory4:
@	.string "So the old guy grins at me, and he\n"
@	.string "says…\p"
@	.string "“Then I'll just give you this instead\n"
@	.string "of money. Now give me everything\l"
@	.string "you've got in this store!”\l"
@	.string "That's what he said! Really!\p"
@	.string "I was like, “What is this? Too weird,\n"
@	.string "my dude!” But I was scared, so I\l"
@	.string "started shoveling over Potions and,\l"
@	.string "like, whatever I could reach.\l"
@	.string "I gave the dude everything for his\l"
@	.string "stupid package.\p"
@	.string "And out he goes, like, with a wicked\n"
@	.string "grin on his face…$"
@
@OldaleTown_Mart_Text_HoopaStory5:
@	.string "As he's walking out, he says, “Three\n"
@	.string "days… For a mere three days will\l"
@	.string "Hoopa be unbound…” Really!\p"
@	.string "I was all, “Stop freaking me out with\n"
@	.string "this nonsense!” I was, like,\l"
@	.string "sweating. The back of my shirt was\l"
@	.string "soaked.\p"
@	.string "Anyway, nothing I could do, so I\n"
@	.string "open the package. It's just a dirty\l"
@	.string "old bottle. Li-i-i-i-ike, really.\p"
@	.string "So I go, “Weirdness. Wonder what's in\n"
@	.string "it.” I grab the stopper and\l"
@	.string "carefully pull it loose.\p"
@	.string "Blapt! It popped open, but there was\n"
@	.string "nothing inside! So I figure I\l"
@	.string "totally got fooled.$"

OldaleTown_Mart_Text_HoopaStory6:
	.string "Gah, whatever! You probably\n"
	.string "already know how this story goes.\p"
	.string "You can have that bottle.$"

OldaleTown_Mart_Text_HoopaStoryPost:
	.string "It's a strange bottle, isn't it?$"
