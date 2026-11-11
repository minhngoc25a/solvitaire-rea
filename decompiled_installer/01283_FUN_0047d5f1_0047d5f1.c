// Function: FUN_0047d5f1
// Entry: 0047d5f1
// Size: 126 bytes
// Thunk: false
// External: false


void __cdecl FUN_0047d5f1(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *lpMem;
  
  UnregisterWait((HANDLE)param_1[3]);
  CloseHandle((HANDLE)param_1[4]);
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_005441cc);
  iVar2 = param_1[1];
  if (*param_1 != 0) {
    *(int *)(*param_1 + 4) = param_1[1];
    iVar2 = DAT_005441c8;
  }
  DAT_005441c8 = iVar2;
  if ((int *)param_1[1] != (int *)0x0) {
    *(int *)param_1[1] = *param_1;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_005441cc);
  lpMem = (undefined4 *)param_1[2];
  while (lpMem != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)*lpMem;
    (*(code *)lpMem[1])(lpMem[2]);
    HeapFree(DAT_00542264,0,lpMem);
    lpMem = puVar1;
  }
  HeapFree(DAT_00542264,0,param_1);
  return;
}


