// Function: FUN_004f07d2
// Entry: 004f07d2
// Size: 62 bytes
// Thunk: false
// External: false


int FUN_004f07d2(void)

{
  __acrt_ptd *p_Var1;
  LPVOID pvVar2;
  
  p_Var1 = FUN_0047dd3d();
  if (p_Var1 != (__acrt_ptd *)0x0) {
    if (*(int *)(p_Var1 + 0x38) != 0) {
      return *(int *)(p_Var1 + 0x38);
    }
    pvVar2 = __malloc_base(0x24);
    *(LPVOID *)(p_Var1 + 0x38) = pvVar2;
    FUN_004247be((LPVOID)0x0);
    if (*(int *)(p_Var1 + 0x38) != 0) {
      return *(int *)(p_Var1 + 0x38);
    }
  }
  p_Var1 = FUN_0042470e();
  *(undefined4 *)p_Var1 = 0xc;
  return 0;
}


