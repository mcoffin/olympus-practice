params ["_p", "_markerName"];
private ["_pos"];
_pos = getMarkerPos _markerName;
(vehicle _p) setPos [_pos select 0, _pos select 1, 0];