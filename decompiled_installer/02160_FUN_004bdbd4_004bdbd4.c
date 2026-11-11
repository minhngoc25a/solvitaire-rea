// Function: FUN_004bdbd4
// Entry: 004bdbd4
// Size: 3513 bytes
// Thunk: false
// External: false


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004bdbd4(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7,uint param_8)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  float fVar4;
  double dVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  byte bVar11;
  uint uVar12;
  byte bVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  byte *pbVar20;
  byte *pbVar21;
  bool bVar22;
  longlong lVar23;
  uint local_58;
  uint local_4c;
  byte *local_34;
  byte *local_30;
  
  dVar5 = _DAT_0051a538;
  fVar4 = DAT_0050c310;
  uVar2 = *(uint *)(param_1 + 0xd8);
  iVar14 = *(int *)(param_1 + 0x80);
  uVar6 = *(uint *)(param_1 + 0xac);
  iVar3 = *(int *)(param_1 + 0xd4);
  bVar22 = ((uVar2 | param_8) & 1) != 0;
  if (iVar14 < param_6 + param_4) {
    param_6 = iVar14 - param_4;
  }
  iVar19 = *(int *)(param_1 + 0x84);
  if (iVar19 < param_7 + param_5) {
    param_7 = iVar19 - param_5;
  }
  if ((((0 < param_6) && (-1 < param_6 + param_4)) && (-1 < param_7 + param_5)) &&
     ((param_4 < iVar14 && (param_5 < iVar19)))) {
    if (param_4 < 0) {
      iVar14 = -param_4;
    }
    else {
      iVar14 = 0;
    }
    if (param_5 < 0) {
      iVar19 = -param_5;
    }
    else {
      iVar19 = 0;
    }
    if (iVar19 < param_7) {
      local_58 = uVar6;
      do {
        iVar1 = param_5 + iVar19;
        iVar15 = iVar1;
        if (*(int *)(param_1 + 0xe8) != 0) {
          iVar15 = ((*(int *)(param_1 + 0x84) - iVar19) - param_5) + -1;
        }
        iVar17 = *(int *)(param_1 + 0xd4);
        pbVar20 = (byte *)(iVar19 * param_3 + iVar14 * 3 + param_2);
        pbVar21 = (byte *)((param_4 + iVar14) * iVar17 + *(int *)(param_1 + 0xcc) * iVar15 +
                          *(int *)(param_1 + 200));
        if (iVar14 < param_6) {
          local_34 = pbVar20 + 2;
          iVar15 = iVar14;
          local_30 = local_34;
          do {
            if (*(int *)(param_1 + 0xe0) != 0) {
              uVar6 = FUN_004b82e3(param_1,param_4 + iVar15,iVar1);
              iVar17 = *(int *)(param_1 + 0xd4);
              local_58 = uVar6;
            }
            if (*(int *)(param_1 + 0xe4) == 0) {
              if ((uVar2 & 2) == 0) {
                uVar9 = (int)local_58 >> 8;
                uVar12 = (int)local_58 >> 0x10;
                if ((*(uint *)(param_1 + 0xd8) & 0x100) == 0) {
                  if ((uVar2 & 8) == 0) {
                    if ((uVar2 & 0x30) == 0) {
                      uVar9 = (int)uVar6 >> 0x10 & 0xff;
                      uVar12 = (int)uVar6 >> 8 & 0xff;
                      iVar7 = 0xff - (uint)*local_30;
                      iVar17 = (uVar6 & 0xff) * (uint)*local_30;
                      if (bVar22) {
                        pbVar21[2] = (byte)((int)((uint)pbVar21[2] * iVar7 + iVar17) / 0xff);
                        pbVar21[1] = (byte)((int)((0xff - (uint)pbVar20[1]) * (uint)pbVar21[1] +
                                                 uVar12 * pbVar20[1]) / 0xff);
                        iVar17 = (0xff - (uint)*pbVar20) * (uint)*pbVar21 + uVar9 * *pbVar20;
                      }
                      else {
                        pbVar21[2] = (byte)((*(int *)(param_1 + 0x104) * iVar7 + iVar17) / 0xff);
                        pbVar21[1] = (byte)((int)((0xff - (uint)pbVar20[1]) *
                                                  *(int *)(param_1 + 0x108) + uVar12 * pbVar20[1]) /
                                           0xff);
                        iVar17 = (0xff - (uint)*pbVar20) * *(int *)(param_1 + 0x10c) +
                                 uVar9 * *pbVar20;
                      }
                      bVar11 = (byte)(iVar17 / 0xff);
                    }
                    else {
                      if (!bVar22) {
                        if (iVar17 == 4) {
                          uVar6 = (uint)pbVar21[3];
                          if (*(int *)(param_1 + 0x110) == 0) {
                            bVar11 = pbVar21[2];
                          }
                          else if (uVar6 == 0) {
                            bVar11 = (byte)(*(int *)(param_1 + 0x104) / *(int *)(param_1 + 0x110));
                          }
                          else {
                            bVar11 = (byte)((int)((uint)pbVar21[2] * *(int *)(param_1 + 0x114) *
                                                  uVar6 + *(int *)(param_1 + 0x104) * 0xff) /
                                           (int)(*(int *)(param_1 + 0x114) * uVar6 +
                                                *(int *)(param_1 + 0x110) * 0xff));
                          }
                          pbVar21[2] = bVar11;
                          if (*(int *)(param_1 + 0x110) == 0) {
                            bVar11 = pbVar21[1];
                          }
                          else if (uVar6 == 0) {
                            bVar11 = (byte)(*(int *)(param_1 + 0x108) / *(int *)(param_1 + 0x110));
                          }
                          else {
                            bVar11 = (byte)((int)((uint)pbVar21[1] * *(int *)(param_1 + 0x114) *
                                                  uVar6 + *(int *)(param_1 + 0x108) * 0xff) /
                                           (int)(*(int *)(param_1 + 0x114) * uVar6 +
                                                *(int *)(param_1 + 0x110) * 0xff));
                          }
                          pbVar21[1] = bVar11;
                          if (*(int *)(param_1 + 0x110) == 0) {
                            bVar11 = *pbVar21;
                          }
                          else if (uVar6 == 0) {
                            bVar11 = (byte)(*(int *)(param_1 + 0x10c) / *(int *)(param_1 + 0x110));
                          }
                          else {
                            bVar11 = (byte)((int)((uint)*pbVar21 * *(int *)(param_1 + 0x114) * uVar6
                                                 + *(int *)(param_1 + 0x10c) * 0xff) /
                                           (int)(*(int *)(param_1 + 0x114) * uVar6 +
                                                *(int *)(param_1 + 0x110) * 0xff));
                          }
                          *pbVar21 = bVar11;
                          if ((uVar2 & 0x10) != 0) {
                            pbVar21[3] = (byte)((int)(*(int *)(param_1 + 0x114) * uVar6 +
                                                     *(int *)(param_1 + 0x110) * 0xff) / 0xff);
                          }
                        }
                        else {
                          pbVar21[2] = (byte)((int)((uint)pbVar21[2] * *(int *)(param_1 + 0x114) +
                                                   *(int *)(param_1 + 0x104)) / 0xff);
                          pbVar21[1] = (byte)((int)((uint)pbVar21[1] * *(int *)(param_1 + 0x114) +
                                                   *(int *)(param_1 + 0x108)) / 0xff);
                          *pbVar21 = (byte)((int)((uint)*pbVar21 * *(int *)(param_1 + 0x114) +
                                                 *(int *)(param_1 + 0x10c)) / 0xff);
                        }
                      }
                      uVar6 = (int)local_58 >> 0x18 & 0xff;
                      if (iVar3 != 3) {
                        uVar10 = (uint)pbVar21[3];
                        if (pbVar21[3] < 0xc0) {
                          iVar17 = thunk_FUN_00469d60();
                          if (iVar17 == 0) {
                            local_4c = (uint)pbVar21[2];
                          }
                          else {
                            local_4c = local_58 & 0xff;
                            if (uVar10 != 0) {
                              local_4c = (int)((uint)pbVar21[2] * (0xff - iVar17) * uVar10 +
                                              local_4c * iVar17 * 0xff) /
                                         (int)((0xff - iVar17) * uVar10 + iVar17 * 0xff);
                            }
                          }
                          pbVar21[2] = (byte)local_4c;
                          if (iVar17 == 0) {
                            uVar9 = (uint)pbVar21[1];
                          }
                          else {
                            uVar9 = uVar9 & 0xff;
                            if (uVar10 != 0) {
                              uVar9 = (int)((uint)pbVar21[1] * (0xff - iVar17) * uVar10 +
                                           uVar9 * iVar17 * 0xff) /
                                      (int)((0xff - iVar17) * uVar10 + iVar17 * 0xff);
                            }
                          }
                          pbVar21[1] = (byte)uVar9;
                          if (iVar17 == 0) {
                            uVar12 = (uint)*pbVar21;
                          }
                          else {
                            uVar12 = uVar12 & 0xff;
                            if (uVar10 != 0) {
                              uVar12 = (int)((uint)*pbVar21 * (0xff - iVar17) * uVar10 +
                                            uVar12 * iVar17 * 0xff) /
                                       (int)((0xff - iVar17) * uVar10 + iVar17 * 0xff);
                            }
                          }
                          *pbVar21 = (byte)uVar12;
                          if ((uVar2 & 0x10) != 0) {
                            iVar17 = (0xff - iVar17) * uVar10 + iVar17 * 0xff;
                            goto LAB_004be794;
                          }
                        }
                        else {
                          uVar16 = (pbVar20[2] * uVar6) / 0xff;
                          if (uVar16 == 0) {
                            uVar18 = (uint)pbVar21[2];
                          }
                          else {
                            uVar18 = local_58 & 0xff;
                            if (uVar10 != 0) {
                              uVar18 = (int)((uint)pbVar21[2] * (0xff - uVar16) * uVar10 +
                                            uVar18 * uVar16 * 0xff) /
                                       (int)((0xff - uVar16) * uVar10 + uVar16 * 0xff);
                            }
                          }
                          pbVar21[2] = (byte)uVar18;
                          uVar16 = (pbVar20[1] * uVar6) / 0xff;
                          if (uVar16 == 0) {
                            uVar9 = (uint)pbVar21[1];
                          }
                          else {
                            uVar9 = uVar9 & 0xff;
                            if (uVar10 != 0) {
                              uVar9 = (int)((uint)pbVar21[1] * (0xff - uVar16) * uVar10 +
                                           uVar9 * uVar16 * 0xff) /
                                      (int)((0xff - uVar16) * uVar10 + uVar16 * 0xff);
                            }
                          }
                          pbVar21[1] = (byte)uVar9;
                          uVar6 = (*pbVar20 * uVar6) / 0xff;
                          if (uVar6 == 0) {
                            uVar12 = (uint)*pbVar21;
                          }
                          else {
                            uVar12 = uVar12 & 0xff;
                            if (uVar10 != 0) {
                              uVar12 = (int)((uint)*pbVar21 * (0xff - uVar6) * uVar10 +
                                            uVar12 * uVar6 * 0xff) /
                                       (int)((0xff - uVar6) * uVar10 + uVar6 * 0xff);
                            }
                          }
                          *pbVar21 = (byte)uVar12;
                          if ((uVar2 & 0x10) != 0) {
                            iVar17 = thunk_FUN_00469d60();
                            iVar17 = iVar17 * 0xff + (0xff - iVar17) * uVar10;
LAB_004be794:
                            bVar11 = (byte)(iVar17 / 0xff);
                            goto LAB_004be2c0;
                          }
                        }
                        goto LAB_004be91b;
                      }
                      uVar10 = (pbVar20[2] * uVar6) / 0xff;
                      pbVar21[2] = (byte)((int)(uVar10 * (local_58 & 0xff) +
                                               (0xff - uVar10) * (uint)pbVar21[2]) / 0xff);
                      uVar10 = (pbVar20[1] * uVar6) / 0xff;
                      pbVar21[1] = (byte)((int)((uint)pbVar21[1] * (0xff - uVar10) +
                                               (uVar9 & 0xff) * uVar10) / 0xff);
                      uVar6 = (*pbVar20 * uVar6) / 0xff;
                      bVar11 = (byte)((int)((uint)*pbVar21 * (0xff - uVar6) +
                                           (uVar12 & 0xff) * uVar6) / 0xff);
                    }
                    *pbVar21 = bVar11;
                  }
                  else if (iVar3 == 4) {
                    lVar23 = FUN_00469de0();
                    bVar11 = (byte)lVar23;
LAB_004be2c0:
                    pbVar21[3] = bVar11;
                  }
                }
                else {
                  uVar16 = (int)uVar6 >> 0x18 & 0xff;
                  uVar10 = (int)uVar6 >> 0x18 & 0xff;
                  if (bVar22) {
                    pbVar21[2] = (byte)uVar6;
                    pbVar21[1] = (byte)(uVar6 >> 8);
                    *pbVar21 = (byte)(uVar6 >> 0x10);
                  }
                  else {
                    iVar17 = *(int *)(param_1 + 0x110);
                    if (iVar17 < 0xc0) {
                      iVar7 = thunk_FUN_00469d60();
                      if (iVar7 == 0) {
                        uVar6 = *(uint *)(param_1 + 0x104);
                      }
                      else {
                        uVar6 = local_58 & 0xff;
                        if (iVar17 != 0) {
                          iVar17 = (0xff - iVar7) * iVar17;
                          uVar6 = (int)(*(int *)(param_1 + 0x104) * iVar17 + uVar6 * iVar7 * 0xff) /
                                  (iVar7 * 0xff + iVar17);
                        }
                      }
                      pbVar21[2] = (byte)uVar6;
                      if (iVar7 == 0) {
                        uVar9 = *(uint *)(param_1 + 0x108);
                      }
                      else {
                        uVar9 = uVar9 & 0xff;
                        if (*(int *)(param_1 + 0x110) != 0) {
                          iVar17 = (0xff - iVar7) * *(int *)(param_1 + 0x110);
                          uVar9 = (int)(*(int *)(param_1 + 0x108) * iVar17 + uVar9 * iVar7 * 0xff) /
                                  (iVar7 * 0xff + iVar17);
                        }
                      }
                      pbVar21[1] = (byte)uVar9;
                      if (iVar7 == 0) {
                        uVar12 = *(uint *)(param_1 + 0x10c);
                      }
                      else {
                        uVar12 = uVar12 & 0xff;
                        if (*(int *)(param_1 + 0x110) != 0) {
                          iVar17 = (0xff - iVar7) * *(int *)(param_1 + 0x110);
                          uVar12 = (int)(*(int *)(param_1 + 0x10c) * iVar17 + uVar12 * iVar7 * 0xff)
                                   / (iVar7 * 0xff + iVar17);
                        }
                      }
                      *pbVar21 = (byte)uVar12;
                      iVar17 = (0xff - iVar7) * *(int *)(param_1 + 0x110) + iVar7 * 0xff;
                    }
                    else {
                      uVar9 = (*local_34 * uVar16) / 0xff;
                      iVar7 = *(int *)(param_1 + 0x104);
                      if (uVar9 != 0) {
                        iVar17 = (0xff - uVar9) * iVar17;
                        iVar7 = (int)(iVar7 * iVar17 + (uVar6 & 0xff) * uVar9 * 0xff) /
                                (int)(uVar9 * 0xff + iVar17);
                        uVar6 = local_58;
                      }
                      pbVar21[2] = (byte)iVar7;
                      uVar9 = (pbVar20[1] * uVar10) / 0xff;
                      if (uVar9 == 0) {
                        uVar6 = *(uint *)(param_1 + 0x108);
                      }
                      else {
                        uVar6 = (int)uVar6 >> 8 & 0xff;
                        if (*(int *)(param_1 + 0x110) != 0) {
                          iVar17 = (0xff - uVar9) * *(int *)(param_1 + 0x110);
                          uVar6 = (int)(*(int *)(param_1 + 0x108) * iVar17 + uVar6 * uVar9 * 0xff) /
                                  (int)(uVar9 * 0xff + iVar17);
                        }
                      }
                      pbVar21[1] = (byte)uVar6;
                      uVar6 = (*pbVar20 * uVar10) / 0xff;
                      if (uVar6 == 0) {
                        uVar12 = *(uint *)(param_1 + 0x10c);
                      }
                      else {
                        uVar12 = uVar12 & 0xff;
                        if (*(int *)(param_1 + 0x110) != 0) {
                          iVar17 = (0xff - uVar6) * *(int *)(param_1 + 0x110);
                          uVar12 = (int)(*(int *)(param_1 + 0x10c) * iVar17 + uVar12 * uVar6 * 0xff)
                                   / (int)(uVar6 * 0xff + iVar17);
                        }
                      }
                      *pbVar21 = (byte)uVar12;
                      iVar17 = thunk_FUN_00469d60();
                      iVar17 = iVar17 * 0xff + (0xff - iVar17) * *(int *)(param_1 + 0x110);
                    }
                    uVar16 = iVar17 / 0xff;
                  }
                  pbVar21[3] = (byte)uVar16;
                }
              }
              else {
                if ((float)((uint)pbVar20[2] + (uint)pbVar20[1] + (uint)*pbVar20) / (float)dVar5 <=
                    fVar4) {
                  if (bVar22) goto LAB_004be91b;
                  pbVar21[2] = pbVar21[2] ^ *(byte *)(param_1 + 0x104);
                  pbVar21[1] = pbVar21[1] ^ *(byte *)(param_1 + 0x108);
                  bVar11 = *(byte *)(param_1 + 0x10c);
                }
                else {
                  pbVar21[2] = pbVar21[2] ^ (byte)local_58;
                  pbVar21[1] = pbVar21[1] ^ (byte)(local_58 >> 8);
                  bVar11 = (byte)(local_58 >> 0x10);
                }
                *pbVar21 = *pbVar21 ^ bVar11;
              }
            }
            else {
              iVar7 = thunk_FUN_00469d60();
              uVar6 = iVar7 << 0x18 | local_58 & 0xffffff;
              if (iVar17 == 4) {
                uVar8 = (**(code **)(param_1 + 0xb8))
                                  (param_4 + iVar15,iVar1,uVar6,
                                   CONCAT31(CONCAT21(CONCAT11(pbVar21[3],*pbVar21),pbVar21[1]),
                                            pbVar21[2]));
                bVar13 = (byte)((uint)uVar8 >> 8);
                pbVar21[3] = (byte)((uint)uVar8 >> 0x18);
                bVar11 = (byte)((uint)uVar8 >> 0x10);
              }
              else {
                uVar8 = (**(code **)(param_1 + 0xb8))
                                  (param_4 + iVar15,iVar1,uVar6,
                                   ((*pbVar21 | 0xffffff00) << 8 | (uint)pbVar21[1]) << 8 |
                                   (uint)pbVar21[2]);
                bVar13 = (byte)((uint)uVar8 >> 8);
                bVar11 = (byte)((uint)uVar8 >> 0x10);
              }
              pbVar21[2] = (byte)uVar8;
              pbVar21[1] = bVar13;
              *pbVar21 = bVar11;
            }
LAB_004be91b:
            pbVar20 = pbVar20 + 3;
            iVar17 = *(int *)(param_1 + 0xd4);
            pbVar21 = pbVar21 + iVar17;
            iVar15 = iVar15 + 1;
            local_34 = local_34 + 3;
            local_30 = local_30 + 3;
            uVar6 = local_58;
          } while (iVar15 < param_6);
        }
        iVar19 = iVar19 + 1;
      } while (iVar19 < param_7);
    }
  }
  return;
}


