// Function: FUN_0049cf20
// Entry: 0049cf20
// Size: 73 bytes
// Thunk: false
// External: false


bool __cdecl FUN_0049cf20(int param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = 4;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0xffffffff;
  do {
    uVar1 = (**(code **)(*(int *)(param_1 + 0x1c) + 4))(*(int *)(param_1 + 0x1c));
    uVar1 = *(int *)(param_1 + 0x10) << 8 | uVar1 & 0xff;
    *(uint *)(param_1 + 0x10) = uVar1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return uVar1 != 0xffffffff;
}


