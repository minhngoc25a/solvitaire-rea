// Function: FUN_004235c0
// Entry: 004235c0
// Size: 31 bytes
// Thunk: false
// External: false


LPVOID FUN_004235c0(SIZE_T param_1)

{
  LPVOID pvVar1;
  
  if (0 < (int)param_1) {
    pvVar1 = HeapAlloc(DAT_0054356c,8,param_1);
    return pvVar1;
  }
  return (LPVOID)0x0;
}


