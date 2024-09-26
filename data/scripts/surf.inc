EventScript_UseSurf::
	goto_if_questlog EventScript_UseSurfEnd
	lockall
	special GetHmModeOption
	call_if_eq VAR_RESULT, 0, EventScript_UseSurf_Classic
	dofieldeffect FLDEFF_USE_SURF
EventScript_UseSurfRelease:
	releaseall
EventScript_UseSurfEnd:
	end
EventScript_UseSurf_Classic::
	checkpartymove MOVE_SURF
	goto_if_eq VAR_RESULT, PARTY_SIZE, EventScript_UseSurfEnd
	setfieldeffectargument 0, VAR_RESULT
	return

EventScript_CurrentTooFast::
	lockall
	msgbox Text_CurrentTooFast
	releaseall
	end
