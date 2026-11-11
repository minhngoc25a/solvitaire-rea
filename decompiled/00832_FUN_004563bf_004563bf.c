// Function: FUN_004563bf
// Entry: 004563bf
// Size: 29 bytes
// Thunk: false
// External: false


void __fastcall FUN_004563bf(void *param_1)

{
  if ((*(uint *)((int)param_1 + 0x1c) >> 5 & 1) != 0) {
    *(uint *)((int)param_1 + 0x1c) = *(uint *)((int)param_1 + 0x1c) | 0x80;
  }
  FUN_004577ae(param_1);
  return;
}


