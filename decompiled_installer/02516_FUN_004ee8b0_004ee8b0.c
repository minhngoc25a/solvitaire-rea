// Function: FUN_004ee8b0
// Entry: 004ee8b0
// Size: 159 bytes
// Thunk: false
// External: false


void __cdecl FUN_004ee8b0(int param_1,undefined4 *param_2)

{
  uint uVar1;
  
  *param_2 = &LAB_004ee950;
  param_2[1] = &LAB_004eea10;
  param_2[2] = &LAB_004eea00;
  uVar1 = *(uint *)(param_1 + 0x48);
  if (*(char *)(param_1 + 0x1d) == '\0') {
    if (uVar1 < 5) {
      param_2[3] = &LAB_004ef940;
      param_2[4] = &LAB_004f0380;
      return;
    }
    param_2[3] = &LAB_004efbd0;
    param_2[4] = &LAB_004f0490;
    return;
  }
  if (uVar1 == 2) {
    param_2[3] = &LAB_004eeda0;
    param_2[4] = &LAB_004efe80;
    return;
  }
  if (uVar1 == 3) {
    param_2[3] = &LAB_004eefa0;
    param_2[4] = &LAB_004f0020;
    return;
  }
  if (uVar1 == 4) {
    param_2[3] = &LAB_004ef270;
    param_2[4] = &LAB_004f01e0;
    return;
  }
  param_2[3] = &LAB_004ef5c0;
  param_2[4] = &LAB_004f02a0;
  return;
}


