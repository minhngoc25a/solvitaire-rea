// Function: FUN_004703c0
// Entry: 004703c0
// Size: 3019 bytes
// Thunk: false
// External: false


void __cdecl FUN_004703c0(uint param_1)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  undefined2 uVar4;
  uint uVar5;
  bool bVar6;
  bool bVar7;
  byte bVar8;
  byte bVar9;
  int iVar10;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  undefined3 extraout_var_03;
  undefined3 extraout_var_04;
  undefined3 extraout_var_05;
  undefined3 extraout_var_06;
  undefined3 extraout_var_07;
  int iVar11;
  undefined3 extraout_var_08;
  byte *pbVar12;
  undefined3 extraout_var_09;
  undefined3 extraout_var_10;
  uint uVar13;
  short sVar14;
  byte *pbVar15;
  int iVar16;
  short sVar17;
  ushort uVar18;
  ushort uVar19;
  uint *puVar20;
  int iVar21;
  uint uVar22;
  byte local_17;
  byte local_16;
  undefined2 local_14;
  uint local_8;
  uint local_4;
  
  uVar5 = param_1;
  bVar7 = false;
  iVar10 = *(int *)(param_1 + 0x2c4);
  iVar21 = *(int *)(param_1 + 0x188);
  if (iVar10 == 0) {
    if (iVar21 == 0) {
      *(undefined4 *)(param_1 + 0x2c4) = 100000;
      *(undefined4 *)(param_1 + 0x188) = 100000;
      uVar13 = *(uint *)(param_1 + 0x7c);
    }
    else {
      iVar10 = FUN_0046ce40(iVar21);
      uVar13 = *(uint *)(param_1 + 0x7c);
      *(int *)(param_1 + 0x2c4) = iVar10;
    }
    *(ushort *)(param_1 + 0x30e) = *(ushort *)(param_1 + 0x30e) | 1;
LAB_00470472:
    uVar13 = uVar13 & 0xffffdfff;
  }
  else {
    if (iVar21 == 0) {
      iVar10 = FUN_0046ce40(iVar10);
      *(int *)(param_1 + 0x188) = iVar10;
    }
    else {
      iVar10 = FUN_0046cd90((int *)&local_8,iVar10,iVar21,100000);
      if ((iVar10 == 0) || (bVar6 = FUN_0046cf30(local_8), CONCAT31(extraout_var,bVar6) != 0)) {
        bVar7 = true;
      }
    }
    *(ushort *)(param_1 + 0x30e) = *(ushort *)(param_1 + 0x30e) | 1;
    uVar13 = *(uint *)(param_1 + 0x7c);
    if (!bVar7) goto LAB_00470472;
    uVar13 = uVar13 | 0x2000;
  }
  puVar20 = (uint *)(param_1 + 0x7c);
  *puVar20 = uVar13;
  if ((uVar13 & 0x40080) == 0x40000) {
    *(uint *)(param_1 + 0x78) = *(uint *)(param_1 + 0x78) & 0xffffdfff;
    *puVar20 = uVar13 & 0xfd7ffeff;
    *(undefined2 *)(param_1 + 0x148) = 0;
  }
  bVar7 = FUN_0046cf30(*(int *)(param_1 + 0x188));
  if (CONCAT31(extraout_var_00,bVar7) == 0) {
    *puVar20 = *puVar20 & 0xff7fffff;
    *(uint *)(param_1 + 0x78) = *(uint *)(param_1 + 0x78) & 0xffffdfff;
  }
  if ((*(uint *)(param_1 + 0x7c) & 0x600000) != 0) {
    FUN_0046c700(param_1);
  }
  uVar13 = *(uint *)(param_1 + 0x7c);
  if ((uVar13 & 0x100) == 0) {
    if ((((uVar13 & 0x4080) == 0x4080) &&
        (sVar17 = *(short *)(param_1 + 0x166), sVar17 == *(short *)(param_1 + 0x168))) &&
       (sVar17 == *(short *)(param_1 + 0x16a))) {
      *(short *)(param_1 + 0x16c) = sVar17;
      goto LAB_0047051c;
    }
  }
  else if ((*(byte *)(param_1 + 0x14f) & 2) == 0) {
LAB_0047051c:
    *(uint *)(param_1 + 0x74) = *(uint *)(param_1 + 0x74) | 0x800;
  }
  bVar8 = *(byte *)(param_1 + 0x14f);
  if (bVar8 == 3) {
    FUN_00470f90(param_1);
  }
  else {
    uVar22 = uVar13;
    if ((bVar8 & 4) == 0) {
      *(uint *)(param_1 + 0x78) = *(uint *)(param_1 + 0x78) & 0xffffdfff;
      uVar22 = uVar13 & 0xff7fffff;
      *(uint *)(param_1 + 0x7c) = uVar22;
      if (*(short *)(param_1 + 0x148) == 0) {
        uVar22 = uVar13 & 0xff7ffe7f;
        *(uint *)(param_1 + 0x7c) = uVar22;
      }
    }
    if (((uVar22 & 0x1100) == 0x1100) && ((bVar8 & 2) == 0)) {
      cVar3 = *(char *)(param_1 + 0x150);
      sVar17 = *(short *)(param_1 + 0x16c);
      sVar14 = *(short *)(param_1 + 0x1bc);
      if (cVar3 == '\x01') {
        sVar17 = sVar17 * 0xff;
        sVar14 = sVar14 * 0xff;
      }
      else if (cVar3 == '\x02') {
        sVar17 = sVar17 * 0x55;
        sVar14 = sVar14 * 0x55;
      }
      else if (cVar3 == '\x04') {
        sVar17 = sVar17 * 0x11;
        sVar14 = sVar14 * 0x11;
      }
      *(short *)(param_1 + 0x16a) = sVar17;
      *(short *)(param_1 + 0x168) = sVar17;
      *(short *)(param_1 + 0x166) = sVar17;
      if ((uVar22 & 0x2000000) == 0) {
        *(short *)(param_1 + 0x1ba) = sVar14;
        *(short *)(param_1 + 0x1b8) = sVar14;
        *(short *)(param_1 + 0x1b6) = sVar14;
      }
    }
  }
  uVar13 = *(uint *)(param_1 + 0x7c);
  if (((uVar13 & 0x380) == 0x280) && (*(char *)(param_1 + 0x150) != '\x10')) {
    *(short *)(param_1 + 0x166) = (short)((*(ushort *)(param_1 + 0x166) + 0x81) * 0xff >> 0x10);
    *(short *)(param_1 + 0x168) = (short)((*(ushort *)(param_1 + 0x168) + 0x81) * 0xff >> 0x10);
    *(short *)(param_1 + 0x16a) = (short)((*(ushort *)(param_1 + 0x16a) + 0x81) * 0xff >> 0x10);
    *(short *)(param_1 + 0x16c) = (short)((*(ushort *)(param_1 + 0x16c) + 0x81) * 0xff >> 0x10);
  }
  if ((((uVar13 & 0x80) != 0 && (uVar13 & 0x4000400) != 0) && ((uVar13 & 0x100) == 0)) &&
     (*(char *)(param_1 + 0x150) == '\x10')) {
    *(short *)(param_1 + 0x166) = *(short *)(param_1 + 0x166) * 0x101;
    *(short *)(param_1 + 0x168) = *(short *)(param_1 + 0x168) * 0x101;
    *(short *)(param_1 + 0x16a) = *(short *)(param_1 + 0x16a) * 0x101;
    *(short *)(param_1 + 0x16c) = *(short *)(param_1 + 0x16c) * 0x101;
  }
  *(undefined8 *)(param_1 + 0x16e) = *(undefined8 *)(param_1 + 0x164);
  *(undefined2 *)(param_1 + 0x176) = *(undefined2 *)(param_1 + 0x16c);
  if (((((uVar13 & 0x2000) == 0) &&
       (((uVar13 & 0x600000) == 0 ||
        ((bVar7 = FUN_0046cf30(*(int *)(param_1 + 0x2c4)), CONCAT31(extraout_var_01,bVar7) == 0 &&
         (bVar7 = FUN_0046cf30(*(int *)(param_1 + 0x188)), CONCAT31(extraout_var_02,bVar7) == 0)))))
       ) && (((*(byte *)(param_1 + 0x7c) & 0x80) == 0 ||
             (((bVar7 = FUN_0046cf30(*(int *)(param_1 + 0x2c4)),
               CONCAT31(extraout_var_03,bVar7) == 0 &&
               (bVar7 = FUN_0046cf30(*(int *)(param_1 + 0x188)),
               CONCAT31(extraout_var_04,bVar7) == 0)) &&
              ((*(char *)(param_1 + 0x15c) != '\x03' ||
               (bVar7 = FUN_0046cf30(*(int *)(param_1 + 0x160)),
               CONCAT31(extraout_var_05,bVar7) == 0)))))))) &&
     (((*(uint *)(param_1 + 0x7c) & 0x800000) == 0 ||
      (bVar7 = FUN_0046cf30(*(int *)(param_1 + 0x188)), CONCAT31(extraout_var_06,bVar7) == 0)))) {
    uVar13 = *(uint *)(param_1 + 0x7c);
    if ((-1 < (char)uVar13) || (*(char *)(param_1 + 0x14f) != '\x03')) goto LAB_00470eb2;
    bVar8 = *(byte *)(param_1 + 0x166);
    iVar10 = 0;
    uVar19 = *(ushort *)(param_1 + 0x148);
    bVar9 = *(byte *)(param_1 + 0x168);
    local_14 = CONCAT11(bVar9,bVar8);
    bVar1 = *(byte *)(param_1 + 0x16a);
    if (uVar19 != 0) {
      iVar21 = *(int *)(param_1 + 0x1b0);
      pbVar15 = (byte *)(*(int *)(param_1 + 0x13c) + 2);
      do {
        bVar2 = *(byte *)(iVar21 + iVar10);
        if (bVar2 == 0) {
          *(undefined2 *)(pbVar15 + -2) = local_14;
          *pbVar15 = bVar1;
        }
        else if (bVar2 != 0xff) {
          uVar18 = (0xff - (ushort)bVar2) * (ushort)bVar8 + (ushort)pbVar15[-2] * (ushort)bVar2 +
                   0x80;
          pbVar15[-2] = (byte)((uint)(uVar18 >> 8) + (uint)uVar18 >> 8);
          uVar18 = (0xff - (ushort)*(byte *)(iVar21 + iVar10)) * (ushort)bVar9 +
                   (ushort)pbVar15[-1] * (ushort)*(byte *)(iVar21 + iVar10) + 0x80;
          pbVar15[-1] = (byte)((uint)(uVar18 >> 8) + (uint)uVar18 >> 8);
          uVar18 = (0xff - (ushort)*(byte *)(iVar21 + iVar10)) * (ushort)bVar1 +
                   (ushort)*pbVar15 * (ushort)*(byte *)(iVar21 + iVar10) + 0x80;
          *pbVar15 = (byte)((uint)(uVar18 >> 8) + (uint)uVar18 >> 8);
        }
        iVar10 = iVar10 + 1;
        pbVar15 = pbVar15 + 3;
      } while (iVar10 < (int)(uint)uVar19);
    }
    uVar13 = *(uint *)(param_1 + 0x7c) & 0xffffff7f;
  }
  else {
    FUN_0046d230(param_1,(uint)*(byte *)(param_1 + 0x150));
    uVar13 = *(uint *)(param_1 + 0x7c);
    if ((char)uVar13 < '\0') {
      if ((uVar13 & 0x600000) != 0) {
        FUN_0046f1c0(param_1,"libpng does not support gamma+background+rgb_to_gray");
      }
      cVar3 = *(char *)(param_1 + 0x15c);
      if (*(char *)(param_1 + 0x14f) != '\x03') {
        iVar10 = 100000;
        if (cVar3 == '\x01') {
          iVar21 = *(int *)(param_1 + 0x188);
        }
        else if (cVar3 == '\x02') {
          iVar21 = FUN_0046ce40(*(int *)(param_1 + 0x2c4));
          iVar10 = FUN_0046ceb0(*(int *)(param_1 + 0x2c4),*(int *)(param_1 + 0x188));
        }
        else {
          if (cVar3 != '\x03') {
                    /* WARNING: Subroutine does not return */
            FUN_0046f190(param_1);
          }
          iVar21 = FUN_0046ce40(*(int *)(param_1 + 0x160));
          iVar10 = FUN_0046ceb0(*(int *)(param_1 + 0x160),*(int *)(param_1 + 0x188));
        }
        bVar7 = FUN_0046cf30(iVar21);
        bVar6 = FUN_0046cf30(iVar10);
        if (CONCAT31(extraout_var_09,bVar7) != 0) {
          uVar13 = FUN_0046cf50(param_1,(uint)*(ushort *)(param_1 + 0x16c));
          *(short *)(param_1 + 0x176) = (short)uVar13;
        }
        if (CONCAT31(extraout_var_10,bVar6) != 0) {
          uVar13 = FUN_0046cf50(param_1,(uint)*(ushort *)(param_1 + 0x16c));
          *(short *)(param_1 + 0x16c) = (short)uVar13;
        }
        uVar19 = *(ushort *)(param_1 + 0x166);
        if (((uVar19 == *(ushort *)(param_1 + 0x168)) && (uVar19 == *(ushort *)(param_1 + 0x16a)))
           && (uVar18 = *(ushort *)(param_1 + 0x16c), uVar19 == uVar18)) {
          uVar4 = *(undefined2 *)(param_1 + 0x176);
          uVar13 = *(uint *)(param_1 + 0x7c);
          *(undefined2 *)(param_1 + 0x174) = uVar4;
          *(undefined2 *)(param_1 + 0x172) = uVar4;
          *(undefined2 *)(param_1 + 0x170) = uVar4;
          *(ushort *)(param_1 + 0x16a) = uVar18;
          *(ushort *)(param_1 + 0x168) = uVar18;
          *(ushort *)(param_1 + 0x166) = uVar18;
          *(undefined1 *)(param_1 + 0x15c) = 1;
        }
        else {
          if (CONCAT31(extraout_var_09,bVar7) != 0) {
            uVar13 = FUN_0046cf50(param_1,(uint)uVar19);
            *(short *)(param_1 + 0x170) = (short)uVar13;
            uVar13 = FUN_0046cf50(param_1,(uint)*(ushort *)(param_1 + 0x168));
            *(short *)(param_1 + 0x172) = (short)uVar13;
            uVar13 = FUN_0046cf50(param_1,(uint)*(ushort *)(param_1 + 0x16a));
            *(short *)(param_1 + 0x174) = (short)uVar13;
          }
          if (CONCAT31(extraout_var_10,bVar6) != 0) {
            uVar13 = FUN_0046cf50(param_1,(uint)*(ushort *)(param_1 + 0x166));
            *(short *)(param_1 + 0x166) = (short)uVar13;
            uVar13 = FUN_0046cf50(param_1,(uint)*(ushort *)(param_1 + 0x168));
            *(short *)(param_1 + 0x168) = (short)uVar13;
            uVar13 = FUN_0046cf50(param_1,(uint)*(ushort *)(param_1 + 0x16a));
            *(short *)(param_1 + 0x16a) = (short)uVar13;
          }
          uVar13 = *(uint *)(param_1 + 0x7c);
          *(undefined1 *)(param_1 + 0x15c) = 1;
        }
        goto LAB_00470eb2;
      }
      uVar13 = (uint)*(ushort *)(param_1 + 0x140);
      iVar10 = *(int *)(param_1 + 0x13c);
      local_4 = uVar13;
      if (cVar3 == '\x02') {
        iVar21 = *(int *)(param_1 + 0x18c);
        local_14 = CONCAT11(*(undefined1 *)(iVar21 + (uint)*(ushort *)(param_1 + 0x168)),
                            *(undefined1 *)((uint)*(ushort *)(param_1 + 0x166) + iVar21));
        iVar16 = *(int *)(param_1 + 0x198);
        local_17 = *(byte *)((uint)*(ushort *)(param_1 + 0x166) + iVar16);
        local_16 = *(byte *)(iVar16 + (uint)*(ushort *)(param_1 + 0x168));
        bVar8 = *(byte *)(iVar16 + (uint)*(ushort *)(param_1 + 0x16a));
        param_1._0_1_ = *(byte *)(iVar21 + (uint)*(ushort *)(param_1 + 0x16a));
      }
      else {
        if (cVar3 == '\x01') {
          iVar21 = *(int *)(param_1 + 0x188);
          iVar16 = 100000;
        }
        else if (cVar3 == '\x02') {
          iVar21 = FUN_0046ce40(*(int *)(param_1 + 0x2c4));
          iVar16 = FUN_0046ceb0(*(int *)(param_1 + 0x2c4),*(int *)(param_1 + 0x188));
        }
        else if (cVar3 == '\x03') {
          iVar21 = FUN_0046ce40(*(int *)(param_1 + 0x160));
          iVar16 = FUN_0046ceb0(*(int *)(param_1 + 0x160),*(int *)(param_1 + 0x188));
        }
        else {
          iVar21 = 100000;
          iVar16 = 100000;
        }
        bVar7 = FUN_0046cf30(iVar16);
        if (CONCAT31(extraout_var_07,bVar7) == 0) {
          local_14 = CONCAT11(*(undefined1 *)(param_1 + 0x168),*(undefined1 *)(param_1 + 0x166));
          bVar8 = *(byte *)(param_1 + 0x16a);
        }
        else {
          iVar16 = FUN_0046d040((uint)*(ushort *)(param_1 + 0x166));
          iVar11 = FUN_0046d040((uint)*(ushort *)(param_1 + 0x168));
          local_14 = CONCAT11((char)iVar11,(char)iVar16);
          iVar16 = FUN_0046d040((uint)*(ushort *)(param_1 + 0x16a));
          bVar8 = (byte)iVar16;
        }
        bVar7 = FUN_0046cf30(iVar21);
        param_1._0_1_ = bVar8;
        if (CONCAT31(extraout_var_08,bVar7) == 0) {
          local_17 = *(byte *)(param_1 + 0x166);
          local_16 = *(byte *)(param_1 + 0x168);
          bVar8 = *(byte *)(param_1 + 0x16a);
        }
        else {
          iVar21 = FUN_0046d040((uint)*(ushort *)(param_1 + 0x166));
          local_17 = (byte)iVar21;
          iVar21 = FUN_0046d040((uint)*(ushort *)(param_1 + 0x168));
          local_16 = (byte)iVar21;
          iVar21 = FUN_0046d040((uint)*(ushort *)(param_1 + 0x16a));
          bVar8 = (byte)iVar21;
        }
      }
      local_8 = 0;
      if (uVar13 != 0) {
        uVar19 = *(ushort *)(uVar5 + 0x148);
        pbVar15 = (byte *)(iVar10 + 2);
        do {
          if (local_8 < uVar19) {
            pbVar12 = (byte *)(*(int *)(uVar5 + 0x1b0) + local_8);
            bVar9 = *pbVar12;
            if (bVar9 == 0xff) goto LAB_00470c3d;
            if (bVar9 == 0) {
              *(undefined2 *)(pbVar15 + -2) = local_14;
              bVar9 = (byte)param_1;
            }
            else {
              iVar10 = *(int *)(uVar5 + 0x198);
              uVar19 = (ushort)*(byte *)((uint)pbVar15[-2] + iVar10) * (ushort)bVar9 +
                       (0xff - (ushort)bVar9) * (ushort)local_17 + 0x80;
              iVar21 = *(int *)(uVar5 + 0x194);
              pbVar15[-2] = *(byte *)(((uint)(uVar19 >> 8) + (uint)uVar19 >> 8 & 0xff) + iVar21);
              uVar19 = (ushort)*(byte *)((uint)pbVar15[-1] + iVar10) * (ushort)*pbVar12 +
                       (0xff - (ushort)*pbVar12) * (ushort)local_16 + 0x80;
              pbVar15[-1] = *(byte *)(((uint)(uVar19 >> 8) + (uint)uVar19 >> 8 & 0xff) + iVar21);
              uVar19 = (ushort)*(byte *)((uint)*pbVar15 + iVar10) * (ushort)*pbVar12 +
                       (0xff - (ushort)*pbVar12) * (ushort)bVar8 + 0x80;
              bVar9 = *(byte *)(((uint)(uVar19 >> 8) + (uint)uVar19 >> 8 & 0xff) + iVar21);
            }
          }
          else {
LAB_00470c3d:
            iVar10 = *(int *)(uVar5 + 0x18c);
            pbVar15[-2] = *(byte *)((uint)pbVar15[-2] + iVar10);
            pbVar15[-1] = *(byte *)((uint)pbVar15[-1] + iVar10);
            bVar9 = *(byte *)((uint)*pbVar15 + iVar10);
          }
          *pbVar15 = bVar9;
          local_8 = local_8 + 1;
          uVar19 = *(ushort *)(uVar5 + 0x148);
          pbVar15 = pbVar15 + 3;
        } while ((int)local_8 < (int)local_4);
      }
      uVar13 = *(uint *)(uVar5 + 0x7c) & 0xffffdf7f;
    }
    else {
      if ((*(char *)(param_1 + 0x14f) != '\x03') ||
         ((uVar13 >> 0xc & 1) != 0 && (uVar13 & 0x600000) != 0)) goto LAB_00470eb2;
      uVar13 = (uint)*(ushort *)(param_1 + 0x140);
      if (uVar13 != 0) {
        iVar10 = *(int *)(param_1 + 0x18c);
        pbVar15 = (byte *)(*(int *)(param_1 + 0x13c) + 2);
        do {
          pbVar15[-2] = *(byte *)((uint)pbVar15[-2] + iVar10);
          pbVar15[-1] = *(byte *)((uint)pbVar15[-1] + iVar10);
          *pbVar15 = *(byte *)((uint)*pbVar15 + iVar10);
          uVar13 = uVar13 - 1;
          pbVar15 = pbVar15 + 3;
        } while (uVar13 != 0);
      }
      uVar13 = *(uint *)(param_1 + 0x7c) & 0xffffdfff;
    }
  }
  *(uint *)(uVar5 + 0x7c) = uVar13;
LAB_00470eb2:
  if (((uVar13 & 0x1008) == 8) && (*(char *)(uVar5 + 0x14f) == '\x03')) {
    bVar8 = *(byte *)(uVar5 + 0x1a4);
    uVar22 = (uint)*(ushort *)(uVar5 + 0x140);
    *(uint *)(uVar5 + 0x7c) = uVar13 & 0xfffffff7;
    if ((-(uint)bVar8 + 7 < 7) && (uVar22 != 0)) {
      pbVar15 = *(byte **)(uVar5 + 0x13c);
      uVar13 = uVar22;
      do {
        *pbVar15 = *pbVar15 >> ((char)-(uint)bVar8 + 8U & 0x1f);
        uVar13 = uVar13 - 1;
        pbVar15 = pbVar15 + 3;
      } while (uVar13 != 0);
    }
    bVar8 = *(byte *)(uVar5 + 0x1a5);
    if ((-(uint)bVar8 + 7 < 7) && (uVar22 != 0)) {
      pbVar15 = (byte *)(*(int *)(uVar5 + 0x13c) + 1);
      uVar13 = uVar22;
      do {
        *pbVar15 = *pbVar15 >> ((char)-(uint)bVar8 + 8U & 0x1f);
        uVar13 = uVar13 - 1;
        pbVar15 = pbVar15 + 3;
      } while (uVar13 != 0);
    }
    bVar8 = *(byte *)(uVar5 + 0x1a6);
    if ((-(uint)bVar8 + 7 < 7) && (uVar22 != 0)) {
      pbVar15 = (byte *)(*(int *)(uVar5 + 0x13c) + 2);
      do {
        *pbVar15 = *pbVar15 >> ((char)-(uint)bVar8 + 8U & 0x1f);
        uVar22 = uVar22 - 1;
        pbVar15 = pbVar15 + 3;
      } while (uVar22 != 0);
    }
  }
  return;
}


