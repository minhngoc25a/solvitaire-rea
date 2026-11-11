// Function: FUN_004c5600
// Entry: 004c5600
// Size: 49 bytes
// Thunk: false
// External: false


bool __cdecl FUN_004c5600(short *param_1)

{
  if ((*param_1 == 0x5a4d) && (*(int *)(*(int *)(param_1 + 0x1e) + (int)param_1) == 0x4550)) {
    return (short)((int *)(*(int *)(param_1 + 0x1e) + (int)param_1))[6] == 0x10b;
  }
  return false;
}


