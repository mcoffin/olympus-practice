params ["_p"];
_a = ["Toggle Earplugs", CYETI_fnc_fadeEarplugs, true, -90, false, true, "User12", "_target == vehicle player"];
1 fadeSound 1;
_p addAction _a;
