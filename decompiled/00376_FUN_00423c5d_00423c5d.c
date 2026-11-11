// Function: FUN_00423c5d
// Entry: 00423c5d
// Size: 88 bytes
// Thunk: false
// External: false


HMODULE FUN_00423c5d(HMODULE param_1,LPCWSTR param_2)

{
  HMODULE pHVar1;
  HMODULE pHVar2;
  
  pHVar1 = (HMODULE)FUN_0042583b(DAT_0054357c,(int)param_1);
  if (pHVar1 != (HMODULE)0x0) {
    if ((param_2 != (LPCWSTR)0x0) && (pHVar2 = LoadLibraryW(param_2), pHVar2 != (HMODULE)0x0)) {
      pHVar1->unused = (int)pHVar2;
      if (param_1 != (HMODULE)0xffffffff) {
        return pHVar2;
      }
      return pHVar1;
    }
    if (param_1 != (HMODULE)0xffffffff) {
      pHVar1 = param_1;
    }
    FUN_00425965(DAT_0054357c,(int)pHVar1);
  }
  return (HMODULE)0x0;
}


