class ItemCore;
class Vest_Base;
class VestItem;
class Vest_V_PlateCarrierSpec_rgr;

/*class codyu_wcf_CombatVest : Vest_Base {
	displayName = "WCF Combat Vest";
	picture = "\a3\characters_f\data\ui\icon_v_harnesso_brn_ca.paa";
	model = "\A3\Characters_F\BLUFOR\equip_b_vest01.p3d";
	hiddenSelections[] = { "camo" };
	hiddenSelectionsTextures[] = { "\faction_wcf\data\codyu_wcf_CombatVest.paa" };
	_generalmacro = "codyu_wcf_CombatVest";
	scope = PUBLIC;

	class ItemInfo : VestItem {
		uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest01.p3d";
		hiddenSelections[] = { "camo" };
		containerClass = "Supply140";
		mass = 30;
		armor = 0;
		passThrough = 0.5;
		explosionShielding = 0.2;
	};
};*/

class codyu_wcf_CombatVest : Vest_V_PlateCarrierSpec_rgr {
	displayName = "WCF Combat Vest";
	_generalmacro = "codyu_wcf_CombatVest";
	scope = PUBLIC;
};