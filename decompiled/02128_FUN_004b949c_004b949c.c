// Function: FUN_004b949c
// Entry: 004b949c
// Size: 76 bytes
// Thunk: false
// External: false


void __cdecl FUN_004b949c(int param_1,int param_2,int param_3,int param_4)

{
  if ((-1 < param_2) && (param_2 < *(int *)(param_1 + 0x80))) {
    if (param_3 < 0) {
      param_4 = param_4 + param_3;
      param_3 = 0;
    }
    if (*(int *)(param_1 + 0x84) < param_3 + param_4) {
      param_4 = *(int *)(param_1 + 0x84) - param_3;
    }
    if (0 < param_4) {
      FUN_004b901f(param_1,param_2,param_3,param_4);
    }
  }
  return;
}


