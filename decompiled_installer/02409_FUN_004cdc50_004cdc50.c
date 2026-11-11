// Function: FUN_004cdc50
// Entry: 004cdc50
// Size: 8879 bytes
// Thunk: false
// External: false


undefined4 FUN_004cdc50(int *param_1)

{
  ushort *puVar1;
  uint *puVar2;
  undefined1 uVar3;
  byte bVar4;
  ushort uVar5;
  char cVar6;
  byte bVar7;
  int iVar8;
  undefined1 *puVar9;
  undefined4 uVar10;
  byte bVar11;
  int iVar12;
  char *pcVar13;
  uint uVar14;
  int iVar15;
  int *piVar16;
  uint uVar17;
  uint uVar18;
  char *pcVar19;
  int iVar20;
  uint uVar21;
  undefined1 *puVar22;
  byte *pbVar23;
  byte *pbVar24;
  int *piVar25;
  byte local_75;
  uint local_74;
  int local_70;
  uint local_6c;
  int local_68;
  uint local_64;
  int local_60;
  int local_5c;
  int local_58;
  uint local_54;
  uint local_50;
  int local_4c;
  uint local_48;
  int *local_44;
  int *local_40;
  int *local_3c;
  int local_38;
  uint local_34;
  int local_30;
  int local_2c;
  int local_28;
  int *local_24;
  int *local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  uint *local_10;
  byte *local_c [2];
  int local_4;
  
  piVar16 = (int *)*param_1;
  if (param_1[1] == 10) {
    param_1[0x3e85] = 0;
    param_1[0x3e86] = 0;
    param_1[0x3e87] = 0;
    param_1[0x3e88] = 0;
    param_1[0x3e89] = 0;
    param_1[0x3e8a] = 0;
    param_1[0x3e8b] = 0;
    param_1[0x3e8c] = 0;
    param_1[0x3e8d] = 0;
    param_1[0x3e8e] = 0;
    param_1[0x3e8f] = 0;
    param_1[0x3e90] = 0;
    param_1[0x3e91] = 0;
    param_1[0x3e92] = 0;
    param_1[0x3e93] = 0;
    param_1[0x3e94] = 0;
    param_1[0x3e95] = 0;
    param_1[0x3e96] = 0;
    param_1[0x3e97] = 0;
    param_1[0x3e98] = 0;
    param_1[0x3e99] = 0;
    param_1[0x3e9a] = 0;
    param_1[0x3e9b] = 0;
    param_1[0x3e9c] = 0;
  }
  local_10 = (uint *)(param_1 + 0x3e8a);
  local_74 = param_1[0x3e85];
  local_64 = param_1[0x3e86];
  local_50 = param_1[0x3e87];
  local_38 = param_1[0x3e88];
  local_6c = param_1[0x3e89];
  local_5c = param_1[0x3e95];
  local_48 = param_1[0x3e96];
  local_34 = *local_10;
  local_10 = (uint *)param_1[0x3e8b];
  local_30 = param_1[0x3e8c];
  local_4c = param_1[0x3e8d];
  local_58 = param_1[0x3e8e];
  local_60 = param_1[0x3e8f];
  local_68 = param_1[0x3e90];
  local_70 = param_1[0x3e91];
  local_28 = param_1[0x3e92];
  local_54 = param_1[0x3e93];
  local_4 = param_1[0x3e94];
  local_18 = param_1[0x3e97];
  local_14 = param_1[0x3e98];
  local_2c = param_1[0x3e99];
  local_44 = (int *)param_1[0x3e9a];
  local_40 = (int *)param_1[0x3e9b];
  local_3c = (int *)param_1[0x3e9c];
  local_20 = piVar16;
  local_24 = piVar16;
  iVar8 = local_30;
  switch(param_1[1]) {
  case 10:
    param_1[1] = 10;
    iVar20 = param_1[8];
    while (iVar20 < 8) {
      if (local_24[1] == 0) goto LAB_004cfe06;
      bVar7 = *(byte *)*local_24;
      param_1[8] = iVar20 + 8;
      param_1[7] = param_1[7] << 8 | (uint)bVar7;
      *local_24 = *local_24 + 1;
      *(int *)(*param_1 + 4) = *(int *)(*param_1 + 4) + -1;
      *(int *)(*param_1 + 8) = *(int *)(*param_1 + 8) + 1;
      local_24 = (int *)*param_1;
      if (local_24[2] == 0) {
        local_24[3] = local_24[3] + 1;
        local_24 = (int *)*param_1;
      }
      iVar20 = param_1[8];
    }
    param_1[8] = iVar20 + -8;
    if ((char)((uint)param_1[7] >> ((byte)(iVar20 + -8) & 0x1f)) == 'B')
    goto switchD_004cdeb9_caseD_b;
    goto LAB_004cdf2a;
  case 0xb:
switchD_004cdeb9_caseD_b:
    pbVar24 = (byte *)param_1[8];
    param_1[1] = 0xb;
    local_20 = local_24;
    while ((int)pbVar24 < 8) {
      if (local_20[1] == 0) goto LAB_004cfe06;
      bVar7 = *(byte *)*local_20;
      param_1[8] = (int)(pbVar24 + 8);
      param_1[7] = param_1[7] << 8 | (uint)bVar7;
      *local_20 = *local_20 + 1;
      *(int *)(*param_1 + 4) = *(int *)(*param_1 + 4) + -1;
      *(int *)(*param_1 + 8) = *(int *)(*param_1 + 8) + 1;
      local_20 = (int *)*param_1;
      if (local_20[2] == 0) {
        local_20[3] = local_20[3] + 1;
        local_20 = (int *)*param_1;
      }
      pbVar24 = (byte *)param_1[8];
      local_c[0] = pbVar24;
    }
    param_1[8] = (int)(pbVar24 + -8);
    if ((char)((uint)param_1[7] >> ((byte)(pbVar24 + -8) & 0x1f)) == 'Z')
    goto switchD_004cdeb9_caseD_c;
    goto LAB_004cdf2a;
  case 0xc:
switchD_004cdeb9_caseD_c:
    pbVar24 = (byte *)param_1[8];
    param_1[1] = 0xc;
    while ((int)pbVar24 < 8) {
      if (local_20[1] == 0) goto LAB_004cfe06;
      bVar7 = *(byte *)*local_20;
      param_1[8] = (int)(pbVar24 + 8);
      param_1[7] = param_1[7] << 8 | (uint)bVar7;
      *local_20 = *local_20 + 1;
      *(int *)(*param_1 + 4) = *(int *)(*param_1 + 4) + -1;
      *(int *)(*param_1 + 8) = *(int *)(*param_1 + 8) + 1;
      local_20 = (int *)*param_1;
      if (local_20[2] == 0) {
        local_20[3] = local_20[3] + 1;
        local_20 = (int *)*param_1;
      }
      pbVar24 = (byte *)param_1[8];
      local_c[0] = pbVar24;
    }
    param_1[8] = (int)(pbVar24 + -8);
    if ((char)((uint)param_1[7] >> ((byte)(pbVar24 + -8) & 0x1f)) == 'h')
    goto switchD_004cdeb9_caseD_d;
    goto LAB_004cdf2a;
  case 0xd:
switchD_004cdeb9_caseD_d:
    iVar20 = param_1[8];
    param_1[1] = 0xd;
    while (iVar20 < 8) {
      if (local_20[1] == 0) goto LAB_004cfe06;
      bVar7 = *(byte *)*local_20;
      param_1[8] = iVar20 + 8;
      param_1[7] = param_1[7] << 8 | (uint)bVar7;
      *local_20 = *local_20 + 1;
      *(int *)(*param_1 + 4) = *(int *)(*param_1 + 4) + -1;
      *(int *)(*param_1 + 8) = *(int *)(*param_1 + 8) + 1;
      local_20 = (int *)*param_1;
      if (local_20[2] == 0) {
        local_20[3] = local_20[3] + 1;
        local_20 = (int *)*param_1;
      }
      iVar20 = param_1[8];
    }
    uVar14 = (uint)param_1[7] >> ((byte)(iVar20 + -8) & 0x1f) & 0xff;
    param_1[8] = iVar20 + -8;
    param_1[9] = uVar14;
    if (uVar14 - 0x31 < 9) {
      iVar20 = uVar14 - 0x30;
      param_1[9] = iVar20;
      if ((char)param_1[10] == '\0') {
        iVar20 = (*(code *)piVar16[9])(piVar16[0xb],iVar20 * 400000,1);
        param_1[0x313] = iVar20;
        if (iVar20 == 0) {
          uVar10 = 0xfffffffd;
          goto LAB_004cfe14;
        }
      }
      else {
        iVar20 = (*(code *)piVar16[9])(piVar16[0xb],iVar20 * 200000,1);
        param_1[0x314] = iVar20;
        iVar20 = (*(code *)piVar16[9])(piVar16[0xb],param_1[9] * 100000 >> 1,1);
        param_1[0x315] = iVar20;
        if ((param_1[0x314] == 0) || (iVar20 == 0)) {
          uVar10 = 0xfffffffd;
          goto LAB_004cfe14;
        }
      }
      goto switchD_004cdeb9_caseD_e;
    }
LAB_004cdf2a:
    uVar10 = 0xfffffffb;
    goto LAB_004cfe14;
  case 0xe:
switchD_004cdeb9_caseD_e:
    iVar20 = param_1[8];
    param_1[1] = 0xe;
    while (iVar20 < 8) {
      piVar16 = (int *)*param_1;
      if (piVar16[1] == 0) goto LAB_004cfe06;
      bVar7 = *(byte *)*piVar16;
      param_1[8] = iVar20 + 8;
      param_1[7] = param_1[7] << 8 | (uint)bVar7;
      *piVar16 = *piVar16 + 1;
      *(int *)(*param_1 + 4) = *(int *)(*param_1 + 4) + -1;
      *(int *)(*param_1 + 8) = *(int *)(*param_1 + 8) + 1;
      if (*(int *)(*param_1 + 8) == 0) {
        piVar16 = (int *)(*param_1 + 0xc);
        *piVar16 = *piVar16 + 1;
      }
      iVar20 = param_1[8];
    }
    param_1[8] = iVar20 + -8;
    cVar6 = (char)((uint)param_1[7] >> ((byte)(iVar20 + -8) & 0x1f));
    if (cVar6 != '\x17') {
      if (cVar6 == '1') goto switchD_004cdeb9_caseD_f;
      break;
    }
  case 0x2a:
    iVar20 = param_1[8];
    param_1[1] = 0x2a;
    while (iVar20 < 8) {
      piVar16 = (int *)*param_1;
      if (piVar16[1] == 0) goto LAB_004cfe06;
      bVar7 = *(byte *)*piVar16;
      param_1[8] = iVar20 + 8;
      param_1[7] = param_1[7] << 8 | (uint)bVar7;
      *piVar16 = *piVar16 + 1;
      *(int *)(*param_1 + 4) = *(int *)(*param_1 + 4) + -1;
      *(int *)(*param_1 + 8) = *(int *)(*param_1 + 8) + 1;
      if (*(int *)(*param_1 + 8) == 0) {
        piVar16 = (int *)(*param_1 + 0xc);
        *piVar16 = *piVar16 + 1;
      }
      iVar20 = param_1[8];
    }
    param_1[8] = iVar20 + -8;
    if ((char)((uint)param_1[7] >> ((byte)(iVar20 + -8) & 0x1f)) == 'r') {
switchD_004cdeb9_caseD_2b:
      iVar20 = param_1[8];
      param_1[1] = 0x2b;
      while (iVar20 < 8) {
        piVar16 = (int *)*param_1;
        if (piVar16[1] == 0) goto LAB_004cfe06;
        bVar7 = *(byte *)*piVar16;
        param_1[8] = iVar20 + 8;
        param_1[7] = param_1[7] << 8 | (uint)bVar7;
        *piVar16 = *piVar16 + 1;
        *(int *)(*param_1 + 4) = *(int *)(*param_1 + 4) + -1;
        *(int *)(*param_1 + 8) = *(int *)(*param_1 + 8) + 1;
        if (*(int *)(*param_1 + 8) == 0) {
          piVar16 = (int *)(*param_1 + 0xc);
          *piVar16 = *piVar16 + 1;
        }
        iVar20 = param_1[8];
      }
      param_1[8] = iVar20 + -8;
      if ((char)((uint)param_1[7] >> ((byte)(iVar20 + -8) & 0x1f)) == 'E') {
switchD_004cdeb9_caseD_2c:
        iVar20 = param_1[8];
        param_1[1] = 0x2c;
        while (iVar20 < 8) {
          piVar16 = (int *)*param_1;
          if (piVar16[1] == 0) goto LAB_004cfe06;
          bVar7 = *(byte *)*piVar16;
          param_1[8] = iVar20 + 8;
          param_1[7] = param_1[7] << 8 | (uint)bVar7;
          *piVar16 = *piVar16 + 1;
          *(int *)(*param_1 + 4) = *(int *)(*param_1 + 4) + -1;
          *(int *)(*param_1 + 8) = *(int *)(*param_1 + 8) + 1;
          if (*(int *)(*param_1 + 8) == 0) {
            piVar16 = (int *)(*param_1 + 0xc);
            *piVar16 = *piVar16 + 1;
          }
          iVar20 = param_1[8];
        }
        param_1[8] = iVar20 + -8;
        if ((char)((uint)param_1[7] >> ((byte)(iVar20 + -8) & 0x1f)) == '8') {
switchD_004cdeb9_caseD_2d:
          iVar20 = param_1[8];
          param_1[1] = 0x2d;
          while (iVar20 < 8) {
            piVar16 = (int *)*param_1;
            if (piVar16[1] == 0) goto LAB_004cfe06;
            bVar7 = *(byte *)*piVar16;
            param_1[8] = iVar20 + 8;
            param_1[7] = param_1[7] << 8 | (uint)bVar7;
            *piVar16 = *piVar16 + 1;
            *(int *)(*param_1 + 4) = *(int *)(*param_1 + 4) + -1;
            *(int *)(*param_1 + 8) = *(int *)(*param_1 + 8) + 1;
            if (*(int *)(*param_1 + 8) == 0) {
              piVar16 = (int *)(*param_1 + 0xc);
              *piVar16 = *piVar16 + 1;
            }
            iVar20 = param_1[8];
          }
          param_1[8] = iVar20 + -8;
          if ((char)((uint)param_1[7] >> ((byte)(iVar20 + -8) & 0x1f)) == 'P') {
switchD_004cdeb9_caseD_2e:
            iVar20 = param_1[8];
            param_1[1] = 0x2e;
            while (iVar20 < 8) {
              piVar16 = (int *)*param_1;
              if (piVar16[1] == 0) goto LAB_004cfe06;
              bVar7 = *(byte *)*piVar16;
              param_1[8] = iVar20 + 8;
              param_1[7] = param_1[7] << 8 | (uint)bVar7;
              *piVar16 = *piVar16 + 1;
              *(int *)(*param_1 + 4) = *(int *)(*param_1 + 4) + -1;
              *(int *)(*param_1 + 8) = *(int *)(*param_1 + 8) + 1;
              if (*(int *)(*param_1 + 8) == 0) {
                piVar16 = (int *)(*param_1 + 0xc);
                *piVar16 = *piVar16 + 1;
              }
              iVar20 = param_1[8];
            }
            param_1[8] = iVar20 + -8;
            if ((char)((uint)param_1[7] >> ((byte)(iVar20 + -8) & 0x1f)) == -0x70) {
              param_1[0x317] = 0;
switchD_004cdeb9_caseD_2f:
              iVar8 = param_1[8];
              param_1[1] = 0x2f;
              while (iVar8 < 8) {
                piVar16 = (int *)*param_1;
                if (piVar16[1] == 0) goto LAB_004cfe06;
                bVar7 = *(byte *)*piVar16;
                param_1[8] = iVar8 + 8;
                param_1[7] = param_1[7] << 8 | (uint)bVar7;
                *piVar16 = *piVar16 + 1;
                *(int *)(*param_1 + 4) = *(int *)(*param_1 + 4) + -1;
                *(int *)(*param_1 + 8) = *(int *)(*param_1 + 8) + 1;
                if (*(int *)(*param_1 + 8) == 0) {
                  piVar16 = (int *)(*param_1 + 0xc);
                  *piVar16 = *piVar16 + 1;
                }
                iVar8 = param_1[8];
              }
              param_1[8] = iVar8 + -8;
              param_1[0x317] =
                   (uint)param_1[7] >> ((byte)(iVar8 + -8) & 0x1f) & 0xff | param_1[0x317] << 8;
switchD_004cdeb9_caseD_30:
              iVar8 = param_1[8];
              param_1[1] = 0x30;
              while (iVar8 < 8) {
                piVar16 = (int *)*param_1;
                if (piVar16[1] == 0) goto LAB_004cfe06;
                bVar7 = *(byte *)*piVar16;
                param_1[8] = iVar8 + 8;
                param_1[7] = param_1[7] << 8 | (uint)bVar7;
                *piVar16 = *piVar16 + 1;
                *(int *)(*param_1 + 4) = *(int *)(*param_1 + 4) + -1;
                *(int *)(*param_1 + 8) = *(int *)(*param_1 + 8) + 1;
                if (*(int *)(*param_1 + 8) == 0) {
                  piVar16 = (int *)(*param_1 + 0xc);
                  *piVar16 = *piVar16 + 1;
                }
                iVar8 = param_1[8];
              }
              param_1[8] = iVar8 + -8;
              param_1[0x317] =
                   (uint)param_1[7] >> ((byte)(iVar8 + -8) & 0x1f) & 0xff | param_1[0x317] << 8;
switchD_004cdeb9_caseD_31:
              iVar8 = param_1[8];
              param_1[1] = 0x31;
              while (iVar8 < 8) {
                piVar16 = (int *)*param_1;
                if (piVar16[1] == 0) goto LAB_004cfe06;
                bVar7 = *(byte *)*piVar16;
                param_1[8] = iVar8 + 8;
                param_1[7] = param_1[7] << 8 | (uint)bVar7;
                *piVar16 = *piVar16 + 1;
                *(int *)(*param_1 + 4) = *(int *)(*param_1 + 4) + -1;
                *(int *)(*param_1 + 8) = *(int *)(*param_1 + 8) + 1;
                if (*(int *)(*param_1 + 8) == 0) {
                  piVar16 = (int *)(*param_1 + 0xc);
                  *piVar16 = *piVar16 + 1;
                }
                iVar8 = param_1[8];
              }
              param_1[8] = iVar8 + -8;
              param_1[0x317] =
                   (uint)param_1[7] >> ((byte)(iVar8 + -8) & 0x1f) & 0xff | param_1[0x317] << 8;
switchD_004cdeb9_caseD_32:
              iVar8 = param_1[8];
              param_1[1] = 0x32;
              while (iVar8 < 8) {
                piVar16 = (int *)*param_1;
                if (piVar16[1] == 0) goto LAB_004cfe06;
                bVar7 = *(byte *)*piVar16;
                param_1[8] = iVar8 + 8;
                param_1[7] = param_1[7] << 8 | (uint)bVar7;
                *piVar16 = *piVar16 + 1;
                *(int *)(*param_1 + 4) = *(int *)(*param_1 + 4) + -1;
                *(int *)(*param_1 + 8) = *(int *)(*param_1 + 8) + 1;
                if (*(int *)(*param_1 + 8) == 0) {
                  piVar16 = (int *)(*param_1 + 0xc);
                  *piVar16 = *piVar16 + 1;
                }
                iVar8 = param_1[8];
              }
              param_1[8] = iVar8 + -8;
              param_1[1] = 1;
              param_1[0x317] =
                   (uint)param_1[7] >> ((byte)(iVar8 + -8) & 0x1f) & 0xff | param_1[0x317] << 8;
              uVar10 = 4;
              goto LAB_004cfe14;
            }
          }
        }
      }
    }
    break;
  case 0xf:
switchD_004cdeb9_caseD_f:
    iVar20 = param_1[8];
    param_1[1] = 0xf;
    while (iVar20 < 8) {
      piVar16 = (int *)*param_1;
      if (piVar16[1] == 0) goto LAB_004cfe06;
      bVar7 = *(byte *)*piVar16;
      param_1[8] = iVar20 + 8;
      param_1[7] = param_1[7] << 8 | (uint)bVar7;
      *piVar16 = *piVar16 + 1;
      *(int *)(*param_1 + 4) = *(int *)(*param_1 + 4) + -1;
      *(int *)(*param_1 + 8) = *(int *)(*param_1 + 8) + 1;
      if (*(int *)(*param_1 + 8) == 0) {
        piVar16 = (int *)(*param_1 + 0xc);
        *piVar16 = *piVar16 + 1;
      }
      iVar20 = param_1[8];
    }
    param_1[8] = iVar20 + -8;
    if ((char)((uint)param_1[7] >> ((byte)(iVar20 + -8) & 0x1f)) == 'A')
    goto switchD_004cdeb9_caseD_10;
    break;
  case 0x10:
switchD_004cdeb9_caseD_10:
    iVar20 = param_1[8];
    param_1[1] = 0x10;
    while (iVar20 < 8) {
      piVar16 = (int *)*param_1;
      if (piVar16[1] == 0) goto LAB_004cfe06;
      bVar7 = *(byte *)*piVar16;
      param_1[8] = iVar20 + 8;
      param_1[7] = param_1[7] << 8 | (uint)bVar7;
      *piVar16 = *piVar16 + 1;
      *(int *)(*param_1 + 4) = *(int *)(*param_1 + 4) + -1;
      *(int *)(*param_1 + 8) = *(int *)(*param_1 + 8) + 1;
      if (*(int *)(*param_1 + 8) == 0) {
        piVar16 = (int *)(*param_1 + 0xc);
        *piVar16 = *piVar16 + 1;
      }
      iVar20 = param_1[8];
    }
    param_1[8] = iVar20 + -8;
    if ((char)((uint)param_1[7] >> ((byte)(iVar20 + -8) & 0x1f)) == 'Y')
    goto switchD_004cdeb9_caseD_11;
    break;
  case 0x11:
switchD_004cdeb9_caseD_11:
    iVar20 = param_1[8];
    param_1[1] = 0x11;
    while (iVar20 < 8) {
      piVar16 = (int *)*param_1;
      if (piVar16[1] == 0) goto LAB_004cfe06;
      bVar7 = *(byte *)*piVar16;
      param_1[8] = iVar20 + 8;
      param_1[7] = param_1[7] << 8 | (uint)bVar7;
      *piVar16 = *piVar16 + 1;
      *(int *)(*param_1 + 4) = *(int *)(*param_1 + 4) + -1;
      *(int *)(*param_1 + 8) = *(int *)(*param_1 + 8) + 1;
      if (*(int *)(*param_1 + 8) == 0) {
        piVar16 = (int *)(*param_1 + 0xc);
        *piVar16 = *piVar16 + 1;
      }
      iVar20 = param_1[8];
    }
    param_1[8] = iVar20 + -8;
    if ((char)((uint)param_1[7] >> ((byte)(iVar20 + -8) & 0x1f)) == '&')
    goto switchD_004cdeb9_caseD_12;
    break;
  case 0x12:
switchD_004cdeb9_caseD_12:
    iVar20 = param_1[8];
    param_1[1] = 0x12;
    while (iVar20 < 8) {
      piVar16 = (int *)*param_1;
      if (piVar16[1] == 0) goto LAB_004cfe06;
      bVar7 = *(byte *)*piVar16;
      param_1[8] = iVar20 + 8;
      param_1[7] = param_1[7] << 8 | (uint)bVar7;
      *piVar16 = *piVar16 + 1;
      *(int *)(*param_1 + 4) = *(int *)(*param_1 + 4) + -1;
      *(int *)(*param_1 + 8) = *(int *)(*param_1 + 8) + 1;
      if (*(int *)(*param_1 + 8) == 0) {
        piVar16 = (int *)(*param_1 + 0xc);
        *piVar16 = *piVar16 + 1;
      }
      iVar20 = param_1[8];
    }
    param_1[8] = iVar20 + -8;
    if ((char)((uint)param_1[7] >> ((byte)(iVar20 + -8) & 0x1f)) == 'S')
    goto switchD_004cdeb9_caseD_13;
    break;
  case 0x13:
switchD_004cdeb9_caseD_13:
    iVar20 = param_1[8];
    param_1[1] = 0x13;
    while (iVar20 < 8) {
      piVar16 = (int *)*param_1;
      if (piVar16[1] == 0) goto LAB_004cfe06;
      bVar7 = *(byte *)*piVar16;
      param_1[8] = iVar20 + 8;
      param_1[7] = param_1[7] << 8 | (uint)bVar7;
      *piVar16 = *piVar16 + 1;
      *(int *)(*param_1 + 4) = *(int *)(*param_1 + 4) + -1;
      *(int *)(*param_1 + 8) = *(int *)(*param_1 + 8) + 1;
      if (*(int *)(*param_1 + 8) == 0) {
        piVar16 = (int *)(*param_1 + 0xc);
        *piVar16 = *piVar16 + 1;
      }
      iVar20 = param_1[8];
    }
    param_1[8] = iVar20 + -8;
    if ((char)((uint)param_1[7] >> ((byte)(iVar20 + -8) & 0x1f)) == 'Y') {
      param_1[0xb] = param_1[0xb] + 1;
      param_1[0x316] = 0;
      goto switchD_004cdeb9_caseD_14;
    }
    break;
  case 0x14:
switchD_004cdeb9_caseD_14:
    iVar20 = param_1[8];
    param_1[1] = 0x14;
    while (iVar20 < 8) {
      piVar16 = (int *)*param_1;
      if (piVar16[1] == 0) goto LAB_004cfe06;
      bVar7 = *(byte *)*piVar16;
      param_1[8] = iVar20 + 8;
      param_1[7] = param_1[7] << 8 | (uint)bVar7;
      *piVar16 = *piVar16 + 1;
      *(int *)(*param_1 + 4) = *(int *)(*param_1 + 4) + -1;
      *(int *)(*param_1 + 8) = *(int *)(*param_1 + 8) + 1;
      if (*(int *)(*param_1 + 8) == 0) {
        piVar16 = (int *)(*param_1 + 0xc);
        *piVar16 = *piVar16 + 1;
      }
      iVar20 = param_1[8];
    }
    param_1[8] = iVar20 + -8;
    param_1[0x316] = (uint)param_1[7] >> ((byte)(iVar20 + -8) & 0x1f) & 0xff | param_1[0x316] << 8;
  case 0x15:
    iVar20 = param_1[8];
    param_1[1] = 0x15;
    while (iVar20 < 8) {
      piVar16 = (int *)*param_1;
      if (piVar16[1] == 0) goto LAB_004cfe06;
      bVar7 = *(byte *)*piVar16;
      param_1[8] = iVar20 + 8;
      param_1[7] = param_1[7] << 8 | (uint)bVar7;
      *piVar16 = *piVar16 + 1;
      *(int *)(*param_1 + 4) = *(int *)(*param_1 + 4) + -1;
      *(int *)(*param_1 + 8) = *(int *)(*param_1 + 8) + 1;
      if (*(int *)(*param_1 + 8) == 0) {
        piVar16 = (int *)(*param_1 + 0xc);
        *piVar16 = *piVar16 + 1;
      }
      iVar20 = param_1[8];
    }
    param_1[8] = iVar20 + -8;
    param_1[0x316] = (uint)param_1[7] >> ((byte)(iVar20 + -8) & 0x1f) & 0xff | param_1[0x316] << 8;
switchD_004cdeb9_caseD_16:
    iVar20 = param_1[8];
    param_1[1] = 0x16;
    while (iVar20 < 8) {
      piVar16 = (int *)*param_1;
      if (piVar16[1] == 0) goto LAB_004cfe06;
      bVar7 = *(byte *)*piVar16;
      param_1[8] = iVar20 + 8;
      param_1[7] = param_1[7] << 8 | (uint)bVar7;
      *piVar16 = *piVar16 + 1;
      *(int *)(*param_1 + 4) = *(int *)(*param_1 + 4) + -1;
      *(int *)(*param_1 + 8) = *(int *)(*param_1 + 8) + 1;
      if (*(int *)(*param_1 + 8) == 0) {
        piVar16 = (int *)(*param_1 + 0xc);
        *piVar16 = *piVar16 + 1;
      }
      iVar20 = param_1[8];
    }
    param_1[8] = iVar20 + -8;
    param_1[0x316] = (uint)param_1[7] >> ((byte)(iVar20 + -8) & 0x1f) & 0xff | param_1[0x316] << 8;
switchD_004cdeb9_caseD_17:
    iVar20 = param_1[8];
    param_1[1] = 0x17;
    while (iVar20 < 8) {
      piVar16 = (int *)*param_1;
      if (piVar16[1] == 0) goto LAB_004cfe06;
      bVar7 = *(byte *)*piVar16;
      param_1[8] = iVar20 + 8;
      param_1[7] = param_1[7] << 8 | (uint)bVar7;
      *piVar16 = *piVar16 + 1;
      *(int *)(*param_1 + 4) = *(int *)(*param_1 + 4) + -1;
      *(int *)(*param_1 + 8) = *(int *)(*param_1 + 8) + 1;
      if (*(int *)(*param_1 + 8) == 0) {
        piVar16 = (int *)(*param_1 + 0xc);
        *piVar16 = *piVar16 + 1;
      }
      iVar20 = param_1[8];
    }
    param_1[8] = iVar20 + -8;
    param_1[0x316] = (uint)param_1[7] >> ((byte)(iVar20 + -8) & 0x1f) & 0xff | param_1[0x316] << 8;
switchD_004cdeb9_caseD_18:
    iVar20 = param_1[8];
    param_1[1] = 0x18;
    while (iVar20 < 1) {
      piVar16 = (int *)*param_1;
      if (piVar16[1] == 0) goto LAB_004cfe06;
      bVar7 = *(byte *)*piVar16;
      param_1[8] = iVar20 + 8;
      param_1[7] = param_1[7] << 8 | (uint)bVar7;
      *piVar16 = *piVar16 + 1;
      *(int *)(*param_1 + 4) = *(int *)(*param_1 + 4) + -1;
      *(int *)(*param_1 + 8) = *(int *)(*param_1 + 8) + 1;
      if (*(int *)(*param_1 + 8) == 0) {
        piVar16 = (int *)(*param_1 + 0xc);
        *piVar16 = *piVar16 + 1;
      }
      iVar20 = param_1[8];
    }
    param_1[8] = iVar20 + -1;
    *(byte *)(param_1 + 4) = (byte)((uint)param_1[7] >> ((byte)(iVar20 + -1) & 0x1f)) & 1;
    param_1[0xd] = 0;
switchD_004cdeb9_caseD_19:
    iVar20 = param_1[8];
    param_1[1] = 0x19;
    while (iVar20 < 8) {
      piVar16 = (int *)*param_1;
      if (piVar16[1] == 0) goto LAB_004cfe06;
      bVar7 = *(byte *)*piVar16;
      param_1[8] = iVar20 + 8;
      param_1[7] = param_1[7] << 8 | (uint)bVar7;
      *piVar16 = *piVar16 + 1;
      *(int *)(*param_1 + 4) = *(int *)(*param_1 + 4) + -1;
      *(int *)(*param_1 + 8) = *(int *)(*param_1 + 8) + 1;
      if (*(int *)(*param_1 + 8) == 0) {
        piVar16 = (int *)(*param_1 + 0xc);
        *piVar16 = *piVar16 + 1;
      }
      iVar20 = param_1[8];
    }
    param_1[8] = iVar20 + -8;
    param_1[0xd] = (uint)param_1[7] >> ((byte)(iVar20 + -8) & 0x1f) & 0xff | param_1[0xd] << 8;
switchD_004cdeb9_caseD_1a:
    iVar20 = param_1[8];
    param_1[1] = 0x1a;
    while (iVar20 < 8) {
      piVar16 = (int *)*param_1;
      if (piVar16[1] == 0) goto LAB_004cfe06;
      bVar7 = *(byte *)*piVar16;
      param_1[8] = iVar20 + 8;
      param_1[7] = param_1[7] << 8 | (uint)bVar7;
      *piVar16 = *piVar16 + 1;
      *(int *)(*param_1 + 4) = *(int *)(*param_1 + 4) + -1;
      *(int *)(*param_1 + 8) = *(int *)(*param_1 + 8) + 1;
      if (*(int *)(*param_1 + 8) == 0) {
        piVar16 = (int *)(*param_1 + 0xc);
        *piVar16 = *piVar16 + 1;
      }
      iVar20 = param_1[8];
    }
    param_1[8] = iVar20 + -8;
    param_1[0xd] = (uint)param_1[7] >> ((byte)(iVar20 + -8) & 0x1f) & 0xff | param_1[0xd] << 8;
switchD_004cdeb9_caseD_1b:
    param_1[1] = 0x1b;
    iVar20 = param_1[8];
    while (iVar20 < 8) {
      piVar16 = (int *)*param_1;
      if (piVar16[1] == 0) goto LAB_004cfe06;
      bVar7 = *(byte *)*piVar16;
      param_1[8] = iVar20 + 8;
      param_1[7] = param_1[7] << 8 | (uint)bVar7;
      *piVar16 = *piVar16 + 1;
      *(int *)(*param_1 + 4) = *(int *)(*param_1 + 4) + -1;
      *(int *)(*param_1 + 8) = *(int *)(*param_1 + 8) + 1;
      if (*(int *)(*param_1 + 8) == 0) {
        piVar16 = (int *)(*param_1 + 0xc);
        *piVar16 = *piVar16 + 1;
      }
      iVar20 = param_1[8];
    }
    param_1[8] = iVar20 + -8;
    uVar14 = (uint)param_1[7] >> ((byte)(iVar20 + -8) & 0x1f) & 0xff | param_1[0xd] << 8;
    param_1[0xd] = uVar14;
    if ((-1 < (int)uVar14) && ((int)uVar14 <= param_1[9] * 100000 + 10)) {
      for (local_74 = 0; (int)local_74 < 0x10; local_74 = local_74 + 1) {
switchD_004cdeb9_caseD_1c:
        iVar20 = param_1[8];
        param_1[1] = 0x1c;
        while (iVar20 < 1) {
          piVar16 = (int *)*param_1;
          if (piVar16[1] == 0) goto LAB_004cfe06;
          bVar7 = *(byte *)*piVar16;
          param_1[8] = iVar20 + 8;
          param_1[7] = param_1[7] << 8 | (uint)bVar7;
          *piVar16 = *piVar16 + 1;
          *(int *)(*param_1 + 4) = *(int *)(*param_1 + 4) + -1;
          *(int *)(*param_1 + 8) = *(int *)(*param_1 + 8) + 1;
          if (*(int *)(*param_1 + 8) == 0) {
            piVar16 = (int *)(*param_1 + 0xc);
            *piVar16 = *piVar16 + 1;
          }
          iVar20 = param_1[8];
        }
        param_1[8] = iVar20 + -1;
        *(byte *)((int)param_1 + local_74 + 0xd6c) =
             (byte)((uint)param_1[7] >> ((byte)(iVar20 + -1) & 0x1f)) & 1;
      }
      _memset(param_1 + 0x31b,0,0x100);
      for (local_74 = 0; (int)local_74 < 0x10; local_74 = local_74 + 1) {
        if (*(char *)(local_74 + 0xd6c + (int)param_1) != '\0') {
          local_64 = 0;
LAB_004ce804:
          do {
            iVar20 = param_1[8];
            param_1[1] = 0x1d;
            while (iVar20 < 1) {
              piVar16 = (int *)*param_1;
              if (piVar16[1] == 0) goto LAB_004cfe06;
              bVar7 = *(byte *)*piVar16;
              param_1[8] = iVar20 + 8;
              param_1[7] = param_1[7] << 8 | (uint)bVar7;
              *piVar16 = *piVar16 + 1;
              *(int *)(*param_1 + 4) = *(int *)(*param_1 + 4) + -1;
              *(int *)(*param_1 + 8) = *(int *)(*param_1 + 8) + 1;
              if (*(int *)(*param_1 + 8) == 0) {
                piVar16 = (int *)(*param_1 + 0xc);
                *piVar16 = *piVar16 + 1;
              }
              iVar20 = param_1[8];
            }
            param_1[8] = iVar20 + -1;
            if (((uint)param_1[7] >> ((byte)(iVar20 + -1) & 0x1f) & 1) != 0) {
              *(undefined1 *)(local_74 * 0x10 + local_64 + 0xc6c + (int)param_1) = 1;
            }
            local_64 = local_64 + 1;
          } while ((int)local_64 < 0x10);
        }
      }
      param_1[0x31a] = 0;
      iVar20 = 0;
      do {
        if (*(char *)((int)param_1 + iVar20 + 0xc6c) != '\0') {
          *(char *)(param_1[0x31a] + 0xd7c + (int)param_1) = (char)iVar20;
          param_1[0x31a] = param_1[0x31a] + 1;
        }
        iVar20 = iVar20 + 1;
      } while (iVar20 < 0x100);
      if (param_1[0x31a] == 0) {
LAB_004ce900:
        uVar10 = 0xfffffffc;
        goto LAB_004cfe14;
      }
      local_38 = param_1[0x31a] + 2;
switchD_004cdeb9_caseD_1e:
      iVar20 = param_1[8];
      param_1[1] = 0x1e;
      while (iVar20 < 3) {
        piVar16 = (int *)*param_1;
        if (piVar16[1] == 0) goto LAB_004cfe06;
        bVar7 = *(byte *)*piVar16;
        param_1[8] = iVar20 + 8;
        param_1[7] = param_1[7] << 8 | (uint)bVar7;
        *piVar16 = *piVar16 + 1;
        *(int *)(*param_1 + 4) = *(int *)(*param_1 + 4) + -1;
        *(int *)(*param_1 + 8) = *(int *)(*param_1 + 8) + 1;
        if (*(int *)(*param_1 + 8) == 0) {
          piVar16 = (int *)(*param_1 + 0xc);
          *piVar16 = *piVar16 + 1;
        }
        iVar20 = param_1[8];
      }
      local_6c = (uint)param_1[7] >> ((byte)(iVar20 + -3) & 0x1f) & 7;
      param_1[8] = iVar20 + -3;
      if ((1 < local_6c) && (local_6c < 7)) {
switchD_004cdeb9_caseD_1f:
        param_1[1] = 0x1f;
        iVar20 = param_1[8];
        while (iVar20 < 0xf) {
          piVar16 = (int *)*param_1;
          if (piVar16[1] == 0) goto LAB_004cfe06;
          bVar7 = *(byte *)*piVar16;
          param_1[8] = iVar20 + 8;
          param_1[7] = param_1[7] << 8 | (uint)bVar7;
          *piVar16 = *piVar16 + 1;
          *(int *)(*param_1 + 4) = *(int *)(*param_1 + 4) + -1;
          *(int *)(*param_1 + 8) = *(int *)(*param_1 + 8) + 1;
          if (*(int *)(*param_1 + 8) == 0) {
            piVar16 = (int *)(*param_1 + 0xc);
            *piVar16 = *piVar16 + 1;
          }
          iVar20 = param_1[8];
        }
        local_34 = (uint)param_1[7] >> ((byte)(iVar20 + -0xf) & 0x1f) & 0x7fff;
        param_1[8] = iVar20 + -0xf;
        if (local_34 == 0) {
          uVar10 = 0xfffffffc;
          goto LAB_004cfe14;
        }
        uVar14 = local_6c;
        for (local_74 = 0; (int)local_74 < (int)local_34; local_74 = local_74 + 1) {
          local_64 = 0;
LAB_004cea18:
          while( true ) {
            iVar20 = param_1[8];
            param_1[1] = 0x20;
            while (iVar20 < 1) {
              piVar16 = (int *)*param_1;
              if (piVar16[1] == 0) {
                uVar10 = 0;
                local_6c = uVar14;
                goto LAB_004cfe14;
              }
              bVar7 = *(byte *)*piVar16;
              param_1[8] = iVar20 + 8;
              param_1[7] = param_1[7] << 8 | (uint)bVar7;
              *piVar16 = *piVar16 + 1;
              *(int *)(*param_1 + 4) = *(int *)(*param_1 + 4) + -1;
              *(int *)(*param_1 + 8) = *(int *)(*param_1 + 8) + 1;
              if (*(int *)(*param_1 + 8) == 0) {
                piVar16 = (int *)(*param_1 + 0xc);
                *piVar16 = *piVar16 + 1;
              }
              iVar20 = param_1[8];
            }
            param_1[8] = iVar20 + -1;
            if (((uint)param_1[7] >> ((byte)(iVar20 + -1) & 0x1f) & 1) == 0) break;
            local_64 = local_64 + 1;
            if ((int)uVar14 <= (int)local_64) {
              uVar10 = 0xfffffffc;
              local_6c = uVar14;
              goto LAB_004cfe14;
            }
          }
          *(char *)(local_74 + 0x650e + (int)param_1) = (char)local_64;
        }
        bVar7 = 0;
        if (0 < (int)local_6c) {
          uVar14 = 0;
          do {
            *(byte *)((int)local_c + uVar14) = bVar7;
            bVar7 = bVar7 + 1;
            uVar14 = (uint)bVar7;
          } while ((int)uVar14 < (int)local_6c);
        }
        local_74 = 0;
        if (0 < (int)local_34) {
          piVar16 = param_1 + 0x7af;
          uVar14 = local_34;
          do {
            bVar7 = *(byte *)((int)piVar16 + 0x4652);
            uVar3 = *(undefined1 *)((int)local_c + (uint)bVar7);
            puVar9 = (undefined1 *)((int)local_c + (uint)bVar7);
            for (; bVar7 != 0; bVar7 = bVar7 - 1) {
              *puVar9 = puVar9[-1];
              puVar9 = puVar9 + -1;
            }
            *(undefined1 *)piVar16 = uVar3;
            piVar16 = (int *)((int)piVar16 + 1);
            uVar21 = (uint)local_c[0] >> 8;
            local_c[0] = (byte *)CONCAT31((int3)uVar21,uVar3);
            uVar14 = uVar14 - 1;
            local_74 = local_34;
          } while (uVar14 != 0);
        }
        for (local_50 = 0; (int)local_50 < (int)local_6c; local_50 = local_50 + 1) {
switchD_004cdeb9_caseD_21:
          iVar20 = param_1[8];
          param_1[1] = 0x21;
          while (iVar20 < 5) {
            piVar16 = (int *)*param_1;
            if (piVar16[1] == 0) goto LAB_004cfe06;
            bVar7 = *(byte *)*piVar16;
            param_1[8] = iVar20 + 8;
            param_1[7] = param_1[7] << 8 | (uint)bVar7;
            *piVar16 = *piVar16 + 1;
            *(int *)(*param_1 + 4) = *(int *)(*param_1 + 4) + -1;
            *(int *)(*param_1 + 8) = *(int *)(*param_1 + 8) + 1;
            if (*(int *)(*param_1 + 8) == 0) {
              piVar16 = (int *)(*param_1 + 0xc);
              *piVar16 = *piVar16 + 1;
            }
            iVar20 = param_1[8];
          }
          local_54 = (uint)param_1[7] >> ((byte)(iVar20 + -5) & 0x1f) & 0x1f;
          param_1[8] = iVar20 + -5;
          local_74 = 0;
          while ((int)local_74 < local_38) {
            while( true ) {
              if (0x13 < local_54 - 1) goto LAB_004ce190;
switchD_004cdeb9_caseD_22:
              iVar20 = param_1[8];
              param_1[1] = 0x22;
              while (iVar20 < 1) {
                piVar16 = (int *)*param_1;
                if (piVar16[1] == 0) goto LAB_004cfe06;
                bVar7 = *(byte *)*piVar16;
                param_1[8] = iVar20 + 8;
                param_1[7] = param_1[7] << 8 | (uint)bVar7;
                *piVar16 = *piVar16 + 1;
                *(int *)(*param_1 + 4) = *(int *)(*param_1 + 4) + -1;
                *(int *)(*param_1 + 8) = *(int *)(*param_1 + 8) + 1;
                if (*(int *)(*param_1 + 8) == 0) {
                  piVar16 = (int *)(*param_1 + 0xc);
                  *piVar16 = *piVar16 + 1;
                }
                iVar20 = param_1[8];
              }
              param_1[8] = iVar20 + -1;
              if (((uint)param_1[7] >> ((byte)(iVar20 + -1) & 0x1f) & 1) == 0) break;
switchD_004cdeb9_caseD_23:
              param_1[1] = 0x23;
              iVar20 = param_1[8];
              while (iVar20 < 1) {
                piVar16 = (int *)*param_1;
                if (piVar16[1] == 0) goto LAB_004cfe06;
                bVar7 = *(byte *)*piVar16;
                param_1[8] = iVar20 + 8;
                param_1[7] = param_1[7] << 8 | (uint)bVar7;
                *piVar16 = *piVar16 + 1;
                *(int *)(*param_1 + 4) = *(int *)(*param_1 + 4) + -1;
                *(int *)(*param_1 + 8) = *(int *)(*param_1 + 8) + 1;
                if (*(int *)(*param_1 + 8) == 0) {
                  piVar16 = (int *)(*param_1 + 0xc);
                  *piVar16 = *piVar16 + 1;
                }
                iVar20 = param_1[8];
              }
              param_1[8] = iVar20 + -1;
              if (((uint)param_1[7] >> ((byte)(iVar20 + -1) & 0x1f) & 1) == 0) {
                local_54 = local_54 + 1;
              }
              else {
                local_54 = local_54 - 1;
              }
            }
            iVar20 = local_50 * 0x102 + local_74;
            local_74 = local_74 + 1;
            *(char *)(iVar20 + 0xab60 + (int)param_1) = (char)local_54;
          }
        }
        local_50 = 0;
        if (0 < (int)local_6c) {
          local_10 = (uint *)(param_1 + 15999);
          local_20 = (int *)local_6c;
          piVar16 = param_1 + 0x3267;
          pbVar24 = (byte *)(param_1 + 0x2ad8);
          local_50 = local_6c;
          local_c[0] = pbVar24;
          do {
            uVar14 = 0;
            uVar17 = 0x20;
            uVar21 = uVar14;
            iVar8 = local_38;
            uVar18 = uVar17;
            pbVar23 = pbVar24;
            if (0 < local_38) {
              do {
                uVar18 = (uint)*pbVar23;
                uVar14 = uVar18;
                if (uVar18 <= uVar21) {
                  uVar14 = uVar21;
                }
                if (uVar17 <= uVar18) {
                  uVar18 = uVar17;
                }
                iVar8 = iVar8 + -1;
                uVar21 = uVar14;
                uVar17 = uVar18;
                pbVar23 = pbVar23 + 1;
              } while (iVar8 != 0);
            }
            FUN_00503070(piVar16 + -0x60c,piVar16,(int)(piVar16 + 0x60c),(int)pbVar24,uVar18,uVar14,
                         local_38);
            piVar16 = piVar16 + 0x102;
            pbVar24 = pbVar24 + 0x102;
            *local_10 = uVar18;
            local_10 = local_10 + 1;
            local_20 = (int *)((int)local_20 - 1);
          } while (local_20 != (int *)0x0);
        }
        local_10 = (uint *)(param_1[0x31a] + 1);
        local_4c = 0;
        piVar16 = param_1 + 0x7ae;
        local_60 = param_1[9] * 100000;
        pcVar19 = (char *)((int)param_1 + 0x1e7b);
        local_74 = 0x100;
        iVar20 = 0xf;
        piVar25 = param_1 + 0x10;
        for (iVar8 = 0x100; iVar8 != 0; iVar8 = iVar8 + -1) {
          *piVar25 = 0;
          piVar25 = piVar25 + 1;
        }
        iVar8 = 0x1000;
        do {
          iVar12 = 0xf;
          iVar8 = iVar8 + -0x10;
          pcVar13 = pcVar19;
          do {
            cVar6 = (char)iVar12;
            iVar12 = iVar12 + -1;
            *pcVar13 = cVar6 + (char)iVar20 * '\x10';
            pcVar13 = pcVar13 + -1;
          } while (-1 < iVar12);
          *piVar16 = iVar8;
          pcVar19 = pcVar19 + -0x10;
          piVar16 = piVar16 + -1;
          iVar20 = iVar20 + -1;
        } while (-1 < iVar20);
        local_68 = 0;
        local_30 = 0;
        iVar8 = local_30;
        if (0 < (int)local_34) {
          local_14 = (uint)*(byte *)(param_1 + 0x7af);
          local_4c = 0x31;
          local_5c = param_1[local_14 + 15999];
          local_44 = param_1 + local_14 * 0x102 + 0x2c5b;
          local_3c = param_1 + local_14 * 0x102 + 0x3873;
          local_40 = param_1 + local_14 * 0x102 + 0x3267;
          local_2c = local_5c;
switchD_004cdeb9_caseD_24:
          iVar8 = param_1[8];
          param_1[1] = 0x24;
          while (iVar8 < local_5c) {
            piVar16 = (int *)*param_1;
            if (piVar16[1] == 0) goto LAB_004cfe06;
            bVar7 = *(byte *)*piVar16;
            param_1[8] = iVar8 + 8;
            param_1[7] = param_1[7] << 8 | (uint)bVar7;
            *piVar16 = *piVar16 + 1;
            *(int *)(*param_1 + 4) = *(int *)(*param_1 + 4) + -1;
            *(int *)(*param_1 + 8) = *(int *)(*param_1 + 8) + 1;
            if (*(int *)(*param_1 + 8) == 0) {
              piVar16 = (int *)(*param_1 + 0xc);
              *piVar16 = *piVar16 + 1;
            }
            iVar8 = param_1[8];
          }
          param_1[8] = iVar8 - local_5c;
          local_48 = (uint)param_1[7] >> ((byte)(iVar8 - local_5c) & 0x1f) &
                     (1 << ((byte)local_5c & 0x1f)) - 1U;
          while (iVar8 = local_30, local_5c < 0x15) {
            if ((int)local_48 <= local_44[local_5c]) goto LAB_004cf090;
            local_5c = local_5c + 1;
switchD_004cdeb9_caseD_25:
            param_1[1] = 0x25;
            iVar8 = param_1[8];
            while (iVar8 < 1) {
              piVar16 = (int *)*param_1;
              if (piVar16[1] == 0) goto LAB_004cfe06;
              bVar7 = *(byte *)*piVar16;
              param_1[8] = iVar8 + 8;
              param_1[7] = param_1[7] << 8 | (uint)bVar7;
              *piVar16 = *piVar16 + 1;
              *(int *)(*param_1 + 4) = *(int *)(*param_1 + 4) + -1;
              *(int *)(*param_1 + 8) = *(int *)(*param_1 + 8) + 1;
              if (*(int *)(*param_1 + 8) == 0) {
                piVar16 = (int *)(*param_1 + 0xc);
                *piVar16 = *piVar16 + 1;
              }
              iVar8 = param_1[8];
            }
            local_18 = (uint)param_1[7] >> ((byte)(iVar8 + -1) & 0x1f) & 1;
            param_1[8] = iVar8 + -1;
            local_48 = local_48 * 2 | local_18;
          }
        }
      }
    }
    break;
  case 0x16:
    goto switchD_004cdeb9_caseD_16;
  case 0x17:
    goto switchD_004cdeb9_caseD_17;
  case 0x18:
    goto switchD_004cdeb9_caseD_18;
  case 0x19:
    goto switchD_004cdeb9_caseD_19;
  case 0x1a:
    goto switchD_004cdeb9_caseD_1a;
  case 0x1b:
    goto switchD_004cdeb9_caseD_1b;
  case 0x1c:
    goto switchD_004cdeb9_caseD_1c;
  case 0x1d:
    goto LAB_004ce804;
  case 0x1e:
    goto switchD_004cdeb9_caseD_1e;
  case 0x1f:
    goto switchD_004cdeb9_caseD_1f;
  case 0x20:
    uVar14 = local_6c;
    goto LAB_004cea18;
  case 0x21:
    goto switchD_004cdeb9_caseD_21;
  case 0x22:
    goto switchD_004cdeb9_caseD_22;
  case 0x23:
    goto switchD_004cdeb9_caseD_23;
  case 0x24:
    goto switchD_004cdeb9_caseD_24;
  case 0x25:
    goto switchD_004cdeb9_caseD_25;
  case 0x26:
    goto switchD_004cdeb9_caseD_26;
  case 0x27:
    goto switchD_004cdeb9_caseD_27;
  case 0x28:
    goto switchD_004cdeb9_caseD_28;
  case 0x29:
    goto switchD_004cdeb9_caseD_29;
  case 0x2b:
    goto switchD_004cdeb9_caseD_2b;
  case 0x2c:
    goto switchD_004cdeb9_caseD_2c;
  case 0x2d:
    goto switchD_004cdeb9_caseD_2d;
  case 0x2e:
    goto switchD_004cdeb9_caseD_2e;
  case 0x2f:
    goto switchD_004cdeb9_caseD_2f;
  case 0x30:
    goto switchD_004cdeb9_caseD_30;
  case 0x31:
    goto switchD_004cdeb9_caseD_31;
  case 0x32:
    goto switchD_004cdeb9_caseD_32;
  default:
    guard_check_icall();
    guard_check_icall();
    goto LAB_004cfe06;
  }
LAB_004ce190:
  local_30 = iVar8;
  uVar10 = 0xfffffffc;
LAB_004cfe14:
  param_1[0x3e86] = local_64;
  param_1[0x3e87] = local_50;
  param_1[0x3e88] = local_38;
  param_1[0x3e8b] = (int)local_10;
  param_1[0x3e8c] = local_30;
  param_1[0x3e8d] = local_4c;
  param_1[0x3e8e] = local_58;
  param_1[0x3e8f] = local_60;
  param_1[0x3e92] = local_28;
  param_1[0x3e93] = local_54;
  param_1[0x3e94] = local_4;
  param_1[0x3e96] = local_48;
  param_1[0x3e97] = local_18;
  param_1[0x3e98] = local_14;
  param_1[0x3e99] = local_2c;
  param_1[0x3e89] = local_6c;
  param_1[0x3e85] = local_74;
  param_1[0x3e9a] = (int)local_44;
  param_1[0x3e91] = local_70;
  param_1[0x3e8a] = local_34;
  param_1[0x3e95] = local_5c;
  param_1[0x3e9b] = (int)local_40;
  param_1[0x3e90] = local_68;
  param_1[0x3e9c] = (int)local_3c;
  return uVar10;
LAB_004cf090:
  iVar8 = local_30;
  if (0x101 < local_48 - local_40[local_5c]) goto LAB_004cef8e;
  local_58 = local_3c[local_48 - local_40[local_5c]];
  while( true ) {
    iVar8 = local_30;
    if ((uint *)local_58 == local_10) {
      if ((param_1[0xd] < 0) || (local_68 <= param_1[0xd])) goto LAB_004cef8e;
      local_74 = 0;
      piVar16 = param_1 + 0x10;
      goto LAB_004cf5c0;
    }
    if ((local_58 != 0) && (local_58 != 1)) break;
    local_70 = -1;
    local_28 = 1;
    do {
      iVar8 = local_30;
      if (0x1fffff < local_28) goto LAB_004cef8e;
      iVar8 = local_28;
      if (local_58 == 0) {
LAB_004cf103:
        local_70 = local_70 + iVar8;
      }
      else if (local_58 == 1) {
        iVar8 = local_28 * 2;
        goto LAB_004cf103;
      }
      local_28 = local_28 * 2;
      if (local_4c == 0) {
        iVar8 = local_30 + 1;
        if ((int)local_34 <= iVar8) goto LAB_004cef8e;
        local_14 = (uint)*(byte *)(local_30 + 0x1ebd + (int)param_1);
        local_4c = 0x32;
        local_2c = param_1[local_14 + 15999];
        local_44 = param_1 + local_14 * 0x102 + 0x2c5b;
        local_3c = param_1 + local_14 * 0x102 + 0x3873;
        local_40 = param_1 + local_14 * 0x102 + 0x3267;
        local_30 = iVar8;
      }
      local_4c = local_4c + -1;
      local_5c = local_2c;
switchD_004cdeb9_caseD_26:
      iVar8 = param_1[8];
      param_1[1] = 0x26;
      while (iVar8 < local_5c) {
        piVar16 = (int *)*param_1;
        if (piVar16[1] == 0) goto LAB_004cfe06;
        bVar7 = *(byte *)*piVar16;
        param_1[8] = iVar8 + 8;
        param_1[7] = param_1[7] << 8 | (uint)bVar7;
        *piVar16 = *piVar16 + 1;
        *(int *)(*param_1 + 4) = *(int *)(*param_1 + 4) + -1;
        *(int *)(*param_1 + 8) = *(int *)(*param_1 + 8) + 1;
        if (*(int *)(*param_1 + 8) == 0) {
          piVar16 = (int *)(*param_1 + 0xc);
          *piVar16 = *piVar16 + 1;
        }
        iVar8 = param_1[8];
      }
      param_1[8] = iVar8 - local_5c;
      local_48 = (uint)param_1[7] >> ((byte)(iVar8 - local_5c) & 0x1f) &
                 (1 << ((byte)local_5c & 0x1f)) - 1U;
      while( true ) {
        iVar8 = local_30;
        if (0x14 < local_5c) goto LAB_004ce190;
        if ((int)local_48 <= local_44[local_5c]) break;
        local_5c = local_5c + 1;
switchD_004cdeb9_caseD_27:
        param_1[1] = 0x27;
        iVar8 = param_1[8];
        while (iVar8 < 1) {
          piVar16 = (int *)*param_1;
          if (piVar16[1] == 0) goto LAB_004cfe06;
          bVar7 = *(byte *)*piVar16;
          param_1[8] = iVar8 + 8;
          param_1[7] = param_1[7] << 8 | (uint)bVar7;
          *piVar16 = *piVar16 + 1;
          *(int *)(*param_1 + 4) = *(int *)(*param_1 + 4) + -1;
          *(int *)(*param_1 + 8) = *(int *)(*param_1 + 8) + 1;
          if (*(int *)(*param_1 + 8) == 0) {
            piVar16 = (int *)(*param_1 + 0xc);
            *piVar16 = *piVar16 + 1;
          }
          iVar8 = param_1[8];
        }
        local_18 = (uint)param_1[7] >> ((byte)(iVar8 + -1) & 0x1f) & 1;
        param_1[8] = iVar8 + -1;
        local_48 = local_48 * 2 | local_18;
      }
      if (0x101 < local_48 - local_40[local_5c]) goto LAB_004cef8e;
      local_58 = local_3c[local_48 - local_40[local_5c]];
    } while ((local_58 == 0) || (local_58 == 1));
    local_70 = local_70 + 1;
    bVar7 = *(byte *)(*(byte *)(param_1[0x79f] + 0xe7c + (int)param_1) + 0xd7c + (int)param_1);
    param_1[bVar7 + 0x10] = param_1[bVar7 + 0x10] + local_70;
    if ((char)param_1[10] == '\0') {
      for (; 0 < local_70; local_70 = local_70 + -1) {
        if (local_60 <= local_68) goto LAB_004cef8e;
        *(uint *)(param_1[0x313] + local_68 * 4) = (uint)bVar7;
        local_68 = local_68 + 1;
      }
    }
    else {
      for (; 0 < local_70; local_70 = local_70 + -1) {
        if (local_60 <= local_68) goto LAB_004cef8e;
        *(ushort *)(param_1[0x314] + local_68 * 2) = (ushort)bVar7;
        local_68 = local_68 + 1;
      }
    }
  }
  if (local_60 <= local_68) goto LAB_004cef8e;
  uVar14 = local_58 - 1;
  if (uVar14 < 0x10) {
    iVar8 = param_1[0x79f];
    local_75 = *(byte *)(iVar8 + uVar14 + 0xe7c + (int)param_1);
    if (3 < uVar14) {
      iVar20 = (local_58 - 5U >> 2) + 1;
      puVar9 = (undefined1 *)((int)param_1 + iVar8 + uVar14 + 0xe7b);
      do {
        puVar9[1] = *puVar9;
        uVar14 = uVar14 - 4;
        *puVar9 = puVar9[-1];
        puVar9[-1] = puVar9[-2];
        puVar9[-2] = puVar9[-3];
        iVar20 = iVar20 + -1;
        puVar9 = puVar9 + -4;
      } while (iVar20 != 0);
    }
    if (uVar14 != 0) {
      puVar9 = (undefined1 *)(uVar14 + 0xe7c + iVar8 + (int)param_1);
      do {
        *puVar9 = puVar9[-1];
        uVar14 = uVar14 - 1;
        puVar9 = puVar9 + -1;
      } while (uVar14 != 0);
    }
    *(byte *)(iVar8 + 0xe7c + (int)param_1) = local_75;
  }
  else {
    uVar21 = uVar14 >> 4;
    iVar8 = param_1[uVar21 + 0x79f];
    iVar20 = (uVar14 & 0xf) + iVar8;
    pbVar24 = (byte *)(iVar20 + 0xe7c + (int)param_1);
    local_75 = *pbVar24;
    if (iVar8 < iVar20) {
      do {
        *pbVar24 = pbVar24[-1];
        iVar20 = iVar20 + -1;
        iVar8 = param_1[uVar21 + 0x79f];
        pbVar24 = pbVar24 + -1;
      } while (iVar8 < iVar20);
    }
    param_1[uVar21 + 0x79f] = iVar8 + 1;
    if (uVar21 != 0) {
      piVar16 = param_1 + uVar21 + 0x79f;
      do {
        *piVar16 = *piVar16 + -1;
        uVar21 = uVar21 - 1;
        *(undefined1 *)(*piVar16 + 0xe7c + (int)param_1) =
             *(undefined1 *)(piVar16[-1] + 0xe8b + (int)param_1);
        piVar16 = piVar16 + -1;
      } while (0 < (int)uVar21);
    }
    iVar8 = param_1[0x79f];
    param_1[0x79f] = iVar8 + -1;
    *(byte *)(iVar8 + 0xe7b + (int)param_1) = local_75;
    if (param_1[0x79f] == 0) {
      puVar9 = (undefined1 *)((int)param_1 + 0x1e7a);
      iVar20 = 0xf;
      iVar8 = 0x1000;
      piVar16 = param_1 + 0x7ae;
      do {
        iVar8 = iVar8 + -0x10;
        iVar12 = 0xf;
        puVar22 = puVar9;
        do {
          puVar22[1] = *(undefined1 *)((int)param_1 + *piVar16 + iVar12 + 0xe7c);
          *puVar22 = *(undefined1 *)((int)param_1 + *piVar16 + iVar12 + 0xe7b);
          iVar15 = iVar12 + -4;
          puVar22[-1] = *(undefined1 *)((int)param_1 + *piVar16 + iVar12 + 0xe7a);
          puVar22[-2] = *(undefined1 *)((int)param_1 + *piVar16 + iVar12 + 0xe79);
          iVar12 = iVar15;
          puVar22 = puVar22 + -4;
        } while (-1 < iVar15);
        puVar9 = puVar9 + -0x10;
        *piVar16 = iVar8;
        piVar16 = piVar16 + -1;
        iVar20 = iVar20 + -1;
      } while (-1 < iVar20);
    }
  }
  param_1[*(byte *)(local_75 + 0xd7c + (int)param_1) + 0x10] =
       param_1[*(byte *)(local_75 + 0xd7c + (int)param_1) + 0x10] + 1;
  bVar7 = *(byte *)(local_75 + 0xd7c + (int)param_1);
  if ((char)param_1[10] == '\0') {
    *(uint *)(param_1[0x313] + local_68 * 4) = (uint)bVar7;
  }
  else {
    *(ushort *)(param_1[0x314] + local_68 * 2) = (ushort)bVar7;
  }
  local_68 = local_68 + 1;
  if (local_4c == 0) {
    iVar8 = local_30 + 1;
    if ((int)local_34 <= iVar8) goto LAB_004ce190;
    local_14 = (uint)*(byte *)(local_30 + 0x1ebd + (int)param_1);
    local_4c = 0x32;
    local_2c = param_1[local_14 + 15999];
    local_44 = param_1 + local_14 * 0x102 + 0x2c5b;
    local_3c = param_1 + local_14 * 0x102 + 0x3873;
    local_40 = param_1 + local_14 * 0x102 + 0x3267;
    local_30 = iVar8;
  }
  local_4c = local_4c + -1;
  local_5c = local_2c;
switchD_004cdeb9_caseD_28:
  iVar8 = param_1[8];
  param_1[1] = 0x28;
  while (iVar8 < local_5c) {
    piVar16 = (int *)*param_1;
    if (piVar16[1] == 0) goto LAB_004cfe06;
    bVar7 = *(byte *)*piVar16;
    param_1[8] = iVar8 + 8;
    param_1[7] = param_1[7] << 8 | (uint)bVar7;
    *piVar16 = *piVar16 + 1;
    *(int *)(*param_1 + 4) = *(int *)(*param_1 + 4) + -1;
    *(int *)(*param_1 + 8) = *(int *)(*param_1 + 8) + 1;
    if (*(int *)(*param_1 + 8) == 0) {
      piVar16 = (int *)(*param_1 + 0xc);
      *piVar16 = *piVar16 + 1;
    }
    iVar8 = param_1[8];
  }
  param_1[8] = iVar8 - local_5c;
  local_48 = (uint)param_1[7] >> ((byte)(iVar8 - local_5c) & 0x1f) &
             (1 << ((byte)local_5c & 0x1f)) - 1U;
  while( true ) {
    iVar8 = local_30;
    if (0x14 < local_5c) goto LAB_004ce190;
    if ((int)local_48 <= local_44[local_5c]) break;
    local_5c = local_5c + 1;
switchD_004cdeb9_caseD_29:
    param_1[1] = 0x29;
    iVar8 = param_1[8];
    while (iVar8 < 1) {
      piVar16 = (int *)*param_1;
      if (piVar16[1] == 0) goto LAB_004cfe06;
      bVar7 = *(byte *)*piVar16;
      param_1[8] = iVar8 + 8;
      param_1[7] = param_1[7] << 8 | (uint)bVar7;
      *piVar16 = *piVar16 + 1;
      *(int *)(*param_1 + 4) = *(int *)(*param_1 + 4) + -1;
      *(int *)(*param_1 + 8) = *(int *)(*param_1 + 8) + 1;
      if (*(int *)(*param_1 + 8) == 0) {
        piVar16 = (int *)(*param_1 + 0xc);
        *piVar16 = *piVar16 + 1;
      }
      iVar8 = param_1[8];
    }
    local_18 = (uint)param_1[7] >> ((byte)(iVar8 + -1) & 0x1f) & 1;
    param_1[8] = iVar8 + -1;
    local_48 = local_48 * 2 | local_18;
  }
  goto LAB_004cf090;
  while( true ) {
    local_74 = local_74 + 1;
    piVar16 = piVar16 + 1;
    if (0xff < (int)local_74) break;
LAB_004cf5c0:
    if ((*piVar16 < 0) || (local_68 < *piVar16)) {
      uVar10 = 0xfffffffc;
      goto LAB_004cfe14;
    }
  }
  param_1[0x111] = 0;
  piVar16 = param_1 + 0x10;
  piVar25 = param_1 + 0x112;
  for (iVar8 = 0x100; iVar8 != 0; iVar8 = iVar8 + -1) {
    *piVar25 = *piVar16;
    piVar16 = piVar16 + 1;
    piVar25 = piVar25 + 1;
  }
  iVar8 = 0x100;
  piVar16 = param_1 + 0x112;
  do {
    *piVar16 = *piVar16 + piVar16[-1];
    iVar8 = iVar8 + -1;
    piVar16 = piVar16 + 1;
  } while (iVar8 != 0);
  piVar16 = param_1 + 0x111;
  local_74 = 0;
  do {
    if ((*piVar16 < 0) || (local_68 < *piVar16)) goto LAB_004ce900;
    local_74 = local_74 + 1;
    piVar16 = piVar16 + 1;
  } while ((int)local_74 < 0x101);
  piVar16 = param_1 + 0x111;
  local_74 = 1;
  iVar20 = param_1[0x111];
  do {
    piVar16 = piVar16 + 1;
    iVar8 = local_30;
    if (*piVar16 < iVar20) goto LAB_004ce190;
    local_74 = local_74 + 1;
    iVar20 = *piVar16;
  } while ((int)local_74 < 0x101);
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  param_1[0x318] = -1;
  param_1[1] = 2;
  if ((char)param_1[10] == '\0') {
    local_74 = 0;
    if (0 < local_68) {
      do {
        bVar7 = *(byte *)(param_1[0x313] + local_74 * 4);
        puVar2 = (uint *)(param_1[0x313] + param_1[bVar7 + 0x111] * 4);
        *puVar2 = *puVar2 | local_74 << 8;
        param_1[bVar7 + 0x111] = param_1[bVar7 + 0x111] + 1;
        local_74 = local_74 + 1;
      } while ((int)local_74 < local_68);
    }
    iVar8 = param_1[0x313];
    uVar14 = *(uint *)(iVar8 + param_1[0xd] * 4) >> 8;
    param_1[0xe] = uVar14;
    param_1[0x110] = 0;
    if ((char)param_1[4] == '\0') {
      if ((uint)(param_1[9] * 100000) <= uVar14) {
        return 1;
      }
      uVar14 = *(uint *)(iVar8 + uVar14 * 4);
      param_1[0xf] = uVar14 & 0xff;
      param_1[0xe] = uVar14 >> 8;
      param_1[0x110] = 1;
    }
    else {
      param_1[5] = 0;
      param_1[6] = 0;
      if ((uint)(param_1[9] * 100000) <= uVar14) {
        return 1;
      }
      uVar14 = *(uint *)(iVar8 + uVar14 * 4);
      uVar21 = uVar14 & 0xff;
      param_1[0xf] = uVar21;
      param_1[0xe] = uVar14 >> 8;
      param_1[0x110] = 1;
      iVar8 = DAT_005413d0 + -1;
      param_1[6] = 1;
      param_1[5] = iVar8;
      param_1[0xf] = iVar8 == 1 ^ uVar21;
    }
  }
  else {
    piVar16 = param_1 + 0x111;
    piVar25 = param_1 + 0x212;
    for (iVar8 = 0x101; iVar8 != 0; iVar8 = iVar8 + -1) {
      *piVar25 = *piVar16;
      piVar16 = piVar16 + 1;
      piVar25 = piVar25 + 1;
    }
    local_1c = 0;
    if (0 < local_68) {
      do {
        pbVar24 = (byte *)(param_1[0x314] + local_1c * 2);
        bVar7 = *pbVar24;
        *(short *)pbVar24 = (short)param_1[bVar7 + 0x212];
        pbVar24 = (byte *)(((int)local_1c >> 1) + param_1[0x315]);
        bVar4 = *pbVar24;
        if ((local_1c & 1) == 0) {
          bVar11 = (byte)((uint)param_1[bVar7 + 0x212] >> 0x10) | bVar4 & 0xf0;
        }
        else {
          bVar11 = (byte)(param_1[bVar7 + 0x212] >> 0xc);
          bVar11 = bVar11 ^ (bVar11 ^ bVar4) & 0xf;
        }
        *pbVar24 = bVar11;
        param_1[bVar7 + 0x212] = param_1[bVar7 + 0x212] + 1;
        local_1c = local_1c + 1;
      } while ((int)local_1c < local_68);
    }
    local_74 = param_1[0xd];
    local_64 = (*(byte *)(((int)local_74 >> 1) + param_1[0x315]) >> (sbyte)((local_74 & 1) << 2) &
               0xf) << 0x10 | (uint)*(ushort *)(param_1[0x314] + local_74 * 2);
    do {
      uVar14 = local_64;
      uVar21 = uVar14 >> 1;
      puVar1 = (ushort *)(param_1[0x314] + uVar14 * 2);
      local_c[0] = (byte *)((*(byte *)(param_1[0x315] + uVar21) >> (char)(uVar14 & 1) * '\x04' & 0xf
                            ) << 0x10);
      local_64 = (uint)local_c[0] | (uint)*puVar1;
      *puVar1 = (ushort)local_74;
      bVar7 = *(byte *)(param_1[0x315] + uVar21);
      if ((uVar14 & 1) == 0) {
        local_74._0_1_ = (byte)(local_74 >> 0x10);
        local_74._0_1_ = (byte)local_74 | bVar7 & 0xf0;
      }
      else {
        local_74._0_1_ = (byte)((int)local_74 >> 0xc);
        local_74._0_1_ = ((byte)local_74 ^ bVar7) & 0xf ^ (byte)local_74;
      }
      *(byte *)(param_1[0x315] + uVar21) = (byte)local_74;
      uVar21 = param_1[0xd];
      local_74 = uVar14;
    } while (uVar14 != uVar21);
    param_1[0xe] = uVar21;
    param_1[0x110] = 0;
    if ((char)param_1[4] == '\0') {
      if ((uint)(param_1[9] * 100000) <= uVar21) {
        return 1;
      }
      iVar8 = FUN_004861d0(uVar21,(int)(param_1 + 0x111));
      uVar14 = param_1[0xe];
      param_1[0xf] = iVar8;
      bVar7 = *(byte *)((uVar14 >> 1) + param_1[0x315]);
      uVar5 = *(ushort *)(param_1[0x314] + uVar14 * 2);
      param_1[0x110] = param_1[0x110] + 1;
      param_1[0xe] = (bVar7 >> (sbyte)((uVar14 & 1) << 2) & 0xf) << 0x10 | (uint)uVar5;
    }
    else {
      param_1[5] = 0;
      param_1[6] = 0;
      if ((uint)(param_1[9] * 100000) <= uVar21) {
        return 1;
      }
      uVar21 = FUN_004861d0(uVar21,(int)(param_1 + 0x111));
      uVar14 = param_1[0xe];
      param_1[0xf] = uVar21;
      bVar7 = *(byte *)((uVar14 >> 1) + param_1[0x315]);
      iVar8 = param_1[5];
      uVar5 = *(ushort *)(param_1[0x314] + uVar14 * 2);
      param_1[0x110] = param_1[0x110] + 1;
      param_1[0xe] = (bVar7 >> (sbyte)((uVar14 & 1) << 2) & 0xf) << 0x10 | (uint)uVar5;
      if (iVar8 == 0) {
        iVar8 = (&DAT_005413d0)[param_1[6]];
        iVar20 = param_1[6] + 1;
        param_1[6] = iVar20;
        if (iVar20 == 0x200) {
          param_1[6] = 0;
        }
      }
      param_1[5] = iVar8 + -1;
      param_1[0xf] = iVar8 + -1 == 1 ^ uVar21;
    }
  }
LAB_004cfe06:
  uVar10 = 0;
  goto LAB_004cfe14;
LAB_004cef8e:
  local_30 = iVar8;
  uVar10 = 0xfffffffc;
  goto LAB_004cfe14;
}


