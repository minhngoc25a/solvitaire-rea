// Function: FUN_004a1a30
// Entry: 004a1a30
// Size: 137 bytes
// Thunk: false
// External: false


void __cdecl FUN_004a1a30(int param_1)

{
  uint uVar1;
  
  if (*(int *)(param_1 + 0xa4) == 0) {
    FUN_004a0910(param_1);
    FUN_004a05d0(param_1);
  }
  uVar1 = *(int *)(param_1 + 0x30) - 1;
  *(undefined4 *)(param_1 + 0xc4) = 0x40;
  *(uint *)(param_1 + 0x769c) = uVar1;
  *(uint *)(param_1 + 0x3298) = uVar1;
  FUN_0049eb30((uint *)(param_1 + 0x3298),1 << ((byte)*(undefined4 *)(param_1 + 0x9c) & 0x1f),
               (ushort *)(param_1 + 0x2298),param_1 + 0x548);
  FUN_0049eb30((uint *)(param_1 + 0x769c),1 << ((byte)*(undefined4 *)(param_1 + 0x9c) & 0x1f),
               (ushort *)(param_1 + 0x2698),param_1 + 0x548);
  return;
}


