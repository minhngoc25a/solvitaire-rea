// Function: FUN_00478d1a
// Entry: 00478d1a
// Size: 110 bytes
// Thunk: false
// External: false


void FUN_00478d1a(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  if (param_1[7] != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  }
  puVar2 = (undefined4 *)param_1[1];
  while (puVar2 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)*puVar2;
    HeapFree(DAT_00542264,0,puVar2);
    puVar2 = puVar1;
  }
  puVar2 = (undefined4 *)*param_1;
  while (puVar2 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)*puVar2;
    HeapFree(DAT_00542264,0,puVar2);
    puVar2 = puVar1;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[3] = 0;
  if (param_1[7] != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  }
  return;
}


