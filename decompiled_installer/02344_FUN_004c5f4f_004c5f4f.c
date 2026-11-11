// Function: FUN_004c5f4f
// Entry: 004c5f4f
// Size: 71 bytes
// Thunk: false
// External: false


undefined4 __cdecl FUN_004c5f4f(int param_1)

{
  __acrt_ptd *p_Var1;
  undefined4 uVar2;
  
  if (((param_1 != 0) && (param_1 != 1)) && (param_1 != 2)) {
    if (param_1 != 3) {
      p_Var1 = FUN_0042470e();
      *(undefined4 *)p_Var1 = 0x16;
      FUN_004243be();
      return 0xffffffff;
    }
    return DAT_00544ad0;
  }
  uVar2 = DAT_00544ad0;
  DAT_00544ad0 = param_1;
  return uVar2;
}


