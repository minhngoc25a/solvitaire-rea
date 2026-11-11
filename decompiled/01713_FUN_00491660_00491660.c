// Function: FUN_00491660
// Entry: 00491660
// Size: 529 bytes
// Thunk: false
// External: false


byte * __cdecl FUN_00491660(byte *param_1)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  byte bVar4;
  byte *pbVar5;
  byte *pbVar6;
  char *pcVar7;
  byte bVar8;
  bool bVar9;
  byte local_10 [16];
  
  if ((param_1 != (byte *)0x0) && (*param_1 != 0)) {
    pbVar5 = param_1;
    do {
      bVar8 = *pbVar5;
      pbVar5 = pbVar5 + 1;
    } while (bVar8 != 0);
    if ((uint)((int)pbVar5 - (int)(param_1 + 1)) < 0x10) {
      pbVar6 = local_10;
      pbVar5 = param_1;
      bVar8 = *param_1;
      do {
        bVar2 = pbVar5[1];
        pbVar5 = pbVar5 + 1;
        bVar4 = bVar8 - 0x20;
        if (0x19 < (byte)(bVar8 + 0x9f)) {
          bVar4 = bVar8;
        }
        pbVar1 = pbVar6 + 1;
        *pbVar6 = bVar4;
        pbVar6 = pbVar1;
        bVar8 = bVar2;
      } while (bVar2 != 0);
      *pbVar1 = 0;
      pbVar5 = local_10;
      pbVar6 = &DAT_005297a0;
      do {
        bVar8 = *pbVar5;
        bVar9 = bVar8 < *pbVar6;
        if (bVar8 != *pbVar6) {
LAB_004916f0:
          uVar3 = -(uint)bVar9 | 1;
          goto LAB_004916f5;
        }
        if (bVar8 == 0) break;
        bVar8 = pbVar5[1];
        bVar9 = bVar8 < pbVar6[1];
        if (bVar8 != pbVar6[1]) goto LAB_004916f0;
        pbVar5 = pbVar5 + 2;
        pbVar6 = pbVar6 + 2;
      } while (bVar8 != 0);
      uVar3 = 0;
LAB_004916f5:
      if (uVar3 != 0) {
        pbVar6 = &DAT_00529738;
        pbVar5 = local_10;
        do {
          bVar8 = *pbVar5;
          bVar9 = bVar8 < *pbVar6;
          if (bVar8 != *pbVar6) {
LAB_00491726:
            uVar3 = -(uint)bVar9 | 1;
            goto LAB_0049172b;
          }
          if (bVar8 == 0) break;
          bVar8 = pbVar5[1];
          bVar9 = bVar8 < pbVar6[1];
          if (bVar8 != pbVar6[1]) goto LAB_00491726;
          pbVar5 = pbVar5 + 2;
          pbVar6 = pbVar6 + 2;
        } while (bVar8 != 0);
        uVar3 = 0;
LAB_0049172b:
        if (uVar3 != 0) {
          pcVar7 = "UTF-16BE";
          pbVar5 = local_10;
          do {
            bVar8 = *pbVar5;
            bVar9 = bVar8 < (byte)*pcVar7;
            if (bVar8 != *pcVar7) {
LAB_00491760:
              uVar3 = -(uint)bVar9 | 1;
              goto LAB_00491765;
            }
            if (bVar8 == 0) break;
            bVar8 = pbVar5[1];
            bVar9 = bVar8 < (byte)pcVar7[1];
            if (bVar8 != pcVar7[1]) goto LAB_00491760;
            pbVar5 = pbVar5 + 2;
            pcVar7 = pcVar7 + 2;
          } while (bVar8 != 0);
          uVar3 = 0;
LAB_00491765:
          if (uVar3 != 0) {
            pbVar6 = &DAT_00529390;
            pbVar5 = local_10;
            do {
              bVar8 = *pbVar5;
              bVar9 = bVar8 < *pbVar6;
              if (bVar8 != *pbVar6) {
LAB_00491796:
                uVar3 = -(uint)bVar9 | 1;
                goto LAB_0049179b;
              }
              if (bVar8 == 0) break;
              bVar8 = pbVar5[1];
              bVar9 = bVar8 < pbVar6[1];
              if (bVar8 != pbVar6[1]) goto LAB_00491796;
              pbVar5 = pbVar5 + 2;
              pbVar6 = pbVar6 + 2;
            } while (bVar8 != 0);
            uVar3 = 0;
LAB_0049179b:
            if (uVar3 != 0) {
              pcVar7 = "UTF-16LE";
              pbVar5 = local_10;
              do {
                bVar8 = *pbVar5;
                bVar9 = bVar8 < (byte)*pcVar7;
                if (bVar8 != *pcVar7) {
LAB_004917d0:
                  uVar3 = -(uint)bVar9 | 1;
                  goto LAB_004917d5;
                }
                if (bVar8 == 0) break;
                bVar8 = pbVar5[1];
                bVar9 = bVar8 < (byte)pcVar7[1];
                if (bVar8 != pcVar7[1]) goto LAB_004917d0;
                pbVar5 = pbVar5 + 2;
                pcVar7 = pcVar7 + 2;
              } while (bVar8 != 0);
              uVar3 = 0;
LAB_004917d5:
              if (uVar3 != 0) {
                pbVar6 = &DAT_0052933c;
                pbVar5 = local_10;
                do {
                  bVar8 = *pbVar5;
                  bVar9 = bVar8 < *pbVar6;
                  if (bVar8 != *pbVar6) {
LAB_00491802:
                    uVar3 = -(uint)bVar9 | 1;
                    goto LAB_00491807;
                  }
                  if (bVar8 == 0) break;
                  bVar8 = pbVar5[1];
                  bVar9 = bVar8 < pbVar6[1];
                  if (bVar8 != pbVar6[1]) goto LAB_00491802;
                  pbVar5 = pbVar5 + 2;
                  pbVar6 = pbVar6 + 2;
                } while (bVar8 != 0);
                uVar3 = 0;
LAB_00491807:
                if (uVar3 != 0) {
                  pbVar6 = &DAT_00529af4;
                  pbVar5 = local_10;
                  do {
                    bVar8 = *pbVar5;
                    bVar9 = bVar8 < *pbVar6;
                    if (bVar8 != *pbVar6) {
LAB_00491834:
                      uVar3 = -(uint)bVar9 | 1;
                      goto LAB_00491839;
                    }
                    if (bVar8 == 0) break;
                    bVar8 = pbVar5[1];
                    bVar9 = bVar8 < pbVar6[1];
                    if (bVar8 != pbVar6[1]) goto LAB_00491834;
                    pbVar5 = pbVar5 + 2;
                    pbVar6 = pbVar6 + 2;
                  } while (bVar8 != 0);
                  uVar3 = 0;
LAB_00491839:
                  if (uVar3 != 0) {
                    return param_1;
                  }
                  return &DAT_00529af4;
                }
              }
              return (byte *)"UTF-16LE";
            }
          }
          return (byte *)"UTF-16BE";
        }
      }
      return &DAT_005297a0;
    }
  }
  return param_1;
}


