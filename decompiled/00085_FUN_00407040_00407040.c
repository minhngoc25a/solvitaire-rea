// Function: FUN_00407040
// Entry: 00407040
// Size: 698 bytes
// Thunk: false
// External: false


/* WARNING: Unable to track spacebase fully for stack */

void __fastcall FUN_00407040(uint param_1,uint param_2,byte *param_3)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  byte bVar4;
  int in_EAX;
  uint uVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte bVar8;
  byte *extraout_ECX;
  byte *pbVar9;
  byte *extraout_ECX_00;
  byte *extraout_ECX_01;
  byte *extraout_ECX_02;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  uint uVar15;
  undefined4 uStack_30;
  byte abStack_2c [4];
  int local_28;
  byte *local_24;
  byte *local_20;
  
  local_20 = (byte *)((in_EAX != 0x6f) + 3);
  uStack_30 = 0x40709e;
  local_28 = in_EAX;
  uVar5 = FUN_0040b3d0();
  iVar3 = -uVar5;
  local_24 = abStack_2c + iVar3;
  pbVar9 = extraout_ECX;
  if (param_1 == 0 && param_2 == 0) {
LAB_004072f4:
    *(uint *)(param_3 + 4) = *(uint *)(param_3 + 4) & 0xfffff7ff;
    pbVar6 = local_24;
  }
  else {
    abStack_2c[3] = (byte)local_28 & 0x20;
    pbVar9 = abStack_2c + iVar3;
    local_24 = abStack_2c + iVar3;
    do {
      pbVar6 = pbVar9 + 1;
      bVar4 = (byte)param_2 & (in_EAX != 0x6f) * '\b' + 7U;
      bVar8 = bVar4 + 0x30;
      if (bVar8 < 0x3a) {
        *pbVar9 = bVar8;
      }
      else {
        *pbVar9 = bVar4 + 0x37 | abStack_2c[3];
      }
      uVar5 = param_1 << 0x20 - ((byte)local_20 & 0x1f);
      uVar15 = param_1 >> ((byte)local_20 & 0x1f);
      param_1 = uVar15;
      param_2 = param_2 >> ((byte)local_20 & 0x1f) | uVar5;
      if (((uint)local_20 & 0x20) != 0) {
        param_1 = 0;
        param_2 = uVar15;
      }
      pbVar9 = pbVar6;
    } while (param_1 != 0 || param_2 != 0);
    if (local_24 == pbVar6) {
      pbVar9 = *(byte **)(param_3 + 0xc);
      goto LAB_004072f4;
    }
    pbVar9 = *(byte **)(param_3 + 0xc);
  }
  if (((int)pbVar9 < 1) || (pbVar9 = pbVar9 + ((int)local_24 - (int)pbVar6), (int)pbVar9 < 1)) {
    pbVar10 = pbVar6;
    if ((local_28 == 0x6f) && (pbVar9 = param_3, (param_3[5] & 8) != 0)) {
      pbVar10 = pbVar6 + 1;
      *pbVar6 = 0x30;
    }
  }
  else {
    pbVar14 = pbVar6;
    do {
      pbVar7 = pbVar14 + 1;
      *pbVar14 = 0x30;
      pbVar14 = pbVar7;
      pbVar10 = pbVar6 + (int)pbVar9;
    } while (pbVar7 != pbVar6 + (int)pbVar9);
  }
  if ((pbVar10 == local_24) && (*(int *)(param_3 + 0xc) != 0)) {
    *pbVar10 = 0x30;
    pbVar10 = pbVar10 + 1;
  }
  if ((int)pbVar10 - (int)local_24 < *(int *)(param_3 + 8)) {
    pbVar6 = (byte *)(*(int *)(param_3 + 8) - ((int)pbVar10 - (int)local_24));
    *(byte **)(param_3 + 8) = pbVar6;
    if ((int)pbVar6 < 1) {
LAB_00407174:
      local_20 = pbVar6 + -1;
      goto LAB_0040717a;
    }
    if ((local_28 == 0x6f) || ((param_3[5] & 8) == 0)) {
      iVar1 = *(int *)(param_3 + 0xc);
joined_r0x0040716e:
      if ((iVar1 < 0) && ((*(uint *)(param_3 + 4) & 0x600) == 0x200)) {
        pbVar6 = pbVar6 + (int)pbVar10;
        pbVar14 = pbVar10;
        do {
          pbVar10 = pbVar14 + 1;
          *pbVar14 = 0x30;
          pbVar14 = pbVar10;
        } while (pbVar10 != pbVar6);
        local_20 = (byte *)0xfffffffe;
        pbVar6 = (byte *)0xffffffff;
        goto LAB_0040717a;
      }
      goto LAB_00407174;
    }
    pbVar14 = pbVar6 + -2;
    if (0 < (int)pbVar14) {
      iVar1 = *(int *)(param_3 + 0xc);
      pbVar6 = pbVar14;
      goto joined_r0x0040716e;
    }
    pbVar9 = pbVar6 + -3;
    pbVar6 = pbVar10;
    local_20 = pbVar9;
  }
  else {
    pbVar6 = (byte *)0xffffffff;
    local_20 = (byte *)0xfffffffe;
    param_3[8] = 0xff;
    param_3[9] = 0xff;
    param_3[10] = 0xff;
    param_3[0xb] = 0xff;
LAB_0040717a:
    pbVar7 = local_20;
    pbVar14 = pbVar6;
    if ((local_28 == 0x6f) || (pbVar6 = pbVar10, (param_3[5] & 8) == 0)) goto LAB_00407192;
  }
  pbVar10 = pbVar6 + 2;
  pbVar6[1] = 0x30;
  pbVar7 = local_20;
  *pbVar6 = (byte)local_28;
LAB_00407192:
  if ((0 < (int)pbVar14) && (pbVar6 = local_20, (param_3[5] & 4) == 0)) {
    do {
      pbVar13 = abStack_2c + iVar3 + -4;
      pbVar13[0] = 0x24;
      pbVar13[1] = 0x72;
      pbVar13[2] = 0x40;
      pbVar13[3] = 0;
      FUN_00406ba0(pbVar9,(int *)param_3);
      bVar2 = 0 < (int)pbVar6;
      pbVar9 = extraout_ECX_02;
      pbVar6 = pbVar6 + -1;
    } while (bVar2);
    pbVar9 = (byte *)0x0;
    if (-1 < (int)local_20) {
      pbVar9 = local_20;
    }
    pbVar14 = local_20 + (-1 - (int)pbVar9);
    pbVar7 = pbVar14 + -1;
    pbVar9 = local_20;
  }
  pbVar6 = local_24;
  if (local_24 < pbVar10) {
    do {
      local_20 = pbVar14;
      local_24 = pbVar7;
      pbVar10 = pbVar10 + -1;
      pbVar11 = abStack_2c + iVar3 + -4;
      pbVar11[0] = 0xbf;
      pbVar11[1] = 0x71;
      pbVar11[2] = 0x40;
      pbVar11[3] = 0;
      FUN_00406ba0(pbVar9,(int *)param_3);
      pbVar9 = extraout_ECX_00;
      pbVar7 = local_24;
      pbVar14 = local_20;
    } while (pbVar10 != pbVar6);
  }
  while (pbVar6 = pbVar7, 0 < (int)pbVar14) {
    pbVar12 = abStack_2c + iVar3 + -4;
    pbVar12[0] = 0xdf;
    pbVar12[1] = 0x71;
    pbVar12[2] = 0x40;
    pbVar12[3] = 0;
    FUN_00406ba0(pbVar9,(int *)param_3);
    pbVar9 = extraout_ECX_01;
    pbVar7 = pbVar6 + -1;
    pbVar14 = pbVar6;
  }
  return;
}


