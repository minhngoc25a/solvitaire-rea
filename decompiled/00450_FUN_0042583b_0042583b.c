// Function: FUN_0042583b
// Entry: 0042583b
// Size: 149 bytes
// Thunk: false
// External: false


int * FUN_0042583b(SIZE_T *param_1,int param_2)

{
  SIZE_T *pSVar1;
  int *piVar2;
  LPVOID pvVar3;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  if (param_2 == -1) {
    piVar2 = FUN_004257cc((int *)(param_1 + 4),*param_1 + 8);
  }
  else {
    pSVar1 = param_1 + 3;
    if ((int)param_1[2] <= param_2) {
      param_1[2] = param_1[1] + param_2;
      pvVar3 = HeapReAlloc(DAT_00542264,8,(LPVOID)*pSVar1,(param_1[1] + param_2) * 4);
      *pSVar1 = (SIZE_T)pvVar3;
    }
    if (*(int *)(*pSVar1 + param_2 * 4) == 0) {
      pvVar3 = HeapAlloc(DAT_00542264,8,*param_1);
      *(LPVOID *)(*pSVar1 + param_2 * 4) = pvVar3;
    }
    else if ((code *)param_1[5] != (code *)0x0) {
      (*(code *)param_1[5])(param_2);
    }
    piVar2 = *(int **)(*pSVar1 + param_2 * 4);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  return piVar2;
}


