// Function: FUN_004bf329
// Entry: 004bf329
// Size: 23 bytes
// Thunk: false
// External: false


int __cdecl FUN_004bf329(int param_1)

{
  if (param_1 < 1) {
    param_1 = 0;
  }
  else if (0xfe < param_1) {
    return 0xff;
  }
  return param_1;
}


