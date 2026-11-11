// Function: FUN_00420b6d
// Entry: 00420b6d
// Size: 30 bytes
// Thunk: false
// External: false


int FUN_00420b6d(int *param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = FUN_004258d0(DAT_005434a8,param_1);
  if (uVar1 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = (int)*(short *)(uVar1 + 6);
  }
  return iVar2;
}


