// Function: ___vcrt_FlsFree
// Entry: 00507918
// Size: 59 bytes
// Thunk: false
// External: false


/* Library Function - Single Match
    ___vcrt_FlsFree
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl ___vcrt_FlsFree(DWORD param_1)

{
  FARPROC pFVar1;
  
  pFVar1 = FUN_00507a5e(1,"FlsFree",(int *)&DAT_005227c8,(int *)&DAT_005227d0);
  if (pFVar1 == (FARPROC)0x0) {
    TlsFree(param_1);
  }
  else {
    (*(code *)PTR_guard_check_icall_00532084)();
    (*pFVar1)();
  }
  return;
}


