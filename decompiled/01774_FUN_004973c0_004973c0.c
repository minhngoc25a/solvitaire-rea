// Function: FUN_004973c0
// Entry: 004973c0
// Size: 121 bytes
// Thunk: false
// External: false


uint __cdecl FUN_004973c0(int *param_1,uint *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = param_1[1];
  uVar2 = uVar1;
  if (param_3 < uVar1) {
    uVar2 = param_3;
  }
  if (uVar2 == 0) {
    return 0;
  }
  param_1[1] = uVar1 - uVar2;
  FUN_0044c490(param_2,(uint *)*param_1,uVar2);
  if (*(int *)(param_1[7] + 0x18) == 1) {
    uVar1 = thunk_FUN_004a4c70(param_1[0xc],(byte *)param_2,uVar2);
    *param_1 = *param_1 + uVar2;
    param_1[2] = param_1[2] + uVar2;
    param_1[0xc] = uVar1;
    return uVar2;
  }
  if (*(int *)(param_1[7] + 0x18) == 2) {
    uVar1 = thunk_FUN_0048b320(param_1[0xc],param_2,uVar2);
    param_1[0xc] = uVar1;
  }
  *param_1 = *param_1 + uVar2;
  param_1[2] = param_1[2] + uVar2;
  return uVar2;
}


