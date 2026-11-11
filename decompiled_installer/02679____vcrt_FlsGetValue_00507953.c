// Function: ___vcrt_FlsGetValue
// Entry: 00507953
// Size: 59 bytes
// Thunk: false
// External: false


/* Library Function - Single Match
    ___vcrt_FlsGetValue
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl ___vcrt_FlsGetValue(DWORD param_1)

{
  FARPROC pFVar1;
  
  pFVar1 = FUN_00507a5e(2,"FlsGetValue",(int *)&DAT_005227d0,(int *)&DAT_005227d8);
  if (pFVar1 == (FARPROC)0x0) {
    TlsGetValue(param_1);
  }
  else {
    (*(code *)PTR_guard_check_icall_00532084)();
    (*pFVar1)();
  }
  return;
}


