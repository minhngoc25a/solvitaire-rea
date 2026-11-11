// Function: FUN_00431e20
// Entry: 00431e20
// Size: 125 bytes
// Thunk: false
// External: false


uint __cdecl FUN_00431e20(int param_1,int param_2,int param_3)

{
  if (param_1 == 0) {
    return 0;
  }
  if ((param_2 == 0) && (param_2 = *(int *)(param_1 + 0x10), param_2 == 0)) {
    param_2 = 48000;
  }
  if (*(uint *)(param_1 + 0x114) != 0) {
    return *(uint *)(param_1 + 0x114);
  }
  if (*(int *)(param_1 + 0x118) == 0) {
    if (param_3 == 0) {
      if (param_2 != 0) {
        return (uint)(param_2 * 10) / 1000;
      }
    }
    else if (param_2 != 0) {
      return (uint)(param_2 * 100) / 1000;
    }
  }
  else if (param_2 != 0) {
    return (uint)(*(int *)(param_1 + 0x118) * param_2) / 1000;
  }
  return 0;
}


