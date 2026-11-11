// Function: FUN_00471d20
// Entry: 00471d20
// Size: 4536 bytes
// Thunk: false
// External: false


void __cdecl FUN_00471d20(int *param_1,byte *param_2,int param_3)

{
  byte *pbVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  byte bVar7;
  uint uVar8;
  byte bVar9;
  undefined2 uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  byte bVar14;
  ushort uVar15;
  int iVar16;
  byte *pbVar17;
  int iVar18;
  short sVar19;
  int iVar20;
  byte local_20;
  
  iVar6 = param_3;
  iVar16 = *param_1;
  iVar13 = *(int *)(param_3 + 0x19c);
  iVar18 = *(int *)(param_3 + 400);
  iVar20 = *(int *)(param_3 + 0x194);
  iVar3 = *(int *)(param_3 + 0x198);
  iVar4 = *(int *)(param_3 + 0x18c);
  iVar5 = *(int *)(param_3 + 0x1a0);
  uVar11 = *(uint *)(param_3 + 0x78) >> 0xd & 1;
  local_20 = (byte)*(undefined4 *)(param_3 + 0x184);
  switch((char)param_1[2]) {
  case '\0':
    switch(*(undefined1 *)((int)param_1 + 9)) {
    case 1:
      param_3 = 7;
      if (iVar16 != 0) {
        uVar15 = *(ushort *)(iVar6 + 0x1bc);
        do {
          bVar9 = (byte)param_3;
          if ((*param_2 >> (bVar9 & 0x1f) & 1) == uVar15) {
            *param_2 = (byte)(0x7f7f >> (7 - bVar9 & 0x1f)) & *param_2 |
                       *(char *)(iVar6 + 0x16c) << (bVar9 & 0x1f);
          }
          if (param_3 == 0) {
            param_3 = 7;
            param_2 = param_2 + 1;
          }
          else {
            param_3 = param_3 + -1;
          }
          iVar16 = iVar16 + -1;
        } while (iVar16 != 0);
        return;
      }
      break;
    case 2:
      if (iVar4 == 0) {
        param_3 = 6;
        if (iVar16 != 0) {
          uVar15 = *(ushort *)(iVar6 + 0x1bc);
          do {
            bVar9 = (byte)param_3;
            if ((*param_2 >> (bVar9 & 0x1f) & 3) == uVar15) {
              *param_2 = (byte)(0x3f3f >> (6 - bVar9 & 0x1f)) & *param_2 |
                         *(char *)(iVar6 + 0x16c) << (bVar9 & 0x1f);
            }
            if (param_3 == 0) {
              param_3 = 6;
              param_2 = param_2 + 1;
            }
            else {
              param_3 = param_3 + -2;
            }
            iVar16 = iVar16 + -1;
          } while (iVar16 != 0);
          return;
        }
      }
      else {
        param_1 = (int *)0x6;
        if (iVar16 != 0) {
          uVar15 = *(ushort *)(param_3 + 0x1bc);
          do {
            bVar9 = *param_2;
            bVar7 = (byte)param_1;
            if ((bVar9 >> (bVar7 & 0x1f) & 3) == uVar15) {
              bVar14 = *(byte *)(param_3 + 0x16c);
            }
            else {
              uVar11 = bVar9 >> (bVar7 & 0x1f) & 3;
              bVar14 = *(byte *)((((uVar11 * 4 | uVar11) << 2 | uVar11) << 2 | uVar11) + iVar4) >> 6
              ;
            }
            *param_2 = bVar14 << (bVar7 & 0x1f) | (byte)(0x3f3f >> (6 - bVar7 & 0x1f)) & bVar9;
            if (param_1 == (int *)0x0) {
              param_1 = (int *)0x6;
              param_2 = param_2 + 1;
            }
            else {
              param_1 = (int *)((int)param_1 + -2);
            }
            iVar16 = iVar16 + -1;
          } while (iVar16 != 0);
          return;
        }
      }
      break;
    case 4:
      if (iVar4 == 0) {
        param_3 = 4;
        if (iVar16 != 0) {
          uVar15 = *(ushort *)(iVar6 + 0x1bc);
          do {
            bVar9 = (byte)param_3;
            if ((*param_2 >> (bVar9 & 0x1f) & 0xf) == uVar15) {
              *param_2 = (byte)(0xf0f >> (4 - bVar9 & 0x1f)) & *param_2 |
                         *(char *)(iVar6 + 0x16c) << (bVar9 & 0x1f);
            }
            if (param_3 == 0) {
              param_3 = 4;
              param_2 = param_2 + 1;
            }
            else {
              param_3 = param_3 + -4;
            }
            iVar16 = iVar16 + -1;
          } while (iVar16 != 0);
          return;
        }
      }
      else {
        param_1 = (int *)0x4;
        if (iVar16 != 0) {
          uVar15 = *(ushort *)(param_3 + 0x1bc);
          do {
            bVar9 = *param_2;
            bVar7 = (byte)param_1;
            if ((bVar9 >> (bVar7 & 0x1f) & 0xf) == uVar15) {
              bVar14 = *(byte *)(param_3 + 0x16c);
            }
            else {
              uVar11 = bVar9 >> (bVar7 & 0x1f) & 0xf;
              bVar14 = *(byte *)((uVar11 << 4 | uVar11) + iVar4) >> 4;
            }
            *param_2 = bVar14 << (bVar7 & 0x1f) | (byte)(0xf0f >> (4 - bVar7 & 0x1f)) & bVar9;
            if (param_1 == (int *)0x0) {
              param_1 = (int *)0x4;
              param_2 = param_2 + 1;
            }
            else {
              param_1 = param_1 + -1;
            }
            iVar16 = iVar16 + -1;
          } while (iVar16 != 0);
          return;
        }
      }
      break;
    case 8:
      if (iVar4 == 0) {
        if (iVar16 != 0) {
          uVar15 = *(ushort *)(param_3 + 0x1bc);
          do {
            if (*param_2 == uVar15) {
              *param_2 = *(byte *)(param_3 + 0x16c);
            }
            param_2 = param_2 + 1;
            iVar16 = iVar16 + -1;
          } while (iVar16 != 0);
          return;
        }
      }
      else if (iVar16 != 0) {
        uVar15 = *(ushort *)(param_3 + 0x1bc);
        do {
          if (*param_2 == uVar15) {
            bVar9 = *(byte *)(param_3 + 0x16c);
          }
          else {
            bVar9 = *(byte *)((uint)*param_2 + iVar4);
          }
          *param_2 = bVar9;
          param_2 = param_2 + 1;
          iVar16 = iVar16 + -1;
        } while (iVar16 != 0);
        return;
      }
      break;
    case 0x10:
      if (iVar18 == 0) {
        if (iVar16 != 0) {
          sVar19 = *(short *)(param_3 + 0x1bc);
          do {
            if ((ushort)((ushort)*param_2 * 0x100 + (ushort)param_2[1]) == sVar19) {
              uVar10 = *(undefined2 *)(param_3 + 0x16c);
              param_2[1] = (byte)uVar10;
              *param_2 = (byte)((ushort)uVar10 >> 8);
            }
            param_2 = param_2 + 2;
            iVar16 = iVar16 + -1;
          } while (iVar16 != 0);
          return;
        }
      }
      else if (iVar16 != 0) {
        sVar19 = *(short *)(param_3 + 0x1bc);
        do {
          param_1 = (int *)(uint)*param_2;
          if ((ushort)((ushort)*param_2 * 0x100 + (ushort)param_2[1]) == sVar19) {
            uVar10 = *(undefined2 *)(param_3 + 0x16c);
          }
          else {
            sVar19 = *(short *)(param_3 + 0x1bc);
            uVar10 = *(undefined2 *)
                      (*(int *)(iVar18 + (uint)(param_2[1] >> (local_20 & 0x1f)) * 4) +
                      (int)param_1 * 2);
          }
          *param_2 = (byte)((ushort)uVar10 >> 8);
          param_2[1] = (byte)uVar10;
          param_2 = param_2 + 2;
          iVar16 = iVar16 + -1;
        } while (iVar16 != 0);
        return;
      }
    }
    break;
  case '\x02':
    if (iVar16 != 0) {
      if (*(char *)((int)param_1 + 9) != '\b') {
        if (iVar18 != 0) {
          pbVar17 = param_2 + 2;
          do {
            param_1 = (int *)(uint)pbVar17[-2];
            if ((((ushort)((ushort)pbVar17[-2] * 0x100 + (ushort)pbVar17[-1]) ==
                  *(short *)(param_3 + 0x1b6)) &&
                ((ushort)((ushort)*pbVar17 * 0x100 + (ushort)pbVar17[1]) ==
                 *(short *)(param_3 + 0x1b8))) &&
               ((ushort)((ushort)pbVar17[2] * 0x100 + (ushort)pbVar17[3]) ==
                *(short *)(param_3 + 0x1ba))) {
              uVar10 = *(undefined2 *)(param_3 + 0x166);
              pbVar17[-1] = (byte)uVar10;
              uVar2 = *(undefined2 *)(param_3 + 0x168);
              pbVar17[-2] = (byte)((ushort)uVar10 >> 8);
              *pbVar17 = (byte)((ushort)uVar2 >> 8);
              uVar10 = *(undefined2 *)(param_3 + 0x16a);
              pbVar17[1] = (byte)uVar2;
            }
            else {
              uVar10 = *(undefined2 *)
                        (*(int *)(iVar18 + (uint)(pbVar17[-1] >> (local_20 & 0x1f)) * 4) +
                        (int)param_1 * 2);
              pbVar17[-1] = (byte)uVar10;
              pbVar17[-2] = (byte)((ushort)uVar10 >> 8);
              uVar10 = *(undefined2 *)
                        (*(int *)(iVar18 + (uint)(pbVar17[1] >> (local_20 & 0x1f)) * 4) +
                        (uint)*pbVar17 * 2);
              pbVar17[1] = (byte)uVar10;
              *pbVar17 = (byte)((ushort)uVar10 >> 8);
              uVar10 = *(undefined2 *)
                        (*(int *)(iVar18 + (uint)(pbVar17[3] >> (local_20 & 0x1f)) * 4) +
                        (uint)pbVar17[2] * 2);
            }
            pbVar17[2] = (byte)((ushort)uVar10 >> 8);
            pbVar17[3] = (byte)uVar10;
            pbVar17 = pbVar17 + 6;
            iVar16 = iVar16 + -1;
          } while (iVar16 != 0);
          return;
        }
        sVar19 = *(short *)(param_3 + 0x1b6);
        pbVar17 = param_2 + 2;
        do {
          if ((((ushort)((ushort)pbVar17[-2] * 0x100 + (ushort)pbVar17[-1]) == sVar19) &&
              ((ushort)((ushort)*pbVar17 * 0x100 + (ushort)pbVar17[1]) ==
               *(short *)(param_3 + 0x1b8))) &&
             ((ushort)((ushort)pbVar17[2] * 0x100 + (ushort)pbVar17[3]) ==
              *(short *)(param_3 + 0x1ba))) {
            uVar10 = *(undefined2 *)(param_3 + 0x166);
            pbVar17[-1] = (byte)uVar10;
            uVar2 = *(undefined2 *)(param_3 + 0x168);
            pbVar17[-2] = (byte)((ushort)uVar10 >> 8);
            pbVar17[1] = (byte)uVar2;
            uVar10 = *(undefined2 *)(param_3 + 0x16a);
            *pbVar17 = (byte)((ushort)uVar2 >> 8);
            pbVar17[2] = (byte)((ushort)uVar10 >> 8);
            pbVar17[3] = (byte)uVar10;
          }
          pbVar17 = pbVar17 + 6;
          iVar16 = iVar16 + -1;
        } while (iVar16 != 0);
        return;
      }
      if (iVar4 != 0) {
        uVar15 = *(ushort *)(param_3 + 0x1b6);
        pbVar17 = param_2 + 1;
        do {
          if (((pbVar17[-1] == uVar15) && ((ushort)*pbVar17 == *(ushort *)(param_3 + 0x1b8))) &&
             ((ushort)pbVar17[1] == *(ushort *)(param_3 + 0x1ba))) {
            pbVar17[-1] = *(byte *)(param_3 + 0x166);
            *pbVar17 = *(byte *)(param_3 + 0x168);
            bVar9 = *(byte *)(param_3 + 0x16a);
          }
          else {
            pbVar17[-1] = *(byte *)((uint)pbVar17[-1] + iVar4);
            *pbVar17 = *(byte *)((uint)*pbVar17 + iVar4);
            bVar9 = *(byte *)((uint)pbVar17[1] + iVar4);
          }
          pbVar17[1] = bVar9;
          pbVar17 = pbVar17 + 3;
          iVar16 = iVar16 + -1;
        } while (iVar16 != 0);
        return;
      }
      uVar15 = *(ushort *)(param_3 + 0x1b6);
      pbVar17 = param_2 + 2;
      do {
        if (((pbVar17[-2] == uVar15) && ((ushort)pbVar17[-1] == *(ushort *)(param_3 + 0x1b8))) &&
           ((ushort)*pbVar17 == *(ushort *)(param_3 + 0x1ba))) {
          pbVar17[-2] = *(byte *)(param_3 + 0x166);
          pbVar17[-1] = *(byte *)(param_3 + 0x168);
          *pbVar17 = *(byte *)(param_3 + 0x16a);
        }
        pbVar17 = pbVar17 + 3;
        iVar16 = iVar16 + -1;
      } while (iVar16 != 0);
      return;
    }
    break;
  case '\x04':
    if (*(char *)((int)param_1 + 9) == '\b') {
      if (((iVar3 == 0) || (iVar20 == 0)) || (iVar4 == 0)) {
        if (iVar16 != 0) {
          do {
            bVar9 = param_2[1];
            if (bVar9 == 0) {
              *param_2 = *(byte *)(param_3 + 0x16c);
            }
            else if (bVar9 != 0xff) {
              uVar15 = (ushort)*param_2 * (ushort)bVar9 +
                       (0xff - (ushort)bVar9) * *(short *)(param_3 + 0x16c) + 0x80;
              *param_2 = (byte)((uint)(uVar15 >> 8) + (uint)uVar15 >> 8);
            }
            param_2 = param_2 + 2;
            iVar16 = iVar16 + -1;
          } while (iVar16 != 0);
          return;
        }
      }
      else if (iVar16 != 0) {
        if (uVar11 == 0) {
          do {
            bVar9 = param_2[1];
            if (bVar9 == 0xff) {
              bVar9 = *(byte *)((uint)*param_2 + iVar4);
            }
            else if (bVar9 == 0) {
              bVar9 = *(byte *)(param_3 + 0x16c);
            }
            else {
              uVar15 = (ushort)*(byte *)((uint)*param_2 + iVar3) * (ushort)bVar9 +
                       (0xff - (ushort)bVar9) * *(short *)(param_3 + 0x176) + 0x80;
              bVar9 = *(byte *)(((uint)(uVar15 >> 8) + (uint)uVar15 >> 8 & 0xff) + iVar20);
            }
            *param_2 = bVar9;
            param_2 = param_2 + 2;
            iVar16 = iVar16 + -1;
          } while (iVar16 != 0);
          return;
        }
        do {
          bVar9 = param_2[1];
          if (bVar9 == 0xff) {
            bVar9 = *(byte *)((uint)*param_2 + iVar4);
          }
          else if (bVar9 == 0) {
            bVar9 = *(byte *)(param_3 + 0x16c);
          }
          else {
            uVar15 = (ushort)*(byte *)((uint)*param_2 + iVar3) * (ushort)bVar9 +
                     (0xff - (ushort)bVar9) * *(short *)(param_3 + 0x176) + 0x80;
            bVar9 = (byte)((uint)(uVar15 >> 8) + (uint)uVar15 >> 8);
          }
          *param_2 = bVar9;
          param_2 = param_2 + 2;
          iVar16 = iVar16 + -1;
        } while (iVar16 != 0);
        return;
      }
    }
    else if (((iVar18 == 0) || (iVar13 == 0)) || (iVar5 == 0)) {
      if (iVar16 != 0) {
        pbVar17 = param_2 + 1;
        do {
          uVar15 = (ushort)pbVar17[1] * 0x100 + (ushort)pbVar17[2];
          if (uVar15 == 0) {
            uVar10 = *(undefined2 *)(param_3 + 0x16c);
LAB_0047288f:
            *pbVar17 = (byte)uVar10;
            pbVar17[-1] = (byte)((ushort)uVar10 >> 8);
          }
          else if (uVar15 != 0xffff) {
            uVar11 = (uint)*(ushort *)(param_3 + 0x16c) * (0xffff - (uint)uVar15) + 0x8000 +
                     (uint)CONCAT11(pbVar17[-1],*pbVar17) * (uint)uVar15;
            uVar10 = (undefined2)((uVar11 >> 0x10) + uVar11 >> 0x10);
            goto LAB_0047288f;
          }
          pbVar17 = pbVar17 + 4;
          iVar16 = iVar16 + -1;
          if (iVar16 == 0) {
            return;
          }
        } while( true );
      }
    }
    else if (iVar16 != 0) {
      pbVar17 = param_2 + 1;
      if (uVar11 != 0) {
        do {
          pbVar1 = pbVar17 + -1;
          uVar15 = (ushort)pbVar17[1] * 0x100 + (ushort)pbVar17[2];
          if (uVar15 == 0xffff) {
            uVar10 = *(undefined2 *)
                      (*(int *)(iVar18 + (uint)(*pbVar17 >> (local_20 & 0x1f)) * 4) +
                      (uint)*pbVar1 * 2);
            bVar9 = (byte)uVar10;
            bVar7 = (byte)((ushort)uVar10 >> 8);
          }
          else if (uVar15 == 0) {
            bVar9 = (byte)*(undefined2 *)(param_3 + 0x16c);
            bVar7 = (byte)((ushort)*(undefined2 *)(param_3 + 0x16c) >> 8);
          }
          else {
            uVar11 = (uint)*(ushort *)(param_3 + 0x176) * (0xffff - (uint)uVar15) +
                     (uint)*(ushort *)
                            (*(int *)(iVar5 + (uint)(*pbVar17 >> (local_20 & 0x1f)) * 4) +
                            (uint)*pbVar1 * 2) * (uint)uVar15 + 0x8000;
            iVar13 = (uVar11 >> 0x10) + uVar11;
            bVar9 = (byte)((uint)iVar13 >> 0x10);
            bVar7 = (byte)((uint)iVar13 >> 0x18);
          }
          *pbVar1 = bVar7;
          *pbVar17 = bVar9;
          pbVar17 = pbVar17 + 4;
          iVar16 = iVar16 + -1;
        } while (iVar16 != 0);
        return;
      }
      do {
        pbVar1 = pbVar17 + -1;
        uVar15 = (ushort)pbVar17[1] * 0x100 + (ushort)pbVar17[2];
        if (uVar15 == 0xffff) {
          uVar10 = *(undefined2 *)
                    (*(int *)(iVar18 + (uint)(*pbVar17 >> (local_20 & 0x1f)) * 4) +
                    (uint)*pbVar1 * 2);
        }
        else if (uVar15 == 0) {
          uVar10 = *(undefined2 *)(param_3 + 0x16c);
        }
        else {
          uVar11 = (uint)*(ushort *)(param_3 + 0x176) * (0xffff - (uint)uVar15) +
                   (uint)*(ushort *)
                          (*(int *)(iVar5 + (uint)(*pbVar17 >> (local_20 & 0x1f)) * 4) +
                          (uint)*pbVar1 * 2) * (uint)uVar15 + 0x8000;
          uVar11 = (uVar11 >> 0x10) + uVar11;
          uVar10 = *(undefined2 *)
                    (*(int *)(iVar13 + ((uVar11 >> 0x10 & 0xff) >> (local_20 & 0x1f)) * 4) +
                    (uVar11 >> 0x18) * 2);
        }
        *pbVar1 = (byte)((ushort)uVar10 >> 8);
        *pbVar17 = (byte)uVar10;
        pbVar17 = pbVar17 + 4;
        iVar16 = iVar16 + -1;
      } while (iVar16 != 0);
      return;
    }
    break;
  case '\x06':
    if (*(char *)((int)param_1 + 9) == '\b') {
      if (((iVar3 == 0) || (iVar20 == 0)) || (iVar4 == 0)) {
        if (iVar16 != 0) {
          pbVar17 = param_2 + 1;
          do {
            bVar9 = pbVar17[2];
            if (bVar9 == 0) {
              pbVar17[-1] = *(byte *)(param_3 + 0x166);
              *pbVar17 = *(byte *)(param_3 + 0x168);
              pbVar17[1] = *(byte *)(param_3 + 0x16a);
            }
            else if (bVar9 != 0xff) {
              sVar19 = 0xff - (ushort)bVar9;
              uVar15 = (ushort)pbVar17[-1] * (ushort)bVar9 + sVar19 * *(short *)(param_3 + 0x166) +
                       0x80;
              pbVar17[-1] = (byte)((uint)(uVar15 >> 8) + (uint)uVar15 >> 8);
              uVar15 = (ushort)*pbVar17 * (ushort)bVar9 + sVar19 * *(short *)(param_3 + 0x168) +
                       0x80;
              *pbVar17 = (byte)((uint)(uVar15 >> 8) + (uint)uVar15 >> 8);
              uVar15 = (ushort)pbVar17[1] * (ushort)bVar9 + *(short *)(param_3 + 0x16a) * sVar19 +
                       0x80;
              pbVar17[1] = (byte)((uint)(uVar15 >> 8) + (uint)uVar15 >> 8);
            }
            pbVar17 = pbVar17 + 4;
            iVar16 = iVar16 + -1;
          } while (iVar16 != 0);
          return;
        }
      }
      else if (iVar16 != 0) {
        pbVar17 = param_2 + 1;
        do {
          bVar9 = pbVar17[2];
          if (bVar9 == 0xff) {
            pbVar17[-1] = *(byte *)((uint)pbVar17[-1] + iVar4);
            *pbVar17 = *(byte *)((uint)*pbVar17 + iVar4);
            bVar9 = *(byte *)((uint)pbVar17[1] + iVar4);
          }
          else if (bVar9 == 0) {
            bVar9 = *(byte *)(param_3 + 0x16a);
            pbVar17[-1] = *(byte *)(param_3 + 0x166);
            *pbVar17 = *(byte *)(param_3 + 0x168);
          }
          else {
            sVar19 = 0xff - (ushort)bVar9;
            uVar15 = (ushort)*(byte *)((uint)pbVar17[-1] + iVar3) * (ushort)bVar9 +
                     *(short *)(param_3 + 0x170) * sVar19 + 0x80;
            uVar12 = (uint)(uVar15 >> 8) + (uint)uVar15;
            bVar7 = (byte)(uVar12 >> 8);
            if (uVar11 == 0) {
              bVar7 = *(byte *)((uVar12 >> 8 & 0xff) + iVar20);
            }
            pbVar17[-1] = bVar7;
            uVar15 = (ushort)*(byte *)((uint)*pbVar17 + iVar3) * (ushort)bVar9 +
                     sVar19 * *(short *)(param_3 + 0x172) + 0x80;
            uVar12 = (uint)(uVar15 >> 8) + (uint)uVar15;
            bVar7 = (byte)(uVar12 >> 8);
            if (uVar11 == 0) {
              bVar7 = *(byte *)((uVar12 >> 8 & 0xff) + iVar20);
            }
            *pbVar17 = bVar7;
            uVar15 = (ushort)*(byte *)((uint)pbVar17[1] + iVar3) * (ushort)bVar9 +
                     sVar19 * *(short *)(param_3 + 0x174) + 0x80;
            uVar12 = (uint)(uVar15 >> 8) + (uint)uVar15;
            bVar9 = (byte)(uVar12 >> 8);
            if (uVar11 == 0) {
              bVar9 = *(byte *)((uVar12 >> 8 & 0xff) + iVar20);
            }
          }
          pbVar17[1] = bVar9;
          pbVar17 = pbVar17 + 4;
          iVar16 = iVar16 + -1;
        } while (iVar16 != 0);
        return;
      }
    }
    else if (((iVar18 == 0) || (iVar13 == 0)) || (iVar5 == 0)) {
      if (iVar16 != 0) {
        pbVar17 = param_2 + 1;
        do {
          uVar15 = (ushort)pbVar17[5] * 0x100 + (ushort)pbVar17[6];
          uVar11 = (uint)uVar15;
          if (uVar15 == 0) {
            uVar10 = *(undefined2 *)(param_3 + 0x166);
            *pbVar17 = (byte)uVar10;
            uVar2 = *(undefined2 *)(param_3 + 0x168);
            pbVar17[-1] = (byte)((ushort)uVar10 >> 8);
            pbVar17[2] = (byte)uVar2;
            uVar10 = *(undefined2 *)(param_3 + 0x16a);
            pbVar17[1] = (byte)((ushort)uVar2 >> 8);
LAB_00472ebc:
            pbVar17[4] = (byte)uVar10;
            pbVar17[3] = (byte)((ushort)uVar10 >> 8);
          }
          else if (uVar15 != 0xffff) {
            iVar18 = 0xffff - uVar11;
            uVar12 = (uint)*(ushort *)(param_3 + 0x166) * iVar18 +
                     CONCAT11(pbVar17[-1],*pbVar17) * uVar11 + 0x8000;
            iVar13 = (uVar12 >> 0x10) + uVar12;
            *pbVar17 = (byte)((uint)iVar13 >> 0x10);
            pbVar17[-1] = (byte)((uint)iVar13 >> 0x18);
            uVar12 = (uint)*(ushort *)(param_3 + 0x168) * iVar18 +
                     CONCAT11(pbVar17[1],pbVar17[2]) * uVar11 + 0x8000;
            iVar13 = (uVar12 >> 0x10) + uVar12;
            pbVar17[2] = (byte)((uint)iVar13 >> 0x10);
            pbVar17[1] = (byte)((uint)iVar13 >> 0x18);
            uVar11 = (uint)*(ushort *)(param_3 + 0x16a) * iVar18 +
                     CONCAT11(pbVar17[3],pbVar17[4]) * uVar11 + 0x8000;
            uVar10 = (undefined2)((uVar11 >> 0x10) + uVar11 >> 0x10);
            goto LAB_00472ebc;
          }
          pbVar17 = pbVar17 + 8;
          iVar16 = iVar16 + -1;
        } while (iVar16 != 0);
      }
    }
    else if (iVar16 != 0) {
      pbVar17 = param_2 + 1;
      do {
        uVar15 = (ushort)pbVar17[5] * 0x100 + (ushort)pbVar17[6];
        uVar12 = (uint)uVar15;
        if (uVar15 == 0xffff) {
          uVar10 = *(undefined2 *)
                    (*(int *)(iVar18 + (uint)(*pbVar17 >> (local_20 & 0x1f)) * 4) +
                    (uint)pbVar17[-1] * 2);
          *pbVar17 = (byte)uVar10;
          pbVar17[-1] = (byte)((ushort)uVar10 >> 8);
          uVar10 = *(undefined2 *)
                    (*(int *)(iVar18 + (uint)(pbVar17[2] >> (local_20 & 0x1f)) * 4) +
                    (uint)pbVar17[1] * 2);
          pbVar17[2] = (byte)uVar10;
          pbVar17[1] = (byte)((ushort)uVar10 >> 8);
          uVar15 = *(ushort *)
                    (*(int *)(iVar18 + (uint)(pbVar17[4] >> (local_20 & 0x1f)) * 4) +
                    (uint)pbVar17[3] * 2);
          uVar12 = (uint)uVar15;
          bVar9 = (byte)(uVar15 >> 8);
LAB_00472d88:
          bVar7 = (byte)uVar12;
        }
        else {
          if (uVar15 != 0) {
            iVar20 = 0xffff - uVar12;
            uVar8 = (uint)*(ushort *)(param_3 + 0x170) * iVar20 +
                    *(ushort *)
                     (*(int *)(iVar5 + (uint)(*pbVar17 >> (local_20 & 0x1f)) * 4) +
                     (uint)pbVar17[-1] * 2) * uVar12 + 0x8000;
            uVar8 = (uVar8 >> 0x10) + uVar8;
            uVar10 = (undefined2)(uVar8 >> 0x10);
            if (uVar11 == 0) {
              uVar10 = *(undefined2 *)
                        (*(int *)(iVar13 + ((uVar8 >> 0x10 & 0xff) >> (local_20 & 0x1f)) * 4) +
                        (uVar8 >> 0x18) * 2);
            }
            *pbVar17 = (byte)uVar10;
            pbVar17[-1] = (byte)((ushort)uVar10 >> 8);
            uVar8 = (uint)*(ushort *)(param_3 + 0x172) * iVar20 +
                    *(ushort *)
                     (*(int *)(iVar5 + (uint)(pbVar17[2] >> (local_20 & 0x1f)) * 4) +
                     (uint)pbVar17[1] * 2) * uVar12 + 0x8000;
            uVar8 = (uVar8 >> 0x10) + uVar8;
            uVar10 = (undefined2)(uVar8 >> 0x10);
            if (uVar11 == 0) {
              uVar10 = *(undefined2 *)
                        (*(int *)(iVar13 + ((uVar8 >> 0x10 & 0xff) >> (local_20 & 0x1f)) * 4) +
                        (uVar8 >> 0x18) * 2);
            }
            pbVar17[2] = (byte)uVar10;
            pbVar17[1] = (byte)((ushort)uVar10 >> 8);
            uVar8 = (uint)*(ushort *)(param_3 + 0x174) * iVar20 +
                    *(ushort *)
                     (*(int *)(iVar5 + (uint)(pbVar17[4] >> (local_20 & 0x1f)) * 4) +
                     (uint)pbVar17[3] * 2) * uVar12 + 0x8000;
            uVar8 = (uVar8 >> 0x10) + uVar8;
            uVar12 = uVar8 >> 0x10;
            if (uVar11 == 0) {
              uVar12 = (uint)*(ushort *)
                              (*(int *)(iVar13 + ((uVar12 & 0xff) >> (local_20 & 0x1f)) * 4) +
                              (uVar8 >> 0x18) * 2);
            }
            bVar9 = (byte)(uVar12 >> 8);
            goto LAB_00472d88;
          }
          uVar10 = *(undefined2 *)(param_3 + 0x166);
          *pbVar17 = (byte)uVar10;
          uVar2 = *(undefined2 *)(param_3 + 0x168);
          pbVar17[-1] = (byte)((ushort)uVar10 >> 8);
          pbVar17[1] = (byte)((ushort)uVar2 >> 8);
          uVar10 = *(undefined2 *)(param_3 + 0x16a);
          bVar7 = (byte)uVar10;
          pbVar17[2] = (byte)uVar2;
          bVar9 = (byte)((ushort)uVar10 >> 8);
        }
        pbVar17[3] = bVar9;
        pbVar17[4] = bVar7;
        pbVar17 = pbVar17 + 8;
        iVar16 = iVar16 + -1;
        if (iVar16 == 0) {
          return;
        }
      } while( true );
    }
  }
  return;
}


