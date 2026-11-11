// Function: FUN_0048d2b0
// Entry: 0048d2b0
// Size: 18 bytes
// Thunk: false
// External: false


undefined4 __cdecl FUN_0048d2b0(int param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) != 0) {
    return *(undefined4 *)(param_1 + 8);
  }
  return *(undefined4 *)(param_1 + 4);
}


