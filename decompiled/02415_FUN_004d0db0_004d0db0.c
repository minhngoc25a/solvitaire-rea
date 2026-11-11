// Function: FUN_004d0db0
// Entry: 004d0db0
// Size: 228 bytes
// Thunk: false
// External: false


void __cdecl FUN_004d0db0(int param_1)

{
  undefined2 uVar1;
  int iVar2;
  ushort uVar3;
  
  iVar2 = *(int *)(param_1 + 0x16bc);
  uVar3 = 2 << ((byte)iVar2 & 0x1f) | *(ushort *)(param_1 + 0x16b8);
  if (iVar2 < 0xe) {
    iVar2 = iVar2 + 3;
    *(int *)(param_1 + 0x16bc) = iVar2;
  }
  else {
    *(ushort *)(param_1 + 0x16b8) = uVar3;
    *(char *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0x14)) = (char)uVar3;
    iVar2 = *(int *)(param_1 + 0x14) + 1;
    *(int *)(param_1 + 0x14) = iVar2;
    *(undefined1 *)(iVar2 + *(int *)(param_1 + 8)) = *(undefined1 *)(param_1 + 0x16b9);
    uVar1 = *(undefined2 *)(param_1 + 0x16bc);
    *(int *)(param_1 + 0x16bc) = *(int *)(param_1 + 0x16bc) + -0xd;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    iVar2 = *(int *)(param_1 + 0x16bc);
    uVar3 = 2 >> (0x10U - (char)uVar1 & 0x1f);
  }
  if (9 < iVar2) {
    *(ushort *)(param_1 + 0x16b8) = uVar3;
    *(char *)(*(int *)(param_1 + 0x14) + *(int *)(param_1 + 8)) = (char)uVar3;
    iVar2 = *(int *)(param_1 + 0x14) + 1;
    *(int *)(param_1 + 0x14) = iVar2;
    *(undefined1 *)(iVar2 + *(int *)(param_1 + 8)) = *(undefined1 *)(param_1 + 0x16b9);
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    *(int *)(param_1 + 0x16bc) = *(int *)(param_1 + 0x16bc) + -9;
    *(undefined2 *)(param_1 + 0x16b8) = 0;
    FUN_004d2390(param_1);
    return;
  }
  *(int *)(param_1 + 0x16bc) = iVar2 + 7;
  *(ushort *)(param_1 + 0x16b8) = uVar3;
  FUN_004d2390(param_1);
  return;
}


