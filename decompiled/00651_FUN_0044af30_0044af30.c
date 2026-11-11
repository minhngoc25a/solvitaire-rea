// Function: FUN_0044af30
// Entry: 0044af30
// Size: 138 bytes
// Thunk: false
// External: false


undefined4 * __cdecl FUN_0044af30(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = **(undefined4 **)(param_2 + 0x14);
  *param_1 = **(undefined4 **)(param_2 + 0x10);
  param_1[1] = uVar1;
  param_1[2] = 0;
  param_1[3] = 1;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0x3f800000;
  param_1[8] = 0x3f800000;
  param_1[9] = 0x7f7fffff;
  param_1[10] = 0x3f800000;
  param_1[0xb] = 0x40c90fda;
  param_1[0xc] = 0x40c90fda;
  param_1[0xd] = 0;
  param_1[0xe] = 0x3f800000;
  param_1[0xf] = 0x3f800000;
  param_1[0x10] = 0x3e4ccccd;
  param_1[0x11] = 0x168;
  return param_1;
}


