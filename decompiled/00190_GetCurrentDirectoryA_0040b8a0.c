// Function: GetCurrentDirectoryA
// Entry: 0040b8a0
// Size: 6 bytes
// Thunk: true
// External: false


DWORD GetCurrentDirectoryA(DWORD nBufferLength,LPSTR lpBuffer)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040b8a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetCurrentDirectoryA(nBufferLength,lpBuffer);
  return DVar1;
}


