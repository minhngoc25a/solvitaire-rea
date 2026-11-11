// Function: FUN_00478c4a
// Entry: 00478c4a
// Size: 208 bytes
// Thunk: false
// External: false


void FUN_00478c4a(int *param_1,int param_2)

{
  int *lpMem;
  int iVar1;
  int *piVar2;
  
  if (param_1[7] != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  }
  piVar2 = (int *)(param_2 + -4);
  lpMem = (int *)*piVar2;
  *piVar2 = lpMem[2];
  iVar1 = lpMem[5] + 1;
  lpMem[2] = (int)piVar2;
  lpMem[5] = iVar1;
  if (iVar1 != lpMem[4]) {
    if ((iVar1 == 1) && (lpMem[3] <= lpMem[4])) {
      if (*lpMem != 0) {
        *(int *)(*lpMem + 4) = lpMem[1];
      }
      if (lpMem == (int *)*param_1) {
        *param_1 = *lpMem;
      }
      else {
        *(int *)lpMem[1] = *lpMem;
      }
      *lpMem = param_1[1];
      lpMem[1] = 0;
      param_1[1] = (int)lpMem;
      if (*lpMem != 0) {
        *(int **)(*lpMem + 4) = lpMem;
      }
    }
    goto LAB_00478d06;
  }
  iVar1 = *lpMem;
  if (lpMem[3] == 1) {
    if (iVar1 != 0) {
      *(int *)(iVar1 + 4) = lpMem[1];
    }
    iVar1 = *lpMem;
    if (lpMem == (int *)*param_1) {
      *param_1 = iVar1;
    }
    else {
LAB_00478cb2:
      *(int *)lpMem[1] = iVar1;
    }
  }
  else {
    if (iVar1 != 0) {
      *(int *)(iVar1 + 4) = lpMem[1];
    }
    iVar1 = *lpMem;
    if (lpMem != (int *)param_1[1]) goto LAB_00478cb2;
    param_1[1] = iVar1;
  }
  param_1[3] = param_1[3] - lpMem[3];
  HeapFree(DAT_00542264,0,lpMem);
LAB_00478d06:
  if (param_1[7] != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  }
  return;
}


