// Function: FUN_00478a3d
// Entry: 00478a3d
// Size: 156 bytes
// Thunk: false
// External: false


void FUN_00478a3d(undefined4 *param_1)

{
  int *lpMem;
  
  lpMem = (int *)param_1[2];
  if (lpMem == (int *)0x0) {
    FUN_00478d1a(param_1);
    if (param_1[7] != 0) {
      DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
    }
    HeapFree(DAT_00542264,0,param_1);
  }
  else {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_005439fc);
    *(int *)(param_1[2] + 0x14) = *(int *)(param_1[2] + 0x14) + -1;
    if (*(int *)(param_1[2] + 0x14) < 1) {
      param_1[2] = 0;
      FUN_00478a3d(param_1);
      if (*lpMem != 0) {
        *(int *)(*lpMem + 4) = lpMem[1];
      }
      if ((int *)lpMem[1] != (int *)0x0) {
        *(int *)lpMem[1] = *lpMem;
      }
      if (DAT_005439f8 == lpMem) {
        DAT_005439f8 = (int *)*lpMem;
      }
      HeapFree(DAT_00542264,0,lpMem);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_005439fc);
  }
  return;
}


