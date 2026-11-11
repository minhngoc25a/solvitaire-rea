// Function: FUN_00473c50
// Entry: 00473c50
// Size: 33 bytes
// Thunk: false
// External: false


undefined4 __cdecl FUN_00473c50(int param_1)

{
  if ((param_1 != 0) && (*(char *)(param_1 + 0x14c) != '\0')) {
    *(uint *)(param_1 + 0x7c) = *(uint *)(param_1 + 0x7c) | 2;
    return 7;
  }
  return 1;
}


