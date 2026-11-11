// Function: thunk_FUN_004aad50
// Entry: 00475070
// Size: 5 bytes
// Thunk: true
// External: false


void __cdecl thunk_FUN_004aad50(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    (**(code **)(*(int *)(param_1 + 4) + 0x28))(param_1);
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}


