// Function: ___vcrt_getptd_noexit
// Entry: 004ff4cb
// Size: 146 bytes
// Thunk: false
// External: false


/* Library Function - Single Match
    ___vcrt_getptd_noexit
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

LPVOID ___vcrt_getptd_noexit(void)

{
  DWORD dwErrCode;
  LPVOID pvVar1;
  int iVar2;
  LPVOID pvVar3;
  LPVOID pvVar4;
  
  if (DAT_00541fe0 == 0xffffffff) {
    return (LPVOID)0x0;
  }
  dwErrCode = GetLastError();
  pvVar1 = (LPVOID)___vcrt_FlsGetValue(DAT_00541fe0);
  if (pvVar1 == (LPVOID)0xffffffff) {
LAB_004ff50b:
    pvVar1 = (LPVOID)0x0;
    goto LAB_004ff551;
  }
  if (pvVar1 != (LPVOID)0x0) goto LAB_004ff551;
  iVar2 = ___vcrt_FlsSetValue(DAT_00541fe0,(LPVOID)0xffffffff);
  if (iVar2 == 0) goto LAB_004ff50b;
  pvVar3 = (LPVOID)FUN_0047f911(1,0x28);
  if (pvVar3 == (LPVOID)0x0) {
LAB_004ff533:
    ___vcrt_FlsSetValue(DAT_00541fe0,(LPVOID)0x0);
    pvVar1 = (LPVOID)0x0;
    pvVar4 = pvVar3;
  }
  else {
    iVar2 = ___vcrt_FlsSetValue(DAT_00541fe0,pvVar3);
    if (iVar2 == 0) goto LAB_004ff533;
    pvVar4 = (LPVOID)0x0;
    pvVar1 = pvVar3;
  }
  FUN_0047d191(pvVar4);
LAB_004ff551:
  SetLastError(dwErrCode);
  return pvVar1;
}


