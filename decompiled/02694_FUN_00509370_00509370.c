// Function: FUN_00509370
// Entry: 00509370
// Size: 108 bytes
// Thunk: false
// External: false


uint __cdecl FUN_00509370(int *param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  iVar1 = (*(code *)param_1[10])(param_1,param_3);
  uVar4 = 0;
  if (iVar1 != 0) {
    uVar4 = *(uint *)(param_3 + -8 + iVar1 * 8);
    if (uVar4 == param_1[0x12]) {
      iVar2 = param_1[5] + *param_1 + -1;
      uVar3 = (param_1[8] - param_1[5]) + 1;
      uVar5 = param_1[0x13];
      if (uVar3 <= (uint)param_1[0x13]) {
        uVar5 = uVar3;
      }
      uVar4 = FUN_00506170(iVar2,(iVar2 - *(int *)(param_3 + iVar1 * 8 + -4)) + -1,uVar4,uVar5);
    }
  }
  *param_2 = iVar1;
  param_1[6] = param_1[6] + 1;
  return uVar4;
}


