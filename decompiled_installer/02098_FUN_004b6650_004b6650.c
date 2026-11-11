// Function: FUN_004b6650
// Entry: 004b6650
// Size: 599 bytes
// Thunk: false
// External: false


void __cdecl FUN_004b6650(int param_1,int param_2,int param_3,int param_4)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  short *psVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int *piVar18;
  int iVar19;
  int iVar20;
  byte *pbVar21;
  int local_3c0;
  int local_3bc;
  int local_3b4;
  int local_3b0;
  int local_3a8;
  byte local_380 [128];
  byte local_300 [256];
  int local_200 [128];
  
  iVar20 = *(int *)(*(int *)(param_1 + 0x1c0) + 0x18);
  iVar6 = (param_4 >> 2) * 0x20 + 4;
  iVar9 = (param_3 >> 3) * 0x20 + 2;
  iVar15 = (param_2 >> 2) * 0x20 + 4;
  iVar7 = FUN_004b6480(param_1,iVar15,iVar9,iVar6,(int)local_300);
  piVar18 = local_200;
  for (iVar10 = 0x80; iVar10 != 0; iVar10 = iVar10 + -1) {
    *piVar18 = 0x7fffffff;
    piVar18 = piVar18 + 1;
  }
  local_3a8 = 0;
  if (0 < iVar7) {
    piVar18 = *(int **)(param_1 + 0x74);
    iVar10 = *piVar18;
    iVar3 = piVar18[1];
    iVar4 = piVar18[2];
    do {
      bVar2 = local_300[local_3a8];
      uVar12 = (uint)bVar2;
      local_3b0 = 3;
      pbVar21 = local_380;
      iVar17 = (iVar15 - (uint)*(byte *)(uVar12 + iVar10)) * 2;
      iVar5 = (iVar9 - (uint)*(byte *)(iVar3 + uVar12)) * 3;
      iVar13 = iVar6 - (uint)*(byte *)(iVar4 + uVar12);
      iVar16 = iVar13 * iVar13 + iVar5 * iVar5 + iVar17 * iVar17;
      piVar18 = local_200;
      local_3b4 = (iVar17 + 8) * 0x20;
      do {
        local_3bc = 7;
        iVar17 = iVar16;
        local_3c0 = (iVar5 + 6) * 0x18;
        do {
          iVar19 = 3;
          iVar8 = iVar17;
          iVar14 = (iVar13 + 4) * 0x10;
          do {
            if (iVar8 < *piVar18) {
              *piVar18 = iVar8;
              *pbVar21 = bVar2;
            }
            iVar8 = iVar8 + iVar14;
            piVar18 = piVar18 + 1;
            iVar14 = iVar14 + 0x80;
            pbVar21 = pbVar21 + 1;
            iVar19 = iVar19 + -1;
          } while (-1 < iVar19);
          iVar17 = iVar17 + local_3c0;
          local_3c0 = local_3c0 + 0x120;
          local_3bc = local_3bc + -1;
        } while (-1 < local_3bc);
        iVar16 = iVar16 + local_3b4;
        local_3b4 = local_3b4 + 0x200;
        local_3b0 = local_3b0 + -1;
      } while (-1 < local_3b0);
      local_3a8 = local_3a8 + 1;
    } while (local_3a8 < iVar7);
  }
  pbVar21 = local_380;
  iVar6 = 4;
  piVar18 = (int *)((param_2 >> 2) * 0x10 + iVar20);
  do {
    iVar7 = 8;
    iVar20 = ((param_3 >> 3) * 0x40 + (param_4 >> 2)) * 8;
    do {
      psVar11 = (short *)(*piVar18 + iVar20);
      iVar20 = iVar20 + 0x40;
      *psVar11 = *pbVar21 + 1;
      psVar11[1] = pbVar21[1] + 1;
      psVar11[2] = pbVar21[2] + 1;
      pbVar1 = pbVar21 + 3;
      pbVar21 = pbVar21 + 4;
      psVar11[3] = *pbVar1 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
    piVar18 = piVar18 + 1;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  return;
}


