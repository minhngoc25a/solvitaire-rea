// Function: RegOpenKeyExA
// Entry: 0040ba00
// Size: 6 bytes
// Thunk: true
// External: false


LSTATUS RegOpenKeyExA(HKEY hKey,LPCSTR lpSubKey,DWORD ulOptions,REGSAM samDesired,PHKEY phkResult)

{
  LSTATUS LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040ba00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = RegOpenKeyExA(hKey,lpSubKey,ulOptions,samDesired,phkResult);
  return LVar1;
}


