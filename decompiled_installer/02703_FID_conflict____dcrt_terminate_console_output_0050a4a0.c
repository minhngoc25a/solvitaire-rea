// Function: FID_conflict:___dcrt_terminate_console_output
// Entry: 0050a4a0
// Size: 23 bytes
// Thunk: false
// External: false


/* Library Function - Multiple Matches With Different Base Names
    ___dcrt_terminate_console_input
    ___dcrt_terminate_console_output
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

void FID_conflict____dcrt_terminate_console_output(void)

{
  if ((DAT_005421e0 != (HANDLE)0xffffffff) && (DAT_005421e0 != (HANDLE)0xfffffffe)) {
    CloseHandle(DAT_005421e0);
  }
  return;
}


