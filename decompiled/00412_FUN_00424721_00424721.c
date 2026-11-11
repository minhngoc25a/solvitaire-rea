// Function: FUN_00424721
// Entry: 00424721
// Size: 19 bytes
// Thunk: false
// External: false


__acrt_ptd * FUN_00424721(void)

{
  __acrt_ptd *p_Var1;
  
  p_Var1 = FUN_0047dd3d();
  if (p_Var1 == (__acrt_ptd *)0x0) {
    return (__acrt_ptd *)&DAT_0053fbb0;
  }
  return p_Var1 + 0x14;
}


