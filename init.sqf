[[14296.6,13029.9], 20] call CYETI_fnc_removeNearestObject; // Remove the Mushroom cartel tower
enableEnvironment false; // Disable ambient life and sounds

// Add loadouts
CYETI_cfg_loadouts = [
	"RebelMk1",
	"RebelMk18",
	"RebelMk200",
	"Deputy",
	"PatrolOfficerMX",
	"PatrolOfficerSPAR",
	"CorporalCMR",
	"CorporalMXM"
];
{[missionNamespace, _x] call BIS_fnc_addRespawnInventory} forEach CYETI_cfg_loadouts;