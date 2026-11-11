// Function: FUN_00493cc0
// Entry: 00493cc0
// Size: 106 bytes
// Thunk: false
// External: false


undefined4 __cdecl FUN_00493cc0(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x310);
  if (iVar1 != 0) {
    uVar2 = *(undefined4 *)(iVar1 + 0xc);
    *param_2 = *(undefined4 *)(iVar1 + 8);
    param_2[1] = uVar2;
    uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x310) + 0x14);
    *param_3 = *(undefined4 *)(*(int *)(param_1 + 0x310) + 0x10);
    param_3[1] = uVar2;
    *(undefined4 *)(param_1 + 0x310) = **(undefined4 **)(param_1 + 0x310);
    return 0;
  }
  *param_2 = 0;
  param_2[1] = 0;
  *param_3 = 0;
  param_3[1] = 0;
  return 0xffffffec;
}


