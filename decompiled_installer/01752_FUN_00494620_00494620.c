// Function: FUN_00494620
// Entry: 00494620
// Size: 75 bytes
// Thunk: false
// External: false


undefined4 __cdecl FUN_00494620(uint *param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  int iVar1;
  
  iVar1 = FUN_00493d30(param_1,0xb0c5c0de,0x7fff,"archive_write_set_skip_file");
  if (iVar1 == -0x1e) {
    return 0xffffffe2;
  }
  param_1[0x1a] = param_2;
  param_1[0x1b] = param_3;
  param_1[0x1c] = param_4;
  param_1[0x18] = 1;
  param_1[0x1d] = param_5;
  return 0;
}


