// Function: FUN_00420d5d
// Entry: 00420d5d
// Size: 30 bytes
// Thunk: false
// External: false


int FUN_00420d5d(int *param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = FUN_004258d0(DAT_005434a8,param_1);
  if (uVar1 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = (int)*(short *)(uVar1 + 4);
  }
  return iVar2;
}


