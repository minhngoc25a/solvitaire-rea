// Function: ___vcrt_InitializeCriticalSectionEx
// Entry: 005079cc
// Size: 71 bytes
// Thunk: false
// External: false


/* Library Function - Single Match
    ___vcrt_InitializeCriticalSectionEx
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl
___vcrt_InitializeCriticalSectionEx(LPCRITICAL_SECTION param_1,DWORD param_2,undefined4 param_3)

{
  FARPROC pFVar1;
  
  pFVar1 = FUN_00507a5e(4,"InitializeCriticalSectionEx",(int *)&DAT_005227e0,(int *)&DAT_005227e8);
  if (pFVar1 == (FARPROC)0x0) {
    InitializeCriticalSectionAndSpinCount(param_1,param_2);
  }
  else {
    (*(code *)PTR_guard_check_icall_00532084)(param_1,param_2,param_3);
    (*pFVar1)();
  }
  return;
}


