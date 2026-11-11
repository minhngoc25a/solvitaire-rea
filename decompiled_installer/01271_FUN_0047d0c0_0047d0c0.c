// Function: FUN_0047d0c0
// Entry: 0047d0c0
// Size: 53 bytes
// Thunk: false
// External: false


void FUN_0047d0c0(int param_1,undefined4 *param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  if (0 < param_3) {
    iVar3 = param_1 - (int)param_2;
    iVar2 = (param_3 - 1U >> 1) + 1;
    do {
      uVar1 = *param_2;
      param_2 = param_2 + 1;
      *(undefined4 *)(iVar3 + -4 + (int)param_2) = uVar1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  *(undefined2 *)(param_1 + param_3 * 2) = 0;
  return;
}


