// Function: FUN_004d0ea0
// Entry: 004d0ea0
// Size: 245 bytes
// Thunk: false
// External: false


ulonglong __cdecl FUN_004d0ea0(int param_1,uint *param_2,uint param_3,ushort param_4)

{
  undefined2 uVar1;
  byte bVar2;
  int iVar3;
  ushort uVar4;
  ulonglong uVar5;
  
  iVar3 = *(int *)(param_1 + 0x16bc);
  uVar4 = param_4 << ((byte)iVar3 & 0x1f) | *(ushort *)(param_1 + 0x16b8);
  if (iVar3 < 0xe) {
    *(int *)(param_1 + 0x16bc) = iVar3 + 3;
  }
  else {
    *(ushort *)(param_1 + 0x16b8) = uVar4;
    *(char *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0x14)) = (char)uVar4;
    iVar3 = *(int *)(param_1 + 0x14) + 1;
    *(int *)(param_1 + 0x14) = iVar3;
    *(undefined1 *)(iVar3 + *(int *)(param_1 + 8)) = *(undefined1 *)(param_1 + 0x16b9);
    uVar1 = *(undefined2 *)(param_1 + 0x16bc);
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    *(int *)(param_1 + 0x16bc) = *(int *)(param_1 + 0x16bc) + -0xd;
    uVar4 = param_4 >> (0x10U - (char)uVar1 & 0x1f);
  }
  *(ushort *)(param_1 + 0x16b8) = uVar4;
  FUN_004d2330(param_1);
  *(byte *)(*(int *)(param_1 + 0x14) + *(int *)(param_1 + 8)) = (byte)param_3;
  iVar3 = *(int *)(param_1 + 0x14) + 1;
  *(int *)(param_1 + 0x14) = iVar3;
  bVar2 = (byte)(param_3 >> 8);
  *(byte *)(iVar3 + *(int *)(param_1 + 8)) = bVar2;
  iVar3 = *(int *)(param_1 + 0x14) + 1;
  *(int *)(param_1 + 0x14) = iVar3;
  *(byte *)(iVar3 + *(int *)(param_1 + 8)) = ~(byte)param_3;
  uVar5 = CONCAT44(iVar3,*(int *)(param_1 + 8));
  iVar3 = *(int *)(param_1 + 0x14) + 1;
  *(int *)(param_1 + 0x14) = iVar3;
  *(byte *)(iVar3 + *(int *)(param_1 + 8)) = ~bVar2;
  iVar3 = *(int *)(param_1 + 0x14) + 1;
  *(int *)(param_1 + 0x14) = iVar3;
  if (param_3 != 0) {
    uVar5 = FUN_0044c490((uint *)(*(int *)(param_1 + 8) + iVar3),param_2,param_3);
  }
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + param_3;
  return uVar5;
}


