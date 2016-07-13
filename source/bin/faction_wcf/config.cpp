/*
	Cody's Units | Western Coalition Forces (WCF)
	https://github.com/CodyBurton
	--------------------------------
	This work is licensed under the GNU GENERAL PUBLIC LICENSE.
	To view a copy of this license, visit http://www.gnu.org/licenses/gpl-3.0.en.html.
*/

#include "\cody_units\GlobalMacros.hpp"
#include "\faction_wcf\LocalMacros.hpp"

class CfgPatches {
	class faction_wcf {
		units[] = {"codyu_wcf_base","codyu_wcf_rifleman"};
		weapons[] = {};
		requiredVersion = REQUIREDARMAVERSION;
		requiredAddons[] = {};
		author[] = {"Cody Burton"};
		authorUrl = "https://github.com/CodyBurton";
	};
};

class CfgFactionClasses {
	class codyu_wcf {
		displayName = "Western Coalition Forces";
		priority = 1;
		side = RESISTANCE;
		icon = "\faction_wcf\data\cfgfactionclasses_wcf_ca.paa";
	};
};

class CfgVehicleClasses {
	#include "CfgVehicleClasses.hpp"
};

class CfgVehicles {
	#include "CfgInfantry.hpp"
};

class CfgWeapons {
	#include "CfgUniforms.hpp"
	#include "CfgVests.hpp"
};

class CfgGroups {
	#include "CfgGroups.hpp"
};

class CfgWorlds {
	#include "CfgNames.hpp"
};