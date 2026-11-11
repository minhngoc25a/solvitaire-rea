// Function: FUN_0046d0c0
// Entry: 0046d0c0
// Size: 357 bytes
// Thunk: false
// External: false


void __cdecl FUN_0046d0c0(int param_1)

{
  int iVar1;
  int iVar2;
  
  FUN_004a48e0(param_1,*(LPVOID *)(param_1 + 0x18c));
  *(undefined4 *)(param_1 + 0x18c) = 0;
  if (*(int *)(param_1 + 400) != 0) {
    iVar2 = 0;
    iVar1 = 1 << (8U - (char)*(undefined4 *)(param_1 + 0x184) & 0x1f);
    if (0 < iVar1) {
      do {
        FUN_004a48e0(param_1,*(LPVOID *)(*(int *)(param_1 + 400) + iVar2 * 4));
        iVar2 = iVar2 + 1;
      } while (iVar2 < iVar1);
    }
    FUN_004a48e0(param_1,*(LPVOID *)(param_1 + 400));
    *(undefined4 *)(param_1 + 400) = 0;
  }
  FUN_004a48e0(param_1,*(LPVOID *)(param_1 + 0x194));
  *(undefined4 *)(param_1 + 0x194) = 0;
  FUN_004a48e0(param_1,*(LPVOID *)(param_1 + 0x198));
  *(undefined4 *)(param_1 + 0x198) = 0;
  if (*(int *)(param_1 + 0x19c) != 0) {
    iVar2 = 0;
    iVar1 = 1 << (8U - (char)*(undefined4 *)(param_1 + 0x184) & 0x1f);
    if (0 < iVar1) {
      do {
        FUN_004a48e0(param_1,*(LPVOID *)(*(int *)(param_1 + 0x19c) + iVar2 * 4));
        iVar2 = iVar2 + 1;
      } while (iVar2 < iVar1);
    }
    FUN_004a48e0(param_1,*(LPVOID *)(param_1 + 0x19c));
    *(undefined4 *)(param_1 + 0x19c) = 0;
  }
  if (*(int *)(param_1 + 0x1a0) != 0) {
    iVar2 = 0;
    iVar1 = 1 << (8U - (char)*(undefined4 *)(param_1 + 0x184) & 0x1f);
    if (0 < iVar1) {
      do {
        FUN_004a48e0(param_1,*(LPVOID *)(*(int *)(param_1 + 0x1a0) + iVar2 * 4));
        iVar2 = iVar2 + 1;
      } while (iVar2 < iVar1);
    }
    FUN_004a48e0(param_1,*(LPVOID *)(param_1 + 0x1a0));
    *(undefined4 *)(param_1 + 0x1a0) = 0;
  }
  return;
}


