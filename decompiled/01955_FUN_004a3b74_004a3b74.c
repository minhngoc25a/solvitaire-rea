// Function: FUN_004a3b74
// Entry: 004a3b74
// Size: 267 bytes
// Thunk: false
// External: false


/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

uint __cdecl FUN_004a3b74(uint param_1,LPWSTR param_2,uint param_3)

{
  bool bVar1;
  __acrt_ptd *p_Var2;
  int iVar3;
  uint uVar4;
  void *local_14;
  
  if (param_1 == 0xfffffffe) {
    p_Var2 = FUN_00424721();
    *(undefined4 *)p_Var2 = 0;
    p_Var2 = FUN_0042470e();
    *(undefined4 *)p_Var2 = 9;
    ExceptionList = local_14;
    return 0xffffffff;
  }
  if (((int)param_1 < 0) || (DAT_00544578 <= param_1)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    iVar3 = (param_1 & 0x3f) * 0x38;
    if ((*(byte *)((&DAT_00544378)[(int)param_1 >> 6] + 0x28 + iVar3) & 1) != 0) {
      if (param_3 < 0x80000000) {
        ___acrt_lowio_lock_fh(param_1);
        uVar4 = 0xffffffff;
        if ((*(byte *)((&DAT_00544378)[(int)param_1 >> 6] + 0x28 + iVar3) & 1) == 0) {
          p_Var2 = FUN_0042470e();
          *(undefined4 *)p_Var2 = 9;
          p_Var2 = FUN_00424721();
          *(undefined4 *)p_Var2 = 0;
        }
        else {
          uVar4 = FUN_004a3c8d(param_1,param_2,param_3);
        }
        FUN_004a3c85();
        ExceptionList = local_14;
        return uVar4;
      }
      p_Var2 = FUN_00424721();
      *(undefined4 *)p_Var2 = 0;
      p_Var2 = FUN_0042470e();
      *(undefined4 *)p_Var2 = 0x16;
      goto LAB_004a3bcd;
    }
  }
  p_Var2 = FUN_00424721();
  *(undefined4 *)p_Var2 = 0;
  p_Var2 = FUN_0042470e();
  *(undefined4 *)p_Var2 = 9;
LAB_004a3bcd:
  FUN_004243be();
  ExceptionList = local_14;
  return 0xffffffff;
}


