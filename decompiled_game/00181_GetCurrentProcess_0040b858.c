// Function: GetCurrentProcess
// Entry: 0040b858
// Size: 6 bytes
// Thunk: true
// External: false


HANDLE GetCurrentProcess(void)

{
  HANDLE pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040b858. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = GetCurrentProcess();
  return pvVar1;
}


