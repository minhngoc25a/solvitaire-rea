// Function: FUN_00458f31
// Entry: 00458f31
// Size: 25 bytes
// Thunk: false
// External: false


uint __fastcall FUN_00458f31(int param_1)

{
  if (*(int *)(param_1 + 0x404) == 0) {
    return 0x100;
  }
  return *(uint *)(param_1 + 0x400) >> 2;
}


