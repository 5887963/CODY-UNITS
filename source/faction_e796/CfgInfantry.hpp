#include "\2035_units\GlobalMacros.hpp"

class B_Soldier_base_F;
class 2035u_e796_Contractor : B_Soldier_base_F
{
	side = RESISTANCE;
	faction = "2035u_e796";
	vehicleclass = "2035u_e796_Men";
	model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
	author = "Cody Burton";
	_generalMacro = "2035u_e796_Contractor";
	scope = PUBLIC;
	displayName = "Contractor";
	weapons[] = {};
	respawnWeapons[] = {};
	magazines[] = {};
	respawnMagazines[] = {};
	linkedItems[] = { "2035u_e796_CombatVest" };
	respawnLinkedItems[] = {};
	uniformClass = "2035u_e796_CombatFatigues";
	camouflage = 2.0;
	hiddenSelections[] = { "camo" };
	HiddenSelectionsTextures[] = { "\faction_e796\data\2035u_e796_CombatFatigues.paa" };
	icon = "iconMan"
};