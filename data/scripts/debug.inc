Debug_ShowFieldMessageStringVar4::
	special ShowFieldMessageStringVar4
	waitmessage
	waitbuttonpress
	releaseall
	end

Debug_CheatStart::
	lockall
	setflag FLAG_SYS_POKEMON_GET
	setflag FLAG_SYS_NATIONAL_DEX
	special EnableNationalPokedex
	setflag FLAG_HIDE_PEWTER_CITY_RUNNING_SHOES_GUY
	setflag FLAG_SYS_B_DASH
	specialvar VAR_RESULT, CalculatePlayerPartyCount
	goto_if_eq VAR_RESULT, 0, Debug_CheatStart2
    msgbox Debug_Message_Test, MSGBOX_DEFAULT
	closemessage
	releaseall
	end

Debug_CheatStart2::
	givemon SPECIES_BULBASAUR, 5, ITEM_NONE
	playmoncry SPECIES_BULBASAUR, CRY_MODE_NORMAL
    msgbox Debug_Message_Test2, MSGBOX_DEFAULT
	closemessage
	releaseall
	end

Debug_Script_1::
@	lockall
@	setvar VAR_0x8005, 1
@Debug_Script_1a::
@	special HealPlayerParty
@	setvar VAR_0x8004, 0
@	special ChangeMonSpecies
@	setwildbattle VAR_0x8005, 1
@	dowildbattle
@	addvar VAR_0x8005, 1
@	goto_if_lt VAR_0x8005, SPECIES_EGG, Debug_Script_1a
@	releaseall
	end

Debug_Script_2::
	end

Debug_Script_3::
	end

Debug_Script_4::
	end

Debug_Script_5::
	end

Debug_Script_6::
	end

Debug_Script_7::
	end

Debug_Script_8::
	end

Debug_Message_Test::
    .string "Test message!$"

Debug_Message_Test2::
    .string "Pokémon menu unlocked!$"
