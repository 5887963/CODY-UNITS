class ItemCore;
class Vest_Base;
class VestItem;

class codyu_e796_CombatVest : Vest_Base {
	displayName = "E796 Combat Vest";
	picture = "\a3\characters_f\data\ui\icon_v_harnesso_brn_ca.paa";
	model = "\A3\Characters_F_beta\indep\equip_ia_vest01.p3d";
	hiddenSelections[] = { "camo" };
	hiddenSelectionsTextures[] = { "\faction_e796\data\codyu_e796_CombatVest.paa" };
	_generalmacro = "codyu_e796_CombatVest";
	scope = PUBLIC;

	class ItemInfo : VestItem {
		uniformModel = "\A3\Characters_F_beta\indep\equip_ia_vest01.p3d";
		hiddenSelections[] = { "camo" };
		containerClass = "Supply140";
		mass = 30;
		armor = 0;
		passThrough = 0.5;
		explosionShielding = 0.2;
	};
};