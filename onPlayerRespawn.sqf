params ["_p"];
[_p] execVM "earplugs.sqf";
_p call CYETI_fnc_removeFatigue;
[] execVM "jump.sqf";
[_p] execVM "repair.sqf";
[_p] call CYETI_fnc_setupTeleportMenu;