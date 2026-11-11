// Function: FUN_00489400
// Entry: 00489400
// Size: 94 bytes
// Thunk: false
// External: false


int __cdecl FUN_00489400(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  if (*(int *)(param_1 + 0x88) != 0) {
    uVar2 = 0;
    if (*(int *)(param_1 + 0x90) != 0) {
      iVar3 = 0;
      do {
        iVar1 = (**(code **)(param_1 + 0x88))
                          (param_1,*(undefined4 *)(*(int *)(param_1 + 0xa0) + 0x10 + iVar3));
        iVar3 = iVar3 + 0x18;
        if (iVar1 < iVar4) {
          iVar4 = iVar1;
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < *(uint *)(param_1 + 0x90));
    }
    return iVar4;
  }
  return 0;
}


