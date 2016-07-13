class B_Soldier_base_F;
class codyu_wcf_base : B_Soldier_base_F {
	side = WEST;
	faction = "codyu_wcf";
	vehicleclass = "codyu_wcf_Men";
	model = "\A3\characters_f\BLUFOR\b_soldier_01.p3d";
	author = "Cody Burton";
	_generalMacro = "codyu_wcf_base";
	scope = PUBLIC;
	displayName = "Rifleman (Unarmed)";
	weapons[] = {};
	respawnWeapons[] = {};
	magazines[] = {};
	respawnMagazines[] = {};
	linkedItems[] = { "H_HelmetB",
		"codyu_wcf_CombatVest",
		"G_Balaclava_TI_G_blk_F",
		"ItemMap","ItemCompass","ItemWatch","ItemRadio" };
	respawnLinkedItems[] = {};
	uniformClass = "codyu_wcf_CombatFatigues";
	camouflage = 2.0;
	hiddenSelections[] = { "camo" };
	HiddenSelectionsTextures[] = { "\faction_wcf\data\codyu_wcf_CombatFatigues.paa" };
	icon = "iconMan"
};

class codyu_wcf_rifleman : codyu_wcf_base {
	_generalMacro = "codyu_wcf_base";
	displayName = "Rifleman";
	weapons[] = {"arifle_CTAR_blk_F","hgun_P07_F","Throw","Put"};
	magazines[] = { 
		mag_4(30Rnd_580x42_Mag_F)
	};
};