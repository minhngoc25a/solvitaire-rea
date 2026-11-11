// Function: FUN_00455599
// Entry: 00455599
// Size: 29 bytes
// Thunk: false
// External: false


void __fastcall FUN_00455599(void *param_1)

{
  if ((*(uint *)((int)param_1 + 0x1c) >> 5 & 1) != 0) {
    *(uint *)((int)param_1 + 0x1c) = *(uint *)((int)param_1 + 0x1c) | 0x80;
  }
  FUN_00457c5f(param_1);
  return;
}


