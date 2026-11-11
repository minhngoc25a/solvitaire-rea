// Function: RegCreateKeyExW
// Entry: 0050bca6
// Size: 6 bytes
// Thunk: true
// External: false


LSTATUS RegCreateKeyExW(HKEY hKey,LPCWSTR lpSubKey,DWORD Reserved,LPWSTR lpClass,DWORD dwOptions,
                       REGSAM samDesired,LPSECURITY_ATTRIBUTES lpSecurityAttributes,PHKEY phkResult,
                       LPDWORD lpdwDisposition)

{
  LSTATUS LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0050bca6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = RegCreateKeyExW(hKey,lpSubKey,Reserved,lpClass,dwOptions,samDesired,lpSecurityAttributes,
                          phkResult,lpdwDisposition);
  return LVar1;
}


