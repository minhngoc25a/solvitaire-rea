// Function: FUN_00420390
// Entry: 00420390
// Size: 90 bytes
// Thunk: false
// External: false


int FUN_00420390(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = -1;
  if (param_1 != 0) {
    if (*(int *)(param_1 + -0x18) == 1) {
      iVar2 = *(int *)(param_1 + -8) + -1;
    }
    else if ((0 < param_2) && (param_2 <= *(int *)(param_1 + -0x18))) {
      iVar1 = *(int *)(param_1 + -0xc);
      if (param_2 == 1) {
        if (*(int *)(iVar1 + 4) < 1) {
          return -1;
        }
        iVar2 = *(int *)(param_1 + -8) / *(int *)(iVar1 + 4);
      }
      else if (param_2 < *(int *)(param_1 + -0x18)) {
        iVar2 = *(int *)(iVar1 + param_2 * 4);
        if (iVar2 < 1) {
          return -1;
        }
        iVar2 = *(int *)(iVar1 + -4 + param_2 * 4) / iVar2;
      }
      else {
        iVar2 = *(int *)(iVar1 + -4 + param_2 * 4);
      }
      iVar2 = iVar2 + -1;
    }
  }
  return iVar2;
}


