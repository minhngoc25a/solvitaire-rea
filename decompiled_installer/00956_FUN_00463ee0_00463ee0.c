// Function: FUN_00463ee0
// Entry: 00463ee0
// Size: 1246 bytes
// Thunk: false
// External: false


undefined4 __cdecl
FUN_00463ee0(uint *param_1,uint *param_2,uint param_3,uint *param_4,uint param_5,uint param_6,
            uint param_7)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  uint *puVar8;
  undefined4 uVar9;
  uint *puVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  bool bVar14;
  uint unaff_retaddr;
  uint uStack_20;
  uint uStack_1c;
  int iStack_18;
  
  param_3 = *(uint *)param_1[0x110];
  _memset(param_2,0,0x68);
  iVar5 = FUN_004638e0(param_1,param_2);
  if (((-1 < iVar5) && (param_2[1] == 0)) && (*param_2 < 5)) {
    uVar6 = FUN_0047f911(*param_2,0x28);
    param_2[2] = uVar6;
    if ((uVar6 != 0) && ((uVar6 = 0, param_2[1] != 0 || (*param_2 != 0)))) {
      iVar5 = 0;
      iStack_18 = 0;
      uStack_1c = 0;
      uStack_20 = unaff_retaddr;
      do {
        puVar7 = FUN_00463150(param_1,1);
        if (puVar7 == (uint *)0x0) {
          return 0xffffffff;
        }
        bVar2 = (byte)*puVar7;
        uVar4 = ~(uint)(bVar2 >> 4) & 1;
        if ((char)bVar2 < '\0') {
          return 0xffffffff;
        }
        puVar7 = FUN_00463150(param_1,bVar2 & 0xf);
        if (puVar7 == (uint *)0x0) {
          return 0xffffffff;
        }
        iVar11 = 0;
        uVar13 = 0;
        if ((bVar2 & 0xf) != 0) {
          do {
            pbVar1 = (byte *)((int)puVar7 + uVar13);
            uVar13 = uVar13 + 1;
            iVar11 = iVar11 * 0x100 + (uint)*pbVar1;
            param_2 = param_4;
          } while (uVar13 < (bVar2 & 0xf));
        }
        *(int *)(iVar5 + param_2[2]) = iVar11;
        uVar13 = param_2[2];
        if (uVar4 == 0) {
          iVar11 = FUN_004638e0(param_1,(uint *)(uVar13 + 8 + iVar5));
          if (iVar11 < 0) {
            return 0xffffffff;
          }
          uVar13 = param_2[2];
          if (*(int *)(uVar13 + 0xc + iVar5) != 0) {
            return 0xffffffff;
          }
          if (100000000 < *(uint *)(uVar13 + 8 + iVar5)) {
            return 0xffffffff;
          }
          iVar11 = FUN_004638e0(param_1,(uint *)(uVar13 + 0x10 + iVar5));
          if (iVar11 < 0) {
            return 0xffffffff;
          }
          if (*(int *)(param_2[2] + 0x14 + iVar5) != 0) {
            return 0xffffffff;
          }
          if (100000000 < *(uint *)(param_2[2] + 0x10 + iVar5)) {
            return 0xffffffff;
          }
        }
        else {
          *(undefined4 *)(uVar13 + 8 + iVar5) = 1;
          *(undefined4 *)(uVar13 + 0xc + iVar5) = 0;
          uVar13 = param_2[2];
          *(undefined4 *)(uVar13 + 0x10 + iVar5) = 1;
          *(undefined4 *)(uVar13 + 0x14 + iVar5) = 0;
        }
        if ((bVar2 & 0x20) != 0) {
          iVar11 = FUN_004638e0(param_1,(uint *)(param_2[2] + 0x18 + iVar5));
          if (iVar11 < 0) {
            return 0xffffffff;
          }
          puVar8 = FUN_00463150(param_1,*(uint *)(param_2[2] + 0x18 + iVar5));
          if (puVar8 == (uint *)0x0) {
            return 0xffffffff;
          }
          uVar9 = FUN_00482949(*(SIZE_T *)(param_2[2] + 0x18 + iVar5));
          *(undefined4 *)(param_2[2] + 0x20 + iVar5) = uVar9;
          puVar10 = *(uint **)(param_2[2] + 0x20 + iVar5);
          if (puVar10 == (uint *)0x0) {
            return 0xffffffff;
          }
          FUN_0044c490(puVar10,puVar8,*(uint *)(param_2[2] + 0x18 + iVar5));
        }
        uVar13 = param_2[2];
        puVar8 = (uint *)(uVar13 + 8 + iVar5);
        bVar14 = CARRY4(param_3,*puVar8);
        param_3 = param_3 + *puVar8;
        uStack_20 = uStack_20 + *(int *)(uVar13 + 0xc + iVar5) + (uint)bVar14;
        puVar8 = (uint *)(uVar13 + 0x10 + iVar5);
        bVar14 = CARRY4(uStack_1c,*puVar8);
        uStack_1c = uStack_1c + *puVar8;
        iStack_18 = iStack_18 + *(int *)(uVar13 + 0x14 + iVar5) + (uint)bVar14;
        uVar6 = uVar6 + 1;
        iVar5 = iVar5 + 0x28;
      } while ((param_2[1] != 0) || (uVar6 < *param_2));
      if (uStack_1c != 0 || iStack_18 != 0) {
        uVar6 = uStack_1c - 1;
        uVar13 = iStack_18 + -1 + (uint)(uStack_1c != 0);
        if ((uVar13 <= uStack_20) && ((uVar13 < uStack_20 || (uVar6 <= param_3)))) {
          param_2[4] = uVar6;
          param_2[5] = uVar13;
          if ((uVar13 <= param_1[0x15]) && ((uVar13 < param_1[0x15] || (uVar6 <= param_1[0x14])))) {
            if ((uVar13 == 0) && (uVar6 == 0)) {
              param_2[6] = 0;
              uVar6 = 0;
            }
            else {
              uVar6 = FUN_0047f911(uVar6,0x10);
              param_2[6] = uVar6;
              if (uVar6 == 0) {
                return 0xffffffff;
              }
            }
            param_6 = 0;
            if ((param_2[5] != 0) || (uVar13 = 0, param_2[4] != 0)) {
              iVar5 = 0;
              do {
                iVar11 = FUN_004638e0(param_1,(uint *)(uVar6 + iVar5));
                if (iVar11 < 0) {
                  return 0xffffffff;
                }
                uVar6 = param_2[6];
                if (*(int *)(uVar6 + 4 + iVar5) != 0) {
                  return 0xffffffff;
                }
                if (100000000 < *(uint *)(uVar6 + iVar5)) {
                  return 0xffffffff;
                }
                iVar11 = FUN_004638e0(param_1,(uint *)(uVar6 + 8 + iVar5));
                if (iVar11 < 0) {
                  return 0xffffffff;
                }
                uVar6 = param_2[6];
                if (*(int *)(uVar6 + 0xc + iVar5) != 0) {
                  return 0xffffffff;
                }
                if (100000000 < *(uint *)(uVar6 + 8 + iVar5)) {
                  return 0xffffffff;
                }
                iVar5 = iVar5 + 0x10;
                param_6 = param_6 + 1;
                uVar13 = param_2[4];
              } while ((param_2[5] != 0) || (param_6 < uVar13));
            }
            param_2[8] = param_5 - uVar13;
            param_2[9] = iStack_18 - (uint)(param_5 < uVar13);
            puVar8 = (uint *)FUN_0047f911(param_5 - uVar13,8);
            param_2[10] = (uint)puVar8;
            if (puVar8 != (uint *)0x0) {
              if ((param_2[8] == 1) && (param_2[9] == 0)) {
                uVar6 = 0;
                if ((puVar7 != (uint *)0x0) || (param_5 != 0)) {
                  uVar13 = param_2[4];
                  uVar3 = param_2[5];
                  do {
                    uVar12 = 0;
                    if ((uVar3 != 0) || (uVar13 != 0)) {
                      puVar10 = (uint *)param_2[6];
                      do {
                        if ((*puVar10 == uVar6) && (puVar10[1] == 0)) break;
                        uVar12 = uVar12 + 1;
                        puVar10 = puVar10 + 4;
                      } while ((uVar3 != 0) || (uVar12 < uVar13));
                    }
                  } while (((uVar12 != uVar13) || (uVar3 != 0)) &&
                          ((uVar6 = uVar6 + 1, puVar7 != (uint *)0x0 || (uVar6 < param_5))));
                }
                if ((uVar6 == param_7) && (puVar7 == (uint *)0x0)) {
                  return 0xffffffff;
                }
                *puVar8 = uVar6;
                puVar8[1] = 0;
              }
              else {
                uVar6 = 0;
                if ((param_2[9] != 0) || (param_2[8] != 0)) {
                  do {
                    iVar5 = FUN_004638e0(param_1,puVar8 + uVar6 * 2);
                    if (iVar5 < 0) {
                      return 0xffffffff;
                    }
                    puVar8 = (uint *)param_2[10];
                    if (puVar8[uVar6 * 2 + 1] != 0) {
                      return 0xffffffff;
                    }
                    if (100000000 < puVar8[uVar6 * 2]) {
                      return 0xffffffff;
                    }
                    uVar6 = uVar6 + 1;
                  } while ((param_2[9] != 0) || (uVar6 < param_2[8]));
                }
              }
              param_2[0xc] = param_7;
              param_2[0xd] = (uint)puVar7;
              param_2[0xe] = uVar4;
              param_2[0xf] = 0;
              return 0;
            }
          }
        }
      }
    }
  }
  return 0xffffffff;
}


