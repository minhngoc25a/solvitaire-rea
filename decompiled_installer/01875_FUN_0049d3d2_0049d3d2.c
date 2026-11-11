// Function: FUN_0049d3d2
// Entry: 0049d3d2
// Size: 130 bytes
// Thunk: false
// External: false


/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

undefined4 FUN_0049d3d2(uint *param_1,undefined4 *param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  void *local_14;
  
  ___acrt_lowio_lock_fh(*param_1);
  uVar1 = *(uint *)*param_2;
  iVar2 = param_2[1];
  if ((*(byte *)((&DAT_00544378)[(int)uVar1 >> 6] + 0x28 + (uVar1 & 0x3f) * 0x38) & 1) == 0) {
    *(undefined1 *)(iVar2 + 0x1c) = 1;
    *(undefined4 *)(iVar2 + 0x18) = 9;
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = FUN_0049d28f(uVar1,iVar2);
  }
  FUN_0049d457();
  ExceptionList = local_14;
  return uVar3;
}


