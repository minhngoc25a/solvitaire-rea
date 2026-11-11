// Function: FUN_004ea2d0
// Entry: 004ea2d0
// Size: 303 bytes
// Thunk: false
// External: false


int __cdecl
FUN_004ea2d0(undefined4 *param_1,int param_2,uint *param_3,undefined *param_4,char param_5)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint local_54;
  uint local_50 [3];
  uint local_44 [17];
  
  iVar4 = FUN_004ea400(param_3,&local_54);
  uVar3 = local_54;
  if (iVar4 == 0) {
    if (param_5 == '\0') {
      uVar5 = 0;
      if (local_54 != 0) {
        iVar4 = -(int)param_3;
        local_54 = (int)local_44 - (int)param_3;
        do {
          iVar6 = (*(code *)param_4)(*param_3,param_3[1]);
          if (iVar6 == 0) {
            return 8;
          }
          if (*(int *)(iVar6 + 8) == 0) {
            return 8;
          }
          uVar5 = uVar5 + 1;
          uVar2 = *param_3;
          *(uint *)((int)param_3 + (int)local_50 + iVar4 + 4) = param_3[1];
          *(uint *)((int)param_3 + (int)local_50 + iVar4) = uVar2;
          *(undefined4 *)((int)param_3 + (int)local_50 + iVar4 + 8) = *(undefined4 *)(iVar6 + 8);
          *(uint *)(local_54 + (int)param_3) = param_3[2];
          param_3 = param_3 + 4;
        } while (uVar5 < uVar3);
      }
    }
    else {
      uVar5 = 0;
      if (local_54 != 0) {
        do {
          iVar6 = (uVar3 - uVar5) + -1;
          iVar4 = (*(code *)param_4)(*param_3,param_3[1]);
          if ((iVar4 == 0) || (*(int *)(iVar4 + 8) == 0)) {
            return 8;
          }
          uVar2 = param_3[1];
          uVar5 = uVar5 + 1;
          local_50[iVar6 * 4] = *param_3;
          local_50[iVar6 * 4 + 1] = uVar2;
          local_50[iVar6 * 4 + 2] = *(uint *)(iVar4 + 8);
          puVar1 = param_3 + 2;
          param_3 = param_3 + 4;
          local_44[iVar6 * 4] = *puVar1;
        } while (uVar5 < uVar3);
      }
    }
    local_50[uVar3 * 4] = 0xffffffff;
    local_50[uVar3 * 4 + 1] = 0xffffffff;
    local_50[uVar3 * 4 + 2] = 0;
    iVar4 = FUN_0049b430(param_1,param_2,local_50);
    if (iVar4 != 0) {
      FUN_0049b560(param_1,param_2);
    }
  }
  return iVar4;
}


