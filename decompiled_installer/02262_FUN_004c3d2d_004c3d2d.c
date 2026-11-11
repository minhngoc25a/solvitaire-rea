// Function: FUN_004c3d2d
// Entry: 004c3d2d
// Size: 117 bytes
// Thunk: false
// External: false


bool __cdecl FUN_004c3d2d(uint param_1,int param_2)

{
  short *psVar1;
  short sVar2;
  __acrt_ptd *p_Var3;
  int iVar4;
  short *psVar5;
  bool bVar6;
  uint local_8;
  
  p_Var3 = FUN_0047dbec();
  iVar4 = GetLocaleInfoW(param_1 & 0x3ff | 0x400,0x20000001,(LPWSTR)&local_8,2);
  if (iVar4 == 0) {
    bVar6 = false;
  }
  else if ((param_1 == local_8) || (param_2 == 0)) {
    bVar6 = true;
  }
  else {
    psVar5 = *(short **)(p_Var3 + 0x50);
    psVar1 = psVar5 + 1;
    do {
      sVar2 = *psVar5;
      psVar5 = psVar5 + 1;
    } while (sVar2 != 0);
    iVar4 = _GetPrimaryLen(*(ushort **)(p_Var3 + 0x50));
    bVar6 = iVar4 != (int)psVar5 - (int)psVar1 >> 1;
  }
  return bVar6;
}


