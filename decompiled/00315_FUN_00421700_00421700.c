// Function: FUN_00421700
// Entry: 00421700
// Size: 1878 bytes
// Thunk: false
// External: false


undefined4 __cdecl
FUN_00421700(int param_1,int param_2,int param_3,int param_4,int param_5,uint param_6)

{
  int *piVar1;
  byte bVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined2 *puVar7;
  int iVar8;
  int iVar9;
  byte *pbVar10;
  char *pcVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  ushort *puVar16;
  ushort *puVar17;
  undefined2 *puVar18;
  int local_30;
  int local_2c;
  int local_28;
  int local_1c;
  uint local_18;
  undefined4 local_8;
  undefined4 local_4;
  
  uVar3 = *(ushort *)(param_1 + 0x1c);
  piVar1 = (int *)(param_1 + 0xe);
  iVar5 = *(int *)(param_1 + 0x1e);
  uVar14 = *(uint *)(param_1 + 0x12);
  iVar4 = *(int *)(param_1 + 0x16);
  puVar16 = (ushort *)(*(int *)(param_1 + 10) + param_1);
  if (uVar3 < 9) {
    if (uVar3 == 1) {
      local_8 = 0;
      local_4 = 0xffffffff;
      iVar5 = (int)(uVar14 + 7 + ((int)(uVar14 + 7) >> 0x1f & 7U)) >> 3;
      local_1c = 0;
      if (0 < iVar4) {
        iVar8 = iVar4;
        do {
          iVar8 = iVar8 + -1;
          iVar13 = local_1c;
          if ((param_6 & 2) == 0) {
            iVar13 = iVar8;
          }
          local_30 = 0;
          if (0 < iVar5) {
            local_28 = 8;
            uVar6 = -uVar14;
            puVar18 = (undefined2 *)(iVar13 * param_5 + param_3);
            do {
              uVar6 = uVar6 + 8;
              uVar12 = (local_28 <= (int)uVar14) - 1 & uVar6;
              if (param_2 < (int)((1 - param_1) + (int)puVar16)) {
                return 0;
              }
              local_2c = 7;
              if ((int)uVar12 < 8) {
                do {
                  *puVar18 = *(undefined2 *)
                              (&local_8 + ((byte)((byte)*puVar16 >> ((byte)local_2c & 0x1f)) & 1));
                  *(undefined1 *)(puVar18 + 1) =
                       *(undefined1 *)
                        ((int)&local_8 +
                        ((byte)((byte)*puVar16 >> ((byte)local_2c & 0x1f)) & 1) * 4 + 2);
                  puVar18 = (undefined2 *)((int)puVar18 + 3);
                  local_2c = local_2c + -1;
                } while ((int)uVar12 <= local_2c);
              }
              local_30 = local_30 + 1;
              local_28 = local_28 + 8;
              puVar16 = (ushort *)((int)puVar16 + 1);
            } while (local_30 < iVar5);
          }
          puVar16 = (ushort *)((int)puVar16 + (-iVar5 & 3U));
          local_1c = local_1c + 1;
        } while (local_1c < iVar4);
      }
    }
    else {
      iVar8 = *piVar1;
      if (uVar3 == 4) {
        if (iVar5 != 2) {
          iVar13 = 0;
          iVar5 = (int)(uVar14 + 1) / 2;
          if (0 < iVar4) {
            iVar15 = iVar4;
            do {
              iVar15 = iVar15 + -1;
              iVar9 = iVar13;
              if ((param_6 & 2) == 0) {
                iVar9 = iVar15;
              }
              if (param_2 < (int)((int)puVar16 + (1 - param_1))) {
                return 0;
              }
              if (0 < iVar5) {
                puVar18 = (undefined2 *)(iVar9 * param_5 + param_3);
                iVar9 = iVar5;
                do {
                  *puVar18 = *(undefined2 *)
                              ((int)piVar1 + (uint)(byte)((byte)*puVar16 >> 4) * 4 + iVar8);
                  *(undefined1 *)(puVar18 + 1) =
                       *(undefined1 *)
                        ((int)piVar1 + (uint)(byte)((byte)*puVar16 >> 4) * 4 + iVar8 + 2);
                  *(undefined2 *)((int)puVar18 + 3) =
                       *(undefined2 *)((int)piVar1 + ((byte)*puVar16 & 0xf) * 4 + iVar8);
                  uVar3 = *puVar16;
                  puVar16 = (ushort *)((int)puVar16 + 1);
                  *(undefined1 *)((int)puVar18 + 5) =
                       *(undefined1 *)((int)piVar1 + ((byte)uVar3 & 0xf) * 4 + iVar8 + 2);
                  iVar9 = iVar9 + -1;
                  puVar18 = puVar18 + 3;
                } while (iVar9 != 0);
              }
              puVar16 = (ushort *)((int)puVar16 + (-iVar5 & 3U));
              iVar13 = iVar13 + 1;
            } while (iVar13 < iVar4);
          }
        }
      }
      else if (uVar3 == 8) {
        if (iVar5 == 1) {
          iVar5 = 0;
          iVar13 = 0;
          while( true ) {
            while( true ) {
              while( true ) {
                while( true ) {
                  if (param_2 <= (int)puVar16 - param_1) {
                    return 0;
                  }
                  if ((byte)*puVar16 == 0) break;
                  iVar15 = iVar5;
                  if ((param_6 & 2) == 0) {
                    iVar15 = (iVar4 - iVar5) + -1;
                  }
                  if (param_2 <= (int)((int)puVar16 + (1 - param_1))) {
                    return 0;
                  }
                  uVar14 = (uint)(byte)*puVar16;
                  if (uVar14 != 0) {
                    puVar18 = (undefined2 *)
                              ((int)piVar1 + (uint)*(byte *)((int)puVar16 + 1) * 4 + iVar8);
                    puVar7 = (undefined2 *)(iVar15 * param_5 + iVar13 * 3 + param_3);
                    uVar6 = uVar14;
                    do {
                      *puVar7 = *puVar18;
                      *(undefined1 *)(puVar7 + 1) = *(undefined1 *)(puVar18 + 1);
                      uVar6 = uVar6 - 1;
                      puVar7 = (undefined2 *)((int)puVar7 + 3);
                    } while (uVar6 != 0);
                  }
                  iVar13 = iVar13 + uVar14;
                  puVar16 = puVar16 + 1;
                }
                if (param_2 <= (int)((int)puVar16 + (1 - param_1))) {
                  return 0;
                }
                bVar2 = *(byte *)((int)puVar16 + 1);
                puVar17 = puVar16 + 1;
                uVar14 = (uint)bVar2;
                if (uVar14 != 0) break;
                iVar13 = 0;
                iVar5 = iVar5 + 1;
                puVar16 = puVar17;
              }
              if (uVar14 == 1) {
                return 1;
              }
              if (uVar14 == 2) break;
              iVar15 = iVar5;
              if ((param_6 & 2) == 0) {
                iVar15 = (iVar4 - iVar5) + -1;
              }
              local_18 = 0;
              if (uVar14 != 0) {
                puVar18 = (undefined2 *)(param_3 + iVar15 * param_5 + iVar13 * 3);
                iVar15 = (int)puVar17 - param_1;
                do {
                  if (param_2 <= iVar15) {
                    return 0;
                  }
                  uVar3 = *puVar17;
                  iVar15 = iVar15 + 1;
                  puVar17 = (ushort *)((int)puVar17 + 1);
                  puVar7 = (undefined2 *)((int)piVar1 + (uint)(byte)uVar3 * 4 + iVar8);
                  *puVar18 = *puVar7;
                  *(undefined1 *)(puVar18 + 1) = *(undefined1 *)(puVar7 + 1);
                  puVar18 = (undefined2 *)((int)puVar18 + 3);
                  local_18 = local_18 + 1;
                } while (local_18 < uVar14);
              }
              if ((bVar2 & 1) != 0) {
                if (param_2 <= (int)puVar17 - param_1) {
                  return 0;
                }
                puVar17 = (ushort *)((int)puVar17 + 1);
              }
              iVar13 = iVar13 + uVar14;
              puVar16 = puVar17;
            }
            if (param_2 <= (int)puVar17 - param_1) {
              return 0;
            }
            if (param_2 <= (int)((int)puVar16 + (3 - param_1))) break;
            iVar13 = iVar13 + (uint)(byte)*puVar17;
            iVar5 = iVar5 + (uint)*(byte *)((int)puVar16 + 3);
            puVar16 = puVar16 + 2;
          }
          return 0;
        }
        local_18 = 0;
        if (0 < iVar4) {
          iVar5 = iVar4;
          do {
            iVar5 = iVar5 + -1;
            uVar6 = local_18;
            if ((param_6 & 2) == 0) {
              uVar6 = iVar5;
            }
            pbVar10 = (byte *)((int)puVar16 + (1 - param_1));
            if (param_2 < (int)pbVar10) {
              return 0;
            }
            iVar13 = 0;
            if (0 < (int)uVar14) {
              puVar18 = (undefined2 *)(uVar6 * param_5 + param_3);
              do {
                if (param_2 < (int)pbVar10) {
                  return 0;
                }
                iVar13 = iVar13 + 1;
                pbVar10 = pbVar10 + 1;
                *puVar18 = *(undefined2 *)((int)piVar1 + (uint)(byte)*puVar16 * 4 + iVar8);
                uVar3 = *puVar16;
                puVar16 = (ushort *)((int)puVar16 + 1);
                *(undefined1 *)(puVar18 + 1) =
                     *(undefined1 *)((int)piVar1 + (uint)(byte)uVar3 * 4 + iVar8 + 2);
                puVar18 = (undefined2 *)((int)puVar18 + 3);
              } while (iVar13 < (int)uVar14);
            }
            local_18 = local_18 + 1;
            puVar16 = (ushort *)((int)puVar16 + (-uVar14 & 3));
          } while ((int)local_18 < iVar4);
        }
      }
    }
  }
  else if (uVar3 == 0x10) {
    if (iVar5 == 0) {
      local_18 = 0;
      if (0 < iVar4) {
        iVar5 = iVar4;
        do {
          iVar5 = iVar5 + -1;
          uVar6 = local_18;
          if ((param_6 & 2) == 0) {
            uVar6 = iVar5;
          }
          iVar8 = 0;
          if (0 < (int)uVar14) {
            pcVar11 = (char *)(uVar6 * param_5 + param_3);
            do {
              if (param_2 < (int)((2 - param_1) + (int)puVar16)) {
                return 0;
              }
              uVar3 = *puVar16;
              iVar8 = iVar8 + 1;
              puVar16 = puVar16 + 1;
              *pcVar11 = (char)uVar3 << 3;
              pcVar11[1] = (char)(uVar3 >> 5) << 3;
              pcVar11[2] = (byte)(uVar3 >> 10) << 3;
              pcVar11 = pcVar11 + 3;
            } while (iVar8 < (int)uVar14);
          }
          puVar16 = puVar16 + (uVar14 & 1);
          local_18 = local_18 + 1;
        } while ((int)local_18 < iVar4);
      }
    }
    else if ((iVar5 == 3) && (local_18 = 0, 0 < iVar4)) {
      iVar5 = iVar4;
      do {
        iVar5 = iVar5 + -1;
        uVar6 = local_18;
        if ((param_6 & 2) == 0) {
          uVar6 = iVar5;
        }
        iVar8 = 0;
        if (0 < (int)uVar14) {
          iVar13 = (int)puVar16 - param_1;
          pcVar11 = (char *)(uVar6 * param_5 + param_3);
          do {
            iVar13 = iVar13 + 2;
            if (param_2 < iVar13) {
              return 0;
            }
            uVar3 = *puVar16;
            iVar8 = iVar8 + 1;
            puVar16 = puVar16 + 1;
            *pcVar11 = (char)uVar3 << 3;
            pcVar11[1] = (char)(uVar3 >> 5) << 2;
            pcVar11[2] = (byte)(uVar3 >> 8) & 0xf8;
            pcVar11 = pcVar11 + 3;
          } while (iVar8 < (int)uVar14);
        }
        puVar16 = puVar16 + (uVar14 & 1);
        local_18 = local_18 + 1;
      } while ((int)local_18 < iVar4);
    }
  }
  else if (((uVar3 == 0x18) || (uVar3 == 0x20)) && (local_18 = 0, 0 < iVar4)) {
    iVar5 = iVar4;
    do {
      iVar5 = iVar5 + -1;
      uVar6 = local_18;
      if ((param_6 & 2) == 0) {
        uVar6 = iVar5;
      }
      pbVar10 = (byte *)(param_3 + uVar6 * param_5);
      if (uVar3 == 0x20) {
        iVar8 = 0;
        if (0 < (int)uVar14) {
          do {
            if (param_2 < (int)((3 - param_1) + (int)puVar16)) {
              return 0;
            }
            *pbVar10 = (byte)*puVar16;
            pbVar10[1] = *(byte *)((int)puVar16 + 1);
            pbVar10[2] = (byte)puVar16[1];
            if (param_4 == 0x20) {
              pbVar10[3] = *(byte *)((int)puVar16 + 3);
              pbVar10 = pbVar10 + 4;
            }
            else {
              pbVar10 = pbVar10 + 3;
            }
            iVar8 = iVar8 + 1;
            puVar16 = puVar16 + 2;
          } while (iVar8 < (int)uVar14);
        }
      }
      else {
        iVar8 = 0;
        if (0 < (int)uVar14) {
          iVar13 = (int)puVar16 - param_1;
          do {
            iVar13 = iVar13 + 3;
            if (param_2 < iVar13) {
              return 0;
            }
            iVar8 = iVar8 + 1;
            *pbVar10 = (byte)*puVar16;
            pbVar10[1] = *(byte *)((int)puVar16 + 1);
            puVar17 = puVar16 + 1;
            puVar16 = (ushort *)((int)puVar16 + 3);
            pbVar10[2] = (byte)*puVar17;
            pbVar10 = pbVar10 + 3;
          } while (iVar8 < (int)uVar14);
        }
        if (uVar3 == 0x18) {
          puVar16 = (ushort *)((int)puVar16 + (uVar14 & 3));
        }
      }
      local_18 = local_18 + 1;
    } while ((int)local_18 < iVar4);
    return 1;
  }
  return 1;
}


