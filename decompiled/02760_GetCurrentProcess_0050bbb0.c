// Function: GetCurrentProcess
// Entry: 0050bbb0
// Size: 6 bytes
// Thunk: true
// External: false


HANDLE GetCurrentProcess(void)

{
  HANDLE pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0050bbb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = GetCurrentProcess();
  return pvVar1;
}


