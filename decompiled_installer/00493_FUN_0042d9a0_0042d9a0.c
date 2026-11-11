// Function: FUN_0042d9a0
// Entry: 0042d9a0
// Size: 3600 bytes
// Thunk: false
// External: false


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FUN_0042d9a0(uint *param_1,int param_2,uint *param_3,int param_4,uint param_5,uint param_6,
            int param_7)

{
  ushort uVar1;
  longlong lVar2;
  double dVar3;
  float fVar4;
  float fVar5;
  char cVar7;
  uint uVar6;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  undefined2 uVar12;
  bool bVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  uint local_38;
  uint uStack_34;
  uint *local_30;
  uint uStack_2c;
  uint *local_28;
  uint uStack_24;
  uint local_20 [7];
  
  fVar5 = DAT_0050c38c;
  fVar15 = DAT_0050c37c;
  fVar4 = DAT_0050c314;
  dVar3 = DAT_0050c308;
  fVar14 = DAT_0050c300;
  fVar17 = DAT_0050c2f4;
  fVar16 = DAT_0050c2f0;
  if (param_2 == param_4) {
    local_20[0] = 0;
    local_20[1] = 1;
    local_20[2] = 2;
    local_20[3] = 3;
    local_20[4] = 4;
    local_20[5] = 4;
    lVar2 = (ulonglong)param_5 * (ulonglong)local_20[param_2];
    uVar6 = (uint)lVar2;
    local_30 = param_1;
    local_28 = param_3;
    iVar10 = param_6 * local_20[param_2] + (int)((ulonglong)lVar2 >> 0x20);
    if ((iVar10 != 0) || (uVar6 != 0)) {
      do {
        uVar9 = uVar6;
        if (iVar10 != 0) {
          uVar9 = 0xffffffff;
        }
        FUN_0044c490(local_30,local_28,uVar9);
        bVar13 = uVar6 < uVar9;
        uVar6 = uVar6 - uVar9;
        iVar10 = iVar10 - (uint)bVar13;
        local_30 = (uint *)((int)local_30 + uVar9);
        local_28 = (uint *)((int)local_28 + uVar9);
      } while ((iVar10 != 0) || (uVar6 != 0));
      return;
    }
  }
  else {
    switch(param_4) {
    case 1:
      switch(param_2) {
      case 2:
        if ((param_6 != 0) || (param_5 != 0)) {
          uStack_24 = 0;
          local_28 = (uint *)0x0;
          while( true ) {
            do {
              *(ushort *)((int)param_1 + (int)local_28 * 2) =
                   (*(byte *)((int)local_28 + (int)param_3) - 0x80) * 0x100;
              bVar13 = 0xfffffffe < local_28;
              local_28 = (uint *)((int)local_28 + 1);
              uStack_24 = uStack_24 + bVar13;
            } while (uStack_24 < param_6);
            if (param_6 < uStack_24) break;
            if (param_5 <= local_28) {
              return;
            }
          }
        }
        break;
      case 3:
        if ((param_6 != 0) || (param_5 != 0)) {
          uStack_24 = 0;
          local_28 = (uint *)0x0;
          while( true ) {
            do {
              cVar7 = *(char *)((int)local_28 + (int)param_3);
              *(undefined2 *)((int)param_1 + (int)local_28 * 3) = 0;
              *(char *)((int)param_1 + (int)local_28 * 3 + 2) = cVar7 + -0x80;
              bVar13 = 0xfffffffe < local_28;
              local_28 = (uint *)((int)local_28 + 1);
              uStack_24 = uStack_24 + bVar13;
            } while (uStack_24 < param_6);
            if (param_6 < uStack_24) break;
            if (param_5 <= local_28) {
              return;
            }
          }
        }
        break;
      case 4:
        if ((param_6 != 0) || (param_5 != 0)) {
          uStack_24 = 0;
          local_28 = (uint *)0x0;
          while( true ) {
            do {
              param_1[(int)local_28] = (*(byte *)((int)local_28 + (int)param_3) - 0x80) * 0x1000000;
              bVar13 = 0xfffffffe < local_28;
              local_28 = (uint *)((int)local_28 + 1);
              uStack_24 = uStack_24 + bVar13;
            } while (uStack_24 < param_6);
            if (param_6 < uStack_24) break;
            if (param_5 <= local_28) {
              return;
            }
          }
        }
        break;
      case 5:
        if ((param_6 != 0) || (param_5 != 0)) {
          uStack_24 = 0;
          local_28 = (uint *)0x0;
          while( true ) {
            do {
              param_1[(int)local_28] =
                   (uint)((float)*(byte *)((int)local_28 + (int)param_3) * fVar14 - fVar4);
              bVar13 = 0xfffffffe < local_28;
              local_28 = (uint *)((int)local_28 + 1);
              uStack_24 = uStack_24 + bVar13;
            } while (uStack_24 < param_6);
            if (param_6 < uStack_24) break;
            if (param_5 <= local_28) {
              return;
            }
          }
        }
      }
      break;
    case 2:
      switch(param_2) {
      case 1:
        if (param_7 == 0) {
          if ((param_6 != 0) || (param_5 != 0)) {
            uStack_24 = 0;
            local_28 = (uint *)0x0;
            while( true ) {
              do {
                *(char *)((int)local_28 + (int)param_1) =
                     *(char *)((int)param_3 + (int)local_28 * 2 + 1) + -0x80;
                bVar13 = 0xfffffffe < local_28;
                local_28 = (uint *)((int)local_28 + 1);
                uStack_24 = uStack_24 + bVar13;
              } while (uStack_24 < param_6);
              if (param_6 < uStack_24) break;
              if (param_5 <= local_28) {
                return;
              }
            }
          }
        }
        else if ((param_6 != 0) || (param_5 != 0)) {
          if (param_7 == 2) {
            uStack_2c = 0;
            local_30 = (uint *)0x0;
            while( true ) {
              do {
                uVar1 = *(ushort *)((int)param_3 + (int)local_30 * 2);
                uVar6 = (int)(DAT_0053fc54 * 0xbc8f) % 0x7fffffff;
                DAT_0053fc54 = (int)(uVar6 * 0xbc8f) % 0x7fffffff;
                iVar10 = ((DAT_0053fc54 >> 0x19) - 0x80) + uVar6 / 0x1fc07f1;
                if ((short)uVar1 + iVar10 < 0x8000) {
                  cVar7 = (char)((uint)uVar1 + iVar10 >> 8);
                }
                else {
                  cVar7 = '\x7f';
                }
                *(char *)((int)local_30 + (int)param_1) = cVar7 + -0x80;
                bVar13 = 0xfffffffe < local_30;
                local_30 = (uint *)((int)local_30 + 1);
                uStack_2c = uStack_2c + bVar13;
              } while (uStack_2c < param_6);
              if (param_6 < uStack_2c) break;
              if (param_5 <= local_30) {
                return;
              }
            }
          }
          else {
            uStack_2c = 0;
            local_30 = (uint *)0x0;
            while( true ) {
              do {
                uVar1 = *(ushort *)((int)param_3 + (int)local_30 * 2);
                if (param_7 == 1) {
                  DAT_0053fc54 = (int)(DAT_0053fc54 * 0xbc8f) % 0x7fffffff;
                  iVar10 = (DAT_0053fc54 >> 0x18) - 0x80;
                }
                else {
                  iVar10 = 0;
                }
                if ((short)uVar1 + iVar10 < 0x8000) {
                  cVar7 = (char)((uint)uVar1 + iVar10 >> 8);
                }
                else {
                  cVar7 = '\x7f';
                }
                *(char *)((int)local_30 + (int)param_1) = cVar7 + -0x80;
                bVar13 = 0xfffffffe < local_30;
                local_30 = (uint *)((int)local_30 + 1);
                uStack_2c = uStack_2c + bVar13;
              } while (uStack_2c < param_6);
              if (param_6 < uStack_2c) break;
              if (param_5 <= local_30) {
                return;
              }
            }
          }
        }
        break;
      case 3:
        if ((param_6 != 0) || (param_5 != 0)) {
          uStack_24 = 0;
          local_28 = (uint *)0x0;
          while( true ) {
            do {
              *(undefined1 *)((int)param_1 + (int)local_28 * 3) = 0;
              *(undefined1 *)((int)param_1 + (int)local_28 * 3 + 1) =
                   *(undefined1 *)((int)param_3 + (int)local_28 * 2);
              *(undefined1 *)((int)param_1 + (int)local_28 * 3 + 2) =
                   *(undefined1 *)((int)param_3 + (int)local_28 * 2 + 1);
              bVar13 = 0xfffffffe < local_28;
              local_28 = (uint *)((int)local_28 + 1);
              uStack_24 = uStack_24 + bVar13;
            } while (uStack_24 < param_6);
            if (param_6 < uStack_24) break;
            if (param_5 <= local_28) {
              return;
            }
          }
        }
        break;
      case 4:
        if ((param_6 != 0) || (param_5 != 0)) {
          uStack_24 = 0;
          local_28 = (uint *)0x0;
          while( true ) {
            do {
              param_1[(int)local_28] = (int)*(short *)((int)param_3 + (int)local_28 * 2) << 0x10;
              bVar13 = 0xfffffffe < local_28;
              local_28 = (uint *)((int)local_28 + 1);
              uStack_24 = uStack_24 + bVar13;
            } while (uStack_24 < param_6);
            if (param_6 < uStack_24) break;
            if (param_5 <= local_28) {
              return;
            }
          }
        }
        break;
      case 5:
        if ((param_6 != 0) || (param_5 != 0)) {
          uStack_24 = 0;
          local_28 = (uint *)0x0;
          while( true ) {
            do {
              param_1[(int)local_28] =
                   (uint)((float)(int)*(short *)((int)param_3 + (int)local_28 * 2) * fVar17);
              bVar13 = 0xfffffffe < local_28;
              local_28 = (uint *)((int)local_28 + 1);
              uStack_24 = uStack_24 + bVar13;
            } while (uStack_24 < param_6);
            if (param_6 < uStack_24) break;
            if (param_5 <= local_28) {
              return;
            }
          }
        }
      }
      break;
    case 3:
      switch(param_2) {
      case 1:
        FUN_0042c640((int)param_1,(int)param_3,param_5,param_6,param_7);
        return;
      case 2:
        FUN_0042c860((int)param_1,(int)param_3,param_5,param_6,param_7);
        return;
      case 4:
        if ((param_6 != 0) || (param_5 != 0)) {
          uStack_24 = 0;
          local_28 = (uint *)0x0;
          while( true ) {
            do {
              param_1[(int)local_28] =
                   (uint)CONCAT21(CONCAT11(*(undefined1 *)((int)param_3 + (int)local_28 * 3 + 2),
                                           *(undefined1 *)((int)param_3 + (int)local_28 * 3 + 1)),
                                  *(undefined1 *)((int)param_3 + (int)local_28 * 3)) << 8;
              bVar13 = 0xfffffffe < local_28;
              local_28 = (uint *)((int)local_28 + 1);
              uStack_24 = uStack_24 + bVar13;
            } while (uStack_24 < param_6);
            if (param_6 < uStack_24) break;
            if (param_5 <= local_28) {
              return;
            }
          }
        }
        break;
      case 5:
        if ((param_6 != 0) || (param_5 != 0)) {
          uStack_24 = 0;
          local_28 = (uint *)0x0;
          while( true ) {
            do {
              param_1[(int)local_28] =
                   (uint)((float)((int)((uint)CONCAT21(CONCAT11(*(undefined1 *)
                                                                 ((int)param_3 +
                                                                 (int)local_28 * 3 + 2),
                                                                *(undefined1 *)
                                                                 ((int)param_3 +
                                                                 (int)local_28 * 3 + 1)),
                                                       *(undefined1 *)
                                                        ((int)param_3 + (int)local_28 * 3)) << 8) >>
                                 8) * fVar16);
              bVar13 = 0xfffffffe < local_28;
              local_28 = (uint *)((int)local_28 + 1);
              uStack_24 = uStack_24 + bVar13;
            } while (uStack_24 < param_6);
            if (param_6 < uStack_24) break;
            if (param_5 <= local_28) {
              return;
            }
          }
        }
      }
      break;
    case 4:
      switch(param_2) {
      case 1:
        if (param_7 == 0) {
          if ((param_6 != 0) || (param_5 != 0)) {
            uStack_24 = 0;
            local_28 = (uint *)0x0;
            while( true ) {
              do {
                *(char *)((int)local_28 + (int)param_1) =
                     *(char *)((int)param_3 + (int)local_28 * 4 + 3) + -0x80;
                bVar13 = 0xfffffffe < local_28;
                local_28 = (uint *)((int)local_28 + 1);
                uStack_24 = uStack_24 + bVar13;
              } while (uStack_24 < param_6);
              if (param_6 < uStack_24) break;
              if (param_5 <= local_28) {
                return;
              }
            }
          }
        }
        else if ((param_6 != 0) || (param_5 != 0)) {
          if (param_7 == 2) {
            uStack_2c = 0;
            local_30 = (uint *)0x0;
            while( true ) {
              do {
                uVar6 = param_3[(int)local_30];
                uVar9 = (int)(DAT_0053fc54 * 0xbc8f) % 0x7fffffff;
                DAT_0053fc54 = (int)(uVar9 * 0xbc8f) % 0x7fffffff;
                uVar11 = (DAT_0053fc54 >> 9) + (uVar9 >> 9);
                uVar8 = ((int)uVar6 >> 0x1f) + (uint)CARRY4(uVar6,uVar11);
                uVar9 = (uint)(uVar6 + uVar11 < 0x800000);
                bVar13 = -1 < (int)(uVar8 - uVar9);
                if ((uVar8 != uVar9 && bVar13) ||
                   ((bVar13 && (0x7fffffff < (uVar6 + uVar11) - 0x800000)))) {
                  cVar7 = '\x7f';
                }
                else {
                  cVar7 = (char)((uVar6 - 0x800000) + uVar11 >> 0x18);
                }
                *(char *)((int)local_30 + (int)param_1) = cVar7 + -0x80;
                bVar13 = 0xfffffffe < local_30;
                local_30 = (uint *)((int)local_30 + 1);
                uStack_2c = uStack_2c + bVar13;
              } while (uStack_2c < param_6);
              if (param_6 < uStack_2c) break;
              if (param_5 <= local_30) {
                return;
              }
            }
          }
          else {
            uStack_2c = 0;
            local_30 = (uint *)0x0;
            while( true ) {
              do {
                uVar6 = param_3[(int)local_30];
                if (param_7 == 1) {
                  DAT_0053fc54 = (int)(DAT_0053fc54 * 0xbc8f) % 0x7fffffff;
                  uVar9 = (DAT_0053fc54 >> 8) - 0x800000;
                }
                else {
                  uVar9 = 0;
                }
                iVar10 = ((int)uVar6 >> 0x1f) + ((int)uVar9 >> 0x1f) + (uint)CARRY4(uVar6,uVar9);
                if ((iVar10 < 1) && ((iVar10 < 0 || (uVar6 + uVar9 < 0x80000000)))) {
                  cVar7 = (char)(uVar6 + uVar9 >> 0x18);
                }
                else {
                  cVar7 = '\x7f';
                }
                *(char *)((int)local_30 + (int)param_1) = cVar7 + -0x80;
                bVar13 = 0xfffffffe < local_30;
                local_30 = (uint *)((int)local_30 + 1);
                uStack_2c = uStack_2c + bVar13;
              } while (uStack_2c < param_6);
              if (param_6 < uStack_2c) break;
              if (param_5 <= local_30) {
                return;
              }
            }
          }
        }
        break;
      case 2:
        if (param_7 == 0) {
          if ((param_6 != 0) || (param_5 != 0)) {
            uStack_24 = 0;
            local_28 = (uint *)0x0;
            while( true ) {
              do {
                *(undefined2 *)((int)param_1 + (int)local_28 * 2) =
                     *(undefined2 *)((int)param_3 + (int)local_28 * 4 + 2);
                bVar13 = 0xfffffffe < local_28;
                local_28 = (uint *)((int)local_28 + 1);
                uStack_24 = uStack_24 + bVar13;
              } while (uStack_24 < param_6);
              if (param_6 < uStack_24) break;
              if (param_5 <= local_28) {
                return;
              }
            }
          }
        }
        else if ((param_6 != 0) || (param_5 != 0)) {
          if (param_7 == 2) {
            uStack_34 = 0;
            local_38 = 0;
            while( true ) {
              do {
                uVar6 = param_3[local_38];
                uVar9 = (int)(DAT_0053fc54 * 0xbc8f) % 0x7fffffff;
                DAT_0053fc54 = (int)(uVar9 * 0xbc8f) % 0x7fffffff;
                uVar9 = ((DAT_0053fc54 >> 0x11) - 0x8000) + uVar9 / 0x1fffd;
                iVar10 = ((int)uVar9 >> 0x1f) + ((int)uVar6 >> 0x1f) + (uint)CARRY4(uVar9,uVar6);
                if ((iVar10 < 1) && ((iVar10 < 0 || (uVar9 + uVar6 < 0x80000000)))) {
                  uVar12 = (undefined2)(uVar6 + uVar9 >> 0x10);
                }
                else {
                  uVar12 = 0x7fff;
                }
                *(undefined2 *)((int)param_1 + local_38 * 2) = uVar12;
                bVar13 = 0xfffffffe < local_38;
                local_38 = local_38 + 1;
                uStack_34 = uStack_34 + bVar13;
              } while (uStack_34 < param_6);
              if (param_6 < uStack_34) break;
              if (param_5 <= local_38) {
                return;
              }
            }
          }
          else {
            uStack_34 = 0;
            local_38 = 0;
            while( true ) {
              do {
                uVar6 = param_3[local_38];
                if (param_7 == 1) {
                  DAT_0053fc54 = (int)(DAT_0053fc54 * 0xbc8f) % 0x7fffffff;
                  uVar9 = (DAT_0053fc54 >> 0x10) - 0x8000;
                }
                else {
                  uVar9 = 0;
                }
                iVar10 = ((int)uVar9 >> 0x1f) + ((int)uVar6 >> 0x1f) + (uint)CARRY4(uVar9,uVar6);
                if ((iVar10 < 1) && ((iVar10 < 0 || (uVar9 + uVar6 < 0x80000000)))) {
                  uVar12 = (undefined2)(uVar6 + uVar9 >> 0x10);
                }
                else {
                  uVar12 = 0x7fff;
                }
                *(undefined2 *)((int)param_1 + local_38 * 2) = uVar12;
                bVar13 = 0xfffffffe < local_38;
                local_38 = local_38 + 1;
                uStack_34 = uStack_34 + bVar13;
              } while (uStack_34 < param_6);
              if (param_6 < uStack_34) break;
              if (param_5 <= local_38) {
                return;
              }
            }
          }
        }
        break;
      case 3:
        if ((param_6 != 0) || (param_5 != 0)) {
          uStack_24 = 0;
          local_28 = (uint *)0x0;
          while( true ) {
            do {
              uVar6 = param_3[(int)local_28];
              *(char *)((int)param_1 + (int)local_28 * 3) = (char)(uVar6 >> 8);
              *(char *)((int)param_1 + (int)local_28 * 3 + 1) = (char)(uVar6 >> 0x10);
              *(char *)((int)param_1 + (int)local_28 * 3 + 2) = (char)(uVar6 >> 0x18);
              bVar13 = 0xfffffffe < local_28;
              local_28 = (uint *)((int)local_28 + 1);
              uStack_24 = uStack_24 + bVar13;
            } while (uStack_24 < param_6);
            if (param_6 < uStack_24) break;
            if (param_5 <= local_28) {
              return;
            }
          }
        }
        break;
      case 5:
        if ((param_6 != 0) || (param_5 != 0)) {
          uStack_24 = 0;
          local_28 = (uint *)0x0;
          while( true ) {
            do {
              param_1[(int)local_28] = (uint)(float)((double)(int)param_3[(int)local_28] * dVar3);
              bVar13 = 0xfffffffe < local_28;
              local_28 = (uint *)((int)local_28 + 1);
              uStack_24 = uStack_24 + bVar13;
            } while (uStack_24 < param_6);
            if (param_6 < uStack_24) break;
            if (param_5 <= local_28) {
              return;
            }
          }
        }
      }
      break;
    case 5:
      switch(param_2) {
      case 1:
        fVar16 = 0.0;
        fVar17 = 0.0;
        if (param_7 != 0) {
          fVar16 = DAT_0050c388;
          fVar17 = DAT_0050c304;
        }
        if ((param_6 != 0) || (param_5 != 0)) {
          if (param_7 == 2) {
            uStack_2c = 0;
            local_30 = (uint *)0x0;
            while( true ) {
              do {
                iVar10 = (int)(DAT_0053fc54 * 0xbc8f) % 0x7fffffff;
                DAT_0053fc54 = (iVar10 * 0xbc8f) % 0x7fffffff;
                fVar15 = (float)param_3[(int)local_30] +
                         (float)((double)iVar10 / DAT_0050c360) * (0.0 - fVar16) + fVar16 +
                         (float)((double)(int)DAT_0053fc54 / DAT_0050c360) * (fVar17 - 0.0) + 0.0;
                fVar14 = fVar5;
                if ((fVar5 <= fVar15) && (fVar14 = fVar4, fVar15 <= fVar4)) {
                  fVar14 = fVar15;
                }
                *(char *)((int)local_30 + (int)param_1) =
                     (char)(int)((fVar14 + fVar4) * _DAT_0050c368);
                bVar13 = 0xfffffffe < local_30;
                local_30 = (uint *)((int)local_30 + 1);
                uStack_2c = uStack_2c + bVar13;
              } while (uStack_2c < param_6);
              if (param_6 < uStack_2c) break;
              if (param_5 <= local_30) {
                return;
              }
            }
          }
          else {
            uStack_2c = 0;
            local_30 = (uint *)0x0;
            while( true ) {
              do {
                if (param_7 == 1) {
                  DAT_0053fc54 = (int)(DAT_0053fc54 * 0xbc8f) % 0x7fffffff;
                  fVar14 = (float)((double)(int)DAT_0053fc54 / DAT_0050c360) * (fVar17 - fVar16) +
                           fVar16;
                }
                else {
                  fVar14 = 0.0;
                }
                fVar14 = fVar14 + (float)param_3[(int)local_30];
                fVar15 = fVar5;
                if ((fVar5 <= fVar14) && (fVar15 = fVar4, fVar14 <= fVar4)) {
                  fVar15 = fVar14;
                }
                *(char *)((int)local_30 + (int)param_1) =
                     (char)(int)((fVar15 + fVar4) * _DAT_0050c368);
                bVar13 = 0xfffffffe < local_30;
                local_30 = (uint *)((int)local_30 + 1);
                uStack_2c = uStack_2c + bVar13;
              } while (uStack_2c < param_6);
              if (param_6 < uStack_2c) break;
              if (param_5 <= local_30) {
                return;
              }
            }
          }
        }
        break;
      case 2:
        FUN_0042caa0((uint)param_1,(uint)param_3,param_5,param_6,param_7);
        return;
      case 3:
        if ((param_6 != 0) || (param_5 != 0)) {
          uStack_24 = 0;
          local_28 = (uint *)0x0;
          while( true ) {
            do {
              fVar16 = (float)param_3[(int)local_28];
              fVar17 = fVar5;
              if ((fVar5 <= fVar16) && (fVar17 = fVar4, fVar16 <= fVar4)) {
                fVar17 = fVar16;
              }
              iVar10 = (int)(fVar17 * fVar15);
              *(char *)((int)param_1 + (int)local_28 * 3) = (char)iVar10;
              *(char *)((int)param_1 + (int)local_28 * 3 + 1) = (char)((uint)iVar10 >> 8);
              *(char *)((int)param_1 + (int)local_28 * 3 + 2) = (char)((uint)iVar10 >> 0x10);
              bVar13 = 0xfffffffe < local_28;
              local_28 = (uint *)((int)local_28 + 1);
              uStack_24 = uStack_24 + bVar13;
            } while (uStack_24 < param_6);
            if (param_6 < uStack_24) break;
            if (param_5 <= local_28) {
              return;
            }
          }
        }
        break;
      case 4:
        FUN_0042d830((uint)param_1,(uint)param_3,param_5,param_6);
      }
    }
  }
  return;
}


