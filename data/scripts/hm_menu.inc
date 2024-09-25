HMMenu_EventScript_ShowHMMenu::
    lockall
    multichoice 0, 0, MULTICHOICE_HM_MOVES, FALSE
    switch VAR_RESULT
    case 0, HMMenu_EventScript_TryUseHM01Cut
    case 1, HMMenu_EventScript_TryUseHM02Fly
    case 2, HMMenu_EventScript_TryUseHM03Surf
    case 3, HMMenu_EventScript_TryUseHM04Strength
    case 4, HMMenu_EventScript_TryUseHM05Flash
    case 5, HMMenu_EventScript_TryUseHM06RockSmash
    case 6, HMMenu_EventScript_TryUseHM07Waterfall
    case SCR_MENU_CANCEL, HMMenu_EventScript_Cancel
    end

HMMenu_EventScript_TryUseHM01Cut::
	checkitem ITEM_HM01
    goto_if_eq VAR_RESULT, FALSE, HMMenu_EventScript_YouDontHaveThisHMYet
    goto_if_unset FLAG_BADGE02_GET, HMMenu_EventScript_CantBeUsedUntilBadge
    callnative IsPlayerInFrontOfCutTree_Scr
    goto_if_eq VAR_RESULT, TRUE, EventScript_FldEffCut
    callnative IsCuttableGrassNearPlayer_Scr
    goto_if_eq VAR_RESULT, TRUE, EventScript_UseCutOnGrass
    msgbox HMMenu_Text_TheresNothingToCut, MSGBOX_DEFAULT
    releaseall
    end

HMMenu_EventScript_TryUseHM02Fly::
	checkitem ITEM_HM02
    goto_if_eq VAR_RESULT, FALSE, HMMenu_EventScript_YouDontHaveThisHMYet
    goto_if_unset FLAG_BADGE03_GET, HMMenu_EventScript_CantBeUsedUntilBadge
    callnative SetUpFieldMove_Fly_scr
    goto_if_eq VAR_RESULT, FALSE, HMMenu_EventScript_CantUseThat
    fadescreen FADE_TO_BLACK
    special FieldUseFly
    waitstate
    releaseall
    end

HMMenu_EventScript_TryUseHM03Surf::
	checkitem ITEM_HM03
    goto_if_eq VAR_RESULT, FALSE, HMMenu_EventScript_YouDontHaveThisHMYet
    goto_if_unset FLAG_BADGE05_GET, HMMenu_EventScript_CantBeUsedUntilBadge
    callnative SetUpFieldMove_Surf_scr
    goto_if_eq VAR_RESULT, TRUE, EventScript_UseSurf
    msgbox HMMenu_Text_CantSurfHere, MSGBOX_DEFAULT
    releaseall
    end

HMMenu_EventScript_TryUseHM04Strength::
	checkitem ITEM_HM04
    goto_if_eq VAR_RESULT, FALSE, HMMenu_EventScript_YouDontHaveThisHMYet
    goto_if_unset FLAG_BADGE04_GET, HMMenu_EventScript_CantBeUsedUntilBadge
    goto EventScript_FldEffStrength
    releaseall
    end

HMMenu_EventScript_TryUseHM05Flash::
	checkitem ITEM_HM05
    goto_if_eq VAR_RESULT, FALSE, HMMenu_EventScript_YouDontHaveThisHMYet
    goto_if_unset FLAG_BADGE01_GET, HMMenu_EventScript_CantBeUsedUntilBadge
    callnative SetUpFieldMove_Flash_scr
    goto_if_eq VAR_RESULT, TRUE, HMMenu_EventScript_UseFlash
    msgbox HMMenu_Text_CantUseThat, MSGBOX_DEFAULT
    releaseall
    end

HMMenu_EventScript_TryUseHM06RockSmash::
	checkitem ITEM_HM06
    goto_if_eq VAR_RESULT, FALSE, HMMenu_EventScript_YouDontHaveThisHMYet
    goto_if_unset FLAG_BADGE06_GET, HMMenu_EventScript_CantBeUsedUntilBadge
    callnative SetUpFieldMove_RockSmash_scr
    goto_if_eq VAR_RESULT, TRUE, EventScript_RockSmash
    msgbox HMMenu_Text_CantUseThat, MSGBOX_DEFAULT
    releaseall
    end

HMMenu_EventScript_TryUseHM07Waterfall::
	checkitem ITEM_HM07
    goto_if_eq VAR_RESULT, FALSE, HMMenu_EventScript_YouDontHaveThisHMYet
    goto_if_unset FLAG_BADGE07_GET, HMMenu_EventScript_CantBeUsedUntilBadge
    callnative SetUpFieldMove_Waterfall_scr
    goto_if_eq VAR_RESULT, TRUE, EventScript_Waterfall
    msgbox HMMenu_Text_CantUseThat, MSGBOX_DEFAULT
    releaseall
    end

HMMenu_EventScript_Cancel::
    releaseall
    end

HMMenu_EventScript_UseFlash::
    callnative FieldCallback_Flash
    releaseall
    end

HMMenu_EventScript_YouDontHaveThisHMYet::
    msgbox HMMenu_Text_YouDontHaveThisHMYet, MSGBOX_DEFAULT
    releaseall
    end

HMMenu_EventScript_CantBeUsedUntilBadge::
    msgbox HMMenu_Text_CantBeUsedUntilBadge, MSGBOX_DEFAULT
    releaseall
    end

HMMenu_EventScript_CantUseThat::
    msgbox HMMenu_Text_CantUseThat, MSGBOX_DEFAULT
    releaseall
    end

HMMenu_Text_YouDontHaveThisHMYet:
    .string "You don't have this HM yet.$"

HMMenu_Text_CantBeUsedUntilBadge:
    .string "This can't be used until a new\n"
    .string "Badge is obtained.$"

HMMenu_Text_TheresNothingToCut:
    .string "There's nothing to Cut.$"

HMMenu_Text_CantUseThat:
    .string "Can't use that here.$"

HMMenu_Text_CantSurfHere:
    .string "You can't Surf here.$"
