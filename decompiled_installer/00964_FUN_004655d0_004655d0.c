// Function: FUN_004655d0
// Entry: 004655d0
// Size: 177 bytes
// Thunk: false
// External: false


undefined4 __cdecl FUN_004655d0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  longlong lVar5;
  
  iVar1 = **(int **)(param_1 + 0x440);
  if (*(int *)(iVar1 + 0xd4) == 0) {
    FUN_00487380(param_1,0xffffffff,0x526a40);
    return 0xffffffe2;
  }
  iVar2 = *(int *)(iVar1 + 0xd0);
  uVar3 = *(undefined4 *)(*(int *)(iVar1 + 0x10) + iVar2 * 8);
  *(undefined4 *)(iVar1 + 0xdc) = *(undefined4 *)(*(int *)(iVar1 + 0x10) + 4 + iVar2 * 8);
  *(undefined4 *)(iVar1 + 0xd8) = uVar3;
  uVar4 = *(uint *)(*(int *)(iVar1 + 0x1c) + iVar2 * 8);
  iVar2 = *(int *)(*(int *)(iVar1 + 0x1c) + 4 + iVar2 * 8);
  if ((*(uint *)(iVar1 + 0xb8) != uVar4) || (*(int *)(iVar1 + 0xbc) != iVar2)) {
    lVar5 = FUN_00488a00(param_1,uVar4 + *(uint *)(iVar1 + 0x68),
                         *(int *)(iVar1 + 0x6c) + iVar2 +
                         (uint)CARRY4(uVar4,*(uint *)(iVar1 + 0x68)),0);
    if (((int)((ulonglong)lVar5 >> 0x20) == 0 || lVar5 < 0) && (lVar5 < 0)) {
      return 0xffffffe2;
    }
    *(uint *)(iVar1 + 0xb8) = uVar4;
    *(int *)(iVar1 + 0xbc) = iVar2;
  }
  *(int *)(iVar1 + 0xd0) = *(int *)(iVar1 + 0xd0) + 1;
  *(int *)(iVar1 + 0xd4) = *(int *)(iVar1 + 0xd4) + -1;
  return 0;
}


