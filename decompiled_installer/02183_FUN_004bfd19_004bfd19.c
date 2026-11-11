// Function: FUN_004bfd19
// Entry: 004bfd19
// Size: 99 bytes
// Thunk: false
// External: false


byte __cdecl FUN_004bfd19(int param_1,uint param_2)

{
  byte bVar1;
  
  if (param_2 == 0x7ff00000) {
    if (param_1 == 0) {
      return 1;
    }
  }
  else if ((param_2 == 0xfff00000) && (param_1 == 0)) {
    return 2;
  }
  if ((param_2._2_2_ & 0x7ff8) == 0x7ff8) {
    bVar1 = 3;
  }
  else {
    if ((param_2._2_2_ & 0x7ff8) != 0x7ff0) {
      return 0;
    }
    if ((param_2 & 0x7ffff) == 0) {
      return -(param_1 != 0) & 4;
    }
    bVar1 = 4;
  }
  return bVar1;
}


