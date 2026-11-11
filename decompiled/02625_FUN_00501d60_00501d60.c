// Function: FUN_00501d60
// Entry: 00501d60
// Size: 681 bytes
// Thunk: false
// External: false


void __cdecl
FUN_00501d60(int param_1,int param_2,int param_3,uint param_4,int param_5,int param_6,int param_7,
            int *param_8)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  
  iVar3 = (param_6 - param_5) + 1;
  if (1 < iVar3) {
    iVar6 = 0;
    iVar4 = DAT_00541ff0;
    while (iVar4 < iVar3) {
      iVar6 = iVar6 + 1;
      iVar4 = (&DAT_00541ff0)[iVar6];
    }
joined_r0x00501d95:
    iVar6 = iVar6 + -1;
    if (-1 < iVar6) {
      iVar3 = (&DAT_00541ff0)[iVar6];
      iVar4 = iVar3 + param_5;
      if (iVar4 <= param_6) {
        piVar5 = (int *)(param_1 + param_5 * 4);
        iVar8 = iVar4;
        do {
          iVar1 = *(int *)(param_1 + iVar8 * 4);
          bVar2 = FUN_00501b90(*piVar5 + param_7,iVar1 + param_7,param_2,param_3,param_4,param_8);
          iVar9 = iVar8;
          if (bVar2) {
            piVar10 = piVar5;
            do {
              *(int *)(param_1 + iVar9 * 4) = *piVar10;
              iVar9 = iVar9 - iVar3;
              piVar10 = piVar10 + -iVar3;
              if (iVar9 <= iVar4 + -1) break;
              bVar2 = FUN_00501b90(*piVar10 + param_7,iVar1 + param_7,param_2,param_3,param_4,
                                   param_8);
            } while (bVar2);
          }
          iVar7 = iVar8 + 1;
          *(int *)(param_1 + iVar9 * 4) = iVar1;
          piVar10 = piVar5 + 1;
          if (param_6 < iVar7) break;
          iVar1 = *(int *)(param_1 + iVar7 * 4);
          bVar2 = FUN_00501b90(*piVar10 + param_7,iVar1 + param_7,param_2,param_3,param_4,param_8);
          if (bVar2) {
            do {
              *(int *)(param_1 + iVar7 * 4) = *piVar10;
              iVar7 = iVar7 - iVar3;
              piVar10 = piVar10 + -iVar3;
              if (iVar7 <= iVar4 + -1) break;
              bVar2 = FUN_00501b90(*piVar10 + param_7,iVar1 + param_7,param_2,param_3,param_4,
                                   param_8);
            } while (bVar2);
          }
          iVar9 = iVar8 + 2;
          *(int *)(param_1 + iVar7 * 4) = iVar1;
          piVar10 = piVar5 + 2;
          if (param_6 < iVar9) break;
          iVar1 = *(int *)(param_1 + iVar9 * 4);
          bVar2 = FUN_00501b90(*piVar10 + param_7,iVar1 + param_7,param_2,param_3,param_4,param_8);
          if (bVar2) {
            do {
              *(int *)(param_1 + iVar9 * 4) = *piVar10;
              iVar9 = iVar9 - iVar3;
              piVar10 = piVar10 + -iVar3;
              if (iVar9 <= iVar4 + -1) break;
              bVar2 = FUN_00501b90(*piVar10 + param_7,iVar1 + param_7,param_2,param_3,param_4,
                                   param_8);
            } while (bVar2);
          }
          iVar8 = iVar8 + 3;
          *(int *)(param_1 + iVar9 * 4) = iVar1;
          piVar5 = piVar5 + 3;
          if (*param_8 < 0) {
            return;
          }
        } while (iVar8 <= param_6);
      }
      goto joined_r0x00501d95;
    }
  }
  return;
}


