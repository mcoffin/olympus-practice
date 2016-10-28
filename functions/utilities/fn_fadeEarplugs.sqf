private ["_target", "_id", "_vol", "_targetState", "_actionName"];

_targetState = _this select 3;
_vol = if (_targetState) then {
	hint "Earplugs inserted";
	0.1
} else {
	hint "Earplugs removed";
	1
};
1 fadeSound _vol;

_target = _this select 0;
_id = _this select 2;
_target removeAction _id;

_actionName = if (_targetState) then {
	"Remove earplugs"
} else {
	"Insert earplugs"
};

_target addAction [_actionName, CYETI_fnc_fadeEarplugs, !_targetState, -90, false, true, "User12", "_target == vehicle player"];