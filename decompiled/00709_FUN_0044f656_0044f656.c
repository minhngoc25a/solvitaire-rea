// Function: FUN_0044f656
// Entry: 0044f656
// Size: 7590 bytes
// Thunk: false
// External: false


void FUN_0044f656(uint *param_1,floating_point_value *param_2)

{
  undefined1 uVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  byte bVar6;
  uint *puVar7;
  uint uVar8;
  uint *puVar9;
  byte *pbVar10;
  uint *puVar11;
  uint uVar12;
  uint *puVar13;
  uint *puVar14;
  uint uVar15;
  bool bVar16;
  longlong lVar17;
  ulonglong uVar18;
  rsize_t _MaxCount;
  uint local_b2c [115];
  uint *local_960;
  uint *local_95c;
  floating_point_value *local_958;
  uint *local_954;
  uint *local_950;
  uint local_94c;
  uint *local_948;
  uint *local_944;
  uint *local_940;
  uint *local_93c;
  uint *local_938;
  uint *local_934;
  uint *local_930;
  uint *local_92c;
  uint *local_928;
  uint *local_924;
  uint *local_920;
  uint *local_91c;
  uint *local_918;
  uint local_914 [115];
  uint *local_748;
  uint local_744 [115];
  uint *local_578;
  uint local_574 [115];
  uint *local_3a8;
  uint local_3a4 [115];
  uint *local_1d8;
  uint local_1d4 [115];
  uint local_8;
  
  local_8 = DAT_0053fbc0 ^ (uint)&stack0xfffffffc;
  uVar12 = *param_1;
  local_950 = param_1;
  local_958 = param_2;
  local_954 = (uint *)(((param_2[4] == (floating_point_value)0x0) - 1 & 0x1d) + 0x19);
  if ((int)uVar12 < 0) {
    uVar12 = 0;
  }
  uVar8 = param_1[1];
  uVar15 = uVar12;
  if (uVar8 <= uVar12) {
    uVar15 = uVar8;
  }
  local_934 = (uint *)(uVar12 - uVar15);
  puVar14 = param_1 + 2;
  local_95c = (uint *)(uVar15 + 8 + (int)param_1);
  local_960 = (uint *)(uVar8 + 8 + (int)param_1);
  puVar13 = (uint *)0x0;
  local_944 = (uint *)((int)local_960 - (int)local_95c);
  local_91c = (uint *)0x0;
  puVar7 = (uint *)0x0;
  local_1d8 = (uint *)0x0;
  local_924 = (uint *)0x0;
  if (puVar14 != local_95c) {
    do {
      if (puVar7 == (uint *)0x9) {
        local_940 = puVar14;
        if (puVar13 != (uint *)0x0) {
          uVar12 = 0;
          puVar7 = (uint *)0x0;
          do {
            lVar17 = (ulonglong)local_1d4[(int)puVar7] * 1000000000 + (ulonglong)uVar12;
            local_1d4[(int)puVar7] = (uint)lVar17;
            uVar12 = (uint)((ulonglong)lVar17 >> 0x20);
            puVar7 = (uint *)((int)puVar7 + 1);
          } while (puVar7 != puVar13);
          puVar13 = local_1d8;
          if (uVar12 != 0) {
            if (local_1d8 < (uint *)0x73) {
              local_1d4[(int)local_1d8] = uVar12;
              local_1d8 = (uint *)((int)local_1d8 + 1);
              puVar13 = local_1d8;
            }
            else {
              local_918 = (uint *)0x0;
              local_1d8 = (uint *)0x0;
              _memcpy_s(local_1d4,0x1cc,local_914,0);
              puVar13 = local_1d8;
            }
          }
        }
        if (local_924 != (uint *)0x0) {
          puVar11 = (uint *)0x0;
          puVar9 = (uint *)0x0;
          puVar7 = local_924;
          if (puVar13 != (uint *)0x0) {
            do {
              puVar13 = local_1d4 + (int)puVar11;
              uVar12 = *puVar13;
              *puVar13 = (uint)(*puVar13 + (int)puVar7);
              puVar7 = (uint *)(uint)CARRY4(uVar12,(uint)puVar7);
              puVar11 = (uint *)((int)puVar11 + 1);
            } while (puVar11 != local_1d8);
            puVar13 = local_1d8;
            puVar9 = local_1d8;
            if (puVar7 == (uint *)0x0) goto LAB_0044f804;
          }
          if (puVar9 < (uint *)0x73) {
            local_1d4[(int)puVar9] = (uint)puVar7;
            local_1d8 = (uint *)((int)local_1d8 + 1);
            puVar13 = local_1d8;
          }
          else {
            local_918 = (uint *)0x0;
            local_1d8 = (uint *)0x0;
            _memcpy_s(local_1d4,0x1cc,local_914,0);
            puVar13 = local_1d8;
          }
        }
LAB_0044f804:
        local_924 = (uint *)0x0;
        puVar7 = (uint *)0x0;
      }
      local_924 = (uint *)((int)local_924 * 10 + (uint)(byte)*puVar14);
      puVar7 = (uint *)((int)puVar7 + 1);
      puVar14 = (uint *)((int)puVar14 + 1);
    } while (puVar14 != local_95c);
    local_948 = puVar7;
    local_91c = puVar13;
    if (puVar7 != (uint *)0x0) {
      local_940 = puVar14;
      for (local_930 = (uint *)((uint)puVar7 / 10); local_91c = puVar13, local_930 != (uint *)0x0;
          local_930 = (uint *)((int)local_930 - (int)local_928)) {
        local_928 = local_930;
        if ((uint *)0x26 < local_930) {
          local_928 = (uint *)0x26;
        }
        uVar12 = (uint)(byte)(&DAT_0050cd26)[(int)local_928 * 4];
        bVar6 = (&DAT_0050cd27)[(int)local_928 * 4];
        local_918 = (uint *)(uVar12 + bVar6);
        _memset(local_914,0,uVar12 * 4);
        FUN_0044c490(local_914 + uVar12,
                     (uint *)(&DAT_0050c420 +
                             (uint)*(ushort *)(&DAT_0050cd24 + (int)local_928 * 4) * 4),
                     (uint)bVar6 << 2);
        uVar12 = local_1d4[0];
        if (local_918 < (uint *)0x2) {
          if (local_914[0] == 0) {
            local_748 = (uint *)0x0;
            puVar14 = local_744;
LAB_0044f8f3:
            local_1d8 = (uint *)0x0;
            _memcpy_s(local_1d4,0x1cc,puVar14,0);
          }
          else {
            if ((local_914[0] == 1) || (puVar13 == (uint *)0x0)) {
              bVar16 = true;
              goto LAB_0044fc11;
            }
            uVar12 = 0;
            puVar14 = (uint *)0x0;
            do {
              lVar17 = (ulonglong)local_914[0] * (ulonglong)local_1d4[(int)puVar14] +
                       (ulonglong)uVar12;
              local_1d4[(int)puVar14] = (uint)lVar17;
              uVar12 = (uint)((ulonglong)lVar17 >> 0x20);
              puVar14 = (uint *)((int)puVar14 + 1);
            } while (puVar14 != puVar13);
            if (uVar12 != 0) {
              if ((uint *)0x72 < local_1d8) {
LAB_0044f972:
                local_918 = (uint *)0x0;
                local_1d8 = (uint *)0x0;
                _memcpy_s(local_1d4,0x1cc,local_914,0);
                local_91c = local_1d8;
                bVar16 = false;
                goto LAB_0044fc11;
              }
              local_1d4[(int)local_1d8] = uVar12;
LAB_0044f95d:
              local_1d8 = (uint *)((int)local_1d8 + 1);
            }
          }
LAB_0044f90e:
          bVar16 = true;
          local_91c = local_1d8;
        }
        else if (puVar13 < (uint *)0x2) {
          local_1d8 = local_918;
          _memcpy_s(local_1d4,0x1cc,local_914,(int)local_918 << 2);
          if (uVar12 == 0) {
            local_918 = (uint *)0x0;
            puVar14 = local_914;
            goto LAB_0044f8f3;
          }
          bVar16 = true;
          local_91c = local_1d8;
          if ((uVar12 != 1) && (local_1d8 != (uint *)0x0)) {
            uVar8 = 0;
            puVar14 = (uint *)0x0;
            do {
              lVar17 = (ulonglong)uVar12 * (ulonglong)local_1d4[(int)puVar14] + (ulonglong)uVar8;
              local_1d4[(int)puVar14] = (uint)lVar17;
              uVar8 = (uint)((ulonglong)lVar17 >> 0x20);
              puVar14 = (uint *)((int)puVar14 + 1);
            } while (puVar14 != local_1d8);
            if (uVar8 != 0) {
              if ((uint *)0x72 < local_1d8) goto LAB_0044f972;
              local_1d4[(int)local_1d8] = uVar8;
              goto LAB_0044f95d;
            }
            goto LAB_0044f90e;
          }
        }
        else {
          local_93c = local_914;
          if (local_918 < puVar13) {
            local_940 = local_1d4;
            local_938 = local_918;
          }
          else {
            local_93c = local_1d4;
            local_940 = local_914;
            local_938 = puVar13;
            puVar13 = local_918;
          }
          local_1d8 = (uint *)0x0;
          puVar14 = (uint *)0x0;
          local_748 = (uint *)0x0;
          if (local_938 != (uint *)0x0) {
            do {
              if (local_93c[(int)puVar14] == 0) {
                if (puVar14 == local_1d8) {
                  local_744[(int)puVar14] = 0;
                  local_1d8 = (uint *)((int)puVar14 + 1);
                  local_748 = local_1d8;
                }
              }
              else {
                local_920 = (uint *)0x0;
                local_92c = (uint *)0x0;
                puVar7 = puVar14;
                if (puVar13 != (uint *)0x0) {
                  do {
                    if (puVar7 == (uint *)0x73) break;
                    if (puVar7 == local_1d8) {
                      local_744[(int)puVar7] = 0;
                      local_748 = (uint *)((byte *)((int)puVar14 + 1) + (int)local_92c);
                    }
                    uVar12 = local_940[(int)local_92c];
                    uVar8 = local_93c[(int)puVar14];
                    uVar5 = (uint)((ulonglong)uVar12 * (ulonglong)uVar8);
                    uVar15 = local_744[(int)puVar7];
                    uVar3 = uVar5 + local_744[(int)puVar7];
                    local_744[(int)puVar7] = (uint)(uVar3 + (int)local_920);
                    local_920 = (uint *)((int)((ulonglong)uVar12 * (ulonglong)uVar8 >> 0x20) +
                                         (uint)CARRY4(uVar5,uVar15) +
                                        (uint)CARRY4(uVar3,(uint)local_920));
                    local_92c = (uint *)((int)local_92c + 1);
                    puVar7 = (uint *)((int)puVar7 + 1);
                    local_1d8 = local_748;
                  } while (local_92c != puVar13);
                  if (local_920 != (uint *)0x0) {
                    puVar9 = puVar7;
                    local_91c = local_744 + (int)puVar7;
                    do {
                      if (puVar9 == (uint *)0x73) goto LAB_0044fc8b;
                      puVar7 = (uint *)((int)puVar9 + 1);
                      if (puVar9 == local_1d8) {
                        *local_91c = 0;
                        local_748 = puVar7;
                      }
                      uVar12 = *local_91c;
                      puVar11 = local_91c + 1;
                      *local_91c = (uint)(uVar12 + (int)local_920);
                      local_920 = (uint *)(uint)CARRY4(uVar12,(uint)local_920);
                      local_1d8 = local_748;
                      puVar9 = puVar7;
                      local_91c = puVar11;
                    } while (local_920 != (uint *)0x0);
                  }
                }
                if (puVar7 == (uint *)0x73) {
LAB_0044fc8b:
                  local_1d8 = (uint *)0x0;
                  _memcpy_s(local_1d4,0x1cc,local_b2c,0);
                  bVar16 = false;
                  goto LAB_0044fc02;
                }
              }
              puVar14 = (uint *)((int)puVar14 + 1);
            } while (puVar14 != local_938);
          }
          _memcpy_s(local_1d4,0x1cc,local_744,(int)local_1d8 << 2);
          bVar16 = true;
LAB_0044fc02:
          local_91c = local_1d8;
        }
LAB_0044fc11:
        if (!bVar16) goto LAB_0044fc4f;
        puVar13 = local_91c;
      }
      if ((uint)local_948 % 10 != 0) {
        uVar12 = *(uint *)(&DAT_0050cdbc + ((uint)local_948 % 10) * 2);
        if (uVar12 == 0) {
LAB_0044fc4f:
          local_1d8 = (uint *)0x0;
          _memcpy_s(local_1d4,0x1cc,local_b2c,0);
LAB_0044fc80:
          local_91c = local_1d8;
        }
        else if ((uVar12 != 1) && (puVar13 != (uint *)0x0)) {
          uVar8 = 0;
          puVar14 = (uint *)0x0;
          do {
            lVar17 = (ulonglong)uVar12 * (ulonglong)local_1d4[(int)puVar14] + (ulonglong)uVar8;
            local_1d4[(int)puVar14] = (uint)lVar17;
            uVar8 = (uint)((ulonglong)lVar17 >> 0x20);
            puVar14 = (uint *)((int)puVar14 + 1);
          } while (puVar14 != puVar13);
          if (uVar8 == 0) goto LAB_0044fc80;
          if ((uint *)0x72 < local_1d8) goto LAB_0044fc4f;
          local_1d4[(int)local_1d8] = uVar8;
          local_1d8 = (uint *)((int)local_1d8 + 1);
          local_91c = local_1d8;
        }
      }
      if (local_924 != (uint *)0x0) {
        puVar13 = (uint *)0x0;
        puVar14 = local_924;
        if (local_91c != (uint *)0x0) {
          do {
            puVar7 = local_1d4 + (int)puVar13;
            uVar12 = *puVar7;
            *puVar7 = (uint)(*puVar7 + (int)puVar14);
            puVar14 = (uint *)(uint)CARRY4(uVar12,(uint)puVar14);
            puVar13 = (uint *)((int)puVar13 + 1);
            local_91c = local_1d8;
          } while (puVar13 != local_1d8);
          if (puVar14 == (uint *)0x0) goto LAB_0044fdb7;
        }
        if (local_91c < (uint *)0x73) {
          local_1d4[(int)local_91c] = (uint)puVar14;
          local_1d8 = (uint *)((int)local_1d8 + 1);
          local_91c = local_1d8;
        }
        else {
          local_1d8 = (uint *)0x0;
          _memcpy_s(local_1d4,0x1cc,local_b2c,0);
          local_91c = local_1d8;
        }
      }
    }
  }
LAB_0044fdb7:
  if (local_934 != (uint *)0x0) {
    puVar14 = local_91c;
    for (local_940 = (uint *)((uint)local_934 / 10); local_91c = puVar14, local_940 != (uint *)0x0;
        local_940 = (uint *)((int)local_940 - (int)local_93c)) {
      local_93c = local_940;
      if ((uint *)0x26 < local_940) {
        local_93c = (uint *)0x26;
      }
      uVar12 = (uint)(byte)(&DAT_0050cd26)[(int)local_93c * 4];
      bVar6 = (&DAT_0050cd27)[(int)local_93c * 4];
      local_918 = (uint *)(uVar12 + bVar6);
      _memset(local_914,0,uVar12 * 4);
      FUN_0044c490(local_914 + uVar12,
                   (uint *)(&DAT_0050c420 +
                           (uint)*(ushort *)(&DAT_0050cd24 + (int)local_93c * 4) * 4),
                   (uint)bVar6 << 2);
      uVar12 = local_1d4[0];
      if (local_918 < (uint *)0x2) {
        if (local_914[0] == 0) {
LAB_0044fe78:
          local_1d8 = (uint *)0x0;
          _memcpy_s(local_1d4,0x1cc,local_b2c,0);
        }
        else {
          if ((local_914[0] == 1) || (puVar14 == (uint *)0x0)) {
            bVar16 = true;
            goto LAB_0045017f;
          }
          uVar12 = 0;
          puVar13 = (uint *)0x0;
          do {
            lVar17 = (ulonglong)local_914[0] * (ulonglong)local_1d4[(int)puVar13] +
                     (ulonglong)uVar12;
            local_1d4[(int)puVar13] = (uint)lVar17;
            uVar12 = (uint)((ulonglong)lVar17 >> 0x20);
            puVar13 = (uint *)((int)puVar13 + 1);
          } while (puVar13 != puVar14);
          if (uVar12 != 0) {
            if ((uint *)0x72 < local_1d8) {
LAB_0044fef7:
              local_1d8 = (uint *)0x0;
              _memcpy_s(local_1d4,0x1cc,local_b2c,0);
              local_91c = local_1d8;
              bVar16 = false;
              goto LAB_0045017f;
            }
            local_1d4[(int)local_1d8] = uVar12;
LAB_0044fee2:
            local_1d8 = (uint *)((int)local_1d8 + 1);
          }
        }
LAB_0044fe93:
        bVar16 = true;
        local_91c = local_1d8;
      }
      else if (puVar14 < (uint *)0x2) {
        local_1d8 = local_918;
        _memcpy_s(local_1d4,0x1cc,local_914,(int)local_918 << 2);
        if (uVar12 == 0) goto LAB_0044fe78;
        bVar16 = true;
        local_91c = local_1d8;
        if ((uVar12 != 1) && (local_1d8 != (uint *)0x0)) {
          uVar8 = 0;
          puVar14 = (uint *)0x0;
          do {
            lVar17 = (ulonglong)uVar12 * (ulonglong)local_1d4[(int)puVar14] + (ulonglong)uVar8;
            local_1d4[(int)puVar14] = (uint)lVar17;
            uVar8 = (uint)((ulonglong)lVar17 >> 0x20);
            puVar14 = (uint *)((int)puVar14 + 1);
          } while (puVar14 != local_1d8);
          if (uVar8 != 0) {
            if ((uint *)0x72 < local_1d8) goto LAB_0044fef7;
            local_1d4[(int)local_1d8] = uVar8;
            goto LAB_0044fee2;
          }
          goto LAB_0044fe93;
        }
      }
      else {
        local_928 = local_914;
        if (local_918 < puVar14) {
          local_930 = local_1d4;
          local_938 = local_918;
        }
        else {
          local_928 = local_1d4;
          local_930 = local_914;
          local_938 = puVar14;
          puVar14 = local_918;
        }
        local_1d8 = (uint *)0x0;
        puVar13 = (uint *)0x0;
        local_748 = (uint *)0x0;
        if (local_938 != (uint *)0x0) {
          do {
            if (local_928[(int)puVar13] == 0) {
              if (puVar13 == local_1d8) {
                local_744[(int)puVar13] = 0;
                local_1d8 = (uint *)((int)puVar13 + 1);
                local_748 = local_1d8;
              }
            }
            else {
              local_924 = (uint *)0x0;
              local_920 = (uint *)0x0;
              puVar7 = puVar13;
              if (puVar14 != (uint *)0x0) {
                do {
                  if (puVar7 == (uint *)0x73) break;
                  if (puVar7 == local_1d8) {
                    local_744[(int)puVar7] = 0;
                    local_748 = (uint *)((byte *)((int)local_924 + 1) + (int)puVar13);
                  }
                  uVar8 = local_930[(int)local_924];
                  uVar15 = local_928[(int)puVar13];
                  uVar5 = (uint)((ulonglong)uVar8 * (ulonglong)uVar15);
                  pbVar10 = (byte *)(uVar5 + (int)local_920);
                  puVar9 = local_744 + (int)puVar7;
                  uVar12 = *puVar9;
                  *puVar9 = (uint)(pbVar10 + *puVar9);
                  local_920 = (uint *)((int)((ulonglong)uVar8 * (ulonglong)uVar15 >> 0x20) +
                                       (uint)CARRY4(uVar5,(uint)local_920) +
                                      (uint)CARRY4(uVar12,(uint)pbVar10));
                  local_924 = (uint *)((int)local_924 + 1);
                  puVar7 = (uint *)((int)puVar7 + 1);
                  local_1d8 = local_748;
                } while (local_924 != puVar14);
                if (local_920 != (uint *)0x0) {
                  puVar9 = local_744 + (int)puVar7;
                  puVar11 = puVar7;
                  do {
                    if (puVar11 == (uint *)0x73) goto LAB_004501f8;
                    puVar7 = (uint *)((int)puVar11 + 1);
                    if (puVar11 == local_1d8) {
                      *puVar9 = 0;
                      local_748 = puVar7;
                    }
                    uVar12 = *puVar9;
                    *puVar9 = (uint)(*puVar9 + (int)local_920);
                    local_920 = (uint *)(uint)CARRY4(uVar12,(uint)local_920);
                    local_1d8 = local_748;
                    puVar9 = puVar9 + 1;
                    puVar11 = puVar7;
                  } while (local_920 != (uint *)0x0);
                }
              }
              if (puVar7 == (uint *)0x73) {
LAB_004501f8:
                local_1d8 = (uint *)0x0;
                _memcpy_s(local_1d4,0x1cc,local_b2c,0);
                bVar16 = false;
                goto LAB_00450173;
              }
            }
            puVar13 = (uint *)((int)puVar13 + 1);
          } while (puVar13 != local_938);
        }
        _memcpy_s(local_1d4,0x1cc,local_744,(int)local_1d8 << 2);
        bVar16 = true;
LAB_00450173:
        local_91c = local_1d8;
      }
LAB_0045017f:
      if (!bVar16) goto LAB_004502aa;
      puVar14 = local_91c;
    }
    if ((uint)local_934 % 10 != 0) {
      uVar12 = *(uint *)(&DAT_0050cdbc + ((uint)local_934 % 10) * 2);
      if (uVar12 == 0) {
        local_1d8 = (uint *)0x0;
        _memcpy_s(local_1d4,0x1cc,local_b2c,0);
LAB_004501e7:
        local_91c = local_1d8;
      }
      else if ((uVar12 != 1) && (puVar14 != (uint *)0x0)) {
        uVar8 = 0;
        puVar13 = (uint *)0x0;
        do {
          lVar17 = (ulonglong)uVar12 * (ulonglong)local_1d4[(int)puVar13] + (ulonglong)uVar8;
          local_1d4[(int)puVar13] = (uint)lVar17;
          uVar8 = (uint)((ulonglong)lVar17 >> 0x20);
          puVar13 = (uint *)((int)puVar13 + 1);
        } while (puVar13 != puVar14);
        if (uVar8 == 0) goto LAB_004501e7;
        if ((uint *)0x72 < local_1d8) {
LAB_004502aa:
          local_1d8 = (uint *)0x0;
          _memcpy_s(local_1d4,0x1cc,local_b2c,0);
          __crt_strtox::assemble_floating_point_infinity(SUB41(local_950[0xc2],0),local_958);
          goto LAB_004513ed;
        }
        local_1d4[(int)local_1d8] = uVar8;
        local_1d8 = (uint *)((int)local_1d8 + 1);
        local_91c = local_1d8;
      }
    }
  }
  local_940 = (uint *)0x0;
  if (local_91c != (uint *)0x0) {
    uVar12 = local_1d4[(int)((int)local_91c + -1)];
    local_94c = 0;
    iVar4 = 0x1f;
    if (uVar12 != 0) {
      for (; uVar12 >> iVar4 == 0; iVar4 = iVar4 + -1) {
      }
    }
    if (uVar12 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = iVar4 + 1;
    }
    local_940 = (uint *)((int)((int)local_91c + -1) * 0x20 + iVar4);
  }
  if ((local_954 <= local_940) || (local_944 == (uint *)0x0)) {
    bVar16 = local_960 != local_95c;
    uVar1 = (undefined1)local_950[0xc2];
LAB_004513de:
    FUN_0044f4c4((uint *)&local_1d8,(uint)local_940,(bool)uVar1,bVar16,local_958);
    goto LAB_004513ed;
  }
  puVar14 = (uint *)0x0;
  local_3a8 = (uint *)0x0;
  puVar7 = (uint *)0x0;
  local_92c = (uint *)0x0;
  local_924 = local_95c;
  puVar13 = local_95c;
  if (local_95c != local_960) {
    do {
      puVar9 = local_92c;
      if (puVar7 == (uint *)0x9) {
        local_924 = puVar13;
        if (puVar14 != (uint *)0x0) {
          uVar12 = 0;
          puVar13 = (uint *)0x0;
          do {
            lVar17 = (ulonglong)local_3a4[(int)puVar13] * 1000000000 + (ulonglong)uVar12;
            local_3a4[(int)puVar13] = (uint)lVar17;
            uVar12 = (uint)((ulonglong)lVar17 >> 0x20);
            puVar13 = (uint *)((int)puVar13 + 1);
          } while (puVar13 != puVar14);
          puVar14 = local_3a8;
          if (uVar12 != 0) {
            if (local_3a8 < (uint *)0x73) {
              local_3a4[(int)local_3a8] = uVar12;
              local_3a8 = (uint *)((int)local_3a8 + 1);
              puVar14 = local_3a8;
            }
            else {
              local_3a8 = (uint *)0x0;
              _memcpy_s(local_3a4,0x1cc,local_b2c,0);
              puVar14 = local_3a8;
            }
          }
        }
        puVar13 = local_924;
        if (puVar9 != (uint *)0x0) {
          puVar11 = (uint *)0x0;
          puVar7 = (uint *)0x0;
          if (puVar14 != (uint *)0x0) {
            do {
              puVar14 = local_3a4 + (int)puVar11;
              uVar12 = *puVar14;
              *puVar14 = (uint)(*puVar14 + (int)puVar9);
              puVar9 = (uint *)(uint)CARRY4(uVar12,(uint)puVar9);
              puVar11 = (uint *)((int)puVar11 + 1);
            } while (puVar11 != local_3a8);
            puVar14 = local_3a8;
            puVar7 = local_3a8;
            if (puVar9 == (uint *)0x0) goto LAB_00450467;
          }
          if (puVar7 < (uint *)0x73) {
            local_3a4[(int)puVar7] = (uint)puVar9;
            local_3a8 = (uint *)((int)local_3a8 + 1);
            puVar14 = local_3a8;
          }
          else {
            local_3a8 = (uint *)0x0;
            _memcpy_s(local_3a4,0x1cc,local_b2c,0);
            puVar14 = local_3a8;
          }
        }
LAB_00450467:
        local_92c = (uint *)0x0;
        puVar7 = (uint *)0x0;
      }
      local_92c = (uint *)((int)local_92c * 10 + (uint)(byte)*puVar13);
      puVar7 = (uint *)((int)puVar7 + 1);
      puVar13 = (uint *)((int)puVar13 + 1);
    } while (puVar13 != local_960);
    local_948 = puVar7;
    local_924 = puVar13;
    if (puVar7 != (uint *)0x0) {
      for (local_924 = (uint *)((uint)puVar7 / 10); local_924 != (uint *)0x0;
          local_924 = (uint *)((int)local_924 - (int)local_93c)) {
        local_93c = local_924;
        if ((uint *)0x26 < local_924) {
          local_93c = (uint *)0x26;
        }
        uVar12 = (uint)(byte)(&DAT_0050cd26)[(int)local_93c * 4];
        bVar6 = (&DAT_0050cd27)[(int)local_93c * 4];
        local_918 = (uint *)(uVar12 + bVar6);
        _memset(local_914,0,uVar12 * 4);
        FUN_0044c490(local_914 + uVar12,
                     (uint *)(&DAT_0050c420 +
                             (uint)*(ushort *)(&DAT_0050cd24 + (int)local_93c * 4) * 4),
                     (uint)bVar6 << 2);
        uVar12 = local_3a4[0];
        if (local_918 < (uint *)0x2) {
          if (local_914[0] == 0) {
            local_3a8 = (uint *)0x0;
            _MaxCount = 0;
            puVar14 = local_b2c;
            goto LAB_004507e8;
          }
          if ((local_914[0] == 1) || (puVar14 == (uint *)0x0)) {
            bVar16 = true;
          }
          else {
            uVar8 = 0;
            puVar13 = (uint *)0x0;
            do {
              lVar17 = (ulonglong)local_914[0] * (ulonglong)local_3a4[(int)puVar13] +
                       (ulonglong)uVar8;
              local_3a4[(int)puVar13] = (uint)lVar17;
              uVar8 = (uint)((ulonglong)lVar17 >> 0x20);
              puVar13 = (uint *)((int)puVar13 + 1);
            } while (puVar13 != puVar14);
LAB_0045057e:
            if (uVar8 != 0) {
              if ((uint *)0x72 < local_3a8) {
                local_3a8 = (uint *)0x0;
                _memcpy_s(local_3a4,0x1cc,local_b2c,0);
                bVar16 = false;
                puVar14 = local_3a8;
                goto LAB_004507ff;
              }
              local_3a4[(int)local_3a8] = uVar8;
              local_3a8 = (uint *)((int)local_3a8 + 1);
            }
            bVar16 = true;
            puVar14 = local_3a8;
          }
        }
        else {
          if (puVar14 < (uint *)0x2) {
            local_3a8 = local_918;
            _memcpy_s(local_3a4,0x1cc,local_914,(int)local_918 << 2);
            if (uVar12 != 0) {
              bVar16 = true;
              puVar14 = local_3a8;
              if ((uVar12 != 1) && (local_3a8 != (uint *)0x0)) {
                uVar8 = 0;
                puVar14 = (uint *)0x0;
                do {
                  lVar17 = (ulonglong)uVar12 * (ulonglong)local_3a4[(int)puVar14] + (ulonglong)uVar8
                  ;
                  local_3a4[(int)puVar14] = (uint)lVar17;
                  uVar8 = (uint)((ulonglong)lVar17 >> 0x20);
                  puVar14 = (uint *)((int)puVar14 + 1);
                } while (puVar14 != local_3a8);
                goto LAB_0045057e;
              }
              goto LAB_004507ff;
            }
            _MaxCount = 0;
            local_3a8 = (uint *)0x0;
            puVar14 = local_b2c;
          }
          else {
            local_928 = local_914;
            if (local_918 < puVar14) {
              local_934 = local_3a4;
              local_938 = local_918;
            }
            else {
              local_928 = local_3a4;
              local_934 = local_914;
              local_938 = puVar14;
              puVar14 = local_918;
            }
            local_3a8 = (uint *)0x0;
            puVar13 = (uint *)0x0;
            local_748 = (uint *)0x0;
            if (local_938 != (uint *)0x0) {
              do {
                if (local_928[(int)puVar13] == 0) {
                  if (puVar13 == local_3a8) {
                    local_744[(int)puVar13] = 0;
                    local_3a8 = (uint *)((int)puVar13 + 1);
                    local_748 = local_3a8;
                  }
                }
                else {
                  local_920 = (uint *)0x0;
                  local_930 = (uint *)0x0;
                  puVar7 = puVar13;
                  if (puVar14 != (uint *)0x0) {
                    do {
                      if (puVar7 == (uint *)0x73) break;
                      if (puVar7 == local_3a8) {
                        local_744[(int)puVar7] = 0;
                        local_748 = (uint *)((byte *)((int)puVar13 + 1) + (int)local_930);
                      }
                      uVar8 = local_934[(int)local_930];
                      uVar15 = local_928[(int)puVar13];
                      uVar5 = (uint)((ulonglong)uVar8 * (ulonglong)uVar15);
                      pbVar10 = (byte *)(uVar5 + (int)local_920);
                      puVar9 = local_744 + (int)puVar7;
                      uVar12 = *puVar9;
                      *puVar9 = (uint)(pbVar10 + *puVar9);
                      local_920 = (uint *)((int)((ulonglong)uVar8 * (ulonglong)uVar15 >> 0x20) +
                                           (uint)CARRY4(uVar5,(uint)local_920) +
                                          (uint)CARRY4(uVar12,(uint)pbVar10));
                      local_930 = (uint *)((int)local_930 + 1);
                      puVar7 = (uint *)((int)puVar7 + 1);
                      local_3a8 = local_748;
                    } while (local_930 != puVar14);
                    if (local_920 != (uint *)0x0) {
                      puVar9 = local_744 + (int)puVar7;
                      puVar11 = puVar7;
                      do {
                        if (puVar11 == (uint *)0x73) goto LAB_0045089f;
                        puVar7 = (uint *)((int)puVar11 + 1);
                        if (puVar11 == local_3a8) {
                          *puVar9 = 0;
                          local_748 = puVar7;
                        }
                        uVar12 = *puVar9;
                        *puVar9 = (uint)(*puVar9 + (int)local_920);
                        local_920 = (uint *)(uint)CARRY4(uVar12,(uint)local_920);
                        local_3a8 = local_748;
                        puVar9 = puVar9 + 1;
                        puVar11 = puVar7;
                      } while (local_920 != (uint *)0x0);
                    }
                  }
                  if (puVar7 == (uint *)0x73) {
LAB_0045089f:
                    local_3a8 = (uint *)0x0;
                    _memcpy_s(local_3a4,0x1cc,local_b2c,0);
                    bVar16 = false;
                    puVar14 = local_3a8;
                    goto LAB_004507ff;
                  }
                }
                puVar13 = (uint *)((int)puVar13 + 1);
              } while (puVar13 != local_938);
            }
            _MaxCount = (int)local_3a8 << 2;
            puVar14 = local_744;
          }
LAB_004507e8:
          _memcpy_s(local_3a4,0x1cc,puVar14,_MaxCount);
          bVar16 = true;
          puVar14 = local_3a8;
        }
LAB_004507ff:
        if (!bVar16) goto LAB_004508f1;
      }
      if ((uint)local_948 % 10 != 0) {
        uVar12 = *(uint *)(&DAT_0050cdbc + ((uint)local_948 % 10) * 2);
        if (uVar12 == 0) {
LAB_004508f1:
          local_3a8 = (uint *)0x0;
          _memcpy_s(local_3a4,0x1cc,local_b2c,0);
          puVar14 = local_3a8;
        }
        else if ((uVar12 != 1) && (puVar14 != (uint *)0x0)) {
          uVar8 = 0;
          puVar13 = (uint *)0x0;
          do {
            lVar17 = (ulonglong)uVar12 * (ulonglong)local_3a4[(int)puVar13] + (ulonglong)uVar8;
            local_3a4[(int)puVar13] = (uint)lVar17;
            uVar8 = (uint)((ulonglong)lVar17 >> 0x20);
            puVar13 = (uint *)((int)puVar13 + 1);
          } while (puVar13 != puVar14);
          puVar14 = local_3a8;
          if (uVar8 != 0) {
            if ((uint *)0x72 < local_3a8) goto LAB_004508f1;
            local_3a4[(int)local_3a8] = uVar8;
            local_3a8 = (uint *)((int)local_3a8 + 1);
            puVar14 = local_3a8;
          }
        }
      }
      if (local_92c != (uint *)0x0) {
        puVar9 = (uint *)0x0;
        puVar13 = local_92c;
        puVar7 = (uint *)0x0;
        if (puVar14 != (uint *)0x0) {
          do {
            puVar14 = local_3a4 + (int)puVar9;
            uVar12 = *puVar14;
            *puVar14 = (uint)(*puVar14 + (int)puVar13);
            puVar13 = (uint *)(uint)CARRY4(uVar12,(uint)puVar13);
            puVar9 = (uint *)((int)puVar9 + 1);
          } while (puVar9 != local_3a8);
          puVar7 = local_3a8;
          puVar14 = local_3a8;
          if (puVar13 == (uint *)0x0) goto LAB_00450992;
        }
        if (puVar7 < (uint *)0x73) {
          local_3a4[(int)puVar7] = (uint)puVar13;
          local_3a8 = (uint *)((int)local_3a8 + 1);
          puVar14 = local_3a8;
        }
        else {
          local_3a8 = (uint *)0x0;
          _memcpy_s(local_3a4,0x1cc,local_b2c,0);
          puVar14 = local_3a8;
        }
      }
    }
  }
LAB_00450992:
  if ((int)*local_950 < 0) {
    local_944 = (uint *)((int)local_944 - *local_950);
  }
  local_574[1] = 0;
  local_574[0] = 1;
  local_920 = (uint *)0x1;
  local_578 = (uint *)0x1;
  for (local_928 = (uint *)((uint)local_944 / 10); local_928 != (uint *)0x0;
      local_928 = (uint *)((int)local_928 - (int)local_938)) {
    local_938 = local_928;
    if ((uint *)0x26 < local_928) {
      local_938 = (uint *)0x26;
    }
    puVar14 = local_938;
    uVar12 = (uint)(byte)(&DAT_0050cd26)[(int)local_938 * 4];
    bVar6 = (&DAT_0050cd27)[(int)local_938 * 4];
    local_918 = (uint *)(uVar12 + bVar6);
    _memset(local_914,0,uVar12 * 4);
    FUN_0044c490(local_914 + uVar12,
                 (uint *)(&DAT_0050c420 + (uint)*(ushort *)(&DAT_0050cd24 + (int)puVar14 * 4) * 4),
                 (uint)bVar6 << 2);
    uVar12 = local_574[0];
    if (local_918 < (uint *)0x2) {
      if (local_914[0] == 0) {
LAB_00450a78:
        local_578 = (uint *)0x0;
        _memcpy_s(local_574,0x1cc,local_b2c,0);
      }
      else {
        if ((local_914[0] == 1) || (local_920 == (uint *)0x0)) {
          bVar16 = true;
          goto LAB_00450d76;
        }
        uVar8 = 0;
        puVar14 = (uint *)0x0;
        do {
          lVar17 = (ulonglong)local_914[0] * (ulonglong)local_574[(int)puVar14] + (ulonglong)uVar8;
          local_574[(int)puVar14] = (uint)lVar17;
          uVar8 = (uint)((ulonglong)lVar17 >> 0x20);
          puVar14 = (uint *)((int)puVar14 + 1);
        } while (puVar14 != local_920);
LAB_00450bc3:
        if (uVar8 != 0) {
          if ((uint *)0x72 < local_578) {
            local_578 = (uint *)0x0;
            _memcpy_s(local_574,0x1cc,local_b2c,0);
            bVar2 = false;
            goto LAB_00450b1f;
          }
          local_574[(int)local_578] = uVar8;
          local_578 = (uint *)((int)local_578 + 1);
        }
      }
      bVar16 = true;
      local_920 = local_578;
    }
    else if (local_920 < (uint *)0x2) {
      local_578 = local_918;
      _memcpy_s(local_574,0x1cc,local_914,(int)local_918 << 2);
      if (uVar12 == 0) goto LAB_00450a78;
      bVar16 = true;
      bVar2 = true;
      if (uVar12 == 1) {
LAB_00450b1f:
        bVar16 = bVar2;
        local_920 = local_578;
      }
      else {
        local_920 = local_578;
        if (local_578 != (uint *)0x0) {
          uVar8 = 0;
          puVar14 = (uint *)0x0;
          do {
            lVar17 = (ulonglong)uVar12 * (ulonglong)local_574[(int)puVar14] + (ulonglong)uVar8;
            local_574[(int)puVar14] = (uint)lVar17;
            uVar8 = (uint)((ulonglong)lVar17 >> 0x20);
            puVar14 = (uint *)((int)puVar14 + 1);
          } while (puVar14 != local_578);
          goto LAB_00450bc3;
        }
      }
    }
    else {
      local_92c = local_914;
      if (local_918 < local_920) {
        local_934 = local_574;
        local_930 = local_918;
        puVar14 = local_920;
      }
      else {
        local_92c = local_574;
        local_934 = local_914;
        local_930 = local_920;
        puVar14 = local_918;
      }
      local_578 = (uint *)0x0;
      puVar13 = (uint *)0x0;
      local_748 = (uint *)0x0;
      if (local_930 != (uint *)0x0) {
        do {
          if (local_92c[(int)puVar13] == 0) {
            if (puVar13 == local_578) {
              local_744[(int)puVar13] = 0;
              local_578 = (uint *)((int)puVar13 + 1);
              local_748 = local_578;
            }
          }
          else {
            local_924 = (uint *)0x0;
            local_920 = (uint *)0x0;
            puVar7 = puVar13;
            if (puVar14 != (uint *)0x0) {
              do {
                if (puVar7 == (uint *)0x73) break;
                if (puVar7 == local_578) {
                  local_744[(int)puVar7] = 0;
                  local_748 = (uint *)((byte *)((int)local_924 + 1) + (int)puVar13);
                }
                uVar8 = local_934[(int)local_924];
                uVar15 = local_92c[(int)puVar13];
                uVar5 = (uint)((ulonglong)uVar8 * (ulonglong)uVar15);
                pbVar10 = (byte *)(uVar5 + (int)local_920);
                puVar9 = local_744 + (int)puVar7;
                uVar12 = *puVar9;
                *puVar9 = (uint)(pbVar10 + *puVar9);
                local_920 = (uint *)((int)((ulonglong)uVar8 * (ulonglong)uVar15 >> 0x20) +
                                     (uint)CARRY4(uVar5,(uint)local_920) +
                                    (uint)CARRY4(uVar12,(uint)pbVar10));
                local_924 = (uint *)((int)local_924 + 1);
                puVar7 = (uint *)((int)puVar7 + 1);
                local_578 = local_748;
              } while (local_924 != puVar14);
              if (local_920 != (uint *)0x0) {
                puVar9 = local_744 + (int)puVar7;
                puVar11 = puVar7;
                do {
                  if (puVar11 == (uint *)0x73) goto LAB_00450e05;
                  puVar7 = (uint *)((int)puVar11 + 1);
                  if (puVar11 == local_578) {
                    *puVar9 = 0;
                    local_748 = puVar7;
                  }
                  uVar12 = *puVar9;
                  *puVar9 = (uint)(*puVar9 + (int)local_920);
                  local_920 = (uint *)(uint)CARRY4(uVar12,(uint)local_920);
                  local_578 = local_748;
                  puVar9 = puVar9 + 1;
                  puVar11 = puVar7;
                } while (local_920 != (uint *)0x0);
              }
            }
            if (puVar7 == (uint *)0x73) {
LAB_00450e05:
              local_578 = (uint *)0x0;
              _memcpy_s(local_574,0x1cc,local_b2c,0);
              bVar16 = false;
              goto LAB_00450d6a;
            }
          }
          puVar13 = (uint *)((int)puVar13 + 1);
        } while (puVar13 != local_930);
      }
      _memcpy_s(local_574,0x1cc,local_744,(int)local_578 << 2);
      bVar16 = true;
LAB_00450d6a:
      local_920 = local_578;
    }
LAB_00450d76:
    if (!bVar16) goto LAB_00450ebc;
    puVar14 = local_3a8;
  }
  if ((uint)local_944 % 10 != 0) {
    local_948 = *(uint **)(&DAT_0050cdbc + ((uint)local_944 % 10) * 2);
    if (local_948 == (uint *)0x0) {
      local_578 = local_948;
      _memcpy_s(local_574,0x1cc,local_b2c,0);
      puVar14 = local_3a8;
LAB_00450df4:
      local_920 = local_578;
    }
    else if ((local_948 != (uint *)0x1) && (local_920 != (uint *)0x0)) {
      uVar12 = 0;
      puVar13 = (uint *)0x0;
      do {
        lVar17 = ZEXT48(local_948) * (ulonglong)local_574[(int)puVar13] + (ulonglong)uVar12;
        local_574[(int)puVar13] = (uint)lVar17;
        uVar12 = (uint)((ulonglong)lVar17 >> 0x20);
        puVar13 = (uint *)((int)puVar13 + 1);
      } while (puVar13 != local_920);
      if (uVar12 == 0) goto LAB_00450df4;
      if ((uint *)0x72 < local_578) {
LAB_00450ebc:
        local_578 = (uint *)0x0;
        _memcpy_s(local_574,0x1cc,local_b2c,0);
        __crt_strtox::assemble_floating_point_zero(SUB41(local_950[0xc2],0),local_958);
        goto LAB_004513ed;
      }
      local_574[(int)local_578] = uVar12;
      local_920 = (uint *)((int)local_578 + 1);
      local_578 = local_920;
    }
  }
  if (puVar14 == (uint *)0x0) {
    uVar12 = 0;
  }
  else {
    uVar12 = local_3a4[(int)((int)puVar14 + -1)];
    local_94c = 0;
    iVar4 = 0x1f;
    if (uVar12 != 0) {
      for (; uVar12 >> iVar4 == 0; iVar4 = iVar4 + -1) {
      }
    }
    if (uVar12 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = iVar4 + 1;
    }
    uVar12 = (int)((int)puVar14 + -1) * 0x20 + iVar4;
  }
  if (local_920 == (uint *)0x0) {
    uVar8 = 0;
  }
  else {
    uVar8 = local_574[(int)((int)local_920 + -1)];
    local_94c = 0;
    iVar4 = 0x1f;
    if (uVar8 != 0) {
      for (; uVar8 >> iVar4 == 0; iVar4 = iVar4 + -1) {
      }
    }
    if (uVar8 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = iVar4 + 1;
    }
    uVar8 = (int)((int)local_920 + -1) * 0x20 + iVar4;
  }
  local_924 = (uint *)(-(uint)(uVar12 < uVar8) & uVar8 - uVar12);
  puVar13 = local_920;
  if (local_924 != (uint *)0x0) {
    puVar13 = (uint *)((uint)local_924 & 0x1f);
    uVar8 = (uint)local_924 >> 5;
    local_92c = (uint *)(0x20 - (int)puVar13);
    local_94c = uVar8;
    local_948 = puVar13;
    lVar17 = __allshl((byte)local_92c,0);
    uVar12 = local_3a4[(int)((int)puVar14 + -1)];
    local_928 = (uint *)((int)lVar17 + -1);
    iVar4 = 0x1f;
    if (uVar12 != 0) {
      for (; uVar12 >> iVar4 == 0; iVar4 = iVar4 + -1) {
      }
    }
    local_938 = (uint *)~(uint)local_928;
    local_934 = (uint *)0x0;
    if (uVar12 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = iVar4 + 1;
    }
    if (((byte *)(uVar8 + (int)puVar14) < (byte *)0x74) &&
       (local_944 = (uint *)(((uint *)(0x20 - iVar4) < puVar13) + uVar8 + (int)puVar14),
       local_944 < (uint *)0x74)) {
      local_93c = (uint *)(uVar8 - 1);
      local_930 = (uint *)((int)local_944 + -1);
      if (local_930 != local_93c) {
        puVar7 = (uint *)((int)local_930 - uVar8);
        puVar13 = local_3a4 + (int)((int)puVar7 + -1);
        do {
          if (puVar7 < puVar14) {
            local_934 = (uint *)puVar13[1];
          }
          else {
            local_934 = (uint *)0x0;
          }
          if ((uint *)((int)puVar7 + -1) < puVar14) {
            uVar12 = *puVar13;
          }
          else {
            uVar12 = 0;
          }
          puVar13 = puVar13 + -1;
          local_3a4[(int)local_930] =
               (uVar12 & (uint)local_938) >> ((byte)local_92c & 0x1f) |
               ((uint)local_934 & (uint)local_928) << ((byte)local_948 & 0x1f);
          local_930 = (uint *)((int)local_930 + -1);
          puVar7 = (uint *)((int)puVar7 + -1);
          puVar14 = local_3a8;
          uVar8 = local_94c;
        } while (local_930 != local_93c);
      }
      if (uVar8 != 0) {
        puVar14 = local_3a4;
        for (; uVar8 != 0; uVar8 = uVar8 - 1) {
          *puVar14 = 0;
          puVar14 = puVar14 + 1;
        }
      }
      local_3a8 = local_944;
      puVar13 = local_920;
      puVar14 = local_3a8;
    }
    else {
      local_3a8 = (uint *)0x0;
      _memcpy_s(local_3a4,0x1cc,local_b2c,0);
      puVar13 = local_578;
      puVar14 = local_3a8;
    }
  }
  local_954 = (uint *)((int)local_954 - (int)local_940);
  puVar7 = local_954;
  if (local_940 != (uint *)0x0) {
    if (local_954 < local_924) {
      bVar16 = local_960 != local_95c;
      uVar1 = (undefined1)local_950[0xc2];
      goto LAB_004513de;
    }
    puVar7 = (uint *)((int)local_954 - (int)local_924);
  }
  if (puVar14 <= puVar13) {
    puVar9 = puVar14;
    if (puVar13 <= puVar14) {
      do {
        puVar9 = (uint *)((int)puVar9 + -1);
        if (puVar9 == (uint *)0xffffffff) goto LAB_00451162;
      } while (local_3a4[(int)puVar9] == local_574[(int)puVar9]);
      if (local_574[(int)puVar9] < local_3a4[(int)puVar9]) goto LAB_00451162;
    }
    local_924 = (uint *)((int)local_924 + 1);
  }
LAB_00451162:
  uVar15 = (uint)puVar7 & 0x1f;
  uVar8 = (uint)puVar7 >> 5;
  local_948 = (uint *)(0x20 - uVar15);
  local_92c = (uint *)uVar15;
  lVar17 = __allshl((byte)local_948,0);
  uVar12 = local_3a4[(int)((int)puVar14 + -1)];
  local_938 = (uint *)((int)lVar17 + -1);
  iVar4 = 0x1f;
  if (uVar12 != 0) {
    for (; uVar12 >> iVar4 == 0; iVar4 = iVar4 + -1) {
    }
  }
  local_94c = ~(uint)local_938;
  local_934 = (uint *)0x0;
  if (uVar12 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = iVar4 + 1;
  }
  if (((byte *)(uVar8 + (int)puVar14) < (byte *)0x74) &&
     (local_928 = (uint *)((0x20U - iVar4 < uVar15) + uVar8 + (int)puVar14),
     local_928 < (uint *)0x74)) {
    local_930 = (uint *)((int)local_928 + -1);
    if (local_930 != (uint *)(uVar8 - 1)) {
      puVar7 = (uint *)((int)local_930 - uVar8);
      puVar13 = local_3a4 + (int)((int)puVar7 + -1);
      do {
        if (puVar7 < puVar14) {
          local_934 = (uint *)puVar13[1];
        }
        else {
          local_934 = (uint *)0x0;
        }
        if ((uint *)((int)puVar7 + -1) < puVar14) {
          uVar12 = *puVar13;
        }
        else {
          uVar12 = 0;
        }
        puVar13 = puVar13 + -1;
        local_3a4[(int)local_930] =
             (uVar12 & local_94c) >> ((byte)local_948 & 0x1f) |
             ((uint)local_934 & (uint)local_938) << ((byte)local_92c & 0x1f);
        local_930 = (uint *)((int)local_930 + -1);
        puVar7 = (uint *)((int)puVar7 + -1);
        puVar14 = local_3a8;
      } while (local_930 != (uint *)(uVar8 - 1));
    }
    local_3a8 = local_928;
    if (uVar8 != 0) {
      puVar14 = local_3a4;
      for (; uVar8 != 0; uVar8 = uVar8 - 1) {
        *puVar14 = 0;
        puVar14 = puVar14 + 1;
      }
    }
  }
  else {
    local_3a8 = (uint *)0x0;
    _memcpy_s(local_3a4,0x1cc,local_b2c,0);
  }
  uVar18 = FUN_0044eae0((uint *)&local_3a8,(uint *)&local_578);
  uVar8 = (uint)(uVar18 >> 0x20);
  uVar12 = (uint)uVar18;
  local_92c = (uint *)CONCAT31(local_92c._1_3_,local_3a8 == (uint *)0x0);
  if (uVar8 == 0) {
    iVar4 = 0x1f;
    if (uVar12 != 0) {
      for (; uVar12 >> iVar4 == 0; iVar4 = iVar4 + -1) {
      }
    }
    if (uVar12 == 0) {
      puVar14 = (uint *)0x0;
    }
    else {
      puVar14 = (uint *)(iVar4 + 1);
    }
  }
  else {
    iVar4 = 0x1f;
    if (uVar8 != 0) {
      for (; uVar8 >> iVar4 == 0; iVar4 = iVar4 + -1) {
      }
    }
    if (uVar8 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = iVar4 + 1;
    }
    puVar14 = (uint *)(iVar4 + 0x20);
  }
  if (local_954 < puVar14) {
    bVar6 = (char)puVar14 - (char)local_954;
    if (local_3a8 == (uint *)0x0) {
      lVar17 = __allshl(bVar6,0);
      local_92c = (uint *)CONCAT31(local_92c._1_3_,1);
      if ((lVar17 - 1U & uVar18) != 0) goto LAB_0045132b;
    }
    else {
LAB_0045132b:
      local_92c = (uint *)((uint)local_92c & 0xffffff00);
    }
    uVar18 = __aullshr(bVar6,uVar8);
  }
  lVar17 = __allshl((byte)local_954,-(uint)((uint *)0x1 < local_91c) & local_1d4[1]);
  if (local_940 == (uint *)0x0) {
    pbVar10 = (byte *)~(uint)local_924;
  }
  else {
    pbVar10 = (byte *)((int)local_940 + -2);
  }
  FUN_0044f0f9((uint)(uVar18 + lVar17),(uint)(uVar18 + lVar17 >> 0x20),(int)pbVar10,
               SUB41(local_950[0xc2],0),(char)local_92c,local_958);
LAB_004513ed:
  FUN_004257be(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


