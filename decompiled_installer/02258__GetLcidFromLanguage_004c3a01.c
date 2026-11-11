// Function: _GetLcidFromLanguage
// Entry: 004c3a01
// Size: 95 bytes
// Thunk: false
// External: false


/* Library Function - Single Match
    _GetLcidFromLanguage
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl _GetLcidFromLanguage(byte *param_1)

{
  short *psVar1;
  short sVar2;
  __acrt_ptd *p_Var3;
  int iVar4;
  short *psVar5;
  bool bVar6;
  
  p_Var3 = FUN_0047dbec();
  iVar4 = 2;
  psVar5 = *(short **)(p_Var3 + 0x50);
  psVar1 = psVar5 + 1;
  do {
    sVar2 = *psVar5;
    psVar5 = psVar5 + 1;
  } while (sVar2 != 0);
  bVar6 = (int)psVar5 - (int)psVar1 >> 1 == 3;
  *(uint *)(p_Var3 + 0x60) = (uint)bVar6;
  if (!bVar6) {
    iVar4 = _GetPrimaryLen(*(ushort **)(p_Var3 + 0x50));
  }
  *(int *)(p_Var3 + 0x5c) = iVar4;
  EnumSystemLocalesW((LOCALE_ENUMPROCW)&LAB_004c3a60,1);
  if ((*param_1 & 4) == 0) {
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  return;
}


