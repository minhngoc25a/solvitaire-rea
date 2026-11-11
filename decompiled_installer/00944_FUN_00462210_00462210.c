// Function: FUN_00462210
// Entry: 00462210
// Size: 2088 bytes
// Thunk: false
// External: false


uint __cdecl
FUN_00462210(int param_1,int param_2,uint *param_3,uint *param_4,uint *param_5,uint *param_6)

{
  int *piVar1;
  undefined4 *puVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  undefined1 *puVar11;
  byte *pbVar12;
  byte *pbVar13;
  uint *puVar14;
  uint uVar15;
  bool bVar16;
  undefined8 uVar17;
  char *pcVar18;
  uint local_2c;
  uint local_18;
  uint local_14;
  uint *local_10;
  int local_8;
  int iStack_4;
  
  uVar10 = *param_6;
  local_2c = 0;
  uVar4 = *param_4;
  uVar9 = uVar4;
  puVar14 = param_3;
  if ((*(int *)(param_2 + 0xe4) != 0x21) && (*(int *)(param_2 + 0xe8) == 0x3030103)) {
    if ((uVar10 == 0) || (4 < uVar4)) {
      if (*(int *)(param_2 + 0x4d00) != 0) {
        puVar11 = (undefined1 *)(param_2 + 0x4d04);
        do {
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          *(undefined1 *)puVar14 = *puVar11;
          puVar11 = puVar11 + 1;
          *(int *)(param_2 + 0x4d00) = *(int *)(param_2 + 0x4d00) + -1;
          puVar14 = (uint *)((int)puVar14 + 1);
        } while (*(int *)(param_2 + 0x4d00) != 0);
      }
    }
    else if (*(int *)(param_2 + 0x4d00) != 0) {
      *param_6 = 0;
      *param_4 = 0;
      return 0;
    }
    if ((uVar10 == 0) || (uVar9 == 0)) {
      *param_6 = 0;
      *param_4 = uVar4 - uVar9;
      return (uint)(uVar10 == 0);
    }
  }
  local_14 = uVar9;
  local_10 = puVar14;
  if (*(int *)(param_2 + 0xe8) == 0x303011b) {
    iVar8 = *(int *)(param_2 + 0x4d48);
    if (iVar8 != 0) {
      uVar7 = FUN_004662f0(param_2,(int)puVar14,uVar9);
      if ((int)uVar7 < 0) goto LAB_004629f2;
      local_14 = uVar9 - uVar7;
      *(int *)(param_2 + 0x4d14) = *(int *)(param_2 + 0x4d14) + (*(int *)(param_2 + 0x4d48) - iVar8)
      ;
      if ((uVar10 == 0) || (local_14 == 0)) {
        *param_6 = 0;
        *param_4 = uVar4 - local_14;
        if (uVar10 != 0) {
          return 0;
        }
        return (uint)(*(int *)(param_2 + 0x4d48) != 0);
      }
      local_10 = (uint *)(uVar7 + (int)puVar14);
    }
    puVar14 = *(uint **)(param_2 + 0x4d3c);
    uVar9 = *(uint *)(param_2 + 0x4d40);
  }
  uVar7 = *(uint *)(param_2 + 0xe4);
  if (uVar7 < 0x30402) {
    if (uVar7 != 0x30401) {
      if (uVar7 == 0) {
        uVar7 = uVar10;
        if (uVar9 < uVar10) {
          uVar7 = uVar9;
        }
        FUN_0044c490(puVar14,param_5,uVar7);
        iVar8 = uVar10 - uVar7;
        param_5 = (uint *)(uVar9 - uVar7);
        uVar9 = (uint)(uVar10 == 0);
        local_2c = uVar9;
      }
      else {
        if ((uVar7 != 0x21) && (uVar7 != 0x30101)) goto LAB_0046266d;
        piVar1 = (int *)(param_2 + 0xf0);
        *piVar1 = (int)param_5;
        *(uint *)(param_2 + 0xf4) = uVar10;
        *(uint **)(param_2 + 0x100) = puVar14;
        *(uint *)(param_2 + 0x104) = uVar9;
        iVar8 = FUN_0049af20(piVar1,0);
        if (iVar8 != 0) {
          if (iVar8 != 1) {
            pcVar18 = "Decompression failed(%d)";
            goto LAB_004623ad;
          }
          FUN_0049b1c0((int)piVar1);
          *(undefined4 *)(param_2 + 0x148) = 0;
          local_2c = 1;
        }
        iVar8 = *(int *)(param_2 + 0xf4);
        param_5 = *(uint **)(param_2 + 0x104);
        uVar9 = local_2c;
      }
      goto LAB_00462775;
    }
    if (((*(int *)(param_2 + 0x4cf8) == 0) || (*(int *)(param_2 + 0x1bc) < 0)) || (uVar9 == 0)) {
LAB_0046266d:
      FUN_00487380(param_1,0xffffffff,0x5251d4);
      return 0xffffffe7;
    }
    *(uint **)(param_2 + 0x4cd8) = puVar14;
    *(uint **)(param_2 + 0x4cb8) = param_5;
    *(uint *)(param_2 + 0x4cc0) = uVar10;
    *(undefined4 *)(param_2 + 0x4cc4) = 0;
    *(undefined4 *)(param_2 + 0x4cd0) = 0;
    *(undefined4 *)(param_2 + 0x4cd4) = 0;
    *(uint *)(param_2 + 0x4ce0) = uVar9;
    *(undefined4 *)(param_2 + 0x4ce4) = 0;
    if (*(int *)(param_2 + 0x1bc) == 0) {
      *(int *)(param_2 + 0x4cac) = param_1;
      *(undefined1 **)(param_2 + 0x4cb0) = &LAB_004667a0;
      *(int **)(param_2 + 0x4ca8) = (int *)(param_2 + 0x4cac);
      iVar8 = (*(code *)PTR_FUN_00518f68)(param_2 + 0x4c8c);
      if (iVar8 == 0) {
        *(undefined4 *)(param_2 + 0x1bc) = 0xffffffff;
        FUN_00487380(param_1,0xffffffff,0x525518);
        return 0xffffffe7;
      }
      if (*(int *)(param_2 + 0x4cf0) != 0) {
LAB_0046252c:
        *(undefined4 *)(param_2 + 0x1bc) = 0xffffffff;
        return 0xffffffe7;
      }
      *(undefined4 *)(param_2 + 0x1bc) = 1;
    }
    if (uVar10 == 0) {
      local_8 = *(int *)(param_2 + 200);
      iStack_4 = *(int *)(param_2 + 0xcc);
    }
    else {
      iStack_4 = 0;
      local_8 = 0;
    }
    do {
      iVar8 = (*(code *)PTR_FUN_00518f70)(param_2 + 0x1c0,param_2 + 0x4c8c);
      if (iVar8 < 0) {
        *(undefined4 *)(param_2 + 0x1bc) = 0xffffffff;
        FUN_00487380(param_1,0x2a,0x528034);
        return 0xffffffe7;
      }
      if (*(int *)(param_2 + 0x4cf0) != 0) goto LAB_0046252c;
      **(undefined1 **)(param_2 + 0x4cd8) = (char)iVar8;
      iVar5 = *(int *)(param_2 + 0x4ce0);
      *(int *)(param_2 + 0x4cd8) = *(int *)(param_2 + 0x4cd8) + 1;
      iVar8 = *(int *)(param_2 + 0x4ce4) - (uint)(iVar5 == 0);
      puVar14 = (uint *)(param_2 + 0x4ce8);
      uVar9 = *puVar14;
      *puVar14 = *puVar14 + 1;
      *(int *)(param_2 + 0x4ce0) = iVar5 + -1;
      *(int *)(param_2 + 0x4cec) = *(int *)(param_2 + 0x4cec) + (uint)(0xfffffffe < uVar9);
      *(int *)(param_2 + 0x4ce4) = iVar8;
      if (local_8 != 0 || iStack_4 != 0) {
        bVar16 = local_8 != 0;
        local_8 = local_8 + -1;
        iStack_4 = iStack_4 + -1 + (uint)bVar16;
      }
    } while ((iVar5 + -1 != 0 || iVar8 != 0) &&
            ((*(int *)(param_2 + 0x4cc0) != 0 || *(int *)(param_2 + 0x4cc4) != 0 ||
             (local_8 != 0 || iStack_4 != 0))));
    iVar8 = *(int *)(param_2 + 0x4cc0);
    param_5 = (uint *)(iVar5 + -1);
  }
  else {
    if (uVar7 == 0x40108) {
      puVar2 = (undefined4 *)(param_2 + 0x180);
      *puVar2 = param_5;
      *(uint *)(param_2 + 0x184) = uVar10;
      *(uint **)(param_2 + 0x18c) = puVar14;
      *(uint *)(param_2 + 400) = uVar9;
      uVar17 = FUN_00489550(puVar2,uVar10,puVar2,0);
      if ((int)uVar17 == 0) {
        uVar9 = 0;
      }
      else {
        if ((int)uVar17 != 1) {
          pcVar18 = "File decompression failed (%d)";
LAB_004623ad:
          FUN_00487380(param_1,0xffffffff,(int)pcVar18);
          return 0xffffffe7;
        }
        uVar9 = 1;
        local_2c = 1;
      }
      iVar8 = *(int *)(param_2 + 0x184);
      param_5 = *(uint **)(param_2 + 400);
    }
    else {
      if (uVar7 != 0x40202) goto LAB_0046266d;
      puVar2 = (undefined4 *)(param_2 + 0x14c);
      *puVar2 = param_5;
      *(uint *)(param_2 + 0x150) = uVar10;
      *(uint **)(param_2 + 0x15c) = puVar14;
      *(uint *)(param_2 + 0x160) = uVar9;
      iVar8 = FUN_00486050((uint)puVar2);
      if (iVar8 == 0) {
        iVar8 = *(int *)(param_2 + 0x150);
        uVar9 = 0;
        param_5 = *(uint **)(param_2 + 0x160);
      }
      else {
        if (iVar8 != 4) {
          pcVar18 = "bzip decompression failed";
LAB_004626d0:
          FUN_00487380(param_1,0xffffffff,(int)pcVar18);
          return 0xffffffe7;
        }
        iVar8 = FUN_00486150((int)puVar2);
        if (iVar8 != 0) {
          pcVar18 = "Failed to clean up decompressor";
          goto LAB_004626d0;
        }
        iVar8 = *(int *)(param_2 + 0x150);
        uVar9 = 1;
        param_5 = *(uint **)(param_2 + 0x160);
        *(undefined4 *)(param_2 + 0x17c) = 0;
        local_2c = 1;
      }
    }
LAB_00462775:
    if ((uVar9 != 0) && (uVar9 != 1)) {
      return uVar9;
    }
  }
  *param_6 = uVar10 - iVar8;
  uVar9 = uVar4 - (int)param_5;
  *param_4 = uVar9;
  if ((*(int *)(param_2 + 0xe4) != 0x21) && (*(int *)(param_2 + 0xe8) == 0x3030103)) {
    uVar15 = 0;
    uVar7 = uVar15;
    if (4 < uVar9) {
      iVar8 = *(int *)(param_2 + 0x4d10);
      local_18 = *(uint *)(param_2 + 0x4d0c);
      pbVar12 = (byte *)((int)param_3 + (uVar9 - 4));
      uVar9 = *(uint *)(param_2 + 0x4d08);
      while( true ) {
        for (pbVar13 = (byte *)((int)param_3 + uVar15);
            (pbVar13 < pbVar12 && ((*pbVar13 & 0xfe) != 0xe8)); pbVar13 = pbVar13 + 1) {
        }
        uVar7 = (int)pbVar13 - (int)param_3;
        if (pbVar12 <= pbVar13) break;
        if (uVar7 - uVar9 < 4) {
          uVar9 = local_18 << ((char)(uVar7 - uVar9) - 1U & 0x1f);
          local_18 = uVar9 & 7;
          if ((local_18 == 0) ||
             ((((&DAT_0050d078)[local_18] != '\0' &&
               (pbVar13[4 - (uint)(byte)(&DAT_0050d080)[local_18]] != 0)) &&
              (pbVar13[4 - (uint)(byte)(&DAT_0050d080)[local_18]] != 0xff)))) goto LAB_0046282c;
          local_18 = (uVar9 & 3) * 2 | 1;
          uVar15 = uVar7 + 1;
          uVar9 = uVar7;
        }
        else {
          local_18 = 0;
LAB_0046282c:
          bVar3 = pbVar13[4];
          if ((bVar3 == 0) || (bVar3 == 0xff)) {
            uVar9 = (CONCAT31(CONCAT21(CONCAT11(bVar3,pbVar13[3]),pbVar13[2]),pbVar13[1]) - iVar8) -
                    uVar7;
            if (local_18 != 0) {
              for (; (cVar6 = (char)(uVar9 >> ((&DAT_0050d080)[local_18] * -8 + 0x18U & 0x1f)),
                     cVar6 == '\0' || (cVar6 == -1));
                  uVar9 = ((uVar9 ^ (1 << ((&DAT_0050d080)[local_18] * -8 + 0x20U & 0x1f)) - 1U) -
                          iVar8) - uVar7) {
              }
            }
            pbVar13[1] = (byte)uVar9;
            pbVar13[4] = -((byte)(uVar9 >> 0x18) & 1);
            pbVar13[3] = (byte)(uVar9 >> 0x10);
            uVar15 = uVar7 + 5;
            pbVar13[2] = (byte)(uVar9 >> 8);
            uVar9 = uVar7;
          }
          else {
            local_18 = (local_18 & 3) * 2 | 1;
            uVar15 = uVar7 + 1;
            uVar9 = uVar7;
          }
        }
      }
      *(int *)(param_2 + 0x4d10) = *(int *)(param_2 + 0x4d10) + uVar7;
      *(uint *)(param_2 + 0x4d08) = uVar9;
      *(uint *)(param_2 + 0x4d0c) = local_18;
    }
    uVar9 = *param_4 - uVar7;
    *(uint *)(param_2 + 0x4d00) = uVar9;
    if (((uVar9 - 1 < 4) && (uVar10 != 0)) && (local_2c != 1)) {
      FUN_0044c490((uint *)(param_2 + 0x4d04),(uint *)((int)param_3 + uVar7),uVar9);
      *param_4 = uVar7;
    }
    else {
      *(undefined4 *)(param_2 + 0x4d00) = 0;
    }
  }
  if (*(int *)(param_2 + 0xe8) == 0x303011b) {
    uVar10 = *(uint *)(param_2 + 0x4d14);
    uVar9 = *(int *)(param_2 + 0x4d40) - (int)param_5;
    *(uint *)(param_2 + 0x4d44) = uVar9;
    if (uVar10 < uVar9) {
      *(uint *)(param_2 + 0x4d44) = uVar10;
      uVar9 = uVar10;
    }
    *(uint *)(param_2 + 0x4d48) = uVar9;
    uVar10 = FUN_004662f0(param_2,(int)local_10,local_14);
    if ((int)uVar10 < 0) {
LAB_004629f2:
      FUN_00487380(param_1,0xffffffff,0x527f64);
      return 0xffffffe7;
    }
    *(int *)(param_2 + 0x4d14) =
         *(int *)(param_2 + 0x4d14) + (*(int *)(param_2 + 0x4d48) - *(int *)(param_2 + 0x4d44));
    *param_4 = (uVar10 - local_14) + uVar4;
  }
  return local_2c;
}


