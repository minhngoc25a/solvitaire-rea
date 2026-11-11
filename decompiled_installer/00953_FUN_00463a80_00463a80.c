// Function: FUN_00463a80
// Entry: 00463a80
// Size: 230 bytes
// Thunk: false
// External: false


undefined4 __thiscall FUN_00463a80(void *this,uint param_1,int param_2,uint param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint *local_4;
  
  uVar6 = 0;
  uVar7 = 0;
  uVar8 = 0;
  local_4 = this;
  if (param_3 != 0) {
    do {
      if (uVar6 == 0) {
        iVar3 = **(int **)(param_1 + 0x440);
        if ((*(int *)(iVar3 + 0x54) == 0) && (*(int *)(iVar3 + 0x50) == 0)) {
          return 0xffffffff;
        }
        if (*(int *)(iVar3 + 0xe0) != 0) {
          FUN_00465320(param_1);
        }
        if (*(int *)(iVar3 + 0x4c) == 0) {
          puVar5 = (uint *)FUN_00488710(param_1,1,(uint *)0x0);
          if (puVar5 == (uint *)0x0) {
            return 0xffffffff;
          }
          piVar1 = (int *)(iVar3 + 0x50);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          *(undefined4 *)(iVar3 + 0xe0) = 1;
          *(int *)(iVar3 + 0x54) = *(int *)(iVar3 + 0x54) + -1 + (uint)(iVar2 != 0);
        }
        else {
          uVar6 = FUN_00465370(param_1,&local_4,1,1);
          if ((int)uVar6 < 1) {
            return 0xffffffff;
          }
          puVar5 = (uint *)(iVar3 + 0x50);
          uVar7 = *puVar5;
          *puVar5 = *puVar5 - uVar6;
          *(int *)(iVar3 + 0x54) =
               (*(int *)(iVar3 + 0x54) - ((int)uVar6 >> 0x1f)) - (uint)(uVar7 < uVar6);
          puVar5 = local_4;
        }
        uVar6 = thunk_FUN_0048b320(*(uint *)(iVar3 + 0x58),puVar5,1);
        *(uint *)(iVar3 + 0x58) = uVar6;
        if (puVar5 == (uint *)0x0) {
          return 0xffffffff;
        }
        uVar7 = (uint)(byte)*puVar5;
        uVar6 = 0x80;
      }
      uVar4 = uVar6 & uVar7;
      uVar6 = uVar6 >> 1;
      *(bool *)(uVar8 + param_2) = uVar4 != 0;
      uVar8 = uVar8 + 1;
    } while (uVar8 < param_3);
  }
  return 0;
}


