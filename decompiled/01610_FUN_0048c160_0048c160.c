// Function: FUN_0048c160
// Entry: 0048c160
// Size: 32 bytes
// Thunk: false
// External: false


uint __cdecl FUN_0048c160(int param_1)

{
  if (*(int *)(param_1 + 0x88) != 0) {
    return *(uint *)(param_1 + 0x94);
  }
  return *(uint *)(param_1 + 0x8c) & 0xffff00ff;
}


