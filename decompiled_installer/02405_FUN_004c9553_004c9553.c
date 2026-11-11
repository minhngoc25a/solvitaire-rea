// Function: FUN_004c9553
// Entry: 004c9553
// Size: 86 bytes
// Thunk: false
// External: false


byte __cdecl FUN_004c9553(uint param_1)

{
  __acrt_ptd *p_Var1;
  
  if (param_1 == 0xfffffffe) {
    p_Var1 = FUN_0042470e();
    *(undefined4 *)p_Var1 = 9;
  }
  else {
    if ((-1 < (int)param_1) && (param_1 < DAT_00544578)) {
      return *(byte *)((&DAT_00544378)[param_1 >> 6] + 0x28 + (param_1 & 0x3f) * 0x38) & 0x40;
    }
    p_Var1 = FUN_0042470e();
    *(undefined4 *)p_Var1 = 9;
    FUN_004243be();
  }
  return 0;
}


