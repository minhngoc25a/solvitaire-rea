// Function: FUN_004d8080
// Entry: 004d8080
// Size: 3171 bytes
// Thunk: false
// External: false


/* WARNING: Removing unreachable block (ram,0x004d8841) */

uint __cdecl FUN_004d8080(int param_1,uint param_2,uint param_3,int param_4,int param_5)

{
  int *piVar1;
  byte bVar2;
  byte bVar3;
  ushort uVar4;
  undefined4 uVar5;
  int iVar6;
  byte *pbVar7;
  byte *pbVar8;
  uint uVar9;
  byte bVar10;
  int iVar11;
  int iVar12;
  byte bVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  byte *pbVar17;
  uint uVar18;
  byte *pbVar19;
  uint *puVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  longlong lVar23;
  longlong lVar24;
  byte *local_48;
  int local_44;
  uint *local_3c;
  byte *local_38;
  uint local_34;
  uint local_30;
  int local_24;
  int local_20;
  uint local_1c;
  undefined4 *local_18;
  uint local_14;
  uint local_10;
  int local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_30 = param_3;
  local_48 = (byte *)(param_1 + param_2);
  local_20 = param_1;
  if (param_1 == 0) {
    local_48 = (byte *)0x0;
  }
  local_24 = 0;
  local_1c = param_3;
  local_18 = (undefined4 *)0x0;
  local_10 = param_2;
  local_14 = param_2;
  local_c = 0xe2;
  if (param_5 == 2) {
    local_34 = *(uint *)(param_3 + 0x74);
    local_30 = local_34;
    if (local_34 == 0) {
      local_30 = *(uint *)(param_3 + 0x10);
    }
    param_3 = *(uint *)(param_3 + 0x10);
    local_44 = *(int *)(local_30 + 0xc);
  }
  else {
    local_44 = *(int *)(param_3 + 0xc);
    local_34 = 0;
    if (param_5 == 3) {
      uVar18 = FUN_0048bcc0(*(int *)(local_44 + 0x10));
      bVar3 = ((short)uVar18 == -0x6000) * '\x04' + 0x89;
      bVar2 = bVar3 | 0x40;
      if (*(int *)(local_30 + 0x74) == 0) {
        bVar2 = bVar3;
      }
      bVar3 = bVar2 | 0x10;
      if (*(int *)(local_30 + 0x78) == 0) {
        bVar3 = bVar2;
      }
      uVar18 = FUN_0048bcc0(*(int *)(local_44 + 0x10));
      if ((short)uVar18 != 0x2000) {
        local_34 = 0;
        param_3 = local_30;
        uVar18 = FUN_0048bcc0(*(int *)(local_44 + 0x10));
        if ((short)uVar18 != 0x6000) goto LAB_004d81fb;
      }
      bVar3 = bVar3 | 2;
      local_34 = 0;
      param_3 = local_30;
      goto LAB_004d81fb;
    }
  }
  bVar3 = 0xa1;
  if (local_34 == 0) {
    bVar3 = 0x81;
  }
  if ((param_5 == 1) && (local_30 == *(uint *)(local_30 + 0x10))) {
    if (local_48 != (byte *)0x0) {
      local_48[1] = 0x53;
      local_48[2] = 0x50;
      local_48[3] = 7;
      local_48[4] = 1;
      local_48[5] = 0xbe;
      local_48[6] = 0xef;
      local_48 = local_48 + 7;
      *local_48 = 0;
    }
    local_14 = param_2 + 7;
  }
LAB_004d81fb:
  if ((int)(local_c - local_14) < 5) {
    local_48 = (byte *)FUN_004d7e60(&local_24,5);
  }
  if (local_48 != (byte *)0x0) {
    local_48[1] = 0x52;
    local_48[2] = 0x52;
    local_48[3] = 5;
    local_48[4] = 1;
    local_48 = local_48 + 5;
    *local_48 = bVar3;
  }
  if ((local_24 != 0) && (iVar6 = *(int *)(*(int *)(local_1c + 0x10) + 0x84), iVar6 != 0)) {
    piVar1 = (int *)(iVar6 + 4);
    *piVar1 = *piVar1 + 5;
  }
  local_14 = local_14 + 5;
  if ((bVar3 & 8) != 0) {
    uVar18 = *(uint *)(local_44 + 0x24);
    puVar20 = *(uint **)(local_44 + 0x20);
    if ((int)(local_c - local_14) < 6) {
      local_48 = (byte *)FUN_004d7e60(&local_24,6);
    }
    if (local_48 != (byte *)0x0) {
      local_48[1] = 0x4e;
      local_48[2] = 0x4d;
      local_48[4] = 1;
    }
    uVar16 = local_c - local_14;
    if (0xff < uVar16) {
      uVar16 = 0xff;
    }
    if (uVar16 < uVar18 + 5) {
      do {
        if (local_48 != (byte *)0x0) {
          local_48[3] = (byte)uVar16;
          local_48[5] = 1;
          FUN_0044c490((uint *)(local_48 + 6),puVar20,uVar16 - 5);
          local_48 = local_48 + uVar16;
        }
        puVar20 = (uint *)((int)puVar20 + (uVar16 - 5));
        uVar18 = uVar18 + (5 - uVar16);
        if ((local_24 != 0) && (iVar6 = *(int *)(*(int *)(local_1c + 0x10) + 0x84), iVar6 != 0)) {
          piVar1 = (int *)(iVar6 + 4);
          *piVar1 = *piVar1 + uVar16;
        }
        local_14 = local_14 + uVar16;
        if ((int)(local_c - local_14) < 6) {
          local_48 = (byte *)FUN_004d7e60(&local_24,6);
          uVar16 = local_c - local_14;
          if (0xff < uVar16) {
            uVar16 = 0xff;
          }
        }
        if (local_48 != (byte *)0x0) {
          local_48[1] = 0x4e;
          local_48[2] = 0x4d;
          local_48[4] = 1;
        }
      } while (uVar16 < uVar18 + 5);
    }
    iVar6 = uVar18 + 5;
    if (local_48 != (byte *)0x0) {
      local_48[3] = (byte)iVar6;
      local_48[5] = 0;
      FUN_0044c490((uint *)(local_48 + 6),puVar20,uVar18);
      local_48 = local_48 + iVar6;
    }
    if ((local_24 != 0) && (iVar15 = *(int *)(*(int *)(local_1c + 0x10) + 0x84), iVar15 != 0)) {
      piVar1 = (int *)(iVar15 + 4);
      *piVar1 = *piVar1 + iVar6;
    }
    local_14 = local_14 + iVar6;
  }
  if ((int)(local_c - local_14) < 0x2c) {
    local_48 = (byte *)FUN_004d7e60(&local_24,0x2c);
  }
  if (local_48 != (byte *)0x0) {
    uVar4 = FUN_0048bfb0(*(int *)(local_44 + 0x10));
    uVar21 = FUN_0048c250(*(int *)(local_44 + 0x10));
    uVar22 = FUN_0048bea0(*(int *)(local_44 + 0x10));
    param_2 = (uint)uVar22;
    if ((*(uint *)(param_4 + 0x10228) & 0x1800000) == 0x1000000) {
      uVar4 = uVar4 & 0xf16d | 0x16d;
    }
    local_48[1] = 0x50;
    local_48[2] = 0x58;
    local_48[3] = 0x2c;
    local_48[4] = 1;
    local_48[5] = (byte)uVar4;
    bVar2 = (byte)(uVar4 >> 8);
    local_48[6] = bVar2;
    local_48[7] = 0;
    local_48[8] = 0;
    local_48[9] = 0;
    local_48[10] = 0;
    local_48[0xb] = bVar2;
    local_48[0xc] = (byte)uVar4;
    uVar5 = FUN_0048bff0(*(int *)(local_44 + 0x10));
    bVar2 = (byte)((uint)uVar5 >> 0x18);
    local_48[0x10] = bVar2;
    local_48[0x11] = bVar2;
    local_48[0xd] = (byte)uVar5;
    local_48[0x14] = (byte)uVar5;
    bVar10 = (byte)((uint)uVar5 >> 8);
    local_48[0xe] = bVar10;
    bVar2 = (byte)((uint)uVar5 >> 0x10);
    local_48[0xf] = bVar2;
    local_48[0x12] = bVar2;
    local_48[0x13] = bVar10;
    bVar2 = (byte)((ulonglong)uVar21 >> 0x18);
    local_48[0x18] = bVar2;
    local_48[0x19] = bVar2;
    local_48[0x15] = (byte)uVar21;
    local_48[0x1c] = (byte)uVar21;
    bVar10 = (byte)((ulonglong)uVar21 >> 8);
    local_48[0x16] = bVar10;
    bVar2 = (byte)((ulonglong)uVar21 >> 0x10);
    local_48[0x17] = bVar2;
    local_48[0x1a] = bVar2;
    local_48[0x1b] = bVar10;
    bVar2 = (byte)(param_2 >> 0x18);
    local_48[0x20] = bVar2;
    local_48[0x21] = bVar2;
    local_48[0x1d] = (byte)param_2;
    bVar10 = (byte)(param_2 >> 8);
    local_48[0x1e] = bVar10;
    bVar2 = (byte)(param_2 >> 0x10);
    local_48[0x1f] = bVar2;
    local_48[0x22] = bVar2;
    local_48[0x23] = bVar10;
    local_48[0x24] = (byte)param_2;
    if ((*(byte *)(param_3 + 0x88) & 2) == 0) {
      if (*(int *)(local_44 + 0xc) == 0) {
        iVar6 = *(int *)(local_44 + 0x68);
      }
      else {
        iVar6 = *(int *)(*(int *)(local_44 + 0xc) + 0x68);
      }
      FUN_004de2c0(local_48 + 0x25,*(undefined4 *)(iVar6 + 0x14));
    }
    else {
      uVar5 = *(undefined4 *)(param_3 + 0x58);
      local_48[0x25] = (byte)uVar5;
      bVar13 = (byte)((uint)uVar5 >> 8);
      local_48[0x26] = bVar13;
      bVar10 = (byte)((uint)uVar5 >> 0x10);
      local_48[0x27] = bVar10;
      bVar2 = (byte)((uint)uVar5 >> 0x18);
      local_48[0x28] = bVar2;
      local_48[0x29] = bVar2;
      local_48[0x2a] = bVar10;
      local_48[0x2b] = bVar13;
      local_48[0x2c] = (byte)uVar5;
    }
    local_48 = local_48 + 0x2c;
  }
  if ((local_24 != 0) && (iVar6 = *(int *)(*(int *)(local_1c + 0x10) + 0x84), iVar6 != 0)) {
    piVar1 = (int *)(iVar6 + 4);
    *piVar1 = *piVar1 + 0x2c;
  }
  local_14 = local_14 + 0x2c;
  pbVar17 = local_48;
  if ((bVar3 & 4) != 0) {
    if ((int)(local_c - local_14) < 7) {
      local_48 = (byte *)FUN_004d7e60(&local_24,7);
    }
    pbVar19 = *(byte **)(local_44 + 0x38);
    bVar2 = 0;
    pbVar17 = local_48;
LAB_004d8587:
    if (pbVar17 != (byte *)0x0) {
      pbVar17[4] = 1;
      pbVar17[1] = 0x53;
      pbVar17[2] = 0x4c;
    }
    iVar6 = local_c - local_14;
    param_2 = param_2 & 0xffffff00;
    if (0xff < iVar6) {
      iVar6 = 0xff;
    }
    if (pbVar17 == (byte *)0x0) {
      pbVar7 = (byte *)0x0;
    }
    else {
      pbVar7 = pbVar17 + 6;
    }
    local_3c = (uint *)0x0;
    local_38 = (byte *)0x0;
    pbVar8 = (byte *)0x0;
    iVar15 = 0;
    if (*pbVar19 != 0) {
      iVar11 = 0xb;
      iVar14 = 0;
      do {
        pbVar8 = local_38;
        iVar15 = iVar14;
        pbVar17 = local_48;
        if (iVar6 <= iVar11) break;
        pbVar8 = pbVar7;
        if (bVar2 == 0) {
          if (*pbVar19 == 0x2f) {
            if (pbVar7 != (byte *)0x0) {
              pbVar7[1] = 0;
              pbVar8 = pbVar7 + 2;
              *pbVar7 = 8;
              local_38 = pbVar7;
            }
            iVar15 = iVar14 + 2;
            iVar12 = iVar11 + 2;
            pbVar19 = pbVar19 + 1;
            bVar2 = 0x2f;
            local_3c = (uint *)0x0;
          }
          else {
LAB_004d862a:
            if (((*pbVar19 != 0x2e) || (pbVar19[1] != 0x2e)) ||
               ((pbVar19[2] != 0x2f && (pbVar19[2] != 0)))) goto LAB_004d8644;
LAB_004d866f:
            if (pbVar7 != (byte *)0x0) {
              pbVar7[1] = 0;
              pbVar8 = pbVar7 + 2;
              *pbVar7 = 4;
              local_38 = pbVar7;
            }
            iVar15 = iVar14 + 2;
            iVar12 = iVar11 + 2;
            pbVar7 = pbVar19 + 2;
            if (*pbVar19 != 0x2f) goto LAB_004d8700;
            pbVar19 = pbVar19 + 3;
            bVar2 = 0x2e;
            local_3c = (uint *)0x0;
          }
        }
        else {
          if (bVar2 == 0x2f) goto LAB_004d862a;
LAB_004d8644:
          uVar18 = (uint)CONCAT11(*pbVar19,bVar2);
          if (((*pbVar19 == 0x2f) && (pbVar19[1] == 0x2e)) && (pbVar19[2] == 0x2e)) {
            uVar18 = (uint)CONCAT11(*pbVar19,bVar2);
            if ((pbVar19[3] == 0x2f) || (pbVar19[3] == 0)) goto LAB_004d866f;
          }
          if ((((char)uVar18 == '\0') || ((char)uVar18 == '/')) && ((char)(uVar18 >> 8) == '.')) {
            bVar2 = pbVar19[1];
            uVar18 = CONCAT31((int3)(uVar18 >> 8),bVar2);
            if ((bVar2 != 0x2f) && (bVar2 != 0)) goto LAB_004d86bb;
          }
          else {
LAB_004d86bb:
            if ((((char)(uVar18 >> 8) != '/') || (pbVar19[1] != 0x2e)) ||
               ((pbVar19[2] != 0x2f && (pbVar19[2] != 0)))) {
              bVar2 = *pbVar19;
              if ((bVar2 == 0x2f) || (iVar12 = iVar11, local_3c == (uint *)0x0)) {
                if (pbVar7 == (byte *)0x0) {
                  local_3c = &param_2;
                }
                else {
                  local_3c = (uint *)(pbVar7 + 1);
                  *pbVar7 = 0;
                  *(byte *)local_3c = 0;
                  pbVar8 = pbVar7 + 2;
                  local_38 = pbVar7;
                }
                bVar2 = *pbVar19;
                iVar15 = iVar14 + 2;
                iVar12 = iVar11 + 2;
                if (bVar2 == 0x2f) {
                  pbVar19 = pbVar19 + 1;
                  goto LAB_004d8759;
                }
              }
              pbVar19 = pbVar19 + 1;
              if (pbVar8 != (byte *)0x0) {
                *pbVar8 = bVar2;
                pbVar8 = pbVar8 + 1;
                *(byte *)local_3c = (byte)*local_3c + 1;
              }
              iVar15 = iVar15 + 1;
              iVar12 = iVar12 + 1;
              goto LAB_004d8759;
            }
          }
          if (pbVar7 != (byte *)0x0) {
            pbVar7[1] = 0;
            pbVar8 = pbVar7 + 2;
            *pbVar7 = 2;
            local_38 = pbVar7;
          }
          iVar15 = iVar14 + 2;
          iVar12 = iVar11 + 2;
          pbVar7 = pbVar19 + 1;
          if (*pbVar19 == 0x2f) {
            pbVar19 = pbVar19 + 2;
            bVar2 = 0x2e;
            local_3c = (uint *)0x0;
          }
          else {
LAB_004d8700:
            pbVar19 = pbVar7;
            iVar15 = iVar14 + 2;
            iVar12 = iVar11 + 2;
            bVar2 = 0x2e;
            local_3c = (uint *)0x0;
          }
        }
LAB_004d8759:
        pbVar7 = pbVar8;
        iVar11 = iVar12;
        pbVar8 = local_38;
        iVar14 = iVar15;
      } while (*pbVar19 != 0);
    }
    iVar15 = iVar15 + 5;
    if (*pbVar19 != 0) {
      if (pbVar17 != (byte *)0x0) {
        *pbVar8 = *pbVar8 | 1;
        pbVar17[3] = (byte)iVar15;
        pbVar17[5] = 1;
        pbVar17 = pbVar17 + iVar15;
        local_48 = pbVar17;
      }
      if ((local_24 != 0) && (iVar6 = *(int *)(*(int *)(local_1c + 0x10) + 0x84), iVar6 != 0)) {
        piVar1 = (int *)(iVar6 + 4);
        *piVar1 = *piVar1 + iVar15;
      }
      local_14 = local_14 + iVar15;
      if ((int)(local_c - local_14) < 0xb) {
        pbVar17 = (byte *)FUN_004d7e60(&local_24,0xb);
        local_48 = pbVar17;
      }
      goto LAB_004d8587;
    }
    if (pbVar17 != (byte *)0x0) {
      pbVar17[3] = (byte)iVar15;
      pbVar17[5] = 0;
      pbVar17 = pbVar17 + iVar15;
    }
    if ((local_24 != 0) && (iVar6 = *(int *)(*(int *)(local_1c + 0x10) + 0x84), iVar6 != 0)) {
      piVar1 = (int *)(iVar6 + 4);
      *piVar1 = *piVar1 + iVar15;
    }
    local_14 = local_14 + iVar15;
  }
  bVar2 = 0;
  uVar16 = 5;
  param_3 = param_3 & 0xffffff00;
  uVar18 = FUN_0048bc00(*(int *)(local_44 + 0x10));
  if (uVar18 != 0) {
    lVar23 = FUN_0048bbe0(*(int *)(local_44 + 0x10));
    lVar24 = FUN_0048bfc0(*(int *)(local_44 + 0x10));
    if (lVar23 <= lVar24) {
      bVar2 = 1;
      uVar16 = 0xc;
      param_3 = CONCAT31(param_3._1_3_,1);
    }
  }
  uVar9 = FUN_0048bfe0(*(int *)(local_44 + 0x10));
  bVar2 = bVar2 | 2;
  uVar18 = uVar16 + 7;
  if (uVar9 == 0) {
    bVar2 = (byte)param_3;
    uVar18 = uVar16;
  }
  uVar9 = FUN_0048bbd0(*(int *)(local_44 + 0x10));
  bVar10 = bVar2 | 4;
  uVar16 = uVar18 + 7;
  if (uVar9 == 0) {
    bVar10 = bVar2;
    uVar16 = uVar18;
  }
  param_3 = (uint)bVar10;
  uVar18 = FUN_0048bc30(*(int *)(local_44 + 0x10));
  bVar2 = (byte)param_3;
  param_3 = uVar16 + 7;
  bVar10 = bVar2 | 8;
  if (uVar18 == 0) {
    param_3 = uVar16;
    bVar10 = bVar2;
  }
  if ((int)(local_c - local_14) < (int)param_3) {
    pbVar17 = (byte *)FUN_004d7e60(&local_24,param_3);
  }
  pbVar19 = (byte *)0x0;
  if (pbVar17 != (byte *)0x0) {
    pbVar17[1] = 0x54;
    pbVar17[2] = 0x46;
    pbVar17[3] = (byte)param_3;
    pbVar17[4] = 1;
    pbVar19 = pbVar17 + 5;
    *pbVar19 = bVar10;
    if ((bVar10 & 1) != 0) {
      FUN_0048bbe0(*(int *)(local_44 + 0x10));
      FUN_004de520(pbVar17 + 6);
      pbVar19 = pbVar17 + 0xc;
    }
    if ((bVar10 & 2) != 0) {
      FUN_0048bfc0(*(int *)(local_44 + 0x10));
      FUN_004de520(pbVar19 + 1);
      pbVar19 = pbVar19 + 7;
    }
    if ((bVar10 & 4) != 0) {
      FUN_0048bbb0(*(int *)(local_44 + 0x10));
      FUN_004de520(pbVar19 + 1);
      pbVar19 = pbVar19 + 7;
    }
    if ((bVar10 & 8) != 0) {
      FUN_0048bc10(*(int *)(local_44 + 0x10));
      FUN_004de520(pbVar19 + 1);
      pbVar19 = pbVar19 + 7;
    }
  }
  if ((local_24 != 0) && (iVar6 = *(int *)(*(int *)(local_1c + 0x10) + 0x84), iVar6 != 0)) {
    piVar1 = (int *)(iVar6 + 4);
    *piVar1 = *piVar1 + param_3;
  }
  local_14 = param_3 + local_14;
  if ((bVar3 & 0x40) != 0) {
    if ((int)(local_c - local_14) < 4) {
      pbVar19 = (byte *)FUN_004d7e60(&local_24,4);
    }
    if (pbVar19 != (byte *)0x0) {
      pbVar19[1] = 0x52;
      pbVar19[2] = 0x45;
      pbVar19[3] = 4;
      pbVar19 = pbVar19 + 4;
      *pbVar19 = 1;
    }
    if ((local_24 != 0) && (iVar6 = *(int *)(*(int *)(local_1c + 0x10) + 0x84), iVar6 != 0)) {
      piVar1 = (int *)(iVar6 + 4);
      *piVar1 = *piVar1 + 4;
    }
    local_14 = local_14 + 4;
  }
  if ((bVar3 & 0x20) != 0) {
    if ((int)(local_c - local_14) < 0xc) {
      pbVar19 = (byte *)FUN_004d7e60(&local_24,0xc);
    }
    if (pbVar19 != (byte *)0x0) {
      pbVar19[1] = 0x50;
      pbVar19[2] = 0x4c;
      pbVar19[3] = 0xc;
      pbVar19[4] = 1;
      uVar5 = *(undefined4 *)(local_34 + 0x58);
      pbVar19[5] = (byte)uVar5;
      pbVar19[0xc] = (byte)uVar5;
      bVar13 = (byte)((uint)uVar5 >> 8);
      pbVar19[6] = bVar13;
      bVar10 = (byte)((uint)uVar5 >> 0x10);
      pbVar19[7] = bVar10;
      bVar2 = (byte)((uint)uVar5 >> 0x18);
      pbVar19[8] = bVar2;
      pbVar19[9] = bVar2;
      pbVar19[10] = bVar10;
      pbVar19[0xb] = bVar13;
      pbVar19 = pbVar19 + 0xc;
    }
    if ((local_24 != 0) && (iVar6 = *(int *)(*(int *)(local_1c + 0x10) + 0x84), iVar6 != 0)) {
      piVar1 = (int *)(iVar6 + 4);
      *piVar1 = *piVar1 + 0xc;
    }
    local_14 = local_14 + 0xc;
  }
  if ((bVar3 & 0x10) != 0) {
    if ((int)(local_c - local_14) < 0xc) {
      pbVar19 = (byte *)FUN_004d7e60(&local_24,0xc);
    }
    if (pbVar19 != (byte *)0x0) {
      pbVar19[1] = 0x43;
      pbVar19[2] = 0x4c;
      pbVar19[3] = 0xc;
      pbVar19[4] = 1;
      uVar5 = *(undefined4 *)(*(int *)(local_30 + 0x78) + 0x58);
      pbVar19[5] = (byte)uVar5;
      pbVar19[0xc] = (byte)uVar5;
      bVar13 = (byte)((uint)uVar5 >> 8);
      pbVar19[6] = bVar13;
      bVar10 = (byte)((uint)uVar5 >> 0x10);
      pbVar19[7] = bVar10;
      bVar2 = (byte)((uint)uVar5 >> 0x18);
      pbVar19[8] = bVar2;
      pbVar19[9] = bVar2;
      pbVar19[10] = bVar10;
      pbVar19[0xb] = bVar13;
      pbVar19 = pbVar19 + 0xc;
    }
    if ((local_24 != 0) && (iVar6 = *(int *)(*(int *)(local_1c + 0x10) + 0x84), iVar6 != 0)) {
      piVar1 = (int *)(iVar6 + 4);
      *piVar1 = *piVar1 + 0xc;
    }
    local_14 = local_14 + 0xc;
  }
  if ((bVar3 & 2) != 0) {
    if ((int)(local_c - local_14) < 0x14) {
      pbVar19 = (byte *)FUN_004d7e60(&local_24,0x14);
    }
    if (pbVar19 != (byte *)0x0) {
      pbVar19[1] = 0x50;
      pbVar19[2] = 0x4e;
      pbVar19[3] = 0x14;
      pbVar19[4] = 1;
      uVar18 = FUN_0048c110(*(int *)(local_44 + 0x10));
      pbVar19[5] = 0;
      pbVar19[6] = 0;
      pbVar19[7] = 0;
      pbVar19[8] = 0;
      pbVar19[9] = 0;
      pbVar19[10] = 0;
      pbVar19[0xb] = 0;
      pbVar19[0xc] = 0;
      pbVar19[0xd] = (byte)uVar18;
      bVar10 = (byte)(uVar18 >> 8);
      pbVar19[0xe] = bVar10;
      bVar2 = (byte)(uVar18 >> 0x10);
      pbVar19[0xf] = bVar2;
      bVar3 = (byte)(uVar18 >> 0x18);
      pbVar19[0x10] = bVar3;
      pbVar19[0x11] = bVar3;
      pbVar19[0x12] = bVar2;
      pbVar19[0x13] = bVar10;
      pbVar19[0x14] = (byte)uVar18;
      pbVar19 = pbVar19 + 0x14;
    }
    if ((local_24 != 0) && (iVar6 = *(int *)(*(int *)(local_1c + 0x10) + 0x84), iVar6 != 0)) {
      piVar1 = (int *)(iVar6 + 4);
      *piVar1 = *piVar1 + 0x14;
    }
    local_14 = local_14 + 0x14;
  }
  if (*(char *)(local_44 + 0x74) != '\0') {
    if ((int)(local_c - local_14) < 0x10) {
      pbVar19 = (byte *)FUN_004d7e60(&local_24,0x10);
    }
    if (pbVar19 != (byte *)0x0) {
      pbVar19[1] = 0x5a;
      pbVar19[2] = 0x46;
      pbVar19[3] = 0x10;
      pbVar19[4] = 1;
      pbVar19[5] = 0x70;
      pbVar19[6] = 0x7a;
      pbVar19[7] = *(byte *)(local_44 + 0x74);
      pbVar19[8] = *(byte *)(local_44 + 0x75);
      uVar5 = *(undefined4 *)(local_44 + 0x78);
      pbVar19[9] = (byte)uVar5;
      bVar10 = (byte)((uint)uVar5 >> 8);
      pbVar19[10] = bVar10;
      bVar2 = (byte)((uint)uVar5 >> 0x10);
      pbVar19[0xb] = bVar2;
      bVar3 = (byte)((uint)uVar5 >> 0x18);
      pbVar19[0xc] = bVar3;
      pbVar19[0xd] = bVar3;
      pbVar19[0xe] = bVar2;
      pbVar19[0xf] = bVar10;
      pbVar19[0x10] = (byte)uVar5;
      pbVar19 = pbVar19 + 0x10;
    }
    if ((local_24 != 0) && (iVar6 = *(int *)(*(int *)(local_1c + 0x10) + 0x84), iVar6 != 0)) {
      piVar1 = (int *)(iVar6 + 4);
      *piVar1 = *piVar1 + 0x10;
    }
    local_14 = local_14 + 0x10;
  }
  if ((param_5 == 1) && (local_30 == *(uint *)(local_30 + 0x10))) {
    if (pbVar19 != (byte *)0x0) {
      FUN_004de5b0((undefined4 *)(pbVar19 + 1),*(undefined4 *)(param_4 + 0x10c),0,0xed);
    }
    if ((local_24 != 0) && (iVar6 = *(int *)(*(int *)(local_1c + 0x10) + 0x84), iVar6 != 0)) {
      piVar1 = (int *)(iVar6 + 4);
      *piVar1 = *piVar1 + 0x1c;
    }
    local_14 = local_14 + 0x1c;
  }
  iVar6 = 0;
  if ((local_14 & 1) != 0) {
    local_14 = local_14 + 1;
    if (local_20 != 0) {
      *(undefined1 *)(local_20 + local_14) = 0;
    }
    iVar6 = 1;
  }
  if (local_24 == 0) {
    return local_14;
  }
  if (local_18 != (undefined4 *)0x0) {
    FUN_004de5b0(local_18,local_4,local_8,local_14 - iVar6);
  }
  return local_10;
}


