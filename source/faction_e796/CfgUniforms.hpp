#include "\cnto_factions\GlobalMacros.hpp"

class Uniform_Base;
class UniformItem;
class CNTO_U_e796_CombatFatigues : Uniform_Base
{
	scope = PUBLIC;
	displayName = "E-796 Combat Fatigues";
	picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";

	class ItemInfo : UniformItem
	{
		uniformModel = "-";
		uniformClass = "CNTO_e796_Contractor";
		containerClass = "Supply40";
		mass = 40;
	};
};