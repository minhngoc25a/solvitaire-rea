// Function: FUN_0046c700
// Entry: 0046c700
// Size: 329 bytes
// Thunk: false
// External: false


void __cdecl FUN_0046c700(uint param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint local_c;
  uint local_8;
  uint local_4;
  
  uVar1 = param_1;
  if (*(char *)(param_1 + 0x249) != '\0') {
    return;
  }
  if ((*(byte *)(param_1 + 0x30e) & 2) == 0) {
    return;
  }
  local_8 = *(uint *)(param_1 + 0x304);
  uVar6 = *(uint *)(param_1 + 0x2ec);
  uVar5 = *(uint *)(param_1 + 0x2f8);
  iVar4 = local_8 + uVar5 + uVar6;
  param_1 = uVar6;
  local_c = uVar5;
  local_4 = local_8;
  if ((((((iVar4 < 1) || ((int)uVar6 < 0)) ||
        (iVar2 = FUN_0046cd90((int *)&param_1,uVar6,0x8000,iVar4), uVar6 = param_1, iVar2 == 0)) ||
       ((0x8000 < param_1 || ((int)uVar5 < 0)))) ||
      ((iVar2 = FUN_0046cd90((int *)&local_c,uVar5,0x8000,iVar4), uVar5 = local_c, iVar2 == 0 ||
       ((0x8000 < local_c || ((int)local_4 < 0)))))) ||
     ((iVar4 = FUN_0046cd90((int *)&local_8,local_4,0x8000,iVar4), iVar4 == 0 ||
      ((0x8000 < local_8 || (iVar4 = local_8 + uVar5 + uVar6, 0x8001 < iVar4))))))
  goto LAB_0046c843;
  uVar3 = local_8;
  if (iVar4 < 0x8001) {
    if (iVar4 < 0x8000) {
      iVar4 = 1;
      goto LAB_0046c807;
    }
  }
  else {
    iVar4 = -1;
LAB_0046c807:
    if ((int)uVar5 < (int)uVar6) {
LAB_0046c817:
      if ((int)uVar6 < (int)local_8) {
LAB_0046c81f:
        uVar3 = local_8 + iVar4;
      }
      else {
        uVar6 = uVar6 + iVar4;
      }
    }
    else {
      if ((int)uVar5 < (int)local_8) {
        if ((int)uVar5 <= (int)uVar6) goto LAB_0046c817;
        goto LAB_0046c81f;
      }
      uVar5 = uVar5 + iVar4;
    }
  }
  if (uVar3 + uVar5 + uVar6 == 0x8000) {
    *(short *)(uVar1 + 0x24a) = (short)uVar6;
    *(short *)(uVar1 + 0x24c) = (short)uVar5;
    return;
  }
LAB_0046c843:
                    /* WARNING: Subroutine does not return */
  FUN_0046f190(uVar1);
}


