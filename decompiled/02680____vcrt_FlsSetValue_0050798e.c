// Function: ___vcrt_FlsSetValue
// Entry: 0050798e
// Size: 62 bytes
// Thunk: false
// External: false


/* Library Function - Single Match
    ___vcrt_FlsSetValue
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl ___vcrt_FlsSetValue(DWORD param_1,LPVOID param_2)

{
  FARPROC pFVar1;
  
  pFVar1 = FUN_00507a5e(3,"FlsSetValue",(int *)&DAT_005227d8,(int *)&DAT_005227e0);
  if (pFVar1 == (FARPROC)0x0) {
    TlsSetValue(param_1,param_2);
  }
  else {
    (*(code *)PTR_guard_check_icall_00532084)();
    (*pFVar1)();
  }
  return;
}


