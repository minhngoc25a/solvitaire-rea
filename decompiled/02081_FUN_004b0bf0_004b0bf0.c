// Function: FUN_004b0bf0
// Entry: 004b0bf0
// Size: 129 bytes
// Thunk: false
// External: false


undefined4 __cdecl FUN_004b0bf0(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  
  iVar2 = *(int *)(param_1 + 0x1b0);
  piVar1 = (int *)(*(int *)(param_1 + 0x1ac) + 0x14);
  *piVar1 = *piVar1 + ((int)(*(int *)(iVar2 + 0x10) + (*(int *)(iVar2 + 0x10) >> 0x1f & 7U)) >> 3);
  *(undefined4 *)(iVar2 + 0x10) = 0;
  uVar3 = (**(code **)(*(int *)(param_1 + 0x1ac) + 8))(param_1);
  if ((char)uVar3 == '\0') {
    return uVar3;
  }
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0x130)) {
    puVar5 = (undefined4 *)(iVar2 + 0x18);
    do {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(param_1 + 0x130));
  }
  *(undefined4 *)(iVar2 + 0x14) = 0;
  uVar3 = *(undefined4 *)(param_1 + 0xfc);
  *(undefined4 *)(iVar2 + 0x2c) = uVar3;
  if (*(int *)(param_1 + 0x194) == 0) {
    *(undefined1 *)(iVar2 + 0x28) = 0;
  }
  return CONCAT31((int3)((uint)uVar3 >> 8),1);
}


