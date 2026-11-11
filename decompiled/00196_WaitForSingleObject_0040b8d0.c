// Function: WaitForSingleObject
// Entry: 0040b8d0
// Size: 6 bytes
// Thunk: true
// External: false


DWORD WaitForSingleObject(HANDLE hHandle,DWORD dwMilliseconds)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040b8d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = WaitForSingleObject(hHandle,dwMilliseconds);
  return DVar1;
}


