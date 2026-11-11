// Function: _GetLcidFromCountry
// Entry: 004c3b35
// Size: 75 bytes
// Thunk: false
// External: false


/* Library Function - Single Match
    _GetLcidFromCountry
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl _GetLcidFromCountry(byte *param_1)

{
  short *psVar1;
  short sVar2;
  __acrt_ptd *p_Var3;
  short *psVar4;
  
  p_Var3 = FUN_0047dbec();
  psVar4 = *(short **)(p_Var3 + 0x54);
  psVar1 = psVar4 + 1;
  do {
    sVar2 = *psVar4;
    psVar4 = psVar4 + 1;
  } while (sVar2 != 0);
  *(uint *)(p_Var3 + 100) = (uint)((int)psVar4 - (int)psVar1 >> 1 == 3);
  EnumSystemLocalesW((LOCALE_ENUMPROCW)&LAB_004c3b80,1);
  if ((*param_1 & 4) == 0) {
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  return;
}


