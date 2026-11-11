// Function: FUN_004b95aa
// Entry: 004b95aa
// Size: 603 bytes
// Thunk: false
// External: false


undefined4 __cdecl
FUN_004b95aa(int *param_1,int *param_2,int *param_3,int *param_4,int param_5,int param_6)

{
  int iVar1;
  
  iVar1 = *param_3;
  if (*param_1 < param_5) {
    if (iVar1 < param_5) {
      return 0;
    }
    iVar1 = thunk_FUN_00469d60();
    *param_2 = iVar1;
    *param_1 = param_5;
    if (*param_3 <= param_6) {
      return 1;
    }
    iVar1 = thunk_FUN_00469d60();
    *param_4 = iVar1;
    *param_3 = param_6;
    return 1;
  }
  if (param_6 < *param_1) {
    if (param_6 < iVar1) {
      return 0;
    }
    iVar1 = thunk_FUN_00469d60();
    *param_2 = iVar1;
    *param_1 = param_6;
    if (param_5 <= *param_3) {
      return 1;
    }
    iVar1 = thunk_FUN_00469d60();
    *param_4 = iVar1;
  }
  else {
    if (param_6 < iVar1) {
      iVar1 = thunk_FUN_00469d60();
      *param_4 = iVar1;
      *param_3 = param_6;
      return 1;
    }
    if (param_5 <= iVar1) {
      return 1;
    }
    iVar1 = thunk_FUN_00469d60();
    *param_4 = iVar1;
  }
  *param_3 = param_5;
  return 1;
}


