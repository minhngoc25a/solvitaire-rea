// Function: GetProcAddress
// Entry: 0050bbc8
// Size: 6 bytes
// Thunk: true
// External: false


FARPROC GetProcAddress(HMODULE hModule,LPCSTR lpProcName)

{
  FARPROC pFVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0050bbc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pFVar1 = GetProcAddress(hModule,lpProcName);
  return pFVar1;
}


