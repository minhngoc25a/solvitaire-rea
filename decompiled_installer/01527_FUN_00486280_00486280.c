// Function: FUN_00486280
// Entry: 00486280
// Size: 24 bytes
// Thunk: false
// External: false


bool __cdecl FUN_00486280(int param_1)

{
  if (*(uint *)(param_1 + 0x34) < 0x100) {
    return *(int *)(param_1 + 0x38) < 1;
  }
  return true;
}


