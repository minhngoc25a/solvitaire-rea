// Function: FUN_00496770
// Entry: 00496770
// Size: 396 bytes
// Thunk: false
// External: false


undefined4 __cdecl FUN_00496770(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  
  if (((((param_1 != 0) && (*(int *)(param_1 + 0x20) != 0)) && (*(int *)(param_1 + 0x24) != 0)) &&
      ((piVar1 = *(int **)(param_1 + 0x1c), piVar1 != (int *)0x0 && (*piVar1 == param_1)))) &&
     ((((iVar2 = piVar1[1], iVar2 == 0x2a || ((iVar2 == 0x39 || (iVar2 == 0x45)))) ||
       ((iVar2 == 0x49 || (((iVar2 == 0x5b || (iVar2 == 0x67)) || (iVar2 == 0x71)))))) ||
      (iVar2 == 0x29a)))) {
    iVar2 = *(int *)(param_1 + 0x1c);
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x2c) = 2;
    iVar5 = *(int *)(iVar2 + 0x18);
    *(undefined4 *)(iVar2 + 0x14) = 0;
    *(undefined4 *)(iVar2 + 0x10) = *(undefined4 *)(iVar2 + 8);
    if (iVar5 < 0) {
      iVar5 = -iVar5;
      *(int *)(iVar2 + 0x18) = iVar5;
    }
    uVar3 = 0x2a;
    if (iVar5 == 2) {
      uVar3 = 0x39;
    }
    *(undefined4 *)(iVar2 + 4) = uVar3;
    if (iVar5 != 2) {
      uVar4 = thunk_FUN_004a4c70(0,(byte *)0x0,0);
    }
    else {
      uVar4 = thunk_FUN_0048b320(0,(uint *)0x0,0);
    }
    *(uint *)(param_1 + 0x30) = uVar4;
    *(undefined4 *)(iVar2 + 0x28) = 0xfffffffe;
    FUN_004d0950(iVar2);
    iVar2 = *(int *)(param_1 + 0x1c);
    *(int *)(iVar2 + 0x3c) = *(int *)(iVar2 + 0x2c) * 2;
    *(undefined2 *)(*(int *)(iVar2 + 0x44) + -2 + *(int *)(iVar2 + 0x4c) * 2) = 0;
    _memset(*(void **)(iVar2 + 0x44),0,*(int *)(iVar2 + 0x4c) * 2 - 2);
    iVar5 = *(int *)(iVar2 + 0x84);
    *(uint *)(iVar2 + 0x80) = (uint)*(ushort *)(&DAT_005189ca + iVar5 * 0xc);
    *(uint *)(iVar2 + 0x8c) = (uint)*(ushort *)(&DAT_005189c8 + iVar5 * 0xc);
    *(uint *)(iVar2 + 0x90) = (uint)*(ushort *)(&DAT_005189cc + iVar5 * 0xc);
    *(uint *)(iVar2 + 0x7c) = (uint)*(ushort *)(&DAT_005189ce + iVar5 * 0xc);
    *(undefined4 *)(iVar2 + 0x6c) = 0;
    *(undefined4 *)(iVar2 + 0x5c) = 0;
    *(undefined4 *)(iVar2 + 0x74) = 0;
    *(undefined4 *)(iVar2 + 0x16b4) = 0;
    *(undefined4 *)(iVar2 + 0x78) = 2;
    *(undefined4 *)(iVar2 + 0x60) = 2;
    *(undefined4 *)(iVar2 + 0x68) = 0;
    *(undefined4 *)(iVar2 + 0x48) = 0;
    return 0;
  }
  return 0xfffffffe;
}


