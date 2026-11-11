// Function: FUN_004cffb0
// Entry: 004cffb0
// Size: 1361 bytes
// Thunk: false
// External: false


undefined4 __cdecl
FUN_004cffb0(int param_1,int param_2,uint param_3,int *param_4,uint *param_5,ushort *param_6)

{
  char cVar1;
  byte bVar2;
  ushort uVar3;
  ushort *puVar4;
  int iVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  bool bVar17;
  bool bVar18;
  undefined4 local_78;
  uint local_74;
  int local_70;
  uint local_6c;
  uint local_68;
  uint local_64;
  uint local_60;
  ushort *local_58;
  ushort *local_54;
  uint local_50;
  ushort local_40 [32];
  
  uVar7 = 0;
  local_40[0] = 0;
  local_40[1] = 0;
  local_40[2] = 0;
  local_40[3] = 0;
  local_40[4] = 0;
  local_40[5] = 0;
  local_40[6] = 0;
  local_40[7] = 0;
  local_40[8] = 0;
  local_40[9] = 0;
  local_40[10] = 0;
  local_40[0xb] = 0;
  local_40[0xc] = 0;
  local_40[0xd] = 0;
  local_40[0xe] = 0;
  local_40[0xf] = 0;
  if (param_3 != 0) {
    do {
      iVar10 = uVar7 * 2;
      uVar7 = uVar7 + 1;
      local_40[*(ushort *)(param_2 + iVar10)] = local_40[*(ushort *)(param_2 + iVar10)] + 1;
    } while (uVar7 < param_3);
  }
  puVar4 = local_40 + 0xd;
  uVar7 = 0xf;
  do {
    if (puVar4[2] != 0) break;
    if (puVar4[1] != 0) {
      uVar7 = uVar7 - 1;
      break;
    }
    if (*puVar4 != 0) {
      uVar7 = uVar7 - 2;
      break;
    }
    if (puVar4[-1] != 0) {
      uVar7 = uVar7 - 3;
      break;
    }
    if (puVar4[-2] != 0) {
      uVar7 = uVar7 - 4;
      break;
    }
    uVar7 = uVar7 - 5;
    puVar4 = puVar4 + -5;
  } while (uVar7 != 0);
  uVar8 = uVar7;
  if (*param_5 <= uVar7) {
    uVar8 = *param_5;
  }
  if (uVar7 == 0) {
    *(undefined4 *)*param_4 = 0x140;
    *param_4 = *param_4 + 4;
    *(undefined4 *)*param_4 = 0x140;
    *param_4 = *param_4 + 4;
    *param_5 = 1;
    return 0;
  }
  uVar14 = 1;
  local_68 = 1;
  if (1 < uVar7) {
    do {
      local_68 = uVar14;
      if (local_40[uVar14] != 0) break;
      uVar14 = uVar14 + 1;
      local_68 = uVar14;
    } while (uVar14 < uVar7);
  }
  iVar10 = 1;
  uVar14 = local_68;
  if (local_68 <= uVar8) {
    uVar14 = uVar8;
  }
  uVar8 = 1;
  do {
    iVar10 = iVar10 * 2 - (uint)local_40[uVar8];
    if (iVar10 < 0) {
      return 0xffffffff;
    }
    uVar8 = uVar8 + 1;
  } while (uVar8 < 0x10);
  if ((0 < iVar10) && ((param_1 == 0 || (uVar7 != 1)))) {
    return 0xffffffff;
  }
  uVar8 = 2;
  local_40[0x11] = 0;
  do {
    *(short *)((int)local_40 + uVar8 + 0x22) =
         *(short *)((int)local_40 + uVar8) + *(short *)((int)local_40 + uVar8 + 0x20);
    uVar8 = uVar8 + 2;
  } while (uVar8 < 0x1e);
  uVar8 = 0;
  if (param_3 != 0) {
    do {
      uVar3 = *(ushort *)(param_2 + uVar8 * 2);
      if (uVar3 != 0) {
        param_6[local_40[uVar3 + 0x10]] = (ushort)uVar8;
        local_40[*(ushort *)(param_2 + uVar8 * 2) + 0x10] =
             local_40[*(ushort *)(param_2 + uVar8 * 2) + 0x10] + 1;
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < param_3);
  }
  local_60 = 0xffffffff;
  bVar6 = (byte)uVar14;
  uVar8 = local_68;
  uVar13 = uVar14;
  if (param_1 == 0) {
    local_70 = *param_4;
    local_58 = param_6;
    uVar15 = 0;
    local_6c = 1 << (bVar6 & 0x1f);
    local_50 = local_6c - 1;
    local_64 = 0x14;
    local_74 = 0;
    local_54 = local_58;
    goto LAB_004d0242;
  }
  if (param_1 == 1) {
    local_70 = *param_4;
    local_6c = 1 << (bVar6 & 0x1f);
    local_54 = (ushort *)&DAT_00520718;
    local_58 = (ushort *)&DAT_00520758;
    local_64 = 0x101;
    local_50 = local_6c - 1;
LAB_004d02a9:
    bVar17 = local_6c < 0x354;
    bVar18 = local_6c == 0x354;
  }
  else {
    local_70 = *param_4;
    uVar15 = 0;
    local_54 = (ushort *)&DAT_00520798;
    local_6c = 1 << (bVar6 & 0x1f);
    local_58 = (ushort *)&DAT_005207d8;
    local_50 = local_6c - 1;
    local_64 = 0;
    if (param_1 == 1) goto LAB_004d02a9;
    local_54 = (ushort *)&DAT_00520798;
    local_58 = (ushort *)&DAT_005207d8;
    local_64 = 0;
    local_74 = 0;
    local_60 = 0xffffffff;
    if (param_1 != 2) goto LAB_004d0242;
    bVar17 = local_6c < 0x250;
    bVar18 = local_6c == 0x250;
    local_54 = (ushort *)&DAT_00520798;
    local_58 = (ushort *)&DAT_005207d8;
    local_64 = 0;
  }
  local_60 = 0xffffffff;
  local_74 = 0;
  uVar15 = 0;
  if (!bVar17 && !bVar18) {
    return 1;
  }
LAB_004d0242:
  do {
    do {
      uVar11 = (uint)*param_6;
      cVar1 = (char)uVar8;
      bVar2 = cVar1 - (byte)local_74;
      if (uVar11 + 1 < local_64) {
        local_78 = (uint)CONCAT21(*param_6,bVar2) << 8;
      }
      else {
        local_78._1_3_ = (uint3)bVar2;
        if (uVar11 < local_64) {
          local_78 = CONCAT31(local_78._1_3_,0x60);
          uVar3 = 0;
        }
        else {
          local_78._0_2_ = CONCAT11(bVar2,(char)local_58[uVar11 - local_64]);
          uVar3 = local_54[uVar11 - local_64];
        }
        local_78 = CONCAT22(uVar3,(undefined2)local_78);
      }
      iVar5 = 1 << (cVar1 - (byte)local_74 & 0x1f);
      iVar12 = 1 << ((byte)uVar13 & 0x1f);
      piVar9 = (int *)(local_70 + ((uVar15 >> ((byte)local_74 & 0x1f)) + iVar12) * 4);
      iVar10 = iVar12;
      do {
        piVar9 = piVar9 + -iVar5;
        *piVar9 = local_78;
        iVar10 = iVar10 - iVar5;
      } while (iVar10 != 0);
      for (uVar11 = 1 << (cVar1 - 1U & 0x1f); (uVar15 & uVar11) != 0; uVar11 = uVar11 >> 1) {
      }
      if (uVar11 == 0) {
        uVar15 = 0;
      }
      else {
        uVar15 = (uVar15 & uVar11 - 1) + uVar11;
      }
      param_6 = param_6 + 1;
      puVar4 = local_40 + uVar8;
      *puVar4 = *puVar4 - 1;
      if (*puVar4 == 0) {
        if (uVar8 == uVar7) {
          if (uVar15 != 0) {
            local_78 = CONCAT31(local_78._1_3_,0x40);
            local_78 = local_78 & 0xffff;
            *(uint *)(local_70 + uVar15 * 4) = local_78;
          }
          *param_4 = *param_4 + local_6c * 4;
          *param_5 = uVar14;
          return 0;
        }
        uVar8 = (uint)*(ushort *)(param_2 + (uint)*param_6 * 2);
        local_68 = uVar8;
      }
    } while ((uVar8 <= uVar14) || (uVar11 = local_50 & uVar15, uVar11 == local_60));
    if (local_74 == 0) {
      local_74 = uVar14;
    }
    local_70 = local_70 + iVar12 * 4;
    uVar13 = uVar8 - local_74;
    iVar10 = 1 << ((byte)uVar13 & 0x1f);
    if (uVar8 < uVar7) {
      puVar4 = local_40 + uVar8;
      uVar16 = uVar8;
      do {
        uVar3 = *puVar4;
        uVar8 = local_68;
        if ((int)(iVar10 - (uint)uVar3) < 1) break;
        uVar16 = uVar16 + 1;
        uVar13 = uVar13 + 1;
        puVar4 = puVar4 + 1;
        iVar10 = (iVar10 - (uint)uVar3) * 2;
      } while (uVar16 < uVar7);
    }
    local_6c = local_6c + (1 << ((byte)uVar13 & 0x1f));
    if (param_1 == 1) {
      bVar17 = local_6c < 0x354;
      bVar18 = local_6c == 0x354;
LAB_004d046a:
      if (!bVar17 && !bVar18) {
        return 1;
      }
    }
    else if (param_1 == 2) {
      bVar17 = local_6c < 0x250;
      bVar18 = local_6c == 0x250;
      goto LAB_004d046a;
    }
    *(byte *)(*param_4 + uVar11 * 4) = (byte)uVar13;
    *(byte *)(*param_4 + 1 + uVar11 * 4) = bVar6;
    *(short *)(*param_4 + 2 + uVar11 * 4) = (short)(local_70 - *param_4 >> 2);
    local_60 = uVar11;
  } while( true );
}


