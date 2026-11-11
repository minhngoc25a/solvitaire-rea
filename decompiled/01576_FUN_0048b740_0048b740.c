// Function: FUN_0048b740
// Entry: 0048b740
// Size: 180 bytes
// Thunk: false
// External: false


void * __cdecl FUN_0048b740(void *param_1)

{
  if (param_1 == (void *)0x0) {
    return (void *)0x0;
  }
  FUN_0048d760((undefined4 *)((int)param_1 + 0x9c));
  FUN_0048d760((undefined4 *)((int)param_1 + 0xd8));
  FUN_0048d760((undefined4 *)((int)param_1 + 0x10c));
  FUN_0048d760((undefined4 *)((int)param_1 + 0x140));
  FUN_0048d760((undefined4 *)((int)param_1 + 0x1dc));
  FUN_0048d760((undefined4 *)((int)param_1 + 0x174));
  FUN_0048d760((undefined4 *)((int)param_1 + 0x1a8));
  FUN_0047d191(*(LPVOID *)((int)param_1 + 0x214));
  *(undefined4 *)((int)param_1 + 0x214) = 0;
  *(undefined4 *)((int)param_1 + 0x218) = 0;
  FUN_00491f40((int)param_1 + 0x2e4);
  FUN_00493920((int)param_1);
  FUN_00493ab0((int)param_1);
  FUN_0047d191(*(LPVOID *)((int)param_1 + 4));
  _memset(param_1,0,0x328);
  return param_1;
}


