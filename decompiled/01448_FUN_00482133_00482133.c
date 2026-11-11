// Function: FUN_00482133
// Entry: 00482133
// Size: 40 bytes
// Thunk: false
// External: false


void __cdecl FUN_00482133(_EXCEPTION_POINTERS *param_1)

{
  HANDLE hProcess;
  UINT uExitCode;
  
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  UnhandledExceptionFilter(param_1);
  uExitCode = 0xc0000409;
  hProcess = GetCurrentProcess();
  TerminateProcess(hProcess,uExitCode);
  return;
}


