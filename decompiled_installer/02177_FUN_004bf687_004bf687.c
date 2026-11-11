// Function: FUN_004bf687
// Entry: 004bf687
// Size: 49 bytes
// Thunk: false
// External: false


void __cdecl FUN_004bf687(int param_1)

{
  __acrt_ptd *p_Var1;
  
  if (param_1 == 1) {
    p_Var1 = FUN_0042470e();
    *(undefined4 *)p_Var1 = 0x21;
  }
  else if ((param_1 == 2) || (param_1 == 3)) {
    p_Var1 = FUN_0042470e();
    *(undefined4 *)p_Var1 = 0x22;
    return;
  }
  return;
}


