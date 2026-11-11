// Function: ___vcrt_FlsAlloc
// Entry: 005078dd
// Size: 59 bytes
// Thunk: false
// External: false


/* Library Function - Single Match
    ___vcrt_FlsAlloc
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl ___vcrt_FlsAlloc(undefined4 param_1)

{
  FARPROC pFVar1;
  
  pFVar1 = FUN_00507a5e(0,"FlsAlloc",(int *)&DAT_005227c0,(int *)&DAT_005227c8);
  if (pFVar1 != (FARPROC)0x0) {
    (*(code *)PTR_guard_check_icall_00532084)(param_1);
    (*pFVar1)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00507912. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  TlsAlloc();
  return;
}


