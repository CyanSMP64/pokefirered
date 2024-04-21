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
	playfanfare SE_UTVANISH
	removeobject 11
	waitfanfare
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
