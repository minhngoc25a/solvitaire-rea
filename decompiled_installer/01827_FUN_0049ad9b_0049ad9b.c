// Function: FUN_0049ad9b
// Entry: 0049ad9b
// Size: 66 bytes
// Thunk: false
// External: false


void FUN_0049ad9b(int *param_1)

{
  if (param_1[4] == 1) {
    FUN_0049a920(*param_1);
    FUN_0049a930(*param_1);
  }
  else {
    if (param_1[1] != 0) {
      FUN_0047d191((LPVOID)param_1[1]);
      param_1[1] = 0;
    }
    FUN_0049a920(*param_1);
    FUN_0049a930(*param_1);
  }
  return;
}


