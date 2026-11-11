// Function: FUN_004c5b64
// Entry: 004c5b64
// Size: 145 bytes
// Thunk: false
// External: false


undefined4 __cdecl FUN_004c5b64(uint param_1)

{
  int iVar1;
  __acrt_ptd *p_Var2;
  int iVar3;
  DWORD nStdHandle;
  
  if ((-1 < (int)param_1) && (param_1 < DAT_00544578)) {
    iVar3 = (param_1 & 0x3f) * 0x38;
    if (((*(byte *)(iVar3 + 0x28 + (&DAT_00544378)[param_1 >> 6]) & 1) != 0) &&
       (*(int *)(iVar3 + 0x18 + (&DAT_00544378)[param_1 >> 6]) != -1)) {
      iVar1 = FUN_004c5f3a();
      if (iVar1 == 1) {
        if (param_1 == 0) {
          nStdHandle = 0xfffffff6;
        }
        else if (param_1 == 1) {
          nStdHandle = 0xfffffff5;
        }
        else {
          if (param_1 != 2) goto LAB_004c5bca;
          nStdHandle = 0xfffffff4;
        }
        SetStdHandle(nStdHandle,(HANDLE)0x0);
      }
LAB_004c5bca:
      *(undefined4 *)((&DAT_00544378)[param_1 >> 6] + 0x18 + iVar3) = 0xffffffff;
      return 0;
    }
  }
  p_Var2 = FUN_0042470e();
  *(undefined4 *)p_Var2 = 9;
  p_Var2 = FUN_00424721();
  *(undefined4 *)p_Var2 = 0;
  return 0xffffffff;
}


