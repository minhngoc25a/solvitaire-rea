// Function: FUN_004e74cd
// Entry: 004e74cd
// Size: 61 bytes
// Thunk: false
// External: false


undefined4 __cdecl FUN_004e74cd(int param_1)

{
  __acrt_ptd *p_Var1;
  
  if (((param_1 != 0x4000) && (param_1 != 0x8000)) && (param_1 != 0x10000)) {
    p_Var1 = FUN_0042470e();
    *(undefined4 *)p_Var1 = 0x16;
    FUN_004243be();
    return 0x16;
  }
  LOCK();
  DAT_00544bf8 = param_1;
  UNLOCK();
  return 0;
}


