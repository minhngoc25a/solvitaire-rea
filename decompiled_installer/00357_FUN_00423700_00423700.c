// Function: FUN_00423700
// Entry: 00423700
// Size: 31 bytes
// Thunk: false
// External: false


SIZE_T FUN_00423700(LPCVOID param_1)

{
  SIZE_T SVar1;
  
  if (param_1 != (LPCVOID)0x0) {
    SVar1 = HeapSize(DAT_0054356c,0,param_1);
    return SVar1;
  }
  return 0;
}


