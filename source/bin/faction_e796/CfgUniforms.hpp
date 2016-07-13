class codyu_e796_CombatFatigues : Uniform_Base {
	scope = PUBLIC;
	displayName = "E796 Combat Fatigues";
	picture = "\A3\characters_f_beta\data\ui\icon_u_ir_combatuniform_rucamo_ca.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";

	class ItemInfo : UniformItem {
		uniformModel = "-";
		uniformClass = "codyu_e796_Contractor";
		containerClass = "Supply40";
		mass = 40;
	};
};