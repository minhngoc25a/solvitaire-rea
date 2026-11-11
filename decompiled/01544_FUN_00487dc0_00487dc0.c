// Function: FUN_00487dc0
// Entry: 00487dc0
// Size: 47 bytes
// Thunk: false
// External: false


undefined4 __cdecl FUN_00487dc0(uint *param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = FUN_00493d30(param_1,0xdeb0c5,1,"archive_read_set_skip_callback");
  if (iVar1 == -0x1e) {
    return 0xffffffe2;
  }
  param_1[0x20] = param_2;
  return 0;
}


