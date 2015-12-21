#include "\2035_units\GlobalMacros.hpp"

class Uniform_Base;
class UniformItem;
class 2035u_e796_CombatFatigues : Uniform_Base
{
	scope = PUBLIC;
	displayName = "E-796 Combat Fatigues";
	picture = "\A3\characters_f_beta\data\ui\icon_u_ir_combatuniform_rucamo_ca.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";

	class ItemInfo : UniformItem
	{
		uniformModel = "-";
		uniformClass = "2035u_e796_Contractor";
		containerClass = "Supply40";
		mass = 40;
	};
};