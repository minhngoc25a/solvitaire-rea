// Function: FUN_0042ebf0
// Entry: 0042ebf0
// Size: 76 bytes
// Thunk: false
// External: false


undefined4 __cdecl FUN_0042ebf0(undefined4 *param_1,undefined4 *param_2)

{
  if (param_2 != (undefined4 *)0x0) {
    _memset(param_2,0,0x38);
    if (param_1 != (undefined4 *)0x0) {
      *param_2 = *param_1;
      param_2[4] = 0xffffffff;
      param_2[5] = 0xffffffff;
      param_2[8] = 0xffffffff;
      param_2[9] = 0xffffffff;
      param_2[10] = param_2;
      return 0;
    }
  }
  return 0xfffffffe;
}


