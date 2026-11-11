// Function: FUN_00469628
// Entry: 00469628
// Size: 76 bytes
// Thunk: false
// External: false


void __cdecl FUN_00469628(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0xc) != 0) {
    iVar1 = 0;
    if (0 < *(int *)(param_1 + 0x14)) {
      iVar2 = 0;
      do {
        HeapFree(DAT_00542264,0,*(LPVOID *)(*(int *)(param_1 + 0xc) + iVar2));
        iVar1 = iVar1 + 1;
        iVar2 = iVar2 + 4;
      } while (iVar1 < *(int *)(param_1 + 0x14));
    }
    HeapFree(DAT_00542264,0,*(LPVOID *)(param_1 + 0xc));
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  return;
}


