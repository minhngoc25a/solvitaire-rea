// Function: FUN_004d16a0
// Entry: 004d16a0
// Size: 1333 bytes
// Thunk: false
// External: false


void __cdecl FUN_004d16a0(int param_1,int param_2,int param_3)

{
  ushort *puVar1;
  char cVar2;
  undefined2 uVar3;
  int iVar4;
  ushort uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  uint uVar10;
  ushort uVar11;
  int iVar12;
  int iVar13;
  ushort *local_18;
  int local_c;
  
  uVar10 = 0xffffffff;
  uVar7 = (uint)*(ushort *)(param_2 + 2);
  if (-1 < param_3) {
    iVar6 = 0x8a;
    if (uVar7 != 0) {
      iVar6 = 7;
    }
    local_18 = (ushort *)(param_2 + 6);
    iVar4 = (uVar7 != 0) + 3;
    local_c = param_3 + 1;
    iVar12 = 0;
    do {
      iVar13 = iVar12 + 1;
      uVar8 = (uint)*local_18;
      if ((iVar6 <= iVar13) || (uVar7 != uVar8)) {
        if (iVar13 < iVar4) {
          do {
            iVar6 = *(int *)(param_1 + 0x16bc);
            uVar10 = (uint)*(ushort *)(param_1 + 0xa7e + uVar7 * 4);
            uVar11 = *(ushort *)(param_1 + 0xa7c + uVar7 * 4);
            uVar5 = uVar11 << ((byte)iVar6 & 0x1f) | *(ushort *)(param_1 + 0x16b8);
            if ((int)(0x10 - uVar10) < iVar6) {
              *(ushort *)(param_1 + 0x16b8) = uVar5;
              *(char *)(*(int *)(param_1 + 0x14) + *(int *)(param_1 + 8)) = (char)uVar5;
              *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
              *(undefined1 *)(*(int *)(param_1 + 0x14) + *(int *)(param_1 + 8)) =
                   *(undefined1 *)(param_1 + 0x16b9);
              iVar6 = *(int *)(param_1 + 0x16bc) + -0x10;
              *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
              uVar5 = uVar11 >> (0x10U - *(char *)(param_1 + 0x16bc) & 0x1f);
            }
            *(ushort *)(param_1 + 0x16b8) = uVar5;
            *(uint *)(param_1 + 0x16bc) = iVar6 + uVar10;
            iVar13 = iVar13 + -1;
          } while (iVar13 != 0);
        }
        else {
          puVar1 = (ushort *)(param_1 + 0x16b8);
          if (uVar7 == 0) {
            iVar6 = *(int *)(param_1 + 0x16bc);
            piVar9 = (int *)(param_1 + 0x16bc);
            if (iVar13 < 0xb) {
              uVar10 = (uint)*(ushort *)(param_1 + 0xac2);
              uVar11 = *(ushort *)(param_1 + 0xac0);
              uVar5 = uVar11 << ((byte)iVar6 & 0x1f) | *puVar1;
              if ((int)(0x10 - uVar10) < iVar6) {
                *puVar1 = uVar5;
                *(char *)(*(int *)(param_1 + 0x14) + *(int *)(param_1 + 8)) = (char)uVar5;
                *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
                *(undefined1 *)(*(int *)(param_1 + 0x14) + *(int *)(param_1 + 8)) =
                     *(undefined1 *)(param_1 + 0x16b9);
                *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
                iVar6 = (uVar10 - 0x10) + *piVar9;
                uVar5 = uVar11 >> (0x10U - *(char *)piVar9 & 0x1f);
              }
              else {
                iVar6 = iVar6 + uVar10;
              }
              *puVar1 = uVar5;
              uVar11 = (short)iVar12 - 2;
              *piVar9 = iVar6;
              piVar9 = (int *)(param_1 + 0x16bc);
              uVar5 = uVar11 << ((byte)iVar6 & 0x1f) | uVar5;
              if (iVar6 < 0xe) {
                *piVar9 = iVar6 + 3;
                *puVar1 = uVar5;
              }
              else {
                *puVar1 = uVar5;
                *(char *)(*(int *)(param_1 + 0x14) + *(int *)(param_1 + 8)) = (char)uVar5;
                *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
                *(undefined1 *)(*(int *)(param_1 + 0x14) + *(int *)(param_1 + 8)) =
                     *(undefined1 *)(param_1 + 0x16b9);
                uVar3 = *(undefined2 *)piVar9;
                *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
                *piVar9 = *piVar9 + -0xd;
                *puVar1 = uVar11 >> (0x10U - (char)uVar3 & 0x1f);
              }
            }
            else {
              uVar10 = (uint)*(ushort *)(param_1 + 0xac6);
              uVar11 = *(ushort *)(param_1 + 0xac4);
              uVar5 = uVar11 << ((byte)iVar6 & 0x1f) | *puVar1;
              if ((int)(0x10 - uVar10) < iVar6) {
                *puVar1 = uVar5;
                *(char *)(*(int *)(param_1 + 0x14) + *(int *)(param_1 + 8)) = (char)uVar5;
                *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
                *(undefined1 *)(*(int *)(param_1 + 0x14) + *(int *)(param_1 + 8)) =
                     *(undefined1 *)(param_1 + 0x16b9);
                *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
                iVar6 = (uVar10 - 0x10) + *piVar9;
                uVar5 = uVar11 >> (0x10U - *(char *)piVar9 & 0x1f);
              }
              else {
                iVar6 = iVar6 + uVar10;
              }
              *puVar1 = uVar5;
              uVar11 = (short)iVar12 - 10;
              *piVar9 = iVar6;
              piVar9 = (int *)(param_1 + 0x16bc);
              uVar5 = uVar11 << ((byte)iVar6 & 0x1f) | uVar5;
              *puVar1 = uVar5;
              if (iVar6 < 10) {
                *piVar9 = iVar6 + 7;
              }
              else {
                *(char *)(*(int *)(param_1 + 0x14) + *(int *)(param_1 + 8)) = (char)uVar5;
                *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
                *(undefined1 *)(*(int *)(param_1 + 0x14) + *(int *)(param_1 + 8)) =
                     *(undefined1 *)(param_1 + 0x16b9);
                cVar2 = *(char *)piVar9;
                *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
                *piVar9 = *piVar9 + -9;
                *puVar1 = uVar11 >> (0x10U - cVar2 & 0x1f);
              }
            }
          }
          else {
            if (uVar7 != uVar10) {
              uVar10 = (uint)*(ushort *)(param_1 + 0xa7e + uVar7 * 4);
              piVar9 = (int *)(param_1 + 0x16bc);
              iVar6 = *piVar9;
              uVar11 = *(ushort *)(param_1 + 0xa7c + uVar7 * 4);
              uVar5 = uVar11 << ((byte)iVar6 & 0x1f) | *puVar1;
              iVar13 = iVar12;
              if ((int)(0x10 - uVar10) < iVar6) {
                *puVar1 = uVar5;
                *(char *)(*(int *)(param_1 + 0x14) + *(int *)(param_1 + 8)) = (char)uVar5;
                *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
                *(undefined1 *)(*(int *)(param_1 + 0x14) + *(int *)(param_1 + 8)) =
                     *(undefined1 *)(param_1 + 0x16b9);
                *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
                *puVar1 = uVar11 >> (0x10U - *(char *)piVar9 & 0x1f);
                *piVar9 = (uVar10 - 0x10) + *piVar9;
              }
              else {
                *puVar1 = uVar5;
                *piVar9 = uVar10 + iVar6;
              }
            }
            piVar9 = (int *)(param_1 + 0x16bc);
            uVar10 = (uint)*(ushort *)(param_1 + 0xabe);
            iVar6 = *piVar9;
            uVar11 = *(ushort *)(param_1 + 0xabc);
            uVar5 = uVar11 << ((byte)iVar6 & 0x1f) | *puVar1;
            if ((int)(0x10 - uVar10) < iVar6) {
              *puVar1 = uVar5;
              *(char *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0x14)) = (char)uVar5;
              *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
              *(undefined1 *)(*(int *)(param_1 + 0x14) + *(int *)(param_1 + 8)) =
                   *(undefined1 *)(param_1 + 0x16b9);
              *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
              iVar6 = (uVar10 - 0x10) + *piVar9;
              uVar5 = uVar11 >> (0x10U - *(char *)piVar9 & 0x1f);
            }
            else {
              iVar6 = iVar6 + uVar10;
            }
            *piVar9 = iVar6;
            uVar11 = (short)iVar13 - 3;
            uVar5 = uVar11 << ((byte)iVar6 & 0x1f) | uVar5;
            if (iVar6 < 0xf) {
              *piVar9 = iVar6 + 2;
              *puVar1 = uVar5;
            }
            else {
              *puVar1 = uVar5;
              *(char *)(*(int *)(param_1 + 0x14) + *(int *)(param_1 + 8)) = (char)uVar5;
              *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
              *(undefined1 *)(*(int *)(param_1 + 0x14) + *(int *)(param_1 + 8)) =
                   *(undefined1 *)(param_1 + 0x16b9);
              uVar3 = *(undefined2 *)piVar9;
              *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
              *piVar9 = *piVar9 + -0xe;
              *puVar1 = uVar11 >> (0x10U - (char)uVar3 & 0x1f);
            }
          }
        }
        iVar13 = 0;
        uVar10 = uVar7;
        if (uVar8 == 0) {
          iVar6 = 0x8a;
          iVar4 = 3;
        }
        else if (uVar7 == uVar8) {
          iVar6 = 6;
          iVar4 = 3;
        }
        else {
          iVar6 = 7;
          iVar4 = 4;
        }
      }
      local_18 = local_18 + 2;
      local_c = local_c + -1;
      uVar7 = uVar8;
      iVar12 = iVar13;
    } while (local_c != 0);
  }
  return;
}


