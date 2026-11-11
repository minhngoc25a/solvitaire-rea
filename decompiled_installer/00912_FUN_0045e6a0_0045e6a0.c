// Function: FUN_0045e6a0
// Entry: 0045e6a0
// Size: 246 bytes
// Thunk: false
// External: false


uint __cdecl FUN_0045e6a0(int param_1,int param_2,uint param_3)

{
  uint *puVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  
  iVar2 = *(int *)(param_1 + 0xa4);
  if (*(uint *)(iVar2 + 0x2c) != 0) {
    uVar5 = FUN_00494870(param_1,*(undefined4 *)(iVar2 + 0x28),*(uint *)(iVar2 + 0x2c));
    if (uVar5 != 0) {
      return uVar5;
    }
    uVar5 = FUN_004948c0(param_1,*(uint *)(iVar2 + 0x34));
    if (uVar5 != 0) {
      return uVar5;
    }
    *(undefined4 *)(iVar2 + 0x2c) = 0;
  }
  uVar5 = 0;
  if (param_3 != 0) {
    do {
      piVar6 = *(int **)(iVar2 + 0x38);
      if (*(int **)(iVar2 + 0x38) == (int *)0x0) {
        return uVar5;
      }
      while (piVar6[4] == 0 && piVar6[5] == 0) {
        piVar3 = (int *)*piVar6;
        FUN_0047d191(piVar6);
        *(int **)(iVar2 + 0x38) = piVar3;
        piVar6 = piVar3;
        if (piVar3 == (int *)0x0) {
          return uVar5;
        }
      }
      iVar8 = param_2 + uVar5;
      uVar9 = param_3 - uVar5;
      uVar4 = piVar6[4];
      if ((piVar6[5] == 0) && (uVar4 < uVar9)) {
        uVar9 = uVar4;
      }
      uVar5 = uVar5 + uVar9;
      if (piVar6[1] == 0) {
        uVar7 = FUN_00494870(param_1,iVar8,uVar9);
        iVar8 = *(int *)(iVar2 + 0x38);
        puVar1 = (uint *)(iVar8 + 0x10);
        uVar4 = *puVar1;
        *puVar1 = *puVar1 - uVar9;
        piVar6 = (int *)(iVar8 + 0x14);
        *piVar6 = *piVar6 - (uint)(uVar4 < uVar9);
        if (uVar7 != 0) {
          return uVar7;
        }
      }
      else {
        piVar6[4] = uVar4 - uVar9;
        piVar6[5] = piVar6[5] - (uint)(uVar4 < uVar9);
      }
    } while (uVar5 < param_3);
  }
  return uVar5;
}


