// Function: FUN_004eb290
// Entry: 004eb290
// Size: 399 bytes
// Thunk: false
// External: false


void __cdecl FUN_004eb290(int param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  piVar1 = (int *)(param_1 + 0x1f0);
  if (param_3 == 0) {
    iVar3 = *piVar1;
    *(undefined4 *)(param_1 + 0x20 + *(int *)(param_1 + 0x18) * 4) = 0;
    *(int *)(param_1 + 0x108 + *(int *)(param_1 + 0x18) * 4) = param_1 + (iVar3 + 0x3622) * 2;
    iVar4 = *(int *)(param_1 + 0x18) + 1;
    *(int *)(param_1 + 0x18) = iVar4;
    iVar3 = *piVar1;
    *(uint *)(param_1 + 0x20 + iVar4 * 4) = (uint)(param_4 != 1);
    *(int *)(param_1 + 0x108 + *(int *)(param_1 + 0x18) * 4) =
         param_1 + (iVar3 * 0x10 + 0x3646 + param_2) * 2;
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
  }
  else {
    uVar2 = *(undefined4 *)(param_1 + 500 + param_3 * 4);
    iVar3 = *piVar1;
    *(undefined4 *)(param_1 + 0x20 + *(int *)(param_1 + 0x18) * 4) = 1;
    *(int *)(param_1 + 0x108 + *(int *)(param_1 + 0x18) * 4) = param_1 + (iVar3 + 0x3622) * 2;
    iVar3 = *(int *)(param_1 + 0x18) + 1;
    *(int *)(param_1 + 0x18) = iVar3;
    iVar3 = param_1 + iVar3 * 4;
    iVar4 = param_1 + (*piVar1 + 0x362e) * 2;
    if (param_3 == 1) {
      *(undefined4 *)(iVar3 + 0x20) = 0;
      *(int *)(param_1 + 0x108 + *(int *)(param_1 + 0x18) * 4) = iVar4;
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
    }
    else {
      *(undefined4 *)(iVar3 + 0x20) = 1;
      *(int *)(param_1 + 0x108 + *(int *)(param_1 + 0x18) * 4) = iVar4;
      iVar4 = *(int *)(param_1 + 0x18) + 1;
      *(int *)(param_1 + 0x18) = iVar4;
      iVar3 = *piVar1;
      *(int *)(param_1 + 0x20 + iVar4 * 4) = param_3 + -2;
      *(int *)(param_1 + 0x108 + *(int *)(param_1 + 0x18) * 4) = param_1 + (iVar3 + 0x363a) * 2;
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
      if (param_3 == 3) {
        *(undefined4 *)(param_1 + 0x200) = *(undefined4 *)(param_1 + 0x1fc);
      }
      *(undefined4 *)(param_1 + 0x1fc) = *(undefined4 *)(param_1 + 0x1f8);
    }
    *(undefined4 *)(param_1 + 0x1f8) = *(undefined4 *)(param_1 + 500);
    *(undefined4 *)(param_1 + 500) = uVar2;
  }
  if (param_4 != 1) {
    FUN_004eb080(param_1,(ushort *)(param_1 + 0xb958),param_2,param_4,*(char *)(param_1 + 0xa9c));
    iVar3 = 0xb;
    if (*(int *)(param_1 + 0x1f0) < 7) {
      iVar3 = 8;
    }
    *piVar1 = iVar3;
    return;
  }
  *piVar1 = (uint)(6 < *(int *)(param_1 + 0x1f0)) * 2 + 9;
  return;
}


