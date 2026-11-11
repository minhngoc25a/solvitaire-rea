// Function: GetExitCodeProcess
// Entry: 0040b838
// Size: 6 bytes
// Thunk: true
// External: false


BOOL GetExitCodeProcess(HANDLE hProcess,LPDWORD lpExitCode)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040b838. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetExitCodeProcess(hProcess,lpExitCode);
  return BVar1;
}


