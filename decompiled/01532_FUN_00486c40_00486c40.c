// Function: FUN_00486c40
// Entry: 00486c40
// Size: 1796 bytes
// Thunk: false
// External: false


uint __cdecl FUN_00486c40(uint *param_1)

{
  byte bVar1;
  uint in_EAX;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  
  if ((char)param_1[4] == '\0') {
LAB_00487044:
    uVar11 = in_EAX;
    if (*(int *)(*param_1 + 0x14) != 0) {
      if (param_1[3] == 0) {
        uVar5 = param_1[0x110];
        uVar11 = param_1[0x3e90] + 1;
        if (uVar5 == uVar11) goto LAB_0048733a;
        in_EAX = uVar11;
        if ((int)uVar11 <= (int)uVar5) goto LAB_00487330;
        uVar2 = param_1[0xe];
        *(char *)(param_1 + 2) = (char)param_1[0xf];
        uVar10 = param_1[9] * 100000;
        param_1[3] = 1;
        in_EAX = uVar10;
        if (uVar10 <= uVar2) goto LAB_00487330;
        uVar3 = 0x100;
        uVar7 = 0;
        do {
          uVar4 = (int)(uVar3 + uVar7) >> 1;
          uVar6 = uVar4;
          if ((int)uVar2 < (int)param_1[uVar4 + 0x111]) {
            uVar6 = uVar7;
            uVar3 = uVar4;
          }
          uVar7 = uVar6;
        } while (uVar3 - uVar6 != 1);
        uVar3 = (uint)*(ushort *)(param_1[0x314] + uVar2 * 2);
        uVar2 = (*(byte *)((uVar2 >> 1) + param_1[0x315]) >> (((byte)param_1[0xe] & 1) << 2) & 0xf)
                << 0x10 | uVar3;
        in_EAX = uVar5 + 1;
        param_1[0xe] = uVar2;
        param_1[0x110] = in_EAX;
        if (in_EAX != uVar11) {
          in_EAX = uVar6 & 0xff;
          if (in_EAX == param_1[0xf]) {
            param_1[3] = 2;
            if (uVar10 <= uVar2) goto LAB_00487330;
            uVar7 = 0x100;
            uVar6 = 0;
            do {
              uVar9 = (int)(uVar7 + uVar6) >> 1;
              uVar4 = uVar9;
              if ((int)uVar2 < (int)param_1[uVar9 + 0x111]) {
                uVar4 = uVar6;
                uVar7 = uVar9;
              }
              uVar6 = uVar4;
            } while (uVar7 - uVar4 != 1);
            uVar7 = (uint)*(ushort *)(param_1[0x314] + uVar2 * 2);
            uVar2 = (*(byte *)((uVar2 >> 1) + param_1[0x315]) >> (sbyte)((uVar3 & 1) << 2) & 0xf) <<
                    0x10 | uVar7;
            in_EAX = uVar5 + 2;
            param_1[0xe] = uVar2;
            param_1[0x110] = in_EAX;
            if (in_EAX == uVar11) goto LAB_00487044;
            in_EAX = uVar4 & 0xff;
            if (in_EAX == param_1[0xf]) {
              param_1[3] = 3;
              if (uVar10 <= uVar2) goto LAB_00487330;
              uVar3 = 0x100;
              uVar6 = 0;
              do {
                uVar9 = (int)(uVar3 + uVar6) >> 1;
                uVar4 = uVar9;
                if ((int)uVar2 < (int)param_1[uVar9 + 0x111]) {
                  uVar4 = uVar6;
                  uVar3 = uVar9;
                }
                uVar6 = uVar4;
              } while (uVar3 - uVar4 != 1);
              uVar3 = param_1[0x315];
              uVar6 = (uint)*(ushort *)(param_1[0x314] + uVar2 * 2);
              uVar2 = (*(byte *)((uVar2 >> 1) + uVar3) >> (sbyte)((uVar7 & 1) << 2) & 0xf) << 0x10 |
                      uVar6;
              in_EAX = uVar5 + 3;
              param_1[0xe] = uVar2;
              param_1[0x110] = in_EAX;
              if (in_EAX == uVar11) goto LAB_00487044;
              in_EAX = uVar4 & 0xff;
              if (in_EAX == param_1[0xf]) {
                if (uVar10 <= uVar2) goto LAB_00487330;
                uVar11 = FUN_004861d0(uVar2,(int)(param_1 + 0x111));
                uVar7 = (uint)*(ushort *)(param_1[0x314] + uVar2 * 2);
                bVar1 = *(byte *)((uVar2 >> 1) + uVar3);
                param_1[0x110] = uVar5 + 4;
                uVar2 = (bVar1 >> (sbyte)((uVar6 & 1) << 2) & 0xf) << 0x10 | uVar7;
                in_EAX = (uVar11 & 0xff) + 4;
                param_1[0xe] = uVar2;
                param_1[3] = in_EAX;
                if (uVar10 <= uVar2) goto LAB_00487330;
                uVar11 = FUN_004861d0(uVar2,(int)(param_1 + 0x111));
                param_1[0xf] = uVar11;
                in_EAX = uVar5 + 5;
                param_1[0xe] = (*(byte *)((uVar2 >> 1) + param_1[0x315]) >>
                                (sbyte)((uVar7 & 1) << 2) & 0xf) << 0x10 |
                               (uint)*(ushort *)(param_1[0x314] + uVar2 * 2);
                param_1[0x110] = in_EAX;
                goto LAB_00487044;
              }
            }
          }
          param_1[0xf] = in_EAX;
        }
      }
      else {
        **(undefined1 **)(*param_1 + 0x10) = (char)param_1[2];
        uVar11 = *(uint *)(&DAT_00541bd0 + (param_1[0x318] >> 0x18 ^ (uint)(byte)param_1[2]) * 4);
        param_1[3] = param_1[3] - 1;
        param_1[0x318] = param_1[0x318] << 8 ^ uVar11;
        *(int *)(*param_1 + 0x10) = *(int *)(*param_1 + 0x10) + 1;
        *(int *)(*param_1 + 0x14) = *(int *)(*param_1 + 0x14) + -1;
        *(int *)(*param_1 + 0x18) = *(int *)(*param_1 + 0x18) + 1;
        in_EAX = *param_1;
        if (*(int *)(in_EAX + 0x18) == 0) {
          *(int *)(in_EAX + 0x1c) = *(int *)(in_EAX + 0x1c) + 1;
        }
      }
      goto LAB_00487044;
    }
  }
  else {
    while (uVar11 = in_EAX, *(int *)(*param_1 + 0x14) != 0) {
      if (param_1[3] == 0) {
        uVar11 = param_1[0x110];
        uVar5 = param_1[0x3e90] + 1;
        if (uVar11 == uVar5) break;
        in_EAX = uVar11;
        if ((int)uVar5 <= (int)uVar11) {
LAB_00487330:
          return CONCAT31((int3)(in_EAX >> 8),1);
        }
        uVar11 = param_1[0xe];
        *(char *)(param_1 + 2) = (char)param_1[0xf];
        uVar2 = param_1[9] * 100000;
        param_1[3] = 1;
        in_EAX = uVar2;
        if (uVar2 <= uVar11) goto LAB_00487330;
        uVar10 = 0x100;
        uVar3 = 0;
        do {
          uVar6 = (int)(uVar10 + uVar3) >> 1;
          uVar7 = uVar6;
          if ((int)uVar11 < (int)param_1[uVar6 + 0x111]) {
            uVar7 = uVar3;
            uVar10 = uVar6;
          }
          uVar3 = uVar7;
        } while (uVar10 - uVar7 != 1);
        uVar3 = (uint)*(ushort *)(param_1[0x314] + uVar11 * 2);
        uVar10 = param_1[5];
        uVar11 = (*(byte *)((uVar11 >> 1) + param_1[0x315]) >> (((byte)param_1[0xe] & 1) << 2) & 0xf
                 ) << 0x10 | uVar3;
        param_1[0xe] = uVar11;
        if (uVar10 == 0) {
          uVar10 = (&DAT_005413d0)[param_1[6]];
          uVar6 = param_1[6] + 1;
          param_1[6] = uVar6;
          if (uVar6 == 0x200) {
            param_1[6] = 0;
          }
        }
        uVar6 = param_1[0x110];
        uVar10 = uVar10 - 1;
        in_EAX = uVar6 + 1;
        param_1[5] = uVar10;
        param_1[0x110] = in_EAX;
        if (in_EAX != uVar5) {
          in_EAX = uVar7 & 0xff;
          uVar7 = uVar10 == 1 ^ in_EAX;
          if (uVar7 == param_1[0xf]) {
            param_1[3] = 2;
            if (uVar2 <= uVar11) goto LAB_00487330;
            uVar7 = 0x100;
            uVar4 = 0;
            do {
              uVar8 = (int)(uVar7 + uVar4) >> 1;
              uVar9 = uVar8;
              if ((int)uVar11 < (int)param_1[uVar8 + 0x111]) {
                uVar9 = uVar4;
                uVar7 = uVar8;
              }
              uVar4 = uVar9;
            } while (uVar7 - uVar9 != 1);
            uVar7 = (uint)*(ushort *)(param_1[0x314] + uVar11 * 2);
            uVar11 = (*(byte *)((uVar11 >> 1) + param_1[0x315]) >> (sbyte)((uVar3 & 1) << 2) & 0xf)
                     << 0x10 | uVar7;
            param_1[0xe] = uVar11;
            if (uVar10 == 0) {
              uVar10 = (&DAT_005413d0)[param_1[6]];
              uVar3 = param_1[6] + 1;
              param_1[6] = uVar3;
              if (uVar3 == 0x200) {
                param_1[6] = 0;
              }
            }
            uVar10 = uVar10 - 1;
            in_EAX = uVar6 + 2;
            param_1[5] = uVar10;
            param_1[0x110] = in_EAX;
            if (in_EAX != uVar5) {
              in_EAX = uVar9 & 0xff;
              uVar3 = uVar10 == 1 ^ in_EAX;
              if (uVar3 == param_1[0xf]) {
                param_1[3] = 3;
                if (uVar2 <= uVar11) goto LAB_00487330;
                uVar3 = 0x100;
                uVar4 = 0;
                do {
                  uVar8 = (int)(uVar3 + uVar4) >> 1;
                  uVar9 = uVar8;
                  if ((int)uVar11 < (int)param_1[uVar8 + 0x111]) {
                    uVar9 = uVar4;
                    uVar3 = uVar8;
                  }
                  uVar4 = uVar9;
                } while (uVar3 - uVar9 != 1);
                uVar3 = param_1[0x315];
                uVar4 = (uint)*(ushort *)(param_1[0x314] + uVar11 * 2);
                uVar11 = (*(byte *)((uVar11 >> 1) + uVar3) >> (sbyte)((uVar7 & 1) << 2) & 0xf) <<
                         0x10 | uVar4;
                param_1[0xe] = uVar11;
                if (uVar10 == 0) {
                  uVar10 = (&DAT_005413d0)[param_1[6]];
                  uVar7 = param_1[6] + 1;
                  param_1[6] = uVar7;
                  if (uVar7 == 0x200) {
                    param_1[6] = 0;
                  }
                }
                uVar10 = uVar10 - 1;
                in_EAX = uVar6 + 3;
                param_1[5] = uVar10;
                param_1[0x110] = in_EAX;
                if (in_EAX != uVar5) {
                  in_EAX = uVar9 & 0xff;
                  uVar5 = uVar10 == 1 ^ in_EAX;
                  if (uVar5 == param_1[0xf]) {
                    if (uVar2 <= uVar11) goto LAB_00487330;
                    uVar5 = FUN_004861d0(uVar11,(int)(param_1 + 0x111));
                    uVar7 = (uint)*(ushort *)(param_1[0x314] + uVar11 * 2);
                    uVar11 = (*(byte *)((uVar11 >> 1) + uVar3) >> (sbyte)((uVar4 & 1) << 2) & 0xf)
                             << 0x10 | uVar7;
                    param_1[0xe] = uVar11;
                    if (uVar10 == 0) {
                      uVar10 = (&DAT_005413d0)[param_1[6]];
                      uVar3 = param_1[6] + 1;
                      param_1[6] = uVar3;
                      if (uVar3 == 0x200) {
                        param_1[6] = 0;
                      }
                    }
                    uVar10 = uVar10 - 1;
                    param_1[5] = uVar10;
                    param_1[0x110] = uVar6 + 4;
                    param_1[3] = ((uint)(uVar10 == 1) ^ uVar5 & 0xff) + 4;
                    in_EAX = uVar5 & 0xff;
                    if (uVar2 <= uVar11) goto LAB_00487330;
                    uVar5 = FUN_004861d0(uVar11,(int)(param_1 + 0x111));
                    param_1[0xf] = uVar5;
                    param_1[0xe] = (*(byte *)((uVar11 >> 1) + param_1[0x315]) >>
                                    (sbyte)((uVar7 & 1) << 2) & 0xf) << 0x10 |
                                   (uint)*(ushort *)(param_1[0x314] + uVar11 * 2);
                    if (uVar10 == 0) {
                      uVar10 = (&DAT_005413d0)[param_1[6]];
                      uVar11 = param_1[6] + 1;
                      param_1[6] = uVar11;
                      if (uVar11 == 0x200) {
                        param_1[6] = 0;
                      }
                    }
                    param_1[5] = uVar10 - 1;
                    in_EAX = uVar6 + 5;
                    param_1[0xf] = uVar10 - 1 == 1 ^ uVar5;
                    param_1[0x110] = in_EAX;
                  }
                  else {
                    param_1[0xf] = uVar5;
                  }
                }
              }
              else {
                param_1[0xf] = uVar3;
              }
            }
          }
          else {
            param_1[0xf] = uVar7;
          }
        }
      }
      else {
        **(undefined1 **)(*param_1 + 0x10) = (char)param_1[2];
        uVar11 = *(uint *)(&DAT_00541bd0 + (param_1[0x318] >> 0x18 ^ (uint)(byte)param_1[2]) * 4);
        param_1[3] = param_1[3] - 1;
        param_1[0x318] = param_1[0x318] << 8 ^ uVar11;
        *(int *)(*param_1 + 0x10) = *(int *)(*param_1 + 0x10) + 1;
        *(int *)(*param_1 + 0x14) = *(int *)(*param_1 + 0x14) + -1;
        *(int *)(*param_1 + 0x18) = *(int *)(*param_1 + 0x18) + 1;
        in_EAX = *param_1;
        if (*(int *)(in_EAX + 0x18) == 0) {
          *(int *)(in_EAX + 0x1c) = *(int *)(in_EAX + 0x1c) + 1;
        }
      }
    }
  }
LAB_0048733a:
  return uVar11 & 0xffffff00;
}


