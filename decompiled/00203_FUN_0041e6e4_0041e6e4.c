// Function: FUN_0041e6e4
// Entry: 0041e6e4
// Size: 68 bytes
// Thunk: false
// External: false


void FUN_0041e6e4(undefined4 param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  
  if (param_2 == (int *)0xffffffff) {
    iVar1 = FUN_00423ccb(DAT_00543990);
    *(undefined4 *)(iVar1 + 0x10) = param_1;
    *(undefined4 *)(iVar1 + 0x14) = param_3;
  }
  else {
    uVar2 = FUN_004258d0(DAT_0054398c,param_2);
    if (uVar2 != 0) {
      *(undefined4 *)(uVar2 + 0xc) = param_1;
      *(undefined4 *)(uVar2 + 0x40) = param_3;
    }
  }
  return;
}


