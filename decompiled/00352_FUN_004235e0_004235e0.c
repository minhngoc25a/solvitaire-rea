// Function: FUN_004235e0
// Entry: 004235e0
// Size: 55 bytes
// Thunk: false
// External: false


LPVOID FUN_004235e0(SIZE_T param_1,byte param_2)

{
  LPVOID pvVar1;
  
  if ((int)param_1 < 1) {
    return (LPVOID)0x0;
  }
  if ((param_2 & 1) != 0) {
    pvVar1 = HeapAlloc(DAT_0054356c,0,param_1);
    return pvVar1;
  }
  pvVar1 = HeapAlloc(DAT_0054356c,8,param_1);
  return pvVar1;
}


