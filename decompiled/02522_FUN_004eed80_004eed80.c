// Function: FUN_004eed80
// Entry: 004eed80
// Size: 31 bytes
// Thunk: false
// External: false


void __cdecl FUN_004eed80(int *param_1)

{
  int iVar1;
  
  iVar1 = param_1[1];
  param_1[5] = param_1[5] + 1;
  *param_1 = *param_1 + 1;
  param_1[1] = iVar1 + 1;
  if (iVar1 + 1 == param_1[2]) {
    FUN_004eebb0(param_1);
    return;
  }
  return;
}


