// Function: FUN_004b816a
// Entry: 004b816a
// Size: 83 bytes
// Thunk: false
// External: false


void FUN_004b816a(int param_1)

{
  undefined4 *puVar1;
  undefined4 *lpMem;
  
  if (*(undefined4 **)(param_1 + 0xc0) != (undefined4 *)0x0) {
    FUN_00478a3d(*(undefined4 **)(param_1 + 0xc0));
  }
  if (*(LPVOID *)(param_1 + 0xc4) != (LPVOID)0x0) {
    HeapFree(DAT_00542264,0,*(LPVOID *)(param_1 + 0xc4));
  }
  lpMem = *(undefined4 **)(param_1 + 0xbc);
  while (lpMem != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)*lpMem;
    HeapFree(DAT_00542264,0,lpMem);
    lpMem = puVar1;
  }
  return;
}


