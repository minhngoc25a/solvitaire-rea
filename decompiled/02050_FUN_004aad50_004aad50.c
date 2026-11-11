// Function: FUN_004aad50
// Entry: 004aad50
// Size: 37 bytes
// Thunk: false
// External: false


void __cdecl FUN_004aad50(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    (**(code **)(*(int *)(param_1 + 4) + 0x28))(param_1);
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}


