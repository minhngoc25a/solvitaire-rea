// Function: FUN_0042464b
// Entry: 0042464b
// Size: 28 bytes
// Thunk: false
// External: false


int __fastcall FUN_0042464b(int *param_1)

{
  __acrt_ptd *p_Var1;
  
  if (*param_1 == 0) {
    p_Var1 = FUN_00424668(param_1);
    if (p_Var1 == (__acrt_ptd *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0047d96c();
    }
  }
  return *param_1;
}


