// Function: GetLastError
// Entry: 0040b860
// Size: 6 bytes
// Thunk: true
// External: false


DWORD GetLastError(void)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040b860. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetLastError();
  return DVar1;
}


