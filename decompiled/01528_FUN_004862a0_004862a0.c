// Function: FUN_004862a0
// Entry: 004862a0
// Size: 252 bytes
// Thunk: false
// External: false


void __cdecl FUN_004862a0(int param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x38);
  bVar1 = *(byte *)(param_1 + 0x34);
  if (0 < iVar3) {
    uVar2 = *(uint *)(param_1 + 0x260);
    do {
      uVar2 = uVar2 << 8 ^ *(uint *)(&DAT_00541bd0 + (uVar2 >> 0x18 ^ (uint)bVar1) * 4);
      *(uint *)(param_1 + 0x260) = uVar2;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  *(undefined1 *)(*(int *)(param_1 + 0x34) + 0x58 + param_1) = 1;
  iVar3 = *(int *)(param_1 + 0x38);
  if (iVar3 == 1) {
    *(byte *)(*(int *)(param_1 + 0x44) + *(int *)(param_1 + 0x24)) = bVar1;
    *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + 1;
    return;
  }
  if (iVar3 == 2) {
    *(byte *)(*(int *)(param_1 + 0x44) + *(int *)(param_1 + 0x24)) = bVar1;
    iVar3 = *(int *)(param_1 + 0x44) + 1;
    *(int *)(param_1 + 0x44) = iVar3;
    *(byte *)(iVar3 + *(int *)(param_1 + 0x24)) = bVar1;
    *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + 1;
    return;
  }
  if (iVar3 == 3) {
    *(byte *)(*(int *)(param_1 + 0x44) + *(int *)(param_1 + 0x24)) = bVar1;
    iVar3 = *(int *)(param_1 + 0x44) + 1;
    *(int *)(param_1 + 0x44) = iVar3;
    *(byte *)(iVar3 + *(int *)(param_1 + 0x24)) = bVar1;
    iVar3 = *(int *)(param_1 + 0x44) + 1;
    *(int *)(param_1 + 0x44) = iVar3;
    *(byte *)(iVar3 + *(int *)(param_1 + 0x24)) = bVar1;
    *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + 1;
    return;
  }
  *(undefined1 *)(iVar3 + 0x54 + param_1) = 1;
  *(byte *)(*(int *)(param_1 + 0x44) + *(int *)(param_1 + 0x24)) = bVar1;
  iVar3 = *(int *)(param_1 + 0x44) + 1;
  *(int *)(param_1 + 0x44) = iVar3;
  *(byte *)(iVar3 + *(int *)(param_1 + 0x24)) = bVar1;
  *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + 1;
  *(byte *)(*(int *)(param_1 + 0x44) + *(int *)(param_1 + 0x24)) = bVar1;
  *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + 1;
  *(byte *)(*(int *)(param_1 + 0x44) + *(int *)(param_1 + 0x24)) = bVar1;
  *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + 1;
  *(char *)(*(int *)(param_1 + 0x44) + *(int *)(param_1 + 0x24)) = *(char *)(param_1 + 0x38) + -4;
  *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + 1;
  return;
}


