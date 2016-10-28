private ["_target", "_id", "_vol", "_targetState"];

_targetState = _this select 3;
_vol = if (_targetState) then {
	0.1
} else {
	1
};
1 fadeSound _vol;

_target = _this select 0;
_id = _this select 2;
_target removeAction _id;

_target addAction ["Toggle Earplugs", CYETI_fnc_fadeEarplugs, !_targetState, -90, false, true, "User12", "_target == vehicle player"];