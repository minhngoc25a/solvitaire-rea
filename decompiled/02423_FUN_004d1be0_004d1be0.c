// Function: FUN_004d1be0
// Entry: 004d1be0
// Size: 599 bytes
// Thunk: false
// External: false


void __cdecl FUN_004d1be0(int param_1,int param_2,int param_3,int param_4)

{
  undefined2 uVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  ushort uVar5;
  ushort uVar6;
  
  uVar5 = (short)param_2 - 0x101;
  iVar3 = *(int *)(param_1 + 0x16bc);
  uVar6 = uVar5 << ((byte)iVar3 & 0x1f) | *(ushort *)(param_1 + 0x16b8);
  if (iVar3 < 0xc) {
    iVar3 = iVar3 + 5;
    *(int *)(param_1 + 0x16bc) = iVar3;
  }
  else {
    *(ushort *)(param_1 + 0x16b8) = uVar6;
    *(char *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0x14)) = (char)uVar6;
    iVar3 = *(int *)(param_1 + 0x14) + 1;
    *(int *)(param_1 + 0x14) = iVar3;
    *(undefined1 *)(iVar3 + *(int *)(param_1 + 8)) = *(undefined1 *)(param_1 + 0x16b9);
    uVar1 = *(undefined2 *)(param_1 + 0x16bc);
    *(int *)(param_1 + 0x16bc) = *(int *)(param_1 + 0x16bc) + -0xb;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    iVar3 = *(int *)(param_1 + 0x16bc);
    uVar6 = uVar5 >> (0x10U - (char)uVar1 & 0x1f);
  }
  if (iVar3 < 0xc) {
    iVar4 = iVar3 + 5;
    *(int *)(param_1 + 0x16bc) = iVar4;
    uVar5 = (short)param_3 + -1 << ((byte)iVar3 & 0x1f) | uVar6;
  }
  else {
    uVar5 = (ushort)(param_3 + -1);
    uVar6 = uVar5 << ((byte)iVar3 & 0x1f) | uVar6;
    *(ushort *)(param_1 + 0x16b8) = uVar6;
    *(char *)(*(int *)(param_1 + 0x14) + *(int *)(param_1 + 8)) = (char)uVar6;
    iVar3 = *(int *)(param_1 + 0x14) + 1;
    *(int *)(param_1 + 0x14) = iVar3;
    *(undefined1 *)(iVar3 + *(int *)(param_1 + 8)) = *(undefined1 *)(param_1 + 0x16b9);
    uVar1 = *(undefined2 *)(param_1 + 0x16bc);
    *(int *)(param_1 + 0x16bc) = *(int *)(param_1 + 0x16bc) + -0xb;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    iVar4 = *(int *)(param_1 + 0x16bc);
    uVar5 = uVar5 >> (0x10U - (char)uVar1 & 0x1f);
  }
  uVar6 = (short)param_4 - 4;
  uVar5 = uVar6 << ((byte)iVar4 & 0x1f) | uVar5;
  if (iVar4 < 0xd) {
    iVar4 = iVar4 + 4;
    *(int *)(param_1 + 0x16bc) = iVar4;
  }
  else {
    *(ushort *)(param_1 + 0x16b8) = uVar5;
    *(char *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0x14)) = (char)uVar5;
    iVar3 = *(int *)(param_1 + 0x14) + 1;
    *(int *)(param_1 + 0x14) = iVar3;
    *(undefined1 *)(iVar3 + *(int *)(param_1 + 8)) = *(undefined1 *)(param_1 + 0x16b9);
    uVar1 = *(undefined2 *)(param_1 + 0x16bc);
    *(int *)(param_1 + 0x16bc) = *(int *)(param_1 + 0x16bc) + -0xc;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    iVar4 = *(int *)(param_1 + 0x16bc);
    uVar5 = uVar6 >> (0x10U - (char)uVar1 & 0x1f);
  }
  iVar3 = 0;
  *(ushort *)(param_1 + 0x16b8) = uVar5;
  if (0 < param_4) {
    do {
      bVar2 = (byte)iVar4;
      if (iVar4 < 0xe) {
        iVar4 = iVar4 + 3;
        uVar5 = *(short *)(param_1 + 0xa7e + (uint)(byte)(&DAT_00520c54)[iVar3] * 4) <<
                (bVar2 & 0x1f) | uVar5;
        *(int *)(param_1 + 0x16bc) = iVar4;
      }
      else {
        uVar6 = *(ushort *)(param_1 + 0xa7e + (uint)(byte)(&DAT_00520c54)[iVar3] * 4);
        uVar5 = uVar6 << (bVar2 & 0x1f) | uVar5;
        *(ushort *)(param_1 + 0x16b8) = uVar5;
        *(char *)(*(int *)(param_1 + 0x14) + *(int *)(param_1 + 8)) = (char)uVar5;
        *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
        *(undefined1 *)(*(int *)(param_1 + 0x14) + *(int *)(param_1 + 8)) =
             *(undefined1 *)(param_1 + 0x16b9);
        uVar1 = *(undefined2 *)(param_1 + 0x16bc);
        *(int *)(param_1 + 0x16bc) = *(int *)(param_1 + 0x16bc) + -0xd;
        *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
        iVar4 = *(int *)(param_1 + 0x16bc);
        uVar5 = uVar6 >> (0x10U - (char)uVar1 & 0x1f);
      }
      iVar3 = iVar3 + 1;
      *(ushort *)(param_1 + 0x16b8) = uVar5;
    } while (iVar3 < param_4);
  }
  FUN_004d16a0(param_1,param_1 + 0x94,param_2 + -1);
  FUN_004d16a0(param_1,param_1 + 0x988,param_3 + -1);
  return;
}


