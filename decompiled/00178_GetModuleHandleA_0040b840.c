// Function: GetModuleHandleA
// Entry: 0040b840
// Size: 6 bytes
// Thunk: true
// External: false


HMODULE GetModuleHandleA(LPCSTR lpModuleName)

{
  HMODULE pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040b840. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = GetModuleHandleA(lpModuleName);
  return pHVar1;
}


