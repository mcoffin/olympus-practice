params ["_position", "_size"];

_terrainObjects = nearestTerrainObjects [_position, [], _size];
hideObjectGlobal (_terrainObjects select 0);