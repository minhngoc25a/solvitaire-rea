// Function: RegEnumKeyExA
// Entry: 0040ba18
// Size: 6 bytes
// Thunk: true
// External: false


LSTATUS RegEnumKeyExA(HKEY hKey,DWORD dwIndex,LPSTR lpName,LPDWORD lpcchName,LPDWORD lpReserved,
                     LPSTR lpClass,LPDWORD lpcchClass,PFILETIME lpftLastWriteTime)

{
  LSTATUS LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040ba18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = RegEnumKeyExA(hKey,dwIndex,lpName,lpcchName,lpReserved,lpClass,lpcchClass,
                        lpftLastWriteTime);
  return LVar1;
}


