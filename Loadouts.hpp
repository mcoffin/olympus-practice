// Rebel loadouts

class Rebel {
	icon = "\A3\Ui_f\data\GUI\Cfg\Ranks\private_gs.paa";
	role = "Rebel";
	
	uniformClass = "U_O_T_Soldier_F";
	backpack = "B_ViperHarness_ghex_F";
	weapons[] = {"srifle_DMR_03_khaki_F","Binocular","Throw","Put"};
	magazines[] = {"20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag"};
	items[] = {"FirstAidKit","ToolKit","ToolKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit"};
	linkedItems[] = {"V_PlateCarrierIAGL_dgtl","H_HelmetSpecO_ghex_F","optic_MRCO","ItemMap","ItemCompass","ItemWatch","ItemGPS","NVGoggles_INDEP"};
};

class RebelMk1: Rebel {
	displayName = "Rebel (Mk1)";
	
	weapons[] = {"srifle_DMR_03_khaki_F","Binocular","Throw","Put"};
	magazines[] = {"20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag"};
};

class RebelMk18: Rebel {
	displayName = "Rebel (Mk18)";
	
	weapons[] = {"Binocular","srifle_EBR_F","Throw","Put"};
	magazines[] = {"20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag"};
}

class RebelMk200: Rebel {
	displayName = "Rebel (Mk200)";
	
	weapons[] = {"Binocular","LMG_Mk200_F","Throw","Put"};
	magazines[] = {"200Rnd_65x39_cased_Box","200Rnd_65x39_cased_Box","200Rnd_65x39_cased_Box","200Rnd_65x39_cased_Box"};
};

// Cop loadouts

class Cop {
	icon = "\A3\Ui_f\data\GUI\Cfg\Ranks\private_gs.paa";
	role = "Cop";
	
	uniformClass = "U_B_GEN_Soldier_F";
	backpack = "B_Carryall_oucamo";
	weapons[] = {"Binocular","SMG_02_F","hgun_P07_F","Throw","Put"};
	magazines[] = {"30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag"};
	items[] = {"FirstAidKit","ToolKit","ToolKit","ToolKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit"};
	linkedItems[] = {"V_TacVest_blk_POLICE","H_Cap_police","optic_MRCO","ItemMap","ItemCompass","ItemWatch","ItemGPS","NVGoggles_OPFOR"};
};

class Deputy: Cop {
	displayName = "Deputy";
	
	weapons[] = {"Binocular","SMG_02_F","hgun_P07_F","Throw","Put"};
	magazines[] = {"30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag"};
};

class PatrolOfficerMX: Cop {
	displayName = "P.O. (MX)";
	
	weapons[] = {"Binocular","arifle_MX_Black_F","hgun_P07_F","Throw","Put"};
	magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag"};
};

class PatrolOfficerSPAR: Cop {
	displayName = "P.O. (SPAR)";

	weapons[] = {"Binocular","arifle_SPAR_01_blk_F","hgun_P07_F","Throw","Put"};
	magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag"};
};

class CorporalCMR: Cop {
	displayName = "Corporal (CMR-76)";
	
	weapons[] = {"Binocular","srifle_DMR_07_blk_F","hgun_P07_F","Throw","Put"};
	magazines[] = {"20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F"};
};

class CorporalMXM: Cop {
	displayName = "Corporal (MXM)";
	
	weapons[] = {"Binocular","arifle_MXM_Black_F","hgun_P07_F","Throw","Put"};
	magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag"};
};