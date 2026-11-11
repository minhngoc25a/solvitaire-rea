// Function: FUN_004945b0
// Entry: 004945b0
// Size: 50 bytes
// Thunk: false
// External: false


undefined4 __cdecl FUN_004945b0(uint *param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = FUN_00493d30(param_1,0xb0c5c0de,0x7fff,"archive_write_set_bytes_in_last_block");
  if (iVar1 == -0x1e) {
    return 0xffffffe2;
  }
  param_1[0x26] = param_2;
  return 0;
}


