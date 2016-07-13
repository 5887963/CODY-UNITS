class codyu_wcf_combathelm : ItemCore {
    _generalMacro = "codyu_wcf_combathelm";
	displayName = "WCF Combat Helmet";
	picture = "\A3\characters_f\Data\UI\icon_H_helmet_plain_ca.paa";
    model = "\A3\Characters_F_beta\indep\headgear_helmet_canvas.p3d";
	scope = PUBLIC;
    hiddenSelections[] = {"camo"};
    hiddenSelectionsTextures[] = {"\faction_wcf\data\codyu_wcf_combatHelm.paa"};
    class ItemInfo: HeadgearItem
    {
        mass = 40;
        uniformModel = "\A3\Characters_F_beta\indep\headgear_helmet_canvas.p3d";
        modelSides[] = {TWest};
        hiddenSelections[] = {"camo"};
        class HitpointsProtectionInfo
        {
            class Head
            {
                    hitPointName = "HitHead";
                    armor = 6;
                    passThrough = 0.5;
            };
        };
    };
};