// Function: FUN_00401460
// Entry: 00401460
// Size: 254 bytes
// Thunk: false
// External: false


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00401460(double param_1)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  
  FUN_00423f50();
  if (1.0 < param_1) {
    param_1 = 1.0;
  }
  lVar3 = FUN_0041c69f((int *)0x3b,2);
  FUN_00418b60((double)lVar3 * param_1,2);
  iVar1 = FUN_00418b30();
  FUN_0041d5c9((int *)0x3b,iVar1,iVar1 >> 0x1f);
  if (DAT_005423d0 != (int *)0x0) {
    FUN_00418b60(param_1 * (double)_DAT_0050c02c,2);
    iVar1 = FUN_00418b30();
    uVar2 = FUN_0041e946((int *)0x0);
    (**(code **)(*DAT_005423d0 + 0x24))(DAT_005423d0,uVar2,iVar1,iVar1 >> 0x1f,100,0);
  }
  return 0;
}


