// Function: FUN_004357d0
// Entry: 004357d0
// Size: 439 bytes
// Thunk: false
// External: false


int __cdecl
FUN_004357d0(undefined4 *param_1,undefined4 param_2,SIZE_T param_3,int param_4,int param_5,
            int *param_6)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  int *lpParameter;
  HANDLE hThread;
  DWORD DVar6;
  int iVar7;
  
  piVar5 = param_6;
  iVar7 = param_4;
  puVar4 = param_1;
  if ((param_1 == (undefined4 *)0x0) || (param_4 == 0)) {
    return -2;
  }
  if (param_6 == (int *)0x0) {
    lpParameter = (int *)FUN_00482949(0x18);
  }
  else {
    if ((code *)param_6[1] == (code *)0x0) {
      return -4;
    }
    lpParameter = (int *)(*(code *)param_6[1])(0x18,*param_6);
  }
  if (lpParameter == (int *)0x0) {
    return -4;
  }
  lpParameter[1] = param_5;
  piVar1 = lpParameter + 2;
  *lpParameter = iVar7;
  if (piVar1 == (int *)0x0) goto LAB_00435880;
  if (piVar5 == (int *)0x0) {
LAB_00435865:
    *piVar1 = 0;
    lpParameter[3] = (int)FUN_00435570;
    lpParameter[4] = (int)&LAB_00435580;
    lpParameter[5] = (int)FUN_004355a0;
    goto LAB_00435880;
  }
  if (*piVar5 == 0) {
    if (piVar5[3] == 0) {
      if ((piVar5[1] == 0) && (piVar5[2] == 0)) goto LAB_00435865;
      goto LAB_0043584b;
    }
  }
  else {
LAB_0043584b:
    if (piVar5[3] == 0) goto LAB_00435880;
  }
  if ((piVar5[1] != 0) || (piVar5[2] != 0)) {
    iVar7 = piVar5[1];
    iVar2 = piVar5[2];
    iVar3 = piVar5[3];
    *piVar1 = *piVar5;
    lpParameter[3] = iVar7;
    lpParameter[4] = iVar2;
    lpParameter[5] = iVar3;
  }
LAB_00435880:
  hThread = CreateThread((LPSECURITY_ATTRIBUTES)0x0,param_3,(LPTHREAD_START_ROUTINE)&LAB_00435790,
                         lpParameter,0,(LPDWORD)&param_1);
  *puVar4 = hThread;
  if (hThread == (HANDLE)0x0) {
    DVar6 = GetLastError();
    iVar7 = FUN_00435680(DVar6);
    if (iVar7 != 0) {
      if (piVar5 == (int *)0x0) {
        FUN_0047d191(lpParameter);
      }
      else if ((code *)piVar5[3] != (code *)0x0) {
        (*(code *)piVar5[3])(lpParameter,*piVar5);
        return iVar7;
      }
      return iVar7;
    }
  }
  else {
    switch(param_2) {
    case 0:
      SetThreadPriority(hThread,2);
      return 0;
    case 1:
      SetThreadPriority(hThread,0xf);
      return 0;
    case 0xfffffffb:
      SetThreadPriority(hThread,-0xf);
      return 0;
    case 0xfffffffc:
      SetThreadPriority(hThread,-2);
      return 0;
    case 0xfffffffd:
      SetThreadPriority(hThread,-1);
      return 0;
    default:
      SetThreadPriority(hThread,0);
      break;
    case 0xffffffff:
      SetThreadPriority(hThread,1);
      return 0;
    }
  }
  return 0;
}


