// Function: FUN_004b6480
// Entry: 004b6480
// Size: 451 bytes
// Thunk: false
// External: false


int __cdecl FUN_004b6480(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  byte *pbVar14;
  int aiStack_400 [256];
  
  iVar12 = 0x7fffffff;
  iVar1 = *(int *)(param_1 + 0x70);
  iVar6 = param_3 + 0x1c;
  iVar8 = param_4 + 0x18;
  iVar11 = 0;
  if (iVar1 < 1) {
    return 0;
  }
  piVar2 = *(int **)(param_1 + 0x74);
  pbVar14 = (byte *)piVar2[1];
  iVar9 = *piVar2 - (int)pbVar14;
  iVar3 = piVar2[2] - (int)pbVar14;
  do {
    iVar5 = param_2 + 0x18;
    uVar4 = (uint)pbVar14[iVar9];
    if ((int)uVar4 < param_2) {
      iVar10 = (uVar4 - param_2) * 2;
      iVar10 = iVar10 * iVar10;
      iVar5 = uVar4 - iVar5;
    }
    else {
      if (iVar5 < (int)uVar4) {
        iVar10 = (uVar4 - iVar5) * 2;
        iVar10 = iVar10 * iVar10;
      }
      else {
        iVar10 = 0;
        if ((int)uVar4 <= param_2 * 2 + 0x18 >> 1) {
          iVar5 = uVar4 - iVar5;
          goto LAB_004b6524;
        }
      }
      iVar5 = uVar4 - param_2;
    }
LAB_004b6524:
    uVar4 = (uint)*pbVar14;
    if ((int)uVar4 < param_3) {
      iVar13 = (uVar4 - iVar6) * 3;
      iVar7 = (uVar4 - param_3) * 3;
      iVar10 = iVar10 + iVar7 * iVar7;
      iVar13 = iVar13 * iVar13;
    }
    else {
      if (iVar6 < (int)uVar4) {
        iVar13 = (uVar4 - iVar6) * 3;
        iVar10 = iVar10 + iVar13 * iVar13;
        iVar13 = uVar4 - param_3;
      }
      else if (param_3 + iVar6 >> 1 < (int)uVar4) {
        iVar13 = uVar4 - param_3;
      }
      else {
        iVar13 = uVar4 - iVar6;
      }
      iVar13 = iVar13 * 3 * iVar13 * 3;
    }
    uVar4 = (uint)pbVar14[iVar3];
    if ((int)uVar4 < param_4) {
      iVar10 = iVar10 + (uVar4 - param_4) * (uVar4 - param_4);
      iVar7 = (uVar4 - iVar8) * (uVar4 - iVar8);
    }
    else {
      if (iVar8 < (int)uVar4) {
        iVar10 = iVar10 + (uVar4 - iVar8) * (uVar4 - iVar8);
LAB_004b65d0:
        iVar7 = param_4;
      }
      else {
        iVar7 = iVar8;
        if (iVar8 + param_4 >> 1 < (int)uVar4) goto LAB_004b65d0;
      }
      iVar7 = (uVar4 - iVar7) * (uVar4 - iVar7);
    }
    iVar7 = iVar13 + iVar5 * 2 * iVar5 * 2 + iVar7;
    aiStack_400[iVar11] = iVar10;
    if (iVar7 < iVar12) {
      iVar12 = iVar7;
    }
    iVar11 = iVar11 + 1;
    pbVar14 = pbVar14 + 1;
    if (iVar1 <= iVar11) {
      iVar6 = 0;
      iVar8 = 0;
      do {
        if (aiStack_400[iVar8] <= iVar12) {
          *(char *)(iVar6 + param_5) = (char)iVar8;
          iVar6 = iVar6 + 1;
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < iVar1);
      return iVar6;
    }
  } while( true );
}


