/*
	Units of 2035 | E-796 PMC Group
	https://github.com/CodyBurton
	--------------------------------
	This work is licensed under the GNU GENERAL PUBLIC LICENSE.
	To view a copy of this license, visit http://www.gnu.org/licenses/gpl-3.0.en.html.
*/

#include "\2035_units\GlobalMacros.hpp"

class CfgPatches {
	class faction_e796 {
		units[] = {"2035u_e796_Contractor"};
		weapons[] = {};
		requiredVersion = 1.54;
		requiredAddons[] = {};
		author[] = {"Cody Burton"};
		authorUrl = "https://github.com/CodyBurton";
	};
};

class CfgFactionClasses {
	class 2035u_e796 {
		displayName = "E-796";
		priority = 1;
		side = RESISTANCE;
		icon = "\faction_e796\data\cfgfactionclasses_e796_ca.paa";
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
};

class CfgGroups {
	#include "CfgGroups.hpp"
};

class CfgWorlds {
	#include "CfgNames.hpp"
};