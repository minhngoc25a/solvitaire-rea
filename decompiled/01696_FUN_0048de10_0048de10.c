// Function: FUN_0048de10
// Entry: 0048de10
// Size: 765 bytes
// Thunk: false
// External: false


undefined4 * __cdecl
FUN_0048de10(undefined4 param_1,undefined4 param_2,byte *param_3,byte *param_4,undefined4 param_5,
            uint param_6)

{
  byte bVar1;
  int iVar2;
  undefined4 *puVar3;
  char *pcVar4;
  uint uVar5;
  BOOL BVar6;
  uint uVar7;
  undefined4 uVar8;
  byte *pbVar9;
  byte *pbVar10;
  bool bVar11;
  
  puVar3 = (undefined4 *)FUN_0047f911(1,0x34);
  if (puVar3 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  *puVar3 = 0;
  pcVar4 = FUN_004894ef((char *)param_3);
  puVar3[1] = pcVar4;
  if (pcVar4 == (char *)0x0) {
    FUN_0047d191(puVar3);
    return (undefined4 *)0x0;
  }
  pcVar4 = FUN_004894ef((char *)param_4);
  puVar3[2] = pcVar4;
  if (pcVar4 == (char *)0x0) {
    FUN_0047d191((LPVOID)puVar3[1]);
    FUN_0047d191(puVar3);
    return (undefined4 *)0x0;
  }
  puVar3[7] = 0;
  puVar3[8] = 0;
  puVar3[9] = 0;
  pbVar9 = param_3;
  pbVar10 = param_4;
  uVar5 = param_6;
  if ((param_6 & 1) == 0) {
    if ((param_6 & 2) != 0) {
      puVar3[4] = param_5;
      uVar7 = FUN_0048e280(param_3);
      puVar3[3] = uVar7;
      BVar6 = IsValidCodePage(uVar7);
      if (BVar6 != 0) {
        uVar5 = param_6 | 8;
      }
    }
  }
  else {
    puVar3[3] = param_5;
    uVar5 = FUN_0048e280(param_4);
    puVar3[4] = uVar5;
    BVar6 = IsValidCodePage(uVar5);
    uVar5 = param_6 | 8;
    if (BVar6 == 0) {
      uVar5 = param_6;
    }
  }
  do {
    bVar1 = *pbVar9;
    bVar11 = bVar1 < *pbVar10;
    if (bVar1 != *pbVar10) {
LAB_0048df10:
      uVar7 = -(uint)bVar11 | 1;
      goto LAB_0048df15;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar9[1];
    bVar11 = bVar1 < pbVar10[1];
    if (bVar1 != pbVar10[1]) goto LAB_0048df10;
    pbVar9 = pbVar9 + 2;
    pbVar10 = pbVar10 + 2;
  } while (bVar1 != 0);
  uVar7 = 0;
LAB_0048df15:
  if ((uVar7 == 0) || ((puVar3[3] != -1 && (puVar3[3] == puVar3[4])))) {
    uVar8 = 1;
  }
  else {
    uVar8 = 0;
  }
  puVar3[5] = uVar8;
  pbVar10 = &DAT_005297a0;
  pbVar9 = param_4;
  do {
    bVar1 = *pbVar9;
    bVar11 = bVar1 < *pbVar10;
    if (bVar1 != *pbVar10) {
LAB_0048df60:
      uVar7 = -(uint)bVar11 | 1;
      goto LAB_0048df65;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar9[1];
    bVar11 = bVar1 < pbVar10[1];
    if (bVar1 != pbVar10[1]) goto LAB_0048df60;
    pbVar9 = pbVar9 + 2;
    pbVar10 = pbVar10 + 2;
  } while (bVar1 != 0);
  uVar7 = 0;
LAB_0048df65:
  if (uVar7 == 0) {
    uVar5 = uVar5 | 0x100;
  }
  else {
    pcVar4 = "UTF-16BE";
    pbVar9 = param_4;
    do {
      bVar1 = *pbVar9;
      bVar11 = bVar1 < (byte)*pcVar4;
      if (bVar1 != *pcVar4) {
LAB_0048df98:
        uVar7 = -(uint)bVar11 | 1;
        goto LAB_0048df9d;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar9[1];
      bVar11 = bVar1 < (byte)pcVar4[1];
      if (bVar1 != pcVar4[1]) goto LAB_0048df98;
      pbVar9 = pbVar9 + 2;
      pcVar4 = pcVar4 + 2;
    } while (bVar1 != 0);
    uVar7 = 0;
LAB_0048df9d:
    if (uVar7 == 0) {
      uVar5 = uVar5 | 0x400;
    }
    else {
      pcVar4 = "UTF-16LE";
      do {
        bVar1 = *param_4;
        bVar11 = bVar1 < (byte)*pcVar4;
        if (bVar1 != *pcVar4) {
LAB_0048dfd0:
          uVar7 = -(uint)bVar11 | 1;
          goto LAB_0048dfd5;
        }
        if (bVar1 == 0) break;
        bVar1 = param_4[1];
        bVar11 = bVar1 < (byte)pcVar4[1];
        if (bVar1 != pcVar4[1]) goto LAB_0048dfd0;
        param_4 = param_4 + 2;
        pcVar4 = pcVar4 + 2;
      } while (bVar1 != 0);
      uVar7 = 0;
LAB_0048dfd5:
      if (uVar7 == 0) {
        uVar5 = uVar5 | 0x1000;
      }
    }
  }
  pbVar10 = &DAT_005297a0;
  pbVar9 = param_3;
  do {
    bVar1 = *pbVar9;
    bVar11 = bVar1 < *pbVar10;
    if (bVar1 != *pbVar10) {
LAB_0048e006:
      uVar7 = -(uint)bVar11 | 1;
      goto LAB_0048e00b;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar9[1];
    bVar11 = bVar1 < pbVar10[1];
    if (bVar1 != pbVar10[1]) goto LAB_0048e006;
    pbVar9 = pbVar9 + 2;
    pbVar10 = pbVar10 + 2;
  } while (bVar1 != 0);
  uVar7 = 0;
LAB_0048e00b:
  if (uVar7 == 0) {
    uVar5 = uVar5 | 0x200;
  }
  else {
    pcVar4 = "UTF-16BE";
    pbVar9 = param_3;
    do {
      bVar1 = *pbVar9;
      bVar11 = bVar1 < (byte)*pcVar4;
      if (bVar1 != *pcVar4) {
LAB_0048e040:
        uVar7 = -(uint)bVar11 | 1;
        goto LAB_0048e045;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar9[1];
      bVar11 = bVar1 < (byte)pcVar4[1];
      if (bVar1 != pcVar4[1]) goto LAB_0048e040;
      pbVar9 = pbVar9 + 2;
      pcVar4 = pcVar4 + 2;
    } while (bVar1 != 0);
    uVar7 = 0;
LAB_0048e045:
    if (uVar7 == 0) {
      uVar5 = uVar5 | 0x800;
    }
    else {
      pcVar4 = "UTF-16LE";
      do {
        bVar1 = *param_3;
        bVar11 = bVar1 < (byte)*pcVar4;
        if (bVar1 != *pcVar4) {
LAB_0048e076:
          uVar7 = -(uint)bVar11 | 1;
          goto LAB_0048e07b;
        }
        if (bVar1 == 0) break;
        bVar1 = param_3[1];
        bVar11 = bVar1 < (byte)pcVar4[1];
        if (bVar1 != pcVar4[1]) goto LAB_0048e076;
        param_3 = param_3 + 2;
        pcVar4 = pcVar4 + 2;
      } while (bVar1 != 0);
      uVar7 = 0;
LAB_0048e07b:
      if (uVar7 == 0) {
        uVar5 = uVar5 | 0x2000;
      }
    }
  }
  iVar2 = puVar3[4];
  if (iVar2 == 0xfde9) {
    uVar5 = uVar5 | 0x100;
  }
  else if (iVar2 == 0x4b1) {
    uVar5 = uVar5 | 0x408;
  }
  else if (iVar2 == 0x4b0) {
    uVar5 = uVar5 | 0x1008;
  }
  iVar2 = puVar3[3];
  if (iVar2 == 0xfde9) {
    uVar5 = uVar5 | 0x200;
  }
  else if (iVar2 == 0x4b1) {
    uVar5 = uVar5 | 0x808;
  }
  else if (iVar2 == 0x4b0) {
    uVar5 = uVar5 | 0x2008;
  }
  uVar7 = uVar5 | 0x40;
  if ((uVar5 & 2) == 0 || (uVar5 & 0x2a00) == 0) {
    uVar7 = uVar5;
  }
  puVar3[6] = uVar7;
  FUN_00491490((int)puVar3);
  return puVar3;
}


