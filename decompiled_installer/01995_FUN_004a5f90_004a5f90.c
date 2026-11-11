// Function: FUN_004a5f90
// Entry: 004a5f90
// Size: 299 bytes
// Thunk: false
// External: false


undefined4 __cdecl FUN_004a5f90(int param_1,uint param_2)

{
  uint uVar1;
  bool bVar2;
  undefined1 local_400;
  undefined1 uStack_3ff;
  undefined1 uStack_3fe;
  undefined1 uStack_3fd;
  uint auStack_3fc [255];
  
  while (param_2 != 0) {
    uVar1 = 0x400;
    if (param_2 < 0x400) {
      uVar1 = param_2;
    }
    param_2 = param_2 - uVar1;
    if (param_1 != 0) {
      FUN_00474230(param_1);
      FUN_0046bd70(param_1,auStack_3fc,uVar1);
    }
  }
  bVar2 = true;
  if ((*(uint *)(param_1 + 0x11c) & 0x20000000) == 0) {
    if ((*(uint *)(param_1 + 0x78) & 0x800) != 0) {
      *(undefined4 *)(param_1 + 0x2ac) = 0x81;
      FUN_00474230(param_1);
      return 0;
    }
  }
  else {
    bVar2 = (*(uint *)(param_1 + 0x78) & 0x300) != 0x300;
  }
  *(undefined4 *)(param_1 + 0x2ac) = 0x81;
  FUN_00474230(param_1);
  if ((bVar2) &&
     (CONCAT31(CONCAT21(CONCAT11(local_400,uStack_3ff),uStack_3fe),uStack_3fd) !=
      *(int *)(param_1 + 0x138))) {
    if ((*(uint *)(param_1 + 0x11c) & 0x20000000) == 0) {
      uVar1 = *(uint *)(param_1 + 0x78) >> 10;
    }
    else {
      uVar1 = ~(*(uint *)(param_1 + 0x78) >> 9);
    }
    if ((uVar1 & 1) != 0) {
      FUN_0046f210(param_1,0x525240);
      return 1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_0046f190(param_1);
  }
  return 0;
}


