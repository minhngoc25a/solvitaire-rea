// Function: FUN_004ee800
// Entry: 004ee800
// Size: 57 bytes
// Thunk: false
// External: false


void __cdecl FUN_004ee800(int param_1,int param_2)

{
  (**(code **)(param_2 + 4))(param_2,*(undefined4 *)(param_1 + 0x24));
  *(undefined4 *)(param_1 + 0x24) = 0;
  if (*(char *)(param_1 + 0x1f) == '\0') {
    (**(code **)(param_2 + 4))(param_2,*(undefined4 *)(param_1 + 0x34));
    *(undefined4 *)(param_1 + 0x34) = 0;
  }
  return;
}


