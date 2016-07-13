class codyu_wcf_CombatFatigues : U_B_CombatUniform_mcam {
	_generalMacro = "codyu_wcf_CombatFatigues";
	displayName = "WCF Combat Fatigues";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
	picture = "\A3\characters_f_beta\data\ui\icon_u_ir_combatuniform_rucamo_ca.paa";
	scope = PUBLIC;
	class ItemInfo : UniformItem
	{
		uniformModel = "-";
		uniformClass = "codyu_wcf_combatBase";
		containerClass = "Supply40";
		mass = 40;
	};
};
class codyu_wcf_StealthFatigues : Uniform_Base {
	_generalMacro = "codyu_wcf_StealthFatigues";
	displayName = "WCF Stealth Fatigues";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
	picture = "\A3\characters_f_beta\data\ui\icon_u_ir_combatuniform_rucamo_ca.paa";
	scope = PUBLIC;
	class ItemInfo : UniformItem
	{
		uniformModel = "-";
		uniformClass = "codyu_wcf_StealthBase";
		containerClass = "Supply40";
		mass = 40;
	};
};