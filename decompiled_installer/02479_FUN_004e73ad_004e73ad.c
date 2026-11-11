// Function: FUN_004e73ad
// Entry: 004e73ad
// Size: 274 bytes
// Thunk: false
// External: false


/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

int __cdecl FUN_004e73ad(uint param_1,int param_2)

{
  bool bVar1;
  bool bVar2;
  __acrt_ptd *p_Var3;
  int iVar4;
  int iVar5;
  void *local_14;
  
  if ((((param_2 == 0x4000) || (param_2 == 0x8000)) || (param_2 == 0x10000)) ||
     ((param_2 == 0x40000 || (param_2 == 0x20000)))) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  bVar2 = true;
  if (bVar1) {
    if (param_1 == 0xfffffffe) {
      p_Var3 = FUN_0042470e();
      *(undefined4 *)p_Var3 = 9;
      ExceptionList = local_14;
      return -1;
    }
    if (((int)param_1 < 0) || (DAT_00544578 <= param_1)) {
      bVar2 = false;
    }
    if (bVar2) {
      iVar4 = (param_1 & 0x3f) * 0x38;
      if ((*(byte *)((&DAT_00544378)[(int)param_1 >> 6] + 0x28 + iVar4) & 1) != 0) {
        ___acrt_lowio_lock_fh(param_1);
        iVar5 = -1;
        if ((*(byte *)((&DAT_00544378)[(int)param_1 >> 6] + 0x28 + iVar4) & 1) == 0) {
          p_Var3 = FUN_0042470e();
          *(undefined4 *)p_Var3 = 9;
        }
        else {
          iVar5 = __setmode_nolock(param_1,param_2);
        }
        FUN_004e74c5();
        ExceptionList = local_14;
        return iVar5;
      }
    }
    p_Var3 = FUN_0042470e();
    *(undefined4 *)p_Var3 = 9;
  }
  else {
    p_Var3 = FUN_0042470e();
    *(undefined4 *)p_Var3 = 0x16;
  }
  FUN_004243be();
  ExceptionList = local_14;
  return -1;
}


