// Function: FUN_005058c0
// Entry: 005058c0
// Size: 294 bytes
// Thunk: false
// External: false


undefined4 __cdecl FUN_005058c0(int *param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  uint uVar4;
  
  if (*param_1 == 0) {
    iVar1 = FUN_0049b270(param_1[1] + 4,param_2);
    *param_1 = iVar1;
    iVar3 = 0;
    if (iVar1 == 0) goto LAB_00505983;
    *(undefined4 *)(param_1[1] + iVar1) = 0;
  }
  iVar3 = param_1[0xf];
  param_1[4] = iVar3;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  if (((uint)param_1[0x15] < 0x40000000) && ((uint)param_1[0x16] < 0x40000000)) {
    uVar4 = param_1[0x15] << 2;
    if ((void *)param_1[0xc] == (void *)0x0) {
      pvVar2 = FUN_0049b2b0(uVar4,param_2);
      param_1[0xc] = (int)pvVar2;
      pvVar2 = (void *)FUN_0049b270(param_1[0x16] << 2,param_2);
      param_1[0xd] = (int)pvVar2;
      if (((LPVOID)param_1[0xc] == (LPVOID)0x0) || (pvVar2 == (void *)0x0)) {
        FUN_0049b300((LPVOID)param_1[0xc],(int)param_2);
        param_1[0xc] = 0;
        iVar3 = FUN_0049b300((LPVOID)param_1[0xd],(int)param_2);
        param_1[0xd] = 0;
        goto LAB_00505983;
      }
    }
    else {
      pvVar2 = _memset((void *)param_1[0xc],0,uVar4);
    }
    param_1[0xe] = 0;
    if ((*(int *)(param_3 + 0x1c) != 0) && (uVar4 = *(uint *)(param_3 + 0x20), uVar4 != 0)) {
      if ((uint)param_1[1] <= uVar4) {
        uVar4 = param_1[1];
      }
      param_1[8] = uVar4;
      FUN_0044c490((uint *)*param_1,
                   (uint *)((*(int *)(param_3 + 0x1c) - uVar4) + *(int *)(param_3 + 0x20)),uVar4);
      param_1[0x14] = 1;
      pvVar2 = (void *)(*(code *)param_1[0xb])(param_1,param_1[8]);
    }
    param_1[0x14] = 0;
    return (uint)pvVar2 & 0xffffff00;
  }
LAB_00505983:
  return CONCAT31((int3)((uint)iVar3 >> 8),1);
}


