// Function: FUN_00503f8b
// Entry: 00503f8b
// Size: 44 bytes
// Thunk: false
// External: false


undefined4 __cdecl FUN_00503f8b(undefined4 *param_1)

{
  __acrt_ptd *p_Var1;
  
  if (param_1 == (undefined4 *)0x0) {
    p_Var1 = FUN_0042470e();
    *(undefined4 *)p_Var1 = 0x16;
    FUN_004243be();
    return 0x16;
  }
  *param_1 = DAT_00544b2c;
  return 0;
}


