#include "\cody_units\GlobalMacros.hpp"

class B_Soldier_F;
class codyu_wcf_Rifleman : B_Soldier_F
{
	_generalMacro = "codyu_wcf_Rifleman";
	author = "Cody Burton";
	camouflage = 2.0;
	displayName = "Rifleman";
	faction = "codyu_wcf";
	hiddenSelections[] = { "camo" };
	hiddenSelectionsTextures[] = {"\faction_wcf\data\codyu_wcf_CombatFatigues.paa"};
	icon = "iconMan";
	linkedItems[] = {"H_HelmetB","codyu_wcf_CombatVest","G_Balaclava_TI_G_blk_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	side = WEST;
	scope = PUBLIC;
	uniformClass = "codyu_wcf_CombatFatigues";
	vehicleclass = "codyu_wcf_Men";
	weapons[] = {"arifle_CTAR_blk_F","hgun_P07_F","Throw","Put"};
};