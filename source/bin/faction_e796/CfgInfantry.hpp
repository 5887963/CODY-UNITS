class B_Soldier_base_F;
class codyu_e796_Contractor : B_Soldier_base_F {
	side = RESISTANCE;
	faction = "codyu_e796";
	vehicleclass = "codyu_e796_Men";
	model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
	author = "Cody Burton";
	_generalMacro = "codyu_e796_Contractor";
	scope = PUBLIC;
	displayName = "Contractor";
	weapons[] = {};
	respawnWeapons[] = {};
	magazines[] = {};
	respawnMagazines[] = {};
	linkedItems[] = { "codyu_e796_CombatVest" };
	respawnLinkedItems[] = {};
	uniformClass = "codyu_e796_CombatFatigues";
	camouflage = 2.0;
	hiddenSelections[] = { "camo" };
	HiddenSelectionsTextures[] = { "\faction_e796\data\codyu_e796_CombatFatigues.paa" };
	icon = "iconMan"
};