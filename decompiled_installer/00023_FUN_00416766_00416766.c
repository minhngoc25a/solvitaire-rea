// Function: FUN_00416766
// Entry: 00416766
// Size: 163 bytes
// Thunk: false
// External: false


int FUN_00416766(LPTHREAD_START_ROUTINE param_1,LPVOID param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  HANDLE pvVar3;
  DWORD DVar4;
  int *piVar5;
  int iVar6;
  DWORD local_4;
  
  iVar6 = 0;
  pvVar3 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0x1000,param_1,param_2,0,&local_4);
  if (pvVar3 != (HANDLE)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00542480);
    iVar6 = DAT_0053fb80;
    puVar2 = DAT_00542470;
    while (puVar2 != (undefined4 *)0x0) {
      puVar1 = puVar2 + 2;
      DAT_0053fb80 = iVar6;
      DVar4 = WaitForSingleObject((HANDLE)*puVar1,0);
      if (DVar4 == 0) {
        CloseHandle((HANDLE)*puVar1);
        puVar2 = (undefined4 *)*puVar2;
        FUN_004257fb((int *)&DAT_00542470,(int)puVar1);
        iVar6 = DAT_0053fb80;
      }
      else {
        puVar2 = (undefined4 *)*puVar2;
        iVar6 = DAT_0053fb80;
      }
    }
    DAT_0053fb80 = iVar6 + 1;
    piVar5 = FUN_004257cc((int *)&DAT_00542470,0x10);
    *piVar5 = (int)pvVar3;
    piVar5[1] = iVar6;
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00542480);
  }
  return iVar6;
}


