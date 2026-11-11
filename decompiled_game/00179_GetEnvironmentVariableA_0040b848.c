// Function: GetEnvironmentVariableA
// Entry: 0040b848
// Size: 6 bytes
// Thunk: true
// External: false


DWORD GetEnvironmentVariableA(LPCSTR lpName,LPSTR lpBuffer,DWORD nSize)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040b848. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetEnvironmentVariableA(lpName,lpBuffer,nSize);
  return DVar1;
}


