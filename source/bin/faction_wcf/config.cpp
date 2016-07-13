/*
	Cody's Units | Western Coalition Forces (WCF)
	https://github.com/CodyBurton
	--------------------------------
	This work is licensed under the GNU GENERAL PUBLIC LICENSE.
	To view a copy of this license, visit http://www.gnu.org/licenses/gpl-3.0.en.html.
*/

#include "\cody_units\GlobalMacros.hpp"
#include "\faction_wcf\LocalMacros.hpp"

class cfgPatches {
	class faction_wcf {
		units[] = {"codyu_wcf_base","codyu_wcf_rifleman"/*,"codyu_wcf_StealthBase","codyu_wcf_riflemanStealth"*/};
		weapons[] = {};
		requiredVersion = REQUIREDARMAVERSION;
		requiredAddons[] = {};
		author[] = {"Cody Burton"};
		authorUrl = "https://github.com/CodyBurton";
	};
};

class cfgFactionClasses {
	class codyu_wcf {
		displayName = "Western Coalition Forces";
		priority = 1;
		side = WEST;
		icon = "\faction_wcf\data\cfgfactionclasses_wcf_ca.paa";
	};
};

class cfgVehicleClasses {
	#include "cfgVehicleClasses.hpp"
};

class cfgVehicles {
	class B_Soldier_base_F;
	#include "cfgInfantry.hpp"
};

class cfgWeapons {
	class Uniform_Base;
	class UniformItem;
	class U_B_CombatUniform_mcam;
	class VestItem;
	class V_PlateCarrierSpec_blk;
	class ItemCore;
	class HeadgearItem;
	#include "cfgUniforms.hpp"
	#include "cfgVests.hpp"
	#include "cfgHeadgear.hpp"
};

class cfgGroups {
	#include "cfgGroups.hpp"
};

class cfgWorlds {
	#include "cfgNames.hpp"
};