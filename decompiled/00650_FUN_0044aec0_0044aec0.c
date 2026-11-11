// Function: FUN_0044aec0
// Entry: 0044aec0
// Size: 111 bytes
// Thunk: false
// External: false


undefined4 * __cdecl FUN_0044aec0(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 local_18 [6];
  
  if (*(int *)(param_2 + 4) == 0) {
    puVar4 = FUN_00432dd0(local_18);
    uVar1 = puVar4[1];
    uVar2 = puVar4[2];
    uVar3 = puVar4[3];
    *param_1 = *puVar4;
    param_1[1] = uVar1;
    param_1[2] = uVar2;
    param_1[3] = uVar3;
    *(undefined8 *)(param_1 + 4) = *(undefined8 *)(puVar4 + 4);
    param_1[1] = 1;
    *param_1 = &PTR_LAB_005405dc;
    return param_1;
  }
  puVar4 = FUN_00432dd0(local_18);
  uVar1 = puVar4[1];
  uVar2 = puVar4[2];
  uVar3 = puVar4[3];
  *param_1 = *puVar4;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(puVar4 + 4);
  param_1[1] = 0;
  *param_1 = &PTR_LAB_005405ec;
  return param_1;
}


