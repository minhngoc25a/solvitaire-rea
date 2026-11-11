// Function: RegQueryValueExW
// Entry: 0050bcb2
// Size: 6 bytes
// Thunk: true
// External: false


LSTATUS RegQueryValueExW(HKEY hKey,LPCWSTR lpValueName,LPDWORD lpReserved,LPDWORD lpType,
                        LPBYTE lpData,LPDWORD lpcbData)

{
  LSTATUS LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0050bcb2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = RegQueryValueExW(hKey,lpValueName,lpReserved,lpType,lpData,lpcbData);
  return LVar1;
}


