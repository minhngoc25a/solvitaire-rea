// Function: FUN_004b5ca0
// Entry: 004b5ca0
// Size: 1054 bytes
// Thunk: false
// External: false


void __cdecl FUN_004b5ca0(int param_1,int *param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  short *psVar4;
  short *psVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int local_1c;
  int local_18;
  int local_14;
  int local_8;
  
  iVar2 = *(int *)(*(int *)(param_1 + 0x1c0) + 0x18);
  iVar8 = *param_2;
  local_18 = param_2[1];
  iVar7 = param_2[2];
  local_8 = param_2[3];
  iVar6 = param_2[4];
  iVar9 = param_2[5];
  local_14 = iVar8;
  if (iVar8 < local_18) {
    do {
      iVar3 = local_18;
      if (iVar7 <= local_8) {
        psVar5 = (short *)(*(int *)(iVar2 + local_14 * 4) + (iVar7 * 0x20 + iVar6) * 2);
        iVar11 = iVar6;
        iVar10 = iVar7;
        psVar4 = psVar5;
        do {
          for (; iVar11 <= iVar9; iVar11 = iVar11 + 1) {
            sVar1 = *psVar5;
            psVar5 = psVar5 + 1;
            if (sVar1 != 0) {
              *param_2 = local_14;
              iVar8 = local_14;
              if (local_18 <= local_14) goto LAB_004b5dfe;
              goto LAB_004b5d80;
            }
          }
          iVar10 = iVar10 + 1;
          psVar5 = psVar4 + 0x20;
          iVar11 = iVar6;
          psVar4 = psVar5;
        } while (iVar10 <= local_8);
      }
      local_14 = local_14 + 1;
    } while (local_14 <= local_18);
LAB_004b5d80:
    do {
      local_14 = iVar8;
      if (iVar7 <= local_8) {
        psVar5 = (short *)(*(int *)(iVar2 + iVar3 * 4) + (iVar7 * 0x20 + iVar6) * 2);
        iVar8 = iVar6;
        iVar11 = iVar7;
        psVar4 = psVar5;
        do {
          for (; iVar8 <= iVar9; iVar8 = iVar8 + 1) {
            sVar1 = *psVar5;
            psVar5 = psVar5 + 1;
            if (sVar1 != 0) {
              param_2[1] = iVar3;
              local_18 = iVar3;
              goto LAB_004b5dfe;
            }
          }
          iVar11 = iVar11 + 1;
          psVar5 = psVar4 + 0x20;
          iVar8 = iVar6;
          psVar4 = psVar5;
        } while (iVar11 <= local_8);
      }
      iVar3 = iVar3 + -1;
      iVar8 = local_14;
    } while (local_14 <= iVar3);
  }
LAB_004b5dfe:
  local_1c = iVar7;
  if (iVar7 < local_8) {
    iVar8 = (iVar7 * 0x20 + iVar6) * 2;
    iVar3 = local_14;
    iVar11 = iVar7;
    do {
      for (; local_1c = iVar11, iVar3 <= local_18; iVar3 = iVar3 + 1) {
        psVar5 = (short *)(*(int *)(iVar2 + iVar3 * 4) + iVar8);
        for (iVar11 = iVar6; iVar11 <= iVar9; iVar11 = iVar11 + 1) {
          sVar1 = *psVar5;
          psVar5 = psVar5 + 1;
          if (sVar1 != 0) {
            param_2[2] = local_1c;
            if (local_8 <= local_1c) goto LAB_004b5f1a;
            goto LAB_004b5e96;
          }
        }
        iVar11 = local_1c;
      }
      iVar11 = local_1c + 1;
      iVar8 = iVar8 + 0x40;
      local_1c = iVar7;
      iVar3 = local_14;
    } while (iVar11 <= local_8);
LAB_004b5e96:
    iVar8 = (local_8 * 0x20 + iVar6) * 2;
    iVar7 = local_14;
    iVar3 = local_8;
    do {
      for (; iVar7 <= local_18; iVar7 = iVar7 + 1) {
        psVar5 = (short *)(*(int *)(iVar2 + iVar7 * 4) + iVar8);
        for (iVar11 = iVar6; iVar11 <= iVar9; iVar11 = iVar11 + 1) {
          sVar1 = *psVar5;
          psVar5 = psVar5 + 1;
          if (sVar1 != 0) {
            param_2[3] = iVar3;
            local_8 = iVar3;
            goto LAB_004b5f1a;
          }
        }
      }
      iVar3 = iVar3 + -1;
      iVar8 = iVar8 + -0x40;
      iVar7 = local_14;
    } while (local_1c <= iVar3);
  }
LAB_004b5f1a:
  param_1 = iVar6;
  if (iVar6 < iVar9) {
    do {
      iVar8 = iVar9;
      if (local_14 <= local_18) {
        iVar7 = local_14;
        do {
          psVar5 = (short *)(*(int *)(iVar2 + iVar7 * 4) + (local_1c * 0x20 + param_1) * 2);
          for (iVar3 = local_1c; iVar3 <= local_8; iVar3 = iVar3 + 1) {
            if (*psVar5 != 0) {
              param_2[4] = param_1;
              iVar6 = param_1;
              if (iVar9 <= param_1) goto LAB_004b5ffb;
              goto LAB_004b5fa0;
            }
            psVar5 = psVar5 + 0x20;
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 <= local_18);
      }
      param_1 = param_1 + 1;
    } while (param_1 <= iVar9);
LAB_004b5fa0:
    do {
      param_1 = iVar6;
      if (local_14 <= local_18) {
        iVar7 = local_14;
        do {
          psVar5 = (short *)(*(int *)(iVar2 + iVar7 * 4) + (local_1c * 0x20 + iVar8) * 2);
          for (iVar6 = local_1c; iVar6 <= local_8; iVar6 = iVar6 + 1) {
            if (*psVar5 != 0) {
              param_2[5] = iVar8;
              iVar9 = iVar8;
              goto LAB_004b5ffb;
            }
            psVar5 = psVar5 + 0x20;
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 <= local_18);
      }
      iVar8 = iVar8 + -1;
      iVar6 = param_1;
    } while (param_1 <= iVar8);
  }
LAB_004b5ffb:
  iVar8 = (iVar9 - param_1) * 8;
  iVar6 = (local_18 - local_14) * 0x10;
  iVar7 = (local_8 - local_1c) * 0xc;
  iVar3 = 0;
  param_2[6] = iVar8 * iVar8 + iVar7 * iVar7 + iVar6 * iVar6;
  if (local_18 < local_14) {
    param_2[7] = 0;
    return;
  }
  do {
    if (local_1c <= local_8) {
      iVar8 = (local_8 - local_1c) + 1;
      psVar5 = (short *)(*(int *)(iVar2 + local_14 * 4) + (local_1c * 0x20 + param_1) * 2);
      do {
        if (param_1 <= iVar9) {
          iVar7 = (iVar9 - param_1) + 1;
          psVar4 = psVar5;
          do {
            if (*psVar4 != 0) {
              iVar3 = iVar3 + 1;
            }
            psVar4 = psVar4 + 1;
            iVar7 = iVar7 + -1;
          } while (iVar7 != 0);
        }
        psVar5 = psVar5 + 0x20;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
    local_14 = local_14 + 1;
  } while (local_14 <= local_18);
  param_2[7] = iVar3;
  return;
}


