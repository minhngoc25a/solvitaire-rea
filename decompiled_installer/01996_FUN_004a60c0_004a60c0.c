// Function: FUN_004a60c0
// Entry: 004a60c0
// Size: 1196 bytes
// Thunk: false
// External: false


ulonglong __cdecl FUN_004a60c0(uint param_1,uint *param_2,int param_3)

{
  undefined1 *puVar1;
  byte bVar2;
  undefined1 uVar3;
  byte bVar4;
  uint *puVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  uint *puVar13;
  uint uVar14;
  ulonglong uVar15;
  byte local_1d;
  byte local_1c;
  uint local_14;
  byte *local_8;
  
  local_8 = (byte *)0x0;
  bVar4 = *(byte *)(param_1 + 0x157);
  uVar10 = (uint)bVar4;
  puVar5 = (uint *)(*(int *)(param_1 + 0x124) + 1);
  uVar11 = *(uint *)(param_1 + 0x100);
  bVar2 = *(byte *)(param_1 + 0x14d);
  uVar6 = (uint)bVar2;
  local_1d = 0;
  if (uVar10 != 0) {
    uVar8 = uVar10 * uVar11;
    if (*(int *)(param_1 + 0x130) == 0) {
      uVar9 = (uint)(bVar4 >> 3);
    }
    else {
      if (uVar10 < 8) {
        uVar14 = uVar8 + 7 >> 3;
        uVar9 = (uint)(bVar4 >> 3);
      }
      else {
        uVar9 = (uint)(bVar4 >> 3);
        uVar14 = uVar9 * uVar11;
      }
      if (*(uint *)(param_1 + 0x130) != uVar14) goto LAB_004a6569;
    }
    local_14 = uVar8 + 7;
    if (uVar11 != 0) {
      local_1c = (byte)(uVar8 & 7);
      if ((uVar8 & 7) != 0) {
        if (uVar10 < 8) {
          uVar9 = local_14 >> 3;
        }
        else {
          uVar9 = uVar9 * uVar11;
        }
        local_8 = (byte *)((int)param_2 + (uVar9 - 1));
        local_1d = *local_8;
        if ((*(uint *)(param_1 + 0x7c) & 0x10000) == 0) {
          local_1c = (byte)(0xff >> local_1c);
        }
        else {
          local_1c = (byte)(0xff << local_1c);
        }
      }
      if ((((*(char *)(param_1 + 0x14c) == '\0') || ((*(uint *)(param_1 + 0x7c) & 2) == 0)) ||
          (5 < uVar6)) || ((param_3 != 0 && ((param_3 != 1 || ((bVar2 & 1) == 0)))))) {
        if (uVar10 < 8) {
          uVar11 = uVar10 * uVar11 + 7 >> 3;
        }
        else {
          uVar11 = (bVar4 >> 3) * uVar11;
        }
        uVar15 = FUN_0044c490(param_2,puVar5,uVar11);
        uVar8 = (uint)uVar15;
      }
      else {
        uVar8 = (uVar6 & 1) << (3U - (char)(uVar6 + 1 >> 1) & 0x1f);
        uVar9 = uVar8 & 7;
        if (uVar11 <= uVar9) {
          return (ulonglong)CONCAT14(bVar4,uVar8) & 0xffffffff00000007;
        }
        if (7 < uVar10) {
          if ((bVar4 & 7) == 0) {
            uVar10 = (uint)(bVar4 >> 3);
            iVar7 = uVar9 * uVar10;
            puVar5 = (uint *)((int)puVar5 + iVar7);
            puVar12 = (uint *)((int)param_2 + iVar7);
            uVar11 = uVar11 * uVar10 - iVar7;
            param_1 = uVar10;
            if ((param_3 != 0) &&
               (uVar8 = uVar10 << ((byte)(6 - uVar6 >> 1) & 0x1f), param_1 = uVar11, uVar8 <= uVar11
               )) {
              param_1 = uVar8;
            }
            uVar10 = uVar10 << ((byte)(7 - uVar6 >> 1) & 0x1f);
            if (param_1 == 1) {
              uVar6 = *puVar5;
              *(byte *)puVar12 = (byte)uVar6;
              if (uVar11 <= uVar10) {
                return CONCAT44(uVar10,(uint)(byte)uVar6);
              }
              do {
                bVar4 = *(byte *)((int)puVar5 + uVar10);
                puVar5 = (uint *)((int)puVar5 + uVar10);
                puVar12 = (uint *)((int)puVar12 + uVar10);
                uVar11 = uVar11 - uVar10;
                *(byte *)puVar12 = bVar4;
              } while (uVar10 < uVar11);
              return CONCAT44(uVar10,(uint)bVar4);
            }
            if (param_1 == 2) {
              do {
                *(byte *)puVar12 = (byte)*puVar5;
                bVar4 = *(byte *)((int)puVar5 + 1);
                *(byte *)((int)puVar12 + 1) = bVar4;
                if (uVar11 <= uVar10) {
                  return CONCAT44(uVar10,(uint)bVar4);
                }
                uVar11 = uVar11 - uVar10;
                puVar5 = (uint *)((int)puVar5 + uVar10);
                puVar12 = (uint *)((int)puVar12 + uVar10);
              } while (1 < uVar11);
              uVar11 = *puVar5;
              *(byte *)puVar12 = (byte)uVar11;
              return CONCAT44(uVar10,(uint)(byte)uVar11);
            }
            if (param_1 != 3) {
              if (((param_1 < 0x10) && ((((ushort)puVar12 | (ushort)puVar5) & 1) == 0)) &&
                 (((uVar10 | param_1) & 1) == 0)) {
                uVar6 = uVar10 | param_1 | (uint)puVar5 | (uint)puVar12;
                uVar8 = param_1;
                if ((uVar6 & 3) != 0) {
                  uVar9 = uVar10 - param_1 >> 1;
                  while( true ) {
                    do {
                      uVar6 = CONCAT22((short)(uVar6 >> 0x10),(short)*puVar5);
                      puVar13 = (uint *)((int)puVar12 + 2);
                      *(short *)puVar12 = (short)*puVar5;
                      puVar5 = (uint *)((int)puVar5 + 2);
                      uVar8 = uVar8 - 2;
                      puVar12 = puVar13;
                    } while (uVar8 != 0);
                    if (uVar11 <= uVar10) break;
                    uVar11 = uVar11 - uVar10;
                    puVar12 = (uint *)((int)puVar13 + uVar9 * 2);
                    puVar5 = (uint *)((int)puVar5 + uVar9 * 2);
                    uVar6 = uVar9;
                    uVar8 = param_1;
                    if (uVar11 < param_1) {
                      puVar13 = puVar12;
                      do {
                        uVar3 = *(undefined1 *)(((int)puVar5 - (int)puVar12) + (int)puVar13);
                        uVar9 = CONCAT31((int3)(uVar9 >> 8),uVar3);
                        *(undefined1 *)puVar13 = uVar3;
                        uVar11 = uVar11 - 1;
                        puVar13 = (uint *)((int)puVar13 + 1);
                      } while (uVar11 != 0);
                      return CONCAT44(uVar10,uVar9);
                    }
                  }
                  return CONCAT44(uVar10,uVar6);
                }
                while( true ) {
                  do {
                    uVar6 = *puVar5;
                    puVar5 = puVar5 + 1;
                    *puVar12 = uVar6;
                    puVar12 = puVar12 + 1;
                    uVar8 = uVar8 - 4;
                  } while (uVar8 != 0);
                  if (uVar11 <= uVar10) break;
                  uVar11 = uVar11 - uVar10;
                  uVar6 = uVar10 - param_1 & 0xfffffffc;
                  puVar12 = (uint *)((int)puVar12 + uVar6);
                  puVar5 = (uint *)((int)puVar5 + uVar6);
                  uVar8 = param_1;
                  if (uVar11 < param_1) {
                    puVar13 = puVar12;
                    do {
                      uVar3 = *(undefined1 *)(((int)puVar5 - (int)puVar12) + (int)puVar13);
                      uVar6 = CONCAT31((int3)(uVar6 >> 8),uVar3);
                      *(undefined1 *)puVar13 = uVar3;
                      uVar11 = uVar11 - 1;
                      puVar13 = (uint *)((int)puVar13 + 1);
                    } while (uVar11 != 0);
                    return CONCAT44(uVar10,uVar6);
                  }
                }
                return CONCAT44(uVar10,uVar6);
              }
              uVar15 = FUN_0044c490(puVar12,puVar5,param_1);
              if (uVar11 <= uVar10) {
                return uVar15;
              }
              do {
                uVar11 = uVar11 - uVar10;
                puVar5 = (uint *)((int)puVar5 + uVar10);
                puVar12 = (uint *)((int)puVar12 + uVar10);
                uVar6 = uVar11;
                if (param_1 <= uVar11) {
                  uVar6 = param_1;
                }
                uVar15 = FUN_0044c490(puVar12,puVar5,uVar6);
                param_1 = uVar6;
              } while (uVar10 < uVar11);
              return uVar15;
            }
            *(char *)puVar12 = (char)*puVar5;
            *(undefined1 *)((int)puVar12 + 1) = *(undefined1 *)((int)puVar5 + 1);
            bVar4 = *(byte *)((int)puVar5 + 2);
            *(byte *)((int)puVar12 + 2) = bVar4;
            if (uVar11 <= uVar10) {
              return CONCAT44(uVar10,(uint)bVar4);
            }
            do {
              puVar1 = (undefined1 *)((int)puVar5 + uVar10);
              puVar5 = (uint *)((int)puVar5 + uVar10);
              puVar12 = (uint *)((int)puVar12 + uVar10);
              uVar11 = uVar11 - uVar10;
              *(undefined1 *)puVar12 = *puVar1;
              *(undefined1 *)((int)puVar12 + 1) = *(undefined1 *)((int)puVar5 + 1);
              bVar4 = *(byte *)((int)puVar5 + 2);
              *(byte *)((int)puVar12 + 2) = bVar4;
            } while (uVar10 < uVar11);
            return CONCAT44(uVar10,(uint)bVar4);
          }
          goto LAB_004a6569;
        }
        uVar8 = (uint)(8 / (ulonglong)uVar10);
        iVar7 = 0;
        if ((*(uint *)(param_1 + 0x7c) & 0x10000) == 0) {
          if (param_3 == 0) {
            if (uVar10 != 1) {
              iVar7 = (uVar10 != 2) + 1;
            }
            uVar6 = *(uint *)(&DAT_00519408 + (uVar6 + iVar7 * 6) * 4);
          }
          else {
            if (uVar10 != 1) {
              iVar7 = (uVar10 != 2) + 1;
            }
            uVar6 = *(uint *)(&DAT_00519474 + ((uint)(bVar2 >> 1) + iVar7 * 3) * 4);
          }
        }
        else if (param_3 == 0) {
          if (uVar10 != 1) {
            iVar7 = (uVar10 != 2) + 1;
          }
          uVar6 = *(uint *)(&DAT_005193c0 + (uVar6 + iVar7 * 6) * 4);
        }
        else {
          if (uVar10 != 1) {
            iVar7 = (uVar10 != 2) + 1;
          }
          uVar6 = *(uint *)(&DAT_00519450 + ((uint)(bVar2 >> 1) + iVar7 * 3) * 4);
        }
        iVar7 = *(int *)(param_1 + 0x124) - (int)param_2;
        while( true ) {
          if ((uVar6 & 0xff) != 0) {
            bVar4 = *(byte *)(iVar7 + 1 + (int)param_2);
            if ((uVar6 & 0xff) != 0xff) {
              bVar4 = bVar4 & (byte)uVar6 | ~(byte)uVar6 & (byte)*param_2;
            }
            *(byte *)param_2 = bVar4;
          }
          if (uVar11 <= uVar8) break;
          uVar11 = uVar11 - uVar8;
          param_2 = (uint *)((int)param_2 + 1);
          uVar6 = uVar6 >> 8 | uVar6 << 0x18;
        }
      }
      if (local_8 == (byte *)0x0) {
        return CONCAT44(local_8,uVar8);
      }
      bVar4 = ~local_1c & *local_8 | local_1c & local_1d;
      *local_8 = bVar4;
      return CONCAT44(local_8,CONCAT31((int3)(uVar8 >> 8),bVar4));
    }
  }
LAB_004a6569:
                    /* WARNING: Subroutine does not return */
  FUN_0046f190(param_1);
}


