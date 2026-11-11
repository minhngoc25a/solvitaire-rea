// Function: FUN_004b0af0
// Entry: 004b0af0
// Size: 201 bytes
// Thunk: false
// External: false


uint __cdecl FUN_004b0af0(undefined4 *param_1,uint param_2,int param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  
  if (param_3 < param_5) {
    uVar1 = FUN_004b09b0(param_1,param_2,param_3,param_5);
    if ((char)uVar1 == '\0') {
      return 0xffffffff;
    }
    param_2 = param_1[2];
    param_3 = param_1[3];
  }
  iVar2 = param_3 - param_5;
  uVar3 = *(uint *)(&DAT_005199f8 + param_5 * 4) & (int)param_2 >> ((byte)iVar2 & 0x1f);
  if (*(int *)(param_4 + param_5 * 4) < (int)uVar3) {
    do {
      if (iVar2 < 1) {
        uVar1 = FUN_004b09b0(param_1,param_2,iVar2,1);
        if ((char)uVar1 == '\0') {
          return 0xffffffff;
        }
        param_2 = param_1[2];
        iVar2 = param_1[3];
      }
      iVar2 = iVar2 + -1;
      param_5 = param_5 + 1;
      uVar3 = uVar3 * 2 | (int)param_2 >> ((byte)iVar2 & 0x1f) & 1U;
    } while (*(int *)(param_4 + param_5 * 4) < (int)uVar3);
  }
  param_1[2] = param_2;
  param_1[3] = iVar2;
  if (0x10 < param_5) {
    *(undefined4 *)(*(int *)param_1[4] + 0x14) = 0x79;
    (**(code **)(*(int *)param_1[4] + 4))((int *)param_1[4],0xffffffff);
    return 0;
  }
  return (uint)*(byte *)(*(int *)(param_4 + 0x48 + param_5 * 4) + *(int *)(param_4 + 0x8c) + 0x11 +
                        uVar3);
}


