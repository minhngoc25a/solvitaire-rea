// Function: FUN_0050acbb
// Entry: 0050acbb
// Size: 79 bytes
// Thunk: false
// External: false


LPVOID __cdecl FUN_0050acbb(uint param_1,uint param_2,uint param_3)

{
  LPVOID pvVar1;
  
  if ((param_1 < 0x3fffffff) && (param_2 < (uint)(0xffffffff / (ulonglong)param_3))) {
    if (param_2 * param_3 < ~(param_1 * 4)) {
      pvVar1 = __calloc_base(param_1 * 4 + param_2 * param_3,1);
      FUN_004247be((LPVOID)0x0);
      return pvVar1;
    }
  }
  return (LPVOID)0x0;
}


