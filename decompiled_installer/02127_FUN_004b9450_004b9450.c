// Function: FUN_004b9450
// Entry: 004b9450
// Size: 76 bytes
// Thunk: false
// External: false


void __cdecl FUN_004b9450(int param_1,int param_2,int param_3,int param_4)

{
  if ((-1 < param_3) && (param_3 < *(int *)(param_1 + 0x84))) {
    if (param_2 < 0) {
      param_4 = param_4 + param_2;
      param_2 = 0;
    }
    if (*(int *)(param_1 + 0x80) < param_2 + param_4) {
      param_4 = *(int *)(param_1 + 0x80) - param_2;
    }
    if (0 < param_4) {
      FUN_004b8ba3(param_1,param_2,param_3,param_4);
    }
  }
  return;
}


