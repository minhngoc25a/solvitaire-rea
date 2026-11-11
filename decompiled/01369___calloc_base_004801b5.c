// Function: __calloc_base
// Entry: 004801b5
// Size: 93 bytes
// Thunk: false
// External: false


/* Library Function - Single Match
    __calloc_base
   
   Library: Visual Studio 2019 Release */

LPVOID __cdecl __calloc_base(uint param_1,uint param_2)

{
  bool bVar1;
  int iVar2;
  undefined3 extraout_var;
  LPVOID pvVar3;
  __acrt_ptd *p_Var4;
  SIZE_T dwBytes;
  
  if ((param_1 == 0) || (param_2 <= 0xffffffe0 / param_1)) {
    dwBytes = param_1 * param_2;
    if (dwBytes == 0) {
      dwBytes = 1;
    }
    do {
      pvVar3 = HeapAlloc(DAT_005441f8,8,dwBytes);
      if (pvVar3 != (LPVOID)0x0) {
        return pvVar3;
      }
      iVar2 = FUN_004c50da();
    } while ((iVar2 != 0) && (bVar1 = FUN_004c5048(dwBytes), CONCAT31(extraout_var,bVar1) != 0));
  }
  p_Var4 = FUN_0042470e();
  *(undefined4 *)p_Var4 = 0xc;
  return (LPVOID)0x0;
}


