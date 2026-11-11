// Function: FUN_004b6250
// Entry: 004b6250
// Size: 554 bytes
// Thunk: false
// External: false


void __cdecl FUN_004b6250(int *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  ushort *puVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  ushort *puVar15;
  int iStack_30;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  
  piVar2 = (int *)(**(code **)param_1[1])(param_1,1,param_2 << 5);
  piVar8 = piVar2 + 2;
  *piVar8 = 0;
  *piVar2 = 0;
  piVar2[1] = 0x1f;
  piVar2[3] = 0x3f;
  piVar2[4] = 0;
  piVar2[5] = 0x1f;
  FUN_004b5ca0((int)param_1,piVar2);
  iVar3 = FUN_004b60e0((int)param_1,piVar2,1,param_2);
  iStack_30 = 0;
  if (0 < iVar3) {
    do {
      iVar14 = *piVar8;
      iVar1 = piVar8[2];
      iVar12 = 0;
      iVar6 = piVar8[-2];
      iStack_24 = 0;
      iStack_20 = 0;
      iStack_1c = 0;
      iVar11 = 0;
      iVar7 = 0;
      iVar9 = 0;
      if (iVar6 <= piVar8[-1]) {
        iVar10 = iVar6 * 8 + 4;
        do {
          if (iVar14 <= piVar8[1]) {
            iVar11 = iVar14 * 4 + 2;
            puVar4 = (ushort *)
                     (*(int *)(*(int *)(param_1[0x70] + 0x18) + iVar6 * 4) +
                     (iVar14 * 0x20 + iVar1) * 2);
            iVar7 = (piVar8[1] - iVar14) + 1;
            do {
              if (iVar1 <= piVar8[3]) {
                iVar9 = iVar1 * 8 + 4;
                iVar13 = (piVar8[3] - piVar8[2]) + 1;
                puVar15 = puVar4;
                do {
                  uVar5 = (uint)*puVar15;
                  puVar15 = puVar15 + 1;
                  if (uVar5 != 0) {
                    iVar12 = iVar12 + uVar5;
                    iStack_24 = iStack_24 + iVar10 * uVar5;
                    iStack_20 = iStack_20 + iVar11 * uVar5;
                    iStack_1c = iStack_1c + iVar9 * uVar5;
                  }
                  iVar9 = iVar9 + 8;
                  iVar13 = iVar13 + -1;
                } while (iVar13 != 0);
              }
              puVar4 = puVar4 + 0x20;
              iVar11 = iVar11 + 4;
              iVar7 = iVar7 + -1;
            } while (iVar7 != 0);
          }
          iVar6 = iVar6 + 1;
          iVar10 = iVar10 + 8;
          iVar11 = iStack_24;
          iVar7 = iStack_20;
          iVar9 = iStack_1c;
        } while (iVar6 <= piVar8[-1]);
      }
      iVar14 = iVar12 >> 1;
      *(char *)(iStack_30 + *(int *)param_1[0x1d]) = (char)((iVar11 + iVar14) / iVar12);
      *(char *)(iStack_30 + *(int *)(param_1[0x1d] + 4)) = (char)((iVar14 + iVar7) / iVar12);
      piVar8 = piVar8 + 8;
      *(char *)(iStack_30 + *(int *)(param_1[0x1d] + 8)) = (char)((iVar14 + iVar9) / iVar12);
      iStack_30 = iStack_30 + 1;
    } while (iStack_30 < iVar3);
  }
  param_1[0x1c] = iVar3;
  *(undefined4 *)(*param_1 + 0x14) = 0x62;
  *(int *)(*param_1 + 0x18) = iVar3;
  (**(code **)(*param_1 + 4))(param_1,1);
  return;
}


