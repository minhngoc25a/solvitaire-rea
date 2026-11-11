// Function: FUN_004aad10
// Entry: 004aad10
// Size: 57 bytes
// Thunk: false
// External: false


void __cdecl FUN_004aad10(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    (**(code **)(*(int *)(param_1 + 4) + 0x24))(param_1,1);
    if (*(char *)(param_1 + 0x10) != '\0') {
      *(undefined4 *)(param_1 + 0x14) = 200;
      *(undefined4 *)(param_1 + 0x114) = 0;
      return;
    }
    *(undefined4 *)(param_1 + 0x14) = 100;
  }
  return;
}


