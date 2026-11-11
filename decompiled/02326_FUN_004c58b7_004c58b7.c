// Function: FUN_004c58b7
// Entry: 004c58b7
// Size: 106 bytes
// Thunk: false
// External: false


undefined4 __cdecl FUN_004c58b7(uint param_1)

{
  __acrt_ptd *p_Var1;
  int iVar2;
  
  if (param_1 == 0xfffffffe) {
    p_Var1 = FUN_00424721();
    *(undefined4 *)p_Var1 = 0;
    p_Var1 = FUN_0042470e();
    *(undefined4 *)p_Var1 = 9;
  }
  else {
    if ((-1 < (int)param_1) && (param_1 < DAT_00544578)) {
      iVar2 = (param_1 & 0x3f) * 0x38;
      if ((*(byte *)((&DAT_00544378)[param_1 >> 6] + 0x28 + iVar2) & 1) != 0) {
        return *(undefined4 *)((&DAT_00544378)[param_1 >> 6] + 0x18 + iVar2);
      }
    }
    p_Var1 = FUN_00424721();
    *(undefined4 *)p_Var1 = 0;
    p_Var1 = FUN_0042470e();
    *(undefined4 *)p_Var1 = 9;
    FUN_004243be();
  }
  return 0xffffffff;
}


