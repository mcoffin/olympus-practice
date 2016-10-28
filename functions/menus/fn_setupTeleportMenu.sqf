params ["_target"];
private ["_openTeleportMenu"];

CYETI_menu_teleport = [
	["Teleport Menu", true],
	["HQ", [2], "", -5, [["expression", "[player, 'marker_b_hq'] call CYETI_fnc_teleportToMarker"]], "1", "1"],
	["Mushroom Cartel", [3], "", -5, [["expression", "[player, 'marker_shroomStaging'] call CYETI_fnc_teleportToMarker"]], "1", "1"],
	["Moonshine Cartel", [4], "", -5, [["expression", "[player, 'marker_moonStaging'] call CYETI_fnc_teleportToMarker"]], "1", "1"],
	["Meth Cartel", [5], "", -5, [["expression", "[player, 'marker_methStaging'] call CYETI_fnc_teleportToMarker"]], "1", "1"]
];

_openTeleportMenu = {showCommandingMenu "#USER:CYETI_menu_teleport"};

if ((side _target) == west) then {
	_target addAction ["Teleport", _openTeleportMenu];
}