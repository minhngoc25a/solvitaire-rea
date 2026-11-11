// Function: FUN_0040a500
// Entry: 0040a500
// Size: 32 bytes
// Thunk: false
// External: false


void FUN_0040a500(undefined4 *param_1)

{
  *param_1 = param_1[-1];
  param_1[1] = 1 << ((byte)param_1[-1] & 0x1f);
  FUN_0040a910(param_1 + -1);
  return;
}


