class codyu_wcf_combatBase : B_Soldier_base_F {
	side = WEST;
	faction = "codyu_wcf";
	vehicleclass = "codyu_wcf_Men";
	model = "\A3\characters_f\BLUFOR\b_soldier_01.p3d";
	author = "Cody Burton";
	_generalMacro = "codyu_wcf_combatBase";
	scope = PUBLIC;
	displayName = "Rifleman (Unarmed)";
	weapons[] = {};
	respawnWeapons[] = {};
	magazines[] = {};
	respawnMagazines[] = {};
	linkedItems[] = { "codyu_wcf_combathelm",
		"codyu_wcf_CombatVest",
		"G_Tactical_Black",
		"ItemMap","ItemCompass","ItemWatch","ItemRadio" };
	respawnLinkedItems[] = {};
	uniformClass = "codyu_wcf_CombatFatigues";
	camouflage = 2.0;
	hiddenSelections[] = { "camo" };
	HiddenSelectionsTextures[] = { "\faction_wcf\data\codyu_wcf_CombatFatigues.paa" };
	icon = "iconMan"
};

class codyu_wcf_rifleman : codyu_wcf_combatBase {
	_generalMacro = "codyu_wcf_rifleman";
	displayName = "Rifleman";
	weapons[] = {"arifle_CTAR_blk_F","hgun_P07_F","Throw","Put"};
	magazines[] = { 
		mag_8(30Rnd_580x42_Mag_F),
		mag_2(30Rnd_9x21_Mag)
	};
};

/*
class codyu_wcf_StealthBase : B_Soldier_base_F {
	_generalMacro = "codyu_wcf_StealthBase";
	displayName = "Rifleman (Unarmed)";
	side = WEST;
	faction = "codyu_wcf";
	vehicleclass = "codyu_wcf_MenStealth";
	model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
	author = "Cody Burton";
	scope = PUBLIC;
	displayName = "Rifleman (Unarmed)";
	weapons[] = {};
	respawnWeapons[] = {};
	magazines[] = {};
	respawnMagazines[] = {};
	linkedItems[] = { "H_HelmetIA",
		"codyu_wcf_CombatVest",
		"G_Balaclava_TI_G_blk_F",
		"ItemMap","ItemCompass","ItemWatch","ItemRadio" };
	respawnLinkedItems[] = {};
	uniformClass = "codyu_wcf_stealthFatigues";
	camouflage = 2.0;
	hiddenSelections[] = { "camo" };
	HiddenSelectionsTextures[] = { "\faction_wcf\data\codyu_wcf_StealthFatigues.paa" };
	icon = "iconMan"
};

class codyu_wcf_riflemanStealth : codyu_wcf_StealthBase {
	_generalMacro = "codyu_wcf_riflemanStealth";
	displayName = "Rifleman";
	weapons[] = {"arifle_CTAR_blk_F","hgun_P07_F","Throw","Put"};
	magazines[] = { 
		mag_8(30Rnd_580x42_Mag_F),
		mag_2(30Rnd_9x21_Mag)
	};
};
*/