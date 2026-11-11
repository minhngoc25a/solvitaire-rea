// Function: FUN_0046f7d0
// Entry: 0046f7d0
// Size: 91 bytes
// Thunk: false
// External: false


void __cdecl FUN_0046f7d0(int param_1)

{
  uint uVar1;
  
  if (param_1 != 0) {
    uVar1 = *(uint *)(param_1 + 0x78);
    if ((uVar1 & 0x40) != 0) {
      FUN_0046f670(param_1,"invalid after png_start_read_image or png_read_update_info");
      return;
    }
    *(uint *)(param_1 + 0x78) = uVar1 | 0x4000;
    if ((uVar1 & 0x40) != 0) {
      FUN_0046f670(param_1,"invalid after png_start_read_image or png_read_update_info");
      *(uint *)(param_1 + 0x7c) = *(uint *)(param_1 + 0x7c) | 0x4000;
      return;
    }
    *(uint *)(param_1 + 0x7c) = *(uint *)(param_1 + 0x7c) | 0x1000;
    *(uint *)(param_1 + 0x7c) = *(uint *)(param_1 + 0x7c) | 0x4000;
    *(uint *)(param_1 + 0x78) = uVar1 | 0x4000;
  }
  return;
}


