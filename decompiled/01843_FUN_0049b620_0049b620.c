// Function: FUN_0049b620
// Entry: 0049b620
// Size: 66 bytes
// Thunk: false
// External: false


uint __cdecl FUN_0049b620(int param_1,int *param_2,int param_3,int param_4,int *param_5,int param_6)

{
  uint uVar1;
  
  uVar1 = param_6 - *param_5;
  if ((uint)(param_3 - *param_2) < (uint)(param_6 - *param_5)) {
    uVar1 = param_3 - *param_2;
  }
  FUN_0044c490((uint *)(param_4 + *param_5),(uint *)(param_1 + *param_2),uVar1);
  *param_2 = *param_2 + uVar1;
  *param_5 = *param_5 + uVar1;
  return uVar1;
}


