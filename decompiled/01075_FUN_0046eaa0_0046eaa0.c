// Function: FUN_0046eaa0
// Entry: 0046eaa0
// Size: 52 bytes
// Thunk: false
// External: false


void __cdecl FUN_0046eaa0(uint param_1,int *param_2)

{
  if (param_1 != 0) {
    if ((*(byte *)(param_1 + 0x78) & 0x40) == 0) {
      FUN_004a6f60(param_1);
      FUN_0046f860(param_1,param_2);
      return;
    }
    FUN_0046f670(param_1,"png_read_update_info/png_start_read_image: duplicate call");
  }
  return;
}


