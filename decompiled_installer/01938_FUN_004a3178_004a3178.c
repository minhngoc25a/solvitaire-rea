// Function: FUN_004a3178
// Entry: 004a3178
// Size: 22 bytes
// Thunk: false
// External: false


uint __cdecl FUN_004a3178(undefined4 param_1,uint param_2)

{
  if ((param_2 & 0x7ff00000) != 0x7ff00000) {
    return param_2 & 0x7ff00000;
  }
  return param_2;
}


