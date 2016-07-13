/*
	Cody's Units | E796 PMC Group
	https://github.com/CodyBurton
	--------------------------------
	This work is licensed under the GNU GENERAL PUBLIC LICENSE.
	To view a copy of this license, visit http://www.gnu.org/licenses/gpl-3.0.en.html.
*/

#include "\cody_units\GlobalMacros.hpp"
#include "\faction_e796\LocalMacros.hpp"

class cfgPatches {
	class faction_e796 {
		units[] = {"codyu_e796_Contractor"};
		weapons[] = {};
		requiredVersion = REQUIREDARMAVERSION;
		requiredAddons[] = {};
		author[] = {"Cody Burton"};
		authorUrl = "https://github.com/CodyBurton";
	};
};

class cfgFactionClasses {
	class codyu_e796 {
		displayName = "E796 PMC";
		priority = 1;
		side = RESISTANCE;
		icon = "\faction_e796\data\cfgfactionclasses_e796_ca.paa";
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
	class Vest_Base;
	class VestItem;
	#include "cfgUniforms.hpp"
	#include "cfgVests.hpp"
};

class cfgGroups {
	#include "cfgGroups.hpp"
};

class cfgWorlds {
	#include "cfgNames.hpp"
};