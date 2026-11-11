// Function: FUN_004e750a
// Entry: 004e750a
// Size: 45 bytes
// Thunk: false
// External: false


undefined4 __cdecl FUN_004e750a(undefined4 *param_1)

{
  __acrt_ptd *p_Var1;
  
  if (param_1 == (undefined4 *)0x0) {
    p_Var1 = FUN_0042470e();
    *(undefined4 *)p_Var1 = 0x16;
    FUN_004243be();
    return 0x16;
  }
  *param_1 = DAT_00544bf8;
  return 0;
}


