// Function: FUN_00503070
// Entry: 00503070
// Size: 558 bytes
// Thunk: false
// External: false


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FUN_00503070(undefined4 *param_1,int *param_2,int param_3,int param_4,uint param_5,int param_6,
            int param_7)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  
  iVar10 = 0;
  for (uVar12 = param_5; (int)uVar12 <= param_6; uVar12 = uVar12 + 1) {
    iVar6 = 0;
    if (0 < param_7) {
      do {
        if (*(byte *)(param_4 + iVar6) == uVar12) {
          *(int *)(param_3 + iVar10 * 4) = iVar6;
          iVar10 = iVar10 + 1;
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < param_7);
    }
  }
  iVar10 = 0;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  param_2[0x14] = 0;
  param_2[0x15] = 0;
  param_2[0x16] = 0;
  if (0 < param_7) {
    do {
      pbVar1 = (byte *)(param_4 + iVar10);
      iVar10 = iVar10 + 1;
      param_2[*pbVar1 + 1] = param_2[*pbVar1 + 1] + 1;
    } while (iVar10 < param_7);
  }
  iVar10 = 0xb;
  piVar8 = param_2;
  do {
    piVar9 = piVar8 + 2;
    piVar8[1] = piVar8[1] + *piVar8;
    *piVar9 = *piVar9 + piVar8[1];
    iVar10 = iVar10 + -1;
    piVar8 = piVar9;
  } while (iVar10 != 0);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  param_1[0x16] = 0;
  if ((int)param_5 <= param_6) {
    iVar6 = (param_6 - param_5) + 1;
    iVar10 = 0;
    piVar8 = param_2 + param_5;
    do {
      iVar11 = iVar10 + (piVar8[1] - *piVar8);
      iVar10 = iVar11 * 2;
      *(int *)((int)piVar8 + ((int)param_1 - (int)param_2)) = iVar11 + -1;
      iVar6 = iVar6 + -1;
      piVar8 = piVar8 + 1;
    } while (iVar6 != 0);
  }
  iVar5 = _UNK_005225ec;
  iVar11 = _UNK_005225e8;
  iVar6 = _UNK_005225e4;
  iVar10 = _DAT_005225e0;
  iVar7 = param_5 + 1;
  uVar12 = (param_6 - iVar7) + 1;
  if (iVar7 <= param_6) {
    if ((uVar12 < 0x10) ||
       ((param_2 + iVar7 <= param_1 + param_6 + -1 && (param_1 + param_5 <= param_2 + param_6))))
    goto LAB_0050326f;
    uVar12 = uVar12 & 0x8000000f;
    if ((int)uVar12 < 0) {
      uVar12 = (uVar12 - 1 | 0xfffffff0) + 1;
    }
    piVar8 = param_2 + param_5 + 9;
    piVar9 = param_1 + param_5 + 4;
    do {
      iVar2 = piVar9[-3];
      iVar3 = piVar9[-2];
      iVar4 = piVar9[-1];
      iVar7 = iVar7 + 0x10;
      piVar8[-8] = (piVar9[-4] * 2 - piVar8[-8]) + iVar10;
      piVar8[-7] = (iVar2 * 2 - piVar8[-7]) + iVar6;
      piVar8[-6] = (iVar3 * 2 - piVar8[-6]) + iVar11;
      piVar8[-5] = (iVar4 * 2 - piVar8[-5]) + iVar5;
      iVar2 = piVar9[1];
      iVar3 = piVar9[2];
      iVar4 = piVar9[3];
      piVar8[-4] = (*piVar9 * 2 - piVar8[-4]) + iVar10;
      piVar8[-3] = (iVar2 * 2 - piVar8[-3]) + iVar6;
      piVar8[-2] = (iVar3 * 2 - piVar8[-2]) + iVar11;
      piVar8[-1] = (iVar4 * 2 - piVar8[-1]) + iVar5;
      iVar2 = piVar9[5];
      iVar3 = piVar9[6];
      iVar4 = piVar9[7];
      *piVar8 = (piVar9[4] * 2 - *piVar8) + iVar10;
      piVar8[1] = (iVar2 * 2 - piVar8[1]) + iVar6;
      piVar8[2] = (iVar3 * 2 - piVar8[2]) + iVar11;
      piVar8[3] = (iVar4 * 2 - piVar8[3]) + iVar5;
      iVar2 = piVar9[9];
      iVar3 = piVar9[10];
      iVar4 = piVar9[0xb];
      piVar8[4] = (piVar9[8] * 2 - piVar8[4]) + iVar10;
      piVar8[5] = (iVar2 * 2 - piVar8[5]) + iVar6;
      piVar8[6] = (iVar3 * 2 - piVar8[6]) + iVar11;
      piVar8[7] = (iVar4 * 2 - piVar8[7]) + iVar5;
      piVar8 = piVar8 + 0x10;
      piVar9 = piVar9 + 0x10;
    } while (iVar7 <= (int)(param_6 - uVar12));
  }
  if (param_6 < iVar7) {
    return;
  }
LAB_0050326f:
  piVar8 = param_1 + iVar7 + -1;
  do {
    iVar10 = *piVar8;
    piVar8 = piVar8 + 1;
    param_2[iVar7] = (iVar10 * 2 + 2) - param_2[iVar7];
    iVar7 = iVar7 + 1;
  } while (iVar7 <= param_6);
  return;
}


