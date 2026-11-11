// Function: FUN_0050ab4b
// Entry: 0050ab4b
// Size: 134 bytes
// Thunk: false
// External: false


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_0050ab4b(int param_1)

{
  bool bVar1;
  undefined4 in_EAX;
  undefined3 extraout_var;
  uint uVar3;
  int iVar2;
  
  if (DAT_005450c1 != '\0') {
    return CONCAT31((int3)((uint)in_EAX >> 8),1);
  }
  if ((param_1 != 0) && (param_1 != 1)) {
                    /* WARNING: Subroutine does not return */
    FUN_0047da3b();
  }
  bVar1 = ___scrt_is_ucrt_dll_in_use();
  iVar2 = CONCAT31(extraout_var,bVar1);
  if ((iVar2 == 0) || (param_1 != 0)) {
    DAT_005450c4 = 0xffffffff;
    _DAT_005450c8 = 0xffffffff;
    _DAT_005450cc = 0xffffffff;
    _DAT_005450d0 = 0xffffffff;
    _DAT_005450d4 = 0xffffffff;
    _DAT_005450d8 = 0xffffffff;
LAB_0050abbe:
    DAT_005450c1 = '\x01';
    uVar3 = CONCAT31((int3)((uint)iVar2 >> 8),1);
  }
  else {
    uVar3 = FUN_004c5169(&DAT_005450c4);
    if (uVar3 == 0) {
      uVar3 = FUN_004c5169((int *)&DAT_005450d0);
      iVar2 = 0;
      if (uVar3 == 0) goto LAB_0050abbe;
    }
    uVar3 = uVar3 & 0xffffff00;
  }
  return uVar3;
}


