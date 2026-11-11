// Function: FUN_00487d60
// Entry: 00487d60
// Size: 44 bytes
// Thunk: false
// External: false


undefined4 __cdecl FUN_00487d60(uint *param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = FUN_00493d30(param_1,0xdeb0c5,1,"archive_read_set_read_callback");
  if (iVar1 == -0x1e) {
    return 0xffffffe2;
  }
  param_1[0x1f] = param_2;
  return 0;
}


