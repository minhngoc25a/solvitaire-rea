// Function: FUN_00416815
// Entry: 00416815
// Size: 66 bytes
// Thunk: false
// External: false


void FUN_00416815(void)

{
  undefined4 *puVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00542480);
  while (DAT_00542470 != 0) {
    puVar1 = (undefined4 *)(DAT_00542470 + 8);
    CloseHandle((HANDLE)*puVar1);
    FUN_004257fb(&DAT_00542470,(int)puVar1);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00542480);
  return;
}


