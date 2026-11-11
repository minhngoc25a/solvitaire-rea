// Function: FUN_00418b60
// Entry: 00418b60
// Size: 116 bytes
// Thunk: false
// External: false


void FUN_00418b60(double param_1,int param_2)

{
  if (param_2 == 1) {
    FUN_0046a0e0(param_1);
    return;
  }
  if (param_2 != 2) {
    FUN_0046a200(param_1);
    return;
  }
  if (0.0 < param_1) {
    FUN_0046a200(param_1 + DAT_0050c088);
    return;
  }
  FUN_0046a0e0(param_1 - DAT_0050c088);
  return;
}


