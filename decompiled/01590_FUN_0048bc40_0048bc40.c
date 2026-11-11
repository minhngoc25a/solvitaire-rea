// Function: FUN_0048bc40
// Entry: 0048bc40
// Size: 40 bytes
// Thunk: false
// External: false


uint __cdecl FUN_0048bc40(int param_1)

{
  if (*(int *)(param_1 + 0x78) != 0) {
    return *(uint *)(param_1 + 0x84) ^
           (*(int *)(param_1 + 0x80) << 8 ^ *(uint *)(param_1 + 0x84)) & 0xff00;
  }
  return *(uint *)(param_1 + 0x7c);
}


