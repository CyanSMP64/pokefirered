Route10_MapScripts::
	.byte 0

Route10_EventScript_Unused::
	end

Route10_EventScript_Hiker::
	lock
	faceplayer
	msgbox Route10_Text_Hiker, MSGBOX_DEFAULT
	giveitem ITEM_HM05
	setflag FLAG_GOT_HM05
	msgbox Route10_Text_HikerExplainFlash, MSGBOX_DEFAULT
	closemessage
	playse SE_M_TELEPORT
	applymovement 11, Route1_Movement_ClerkLeave
	waitmovement 11
	removeobject 11
	release
	end

Route10_EventScript_NorthRockTunnelSign::
	msgbox Route10_Text_RockTunnelDetourToLavender, MSGBOX_SIGN
	end

Route10_EventScript_SouthRockTunnelSign::
	msgbox Route10_Text_RockTunnel, MSGBOX_SIGN
	end

Route10_EventScript_PowerPlantSign::
	msgbox Route10_Text_PowerPlant, MSGBOX_SIGN
	end
