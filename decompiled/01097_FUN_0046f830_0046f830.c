// Function: FUN_0046f830
// Entry: 0046f830
// Size: 48 bytes
// Thunk: false
// External: false


void __cdecl FUN_0046f830(int param_1)

{
  if (param_1 != 0) {
    if ((*(uint *)(param_1 + 0x78) & 0x40) != 0) {
      FUN_0046f670(param_1,"invalid after png_start_read_image or png_read_update_info");
      return;
    }
    *(uint *)(param_1 + 0x7c) = *(uint *)(param_1 + 0x7c) | 0x400;
    *(uint *)(param_1 + 0x78) = *(uint *)(param_1 + 0x78) | 0x4000;
  }
  return;
}


