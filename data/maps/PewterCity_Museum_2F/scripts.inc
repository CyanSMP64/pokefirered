PewterCity_Museum_2F_MapScripts::
	.byte 0

PewterCity_Museum_2F_EventScript_Man::
	msgbox PewterCity_Museum_1F_Text_WhatsSpecialAboutMoonStone, MSGBOX_NPC
	end

PewterCity_Museum_2F_EventScript_OldMan::
	msgbox PewterCity_Museum_1F_Text_BoughtColorTVForMoonLanding, MSGBOX_NPC
	end

PewterCity_Museum_2F_EventScript_Scientist::
	msgbox PewterCity_Museum_1F_Text_RunningSpaceExhibitThisMonth, MSGBOX_NPC
	end

PewterCity_Museum_2F_EventScript_LittleGirl::
	msgbox PewterCity_Museum_1F_Text_AskedDaddyToCatchPikachu, MSGBOX_NPC
	end

PewterCity_Museum_2F_EventScript_BaldingMan::
	msgbox PewterCity_Museum_1F_Text_PikachuSoonIPromise, MSGBOX_NPC
	end

PewterCity_Museum_2F_EventScript_SpaceShuttle::
	msgbox PewterCity_Museum_1F_Text_SpaceShuttle, MSGBOX_SIGN
	end

PewterCity_Museum_2F_EventScript_MoonStone::
	lock
	setvar VAR_0x8004, SPECIES_DEOXYS
	specialvar VAR_RESULT, DoesPlayerPartyContainSpecies
	goto_if_eq VAR_RESULT, TRUE, PewterCity_Museum_2F_EventScript_DeoxysEvent
	setvar VAR_0x8004, SPECIES_DEOXYS_ATTACK
	specialvar VAR_RESULT, DoesPlayerPartyContainSpecies
	goto_if_eq VAR_RESULT, TRUE, PewterCity_Museum_2F_EventScript_DeoxysEvent
	setvar VAR_0x8004, SPECIES_DEOXYS_DEFENSE
	specialvar VAR_RESULT, DoesPlayerPartyContainSpecies
	goto_if_eq VAR_RESULT, TRUE, PewterCity_Museum_2F_EventScript_DeoxysEvent
	setvar VAR_0x8004, SPECIES_DEOXYS_SPEED
	specialvar VAR_RESULT, DoesPlayerPartyContainSpecies
	goto_if_eq VAR_RESULT, TRUE, PewterCity_Museum_2F_EventScript_DeoxysEvent
	msgbox PewterCity_Museum_1F_Text_MeteoriteThatFellOnMtMoon, MSGBOX_DEFAULT
	release
	end

PewterCity_Museum_2F_EventScript_DeoxysEvent::
	msgbox PewterCity_Museum_2F_Text_DeoxysReactingToMeteorite, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, PewterCity_Museum_2F_EventScript_DeoxysFormChange
	release
	end

PewterCity_Museum_2F_EventScript_DeoxysFormChange::
	special ChoosePartyMon
	waitstate
	goto_if_ge VAR_0x8004, PARTY_SIZE, PewterCity_Museum_2F_EventScript_ReleaseEnd
	special TryChangeDeoxysForm
	goto_if_eq VAR_RESULT, TRUE, PewterCity_Museum_2F_EventScript_DeoxysFormChangeSuccess
PewterCity_Museum_2F_EventScript_ReleaseEnd::
	release
	end

PewterCity_Museum_2F_EventScript_DeoxysFormChangeSuccess::
	playmoncry VAR_0x8007, CRY_MODE_NORMAL
	special BufferMonNickname
	call_if_eq VAR_0x8007, SPECIES_DEOXYS, PewterCity_Museum_2F_EventScript_DeoxysFormChangeSuccessNormal
	call_if_eq VAR_0x8007, SPECIES_DEOXYS_ATTACK, PewterCity_Museum_2F_EventScript_DeoxysFormChangeSuccessAttack
	call_if_eq VAR_0x8007, SPECIES_DEOXYS_DEFENSE, PewterCity_Museum_2F_EventScript_DeoxysFormChangeSuccessDefense
	call_if_eq VAR_0x8007, SPECIES_DEOXYS_SPEED, PewterCity_Museum_2F_EventScript_DeoxysFormChangeSuccessSpeed
	release
	end

PewterCity_Museum_2F_EventScript_DeoxysFormChangeSuccessNormal::
	msgbox PewterCity_Museum_2F_Text_DeoxysNormal, MSGBOX_DEFAULT
	return

PewterCity_Museum_2F_EventScript_DeoxysFormChangeSuccessAttack::
	msgbox PewterCity_Museum_2F_Text_DeoxysAttack, MSGBOX_DEFAULT
	return

PewterCity_Museum_2F_EventScript_DeoxysFormChangeSuccessDefense::
	msgbox PewterCity_Museum_2F_Text_DeoxysDefense, MSGBOX_DEFAULT
	return

PewterCity_Museum_2F_EventScript_DeoxysFormChangeSuccessSpeed::
	msgbox PewterCity_Museum_2F_Text_DeoxysSpeed, MSGBOX_DEFAULT
	return

PewterCity_Museum_2F_Text_DeoxysReactingToMeteorite:
	.string "Deoxys is reacting to the\n"
	.string "meteorite…\p"
	.string "Would you like to bring the Deoxys in\n"
	.string "your party closer to the meteorite?$"

PewterCity_Museum_2F_Text_DeoxysNormal:
	.string "{STR_VAR_1} has changed to have\n"
	.string "balanced stats!$"

PewterCity_Museum_2F_Text_DeoxysAttack:
	.string "{STR_VAR_1} has changed to have\n"
	.string "superior stats for attacking!$"

PewterCity_Museum_2F_Text_DeoxysDefense:
	.string "{STR_VAR_1} has changed to have\n"
	.string "superior stats when defending!$"

PewterCity_Museum_2F_Text_DeoxysSpeed:
	.string "{STR_VAR_1} has changed to have\n"
	.string "increased Speed!$"
