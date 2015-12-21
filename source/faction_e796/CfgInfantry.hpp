#include "\2035_units\GlobalMacros.hpp"

class B_Soldier_base_F;
class B_Carryall_Base;
class B_BLK_BLK_soldier_F;
class 2035u_e796_Contractor : B_BLK_BLK_soldier_F
{
	side = EAST;
	faction = "2035u_e796";
	backpack = "B_AssaultPack_blk";
	vehicleclass = "2035u_e796_Men";
	author = "Cody Burton";
	_generalMacro = "2035u_e796_Contractor";
	scope = PUBLIC;
	displayName = "Contractor";
	weapons[] = {
		"hlc_rifle_auga1_b",
		"rhsusf_weap_glock17g4",
		"Throw",
		"Put",
		"ACE_Vector"
	};
	respawnWeapons[] = {
		"hlc_rifle_auga1_b",
		"rhsusf_weap_glock17g4",
		"Throw",
		"Put",
		"ACE_Vector"
	};
	magazines[] = {
		"hlc_30Rnd_556x45_B_AUG",
		"hlc_30Rnd_556x45_B_AUG",
		"hlc_30Rnd_556x45_B_AUG",
		"hlc_30Rnd_556x45_B_AUG",
		"hlc_30Rnd_556x45_B_AUG",
		"hlc_30Rnd_556x45_B_AUG",
		"hlc_30Rnd_556x45_B_AUG",
		"rhsusf_mag_17Rnd_9x19_JHP", 
		"rhsusf_mag_17Rnd_9x19_JHP", 
		"rhsusf_mag_17Rnd_9x19_JHP"
	};
	respawnMagazines[] = {
		"hlc_30Rnd_556x45_B_AUG",
		"hlc_30Rnd_556x45_B_AUG",
		"hlc_30Rnd_556x45_B_AUG",
		"hlc_30Rnd_556x45_B_AUG",
		"hlc_30Rnd_556x45_B_AUG",
		"hlc_30Rnd_556x45_B_AUG",
		"hlc_30Rnd_556x45_B_AUG",
		"rhsusf_mag_17Rnd_9x19_JHP",
		"rhsusf_mag_17Rnd_9x19_JHP",
		"rhsusf_mag_17Rnd_9x19_JHP"
	};
	linkedItems[] = {
		"TRYK_V_IOTV_BLK",
		"TRYK_H_PASGT_BLK",
		"TRYK_kio_balaclava_ESS",
		"rhsusf_ANPVS_14",
		"ItemMap",
		"ItemGps",
		"ItemCompass",
		"ItemWatch",
		"ItemRadio"
	};
	respawnLinkedItems[] = {
		"TRYK_V_IOTV_BLK",
		"TRYK_H_PASGT_BLK",
		"TRYK_kio_balaclava_ESS",
		"rhsusf_ANPVS_14",
		"ItemMap",
		"ItemGps",
		"ItemCompass",
		"ItemWatch",
		"ItemRadio"
	};
	uniformClass = "2035u_U_e796_CombatFatigues";
	camouflage = 2.0;
	hiddenSelections[] = { "camo" };
	HiddenSelectionsTextures[] = { "\faction_e796\data\2035u_U_e796_CombatFatigues.paa" };
	icon = "iconMan"
};