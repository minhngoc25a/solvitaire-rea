// Function: RegOpenKeyExW
// Entry: 0050bcac
// Size: 6 bytes
// Thunk: true
// External: false


LSTATUS RegOpenKeyExW(HKEY hKey,LPCWSTR lpSubKey,DWORD ulOptions,REGSAM samDesired,PHKEY phkResult)

{
  LSTATUS LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0050bcac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = RegOpenKeyExW(hKey,lpSubKey,ulOptions,samDesired,phkResult);
  return LVar1;
}


