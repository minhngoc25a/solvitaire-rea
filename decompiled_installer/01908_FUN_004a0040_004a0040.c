// Function: FUN_004a0040
// Entry: 004a0040
// Size: 809 bytes
// Thunk: false
// External: false


uint __cdecl FUN_004a0040(undefined4 *param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  uint *puVar6;
  int *piVar7;
  int iVar8;
  uint uVar9;
  undefined4 *puVar10;
  uint uStack_20;
  uint uStack_18;
  uint uStack_14;
  uint uStack_c;
  uint local_8;
  int *piStack_4;
  
  puVar2 = param_1;
  if (param_1[0xd] == 0) {
    uVar3 = FUN_0049ecb0(param_1,(int *)&param_1);
    puVar10 = param_1;
  }
  else {
    uVar3 = param_1[8];
    puVar10 = (undefined4 *)param_1[9];
  }
  local_8 = puVar2[10];
  puVar2[0x24] = 0xffffffff;
  if (1 < local_8) {
    if (0x111 < local_8) {
      local_8 = 0x111;
    }
    pcVar4 = (char *)(*(code *)puVar2[3])(*puVar2);
    uStack_18 = 0;
    piStack_4 = puVar2 + 0xe;
    uStack_c = 0;
    uStack_14 = 0;
    param_1 = (undefined4 *)CONCAT31(param_1._1_3_,pcVar4[-1]);
    piVar7 = piStack_4;
    do {
      iVar8 = -*piVar7;
      if ((pcVar4[-1] == pcVar4[iVar8 + -1]) && (*pcVar4 == pcVar4[iVar8])) {
        uVar9 = 2;
        pcVar5 = pcVar4;
        if (2 < local_8) {
          do {
            pcVar5 = pcVar5 + 1;
            if (*pcVar5 != pcVar5[iVar8]) break;
            uVar9 = uVar9 + 1;
          } while (uVar9 < local_8);
        }
        if ((uint)puVar2[0xc] <= uVar9) {
          puVar2[0x24] = uStack_14;
          puVar2[0xd] = puVar2[0xd] + (uVar9 - 1);
          (*(code *)puVar2[5])(*puVar2,uVar9 - 1);
          return uVar9;
        }
        if (uStack_18 < uVar9) {
          uStack_18 = uVar9;
          uStack_c = uStack_14;
        }
      }
      uStack_14 = uStack_14 + 1;
      piVar7 = piVar7 + 1;
    } while (uStack_14 < 4);
    if ((uint)puVar2[0xc] <= uVar3) {
      puVar2[0x24] = puVar2[(int)puVar10 + 0x1d1] + 4;
      puVar2[0xd] = puVar2[0xd] + (uVar3 - 1);
      (*(code *)puVar2[5])(*puVar2,uVar3 - 1);
      return uVar3;
    }
    uStack_20 = 0;
    if (1 < uVar3) {
      uStack_20 = puVar2[(int)puVar10 + 0x1d1];
      if ((undefined4 *)0x2 < puVar10) {
        puVar6 = puVar2 + (int)puVar10 + 0x1cf;
        do {
          if ((uVar3 != puVar6[-1] + 1) || (uVar9 = *puVar6, uStack_20 >> 7 <= uVar9)) break;
          puVar10 = (undefined4 *)((int)puVar10 - 2);
          puVar6 = puVar6 + -2;
          uVar3 = uVar3 - 1;
          uStack_20 = uVar9;
        } while ((undefined4 *)0x2 < puVar10);
      }
      if ((uVar3 == 2) && (0x7f < uStack_20)) {
        uVar3 = 1;
      }
    }
    if ((1 < uStack_18) &&
       (((uVar3 <= uStack_18 + 1 || ((uVar3 <= uStack_18 + 2 && (0x1ff < uStack_20)))) ||
        ((uVar3 <= uStack_18 + 3 && (0x7fff < uStack_20)))))) {
      puVar2[0xd] = puVar2[0xd] + (uStack_18 - 1);
      puVar2[0x24] = uStack_c;
      (*(code *)puVar2[5])(*puVar2,uStack_18 - 1);
      return uStack_18;
    }
    if ((1 < uVar3) && (2 < local_8)) {
      uVar9 = FUN_0049ecb0(puVar2,puVar2 + 9);
      puVar2[8] = uVar9;
      if ((uVar9 < 2) ||
         (((((uVar1 = puVar2[puVar2[9] + 0x1d1], uVar9 < uVar3 || (uStack_20 <= uVar1)) &&
            ((uVar9 != uVar3 + 1 || (uStack_20 < uVar1 >> 7)))) && (uVar9 <= uVar3 + 1)) &&
          (((uVar9 + 1 < uVar3 || (uVar3 < 3)) || (uStack_20 >> 7 <= uVar1)))))) {
        pcVar4 = (char *)(*(code *)puVar2[3])(*puVar2);
        uStack_c = 0;
        param_1 = (undefined4 *)CONCAT31(param_1._1_3_,pcVar4[-1]);
        do {
          iVar8 = -*piStack_4;
          if ((pcVar4[-1] == pcVar4[iVar8 + -1]) && (*pcVar4 == pcVar4[iVar8])) {
            uVar9 = 2;
            pcVar5 = pcVar4;
            while( true ) {
              pcVar5 = pcVar5 + 1;
              if (uVar3 - 1 <= uVar9) {
                return 1;
              }
              if (*pcVar5 != pcVar5[iVar8]) break;
              uVar9 = uVar9 + 1;
            }
          }
          uStack_c = uStack_c + 1;
          piStack_4 = piStack_4 + 1;
        } while (uStack_c < 4);
        puVar2[0x24] = uStack_20 + 4;
        if (uVar3 != 2) {
          puVar2[0xd] = puVar2[0xd] + (uVar3 - 2);
          (*(code *)puVar2[5])(*puVar2,uVar3 - 2);
        }
        return uVar3;
      }
    }
  }
  return 1;
}


