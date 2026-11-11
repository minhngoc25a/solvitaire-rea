// Function: FUN_00506280
// Entry: 00506280
// Size: 500 bytes
// Thunk: false
// External: false


void __cdecl FUN_00506280(uint param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  int *local_10;
  uint local_c;
  
  uVar2 = param_1;
  param_1 = 0;
  puVar9 = (undefined4 *)(uVar2 + 0x105a4);
  puVar7 = (undefined4 *)(uVar2 + 0x101a0);
  do {
    uVar6 = 0;
    uVar4 = 0;
    if (*(int *)(uVar2 + 0x10da0) != 0) {
      do {
        iVar10 = 0;
        uVar4 = uVar6 + 0x40;
        do {
          uVar3 = uVar4 >> 1;
          iVar10 = iVar10 + (uint)(byte)(&DAT_00522710)
                                        [(uint)(*(ushort *)(uVar2 + 0x6e0c + (uVar3 + param_1) * 2)
                                               >> 4) ^ -(uVar4 & 1) >> 4 & 0x7f];
          uVar4 = uVar3;
        } while (uVar3 != 1);
        puVar7[uVar6] = iVar10;
        uVar6 = uVar6 + 1;
        uVar4 = *(uint *)(uVar2 + 0x10da0);
      } while (uVar6 < uVar4);
    }
    uVar6 = 0xe;
    if (0xe < uVar4) {
      do {
        puVar7[uVar6] = puVar7[uVar6] + (uVar6 >> 1) * 0x10 + -0x50;
        uVar6 = uVar6 + 1;
      } while (uVar6 < *(uint *)(uVar2 + 0x10da0));
    }
    param_1 = param_1 + 0x40;
    puVar9[-1] = *puVar7;
    *puVar9 = puVar7[1];
    puVar9[1] = puVar7[2];
    puVar1 = puVar7 + 3;
    puVar7 = puVar7 + 0x40;
    puVar9[2] = *puVar1;
    puVar9 = puVar9 + 0x80;
  } while (param_1 < 0x100);
  local_10 = (int *)(uVar2 + 0x107b0);
  local_c = 4;
  do {
    uVar4 = local_c;
    if (4 < local_c) {
      iVar10 = 0x1f;
      if (local_c != 0) {
        for (; local_c >> iVar10 == 0; iVar10 = iVar10 + -1) {
        }
      }
      uVar4 = (local_c >> ((char)iVar10 - 1U & 0x1f) & 1) + iVar10 * 2;
    }
    iVar10 = (uVar4 >> 1) - 1;
    iVar5 = (uVar4 & 1 | 2) << ((byte)iVar10 & 0x1f);
    uVar6 = local_c - iVar5;
    iVar8 = 0;
    param_1 = 1;
    do {
      uVar3 = uVar6 & 1;
      uVar6 = uVar6 >> 1;
      iVar8 = iVar8 + (uint)(byte)(&DAT_00522710)
                                  [(uint)(*(ushort *)
                                           (uVar2 + 0x700a + ((param_1 - uVar4) + iVar5) * 2) >> 4)
                                   ^ -uVar3 >> 4 & 0x7f];
      param_1 = uVar3 + param_1 * 2;
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
    local_c = local_c + 1;
    local_10[-0x80] = *(int *)(uVar2 + 0x101a0 + uVar4 * 4) + iVar8;
    *local_10 = *(int *)(uVar2 + 0x102a0 + uVar4 * 4) + iVar8;
    local_10[0x80] = *(int *)(uVar2 + 0x103a0 + uVar4 * 4) + iVar8;
    local_10[0x100] = *(int *)(uVar2 + 0x104a0 + uVar4 * 4) + iVar8;
    local_10 = local_10 + 1;
  } while (local_c < 0x80);
  *(undefined4 *)(uVar2 + 0x10da4) = 0;
  return;
}


