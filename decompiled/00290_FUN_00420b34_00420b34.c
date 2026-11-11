// Function: FUN_00420b34
// Entry: 00420b34
// Size: 43 bytes
// Thunk: false
// External: false


int FUN_00420b34(int *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = FUN_004258d0(DAT_005434a8,param_1);
  if (uVar1 == 0) {
    iVar2 = 0;
  }
  else if (param_2 == -2) {
    iVar2 = (int)*(char *)(uVar1 + 9);
  }
  else {
    iVar2 = (int)*(char *)(uVar1 + 8);
  }
  return iVar2;
}


