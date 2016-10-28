params ["_target"];
private ["_openRankMenu"];

CYETI_menu_rank = [
	["Set Rank", true],
	["Private", [2], "", -5, [["expression", "player setRank 'PRIVATE'"]], "1", "1"],
	["Corporal", [3], "", -5, [["expression", "player setRank 'CORPORAL'"]], "1", "1"],
	["Sergeant", [4], "", -5, [["expression", "player setRank 'SERGEANT'"]], "1", "1"],
	["Lieutenant", [5], "", -5, [["expression", "player setRank 'LIEUTENANT'"]], "1", "1"],
	["Captain", [6], "", -5, [["expression", "player setRank 'CAPTAIN'"]], "1", "1"],
	["Major", [7], "", -5, [["expression", "player setRank 'MAJOR'"]], "1", "1"],
	["Colonel", [8], "", -5, [["expression", "player setRank 'COLONEL'"]], "1", "1"]
];

_openRankMenu = {showCommandingMenu "#USER:CYETI_menu_rank"};
_target addAction ["Set rank", _openRankMenu];