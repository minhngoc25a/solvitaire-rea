// Function: FUN_004d1100
// Entry: 004d1100
// Size: 543 bytes
// Thunk: false
// External: false


void __cdecl FUN_004d1100(int param_1,int *param_2)

{
  short *psVar1;
  ushort uVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ushort *puVar8;
  uint uVar9;
  int *piVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  int local_18;
  
  iVar4 = *param_2;
  iVar5 = param_2[1];
  piVar10 = (int *)param_2[2];
  iVar14 = *piVar10;
  uVar15 = piVar10[4];
  iVar13 = piVar10[1];
  iVar6 = piVar10[2];
  *(undefined4 *)(param_1 + 0xb3c) = 0;
  *(undefined4 *)(param_1 + 0xb40) = 0;
  *(undefined4 *)(param_1 + 0xb44) = 0;
  *(undefined4 *)(param_1 + 0xb48) = 0;
  *(undefined4 *)(param_1 + 0xb4c) = 0;
  *(undefined4 *)(param_1 + 0xb50) = 0;
  *(undefined4 *)(param_1 + 0xb54) = 0;
  *(undefined4 *)(param_1 + 0xb58) = 0;
  *(undefined2 *)(iVar4 + 2 + *(int *)(param_1 + 0xb5c + *(int *)(param_1 + 0x1454) * 4) * 4) = 0;
  local_18 = *(int *)(param_1 + 0x1454) + 1;
  if (local_18 < 0x23d) {
    piVar10 = (int *)(param_1 + 0xb5c + local_18 * 4);
    local_18 = 0x23d - local_18;
    iVar12 = 0;
    do {
      iVar7 = *piVar10;
      puVar8 = (ushort *)(iVar7 * 4 + iVar4);
      uVar11 = *(ushort *)(iVar4 + 2 + (uint)puVar8[1] * 4) + 1;
      iVar16 = iVar12 + 1;
      uVar9 = uVar15;
      if ((int)uVar11 <= (int)uVar15) {
        iVar16 = iVar12;
        uVar9 = uVar11;
      }
      puVar8[1] = (ushort)uVar9;
      if (iVar7 <= iVar5) {
        psVar1 = (short *)(param_1 + 0xb3c + uVar9 * 2);
        *psVar1 = *psVar1 + 1;
        iVar12 = 0;
        if (iVar6 <= iVar7) {
          iVar12 = *(int *)(iVar13 + (iVar7 - iVar6) * 4);
        }
        uVar2 = *puVar8;
        *(int *)(param_1 + 0x16a8) = *(int *)(param_1 + 0x16a8) + (uVar9 + iVar12) * (uint)uVar2;
        if (iVar14 != 0) {
          *(int *)(param_1 + 0x16ac) =
               *(int *)(param_1 + 0x16ac) +
               ((uint)*(ushort *)(iVar7 * 4 + 2 + iVar14) + iVar12) * (uint)uVar2;
        }
      }
      piVar10 = piVar10 + 1;
      local_18 = local_18 + -1;
      iVar12 = iVar16;
    } while (local_18 != 0);
    if (iVar16 != 0) {
      iVar14 = uVar15 - 1;
      puVar8 = (ushort *)(param_1 + (uVar15 + 0x59e) * 2);
      do {
        psVar1 = (short *)(param_1 + 0xb3c + iVar14 * 2);
        sVar3 = *(short *)(param_1 + 0xb3c + iVar14 * 2);
        iVar13 = iVar14;
        while (sVar3 == 0) {
          psVar1 = psVar1 + -1;
          iVar13 = iVar13 + -1;
          sVar3 = *psVar1;
        }
        psVar1 = (short *)(param_1 + 0xb3c + iVar13 * 2);
        *psVar1 = *psVar1 + -1;
        iVar16 = iVar16 + -2;
        psVar1 = (short *)(param_1 + 0xb3e + iVar13 * 2);
        *psVar1 = *psVar1 + 2;
        *puVar8 = *puVar8 - 1;
      } while (0 < iVar16);
      iVar14 = 0x23d;
      for (; uVar15 != 0; uVar15 = uVar15 - 1) {
        uVar9 = (uint)*puVar8;
        if (uVar9 != 0) {
          iVar13 = param_1 + 0xb5c + iVar14 * 4;
          do {
            iVar6 = *(int *)(iVar13 + -4);
            iVar13 = iVar13 + -4;
            iVar14 = iVar14 + -1;
            if (iVar6 <= iVar5) {
              uVar11 = (uint)*(ushort *)(iVar4 + 2 + iVar6 * 4);
              if (uVar11 != uVar15) {
                *(int *)(param_1 + 0x16a8) =
                     *(int *)(param_1 + 0x16a8) +
                     (uVar15 - uVar11) * (uint)*(ushort *)(iVar4 + iVar6 * 4);
                *(short *)(iVar4 + 2 + iVar6 * 4) = (short)uVar15;
              }
              uVar9 = uVar9 - 1;
            }
          } while (uVar9 != 0);
        }
        puVar8 = puVar8 + -1;
      }
    }
  }
  return;
}


