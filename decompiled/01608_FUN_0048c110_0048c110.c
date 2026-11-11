// Function: FUN_0048c110
// Entry: 0048c110
// Size: 46 bytes
// Thunk: false
// External: false


uint __cdecl FUN_0048c110(int param_1)

{
  if (*(int *)(param_1 + 0x88) != 0) {
    return *(uint *)(param_1 + 0x94) ^
           (*(int *)(param_1 + 0x90) << 8 ^ *(uint *)(param_1 + 0x94)) & 0xff00;
  }
  return *(uint *)(param_1 + 0x8c);
}


