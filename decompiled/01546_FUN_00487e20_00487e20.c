// Function: FUN_00487e20
// Entry: 00487e20
// Size: 47 bytes
// Thunk: false
// External: false


undefined4 __cdecl FUN_00487e20(uint *param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = FUN_00493d30(param_1,0xdeb0c5,1,"archive_read_set_switch_callback");
  if (iVar1 == -0x1e) {
    return 0xffffffe2;
  }
  param_1[0x23] = param_2;
  return 0;
}


