// Function: GetModuleHandleW
// Entry: 0050bbc2
// Size: 6 bytes
// Thunk: true
// External: false


HMODULE GetModuleHandleW(LPCWSTR lpModuleName)

{
  HMODULE pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0050bbc2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = GetModuleHandleW(lpModuleName);
  return pHVar1;
}


