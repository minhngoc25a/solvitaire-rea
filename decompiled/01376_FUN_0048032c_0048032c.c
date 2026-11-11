// Function: FUN_0048032c
// Entry: 0048032c
// Size: 48 bytes
// Thunk: false
// External: false


void FUN_0048032c(UINT param_1)

{
  char cVar1;
  HANDLE hProcess;
  UINT uExitCode;
  
  cVar1 = FUN_00480313();
  if (cVar1 != '\0') {
    uExitCode = param_1;
    hProcess = GetCurrentProcess();
    TerminateProcess(hProcess,uExitCode);
  }
  FUN_00480291(param_1);
                    /* WARNING: Subroutine does not return */
  ExitProcess(param_1);
}


