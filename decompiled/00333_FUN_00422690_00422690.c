// Function: FUN_00422690
// Entry: 00422690
// Size: 97 bytes
// Thunk: false
// External: false


void FUN_00422690(short *param_1,int param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  LPWSTR lpsz;
  short *psVar4;
  
  iVar2 = FUN_00422770(param_1);
  iVar3 = FUN_004542f0((uint)param_1);
  lpsz = (LPWSTR)FUN_0044c3e0(iVar2,param_2);
  if (iVar3 != 0) {
    param_1 = (short *)FUN_004542d0(iVar3);
  }
  if (param_1 != (short *)0x0) {
    psVar4 = param_1;
    do {
      sVar1 = *psVar4;
      psVar4 = psVar4 + 1;
      *(short *)((int)lpsz + (-2 - (int)param_1) + (int)psVar4) = sVar1;
    } while (sVar1 != 0);
    CharLowerW(lpsz);
    return;
  }
  *lpsz = L'\0';
  return;
}


