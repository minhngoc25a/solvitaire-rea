// Function: __malloc_base
// Entry: 0048134e
// Size: 78 bytes
// Thunk: false
// External: false


/* Library Function - Single Match
    __malloc_base
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

LPVOID __cdecl __malloc_base(SIZE_T param_1)

{
  bool bVar1;
  int iVar2;
  undefined3 extraout_var;
  LPVOID pvVar3;
  __acrt_ptd *p_Var4;
  
  if (param_1 < 0xffffffe1) {
    if (param_1 == 0) {
      param_1 = 1;
    }
    do {
      pvVar3 = HeapAlloc(DAT_005441f8,0,param_1);
      if (pvVar3 != (LPVOID)0x0) {
        return pvVar3;
      }
      iVar2 = FUN_004c50da();
    } while ((iVar2 != 0) && (bVar1 = FUN_004c5048(param_1), CONCAT31(extraout_var,bVar1) != 0));
  }
  p_Var4 = FUN_0042470e();
  *(undefined4 *)p_Var4 = 0xc;
  return (LPVOID)0x0;
}


