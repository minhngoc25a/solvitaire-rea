// Function: FUN_004d09b0
// Entry: 004d09b0
// Size: 1007 bytes
// Thunk: false
// External: false


void __cdecl FUN_004d09b0(int *param_1,uint *param_2,uint param_3,int param_4)

{
  int iVar1;
  ushort uVar2;
  byte bVar3;
  ushort uVar4;
  uint uVar5;
  int *piVar6;
  undefined4 uVar7;
  uint uVar8;
  ushort *puVar9;
  byte *pbVar10;
  uint uVar11;
  int iVar12;
  
  iVar12 = 0;
  if (param_1[0x21] < 1) {
    uVar5 = param_3 + 5;
    uVar11 = uVar5;
  }
  else {
    if (*(int *)(*param_1 + 0x2c) == 2) {
      uVar5 = 0xf3ffc07f;
      iVar12 = 0;
      puVar9 = (ushort *)(param_1 + 0x25);
      do {
        if (((uVar5 & 1) != 0) && (*puVar9 != 0)) goto LAB_004d0a32;
        iVar12 = iVar12 + 1;
        uVar5 = uVar5 >> 1;
        puVar9 = puVar9 + 2;
      } while (iVar12 < 0x20);
      if ((((short)param_1[0x2e] == 0) && ((short)param_1[0x2f] == 0)) &&
         ((short)param_1[0x32] == 0)) {
        iVar12 = 0x20;
        piVar6 = param_1 + 0x45;
        do {
          if ((short)*piVar6 != 0) goto LAB_004d0a36;
          iVar12 = iVar12 + 1;
          piVar6 = piVar6 + 1;
        } while (iVar12 < 0x100);
LAB_004d0a32:
        uVar7 = 0;
      }
      else {
LAB_004d0a36:
        uVar7 = 1;
      }
      *(undefined4 *)(*param_1 + 0x2c) = uVar7;
    }
    FUN_004d1320((int)param_1,param_1 + 0x2c6);
    FUN_004d1320((int)param_1,param_1 + 0x2c9);
    FUN_004d15a0((int)param_1,(ushort *)(param_1 + 0x25),param_1[0x2c7]);
    FUN_004d15a0((int)param_1,(ushort *)(param_1 + 0x262),param_1[0x2ca]);
    FUN_004d1320((int)param_1,param_1 + 0x2cc);
    iVar12 = 0x12;
    pbVar10 = &DAT_00520c64;
    do {
      if (*(short *)((int)param_1 + (uint)pbVar10[2] * 4 + 0xa7e) != 0) break;
      if (*(short *)((int)param_1 + (uint)pbVar10[1] * 4 + 0xa7e) != 0) {
        iVar12 = iVar12 + -1;
        break;
      }
      if (*(short *)((int)param_1 + (uint)*pbVar10 * 4 + 0xa7e) != 0) {
        iVar12 = iVar12 + -2;
        break;
      }
      if (*(short *)((int)param_1 + (uint)pbVar10[-1] * 4 + 0xa7e) != 0) {
        iVar12 = iVar12 + -3;
        break;
      }
      pbVar10 = pbVar10 + -4;
      iVar12 = iVar12 + -4;
    } while (0x520c54 < (int)pbVar10);
    param_1[0x5aa] = param_1[0x5aa] + iVar12 * 3 + 0x11;
    uVar5 = param_1[0x5ab] + 10U >> 3;
    uVar8 = param_1[0x5aa] + 10U >> 3;
    uVar11 = uVar5;
    if (uVar8 < uVar5) {
      uVar11 = uVar8;
    }
  }
  uVar2 = (ushort)param_4;
  if ((uVar11 < param_3 + 4) || (param_2 == (uint *)0x0)) {
    if ((param_1[0x22] == 4) || (uVar5 == uVar11)) {
      iVar12 = param_1[0x5af];
      uVar4 = uVar2 + 2 << ((byte)iVar12 & 0x1f) | *(ushort *)(param_1 + 0x5ae);
      if (iVar12 < 0xe) {
        param_1[0x5af] = iVar12 + 3;
      }
      else {
        *(ushort *)(param_1 + 0x5ae) = uVar4;
        *(char *)(param_1[2] + param_1[5]) = (char)uVar4;
        iVar12 = param_1[5];
        param_1[5] = iVar12 + 1;
        *(undefined1 *)(iVar12 + 1 + param_1[2]) = *(undefined1 *)((int)param_1 + 0x16b9);
        iVar12 = param_1[0x5af];
        param_1[5] = param_1[5] + 1;
        param_1[0x5af] = param_1[0x5af] + -0xd;
        uVar4 = (ushort)(uVar2 + 2) >> (0x10U - (char)(short)iVar12 & 0x1f);
      }
      *(ushort *)(param_1 + 0x5ae) = uVar4;
      FUN_004d1e40((int)param_1,0x520c68,0x5210e8);
    }
    else {
      iVar1 = param_1[0x5af];
      uVar4 = uVar2 + 4 << ((byte)iVar1 & 0x1f) | *(ushort *)(param_1 + 0x5ae);
      if (iVar1 < 0xe) {
        param_1[0x5af] = iVar1 + 3;
      }
      else {
        *(ushort *)(param_1 + 0x5ae) = uVar4;
        *(char *)(param_1[2] + param_1[5]) = (char)uVar4;
        iVar1 = param_1[5];
        param_1[5] = iVar1 + 1;
        *(undefined1 *)(iVar1 + 1 + param_1[2]) = *(undefined1 *)((int)param_1 + 0x16b9);
        iVar1 = param_1[0x5af];
        param_1[5] = param_1[5] + 1;
        param_1[0x5af] = param_1[0x5af] + -0xd;
        uVar4 = (ushort)(uVar2 + 4) >> (0x10U - (char)(short)iVar1 & 0x1f);
      }
      *(ushort *)(param_1 + 0x5ae) = uVar4;
      FUN_004d1be0((int)param_1,param_1[0x2c7] + 1,param_1[0x2ca] + 1,iVar12 + 1);
      FUN_004d1e40((int)param_1,(int)(param_1 + 0x25),(int)(param_1 + 0x262));
    }
  }
  else {
    iVar12 = param_1[0x5af];
    uVar4 = uVar2 << ((byte)iVar12 & 0x1f) | *(ushort *)(param_1 + 0x5ae);
    if (iVar12 < 0xe) {
      param_1[0x5af] = iVar12 + 3;
    }
    else {
      *(ushort *)(param_1 + 0x5ae) = uVar4;
      *(char *)(param_1[2] + param_1[5]) = (char)uVar4;
      iVar12 = param_1[5];
      param_1[5] = iVar12 + 1;
      *(undefined1 *)(iVar12 + 1 + param_1[2]) = *(undefined1 *)((int)param_1 + 0x16b9);
      iVar12 = param_1[0x5af];
      param_1[5] = param_1[5] + 1;
      param_1[0x5af] = param_1[0x5af] + -0xd;
      uVar4 = uVar2 >> (0x10U - (char)(short)iVar12 & 0x1f);
    }
    *(ushort *)(param_1 + 0x5ae) = uVar4;
    FUN_004d2330((int)param_1);
    *(byte *)(param_1[2] + param_1[5]) = (byte)param_3;
    iVar12 = param_1[5];
    param_1[5] = iVar12 + 1;
    bVar3 = (byte)(param_3 >> 8);
    *(byte *)(iVar12 + 1 + param_1[2]) = bVar3;
    iVar12 = param_1[5];
    param_1[5] = iVar12 + 1;
    *(byte *)(iVar12 + 1 + param_1[2]) = ~(byte)param_3;
    iVar12 = param_1[5];
    param_1[5] = iVar12 + 1;
    *(byte *)(iVar12 + 1 + param_1[2]) = ~bVar3;
    iVar12 = param_1[5];
    param_1[5] = iVar12 + 1;
    if (param_3 != 0) {
      FUN_0044c490((uint *)(param_1[2] + iVar12 + 1),param_2,param_3);
    }
    param_1[5] = param_1[5] + param_3;
  }
  FUN_004d0fa0((int)param_1);
  if (param_4 != 0) {
    FUN_004d2330((int)param_1);
  }
  return;
}


