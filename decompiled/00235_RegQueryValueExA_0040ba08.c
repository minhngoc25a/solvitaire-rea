// Function: RegQueryValueExA
// Entry: 0040ba08
// Size: 6 bytes
// Thunk: true
// External: false


LSTATUS RegQueryValueExA(HKEY hKey,LPCSTR lpValueName,LPDWORD lpReserved,LPDWORD lpType,
                        LPBYTE lpData,LPDWORD lpcbData)

{
  LSTATUS LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040ba08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = RegQueryValueExA(hKey,lpValueName,lpReserved,lpType,lpData,lpcbData);
  return LVar1;
}


