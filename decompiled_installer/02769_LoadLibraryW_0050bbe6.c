// Function: LoadLibraryW
// Entry: 0050bbe6
// Size: 6 bytes
// Thunk: true
// External: false


HMODULE LoadLibraryW(LPCWSTR lpLibFileName)

{
  HMODULE pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0050bbe6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = LoadLibraryW(lpLibFileName);
  return pHVar1;
}


