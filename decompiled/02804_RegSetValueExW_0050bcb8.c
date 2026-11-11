// Function: RegSetValueExW
// Entry: 0050bcb8
// Size: 6 bytes
// Thunk: true
// External: false


LSTATUS RegSetValueExW(HKEY hKey,LPCWSTR lpValueName,DWORD Reserved,DWORD dwType,BYTE *lpData,
                      DWORD cbData)

{
  LSTATUS LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0050bcb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = RegSetValueExW(hKey,lpValueName,Reserved,dwType,lpData,cbData);
  return LVar1;
}


