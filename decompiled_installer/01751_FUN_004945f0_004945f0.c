// Function: FUN_004945f0
// Entry: 004945f0
// Size: 47 bytes
// Thunk: false
// External: false


uint __cdecl FUN_004945f0(uint *param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_00493d30(param_1,0xb0c5c0de,0x7fff,"archive_write_get_bytes_in_last_block");
  uVar2 = 0xffffffe2;
  if (iVar1 != -0x1e) {
    uVar2 = param_1[0x26];
  }
  return uVar2;
}


