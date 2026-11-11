// Function: FUN_00488fc0
// Entry: 00488fc0
// Size: 119 bytes
// Thunk: false
// External: false


longlong __cdecl FUN_00488fc0(int param_1,longlong param_2)

{
  longlong lVar1;
  
  if ((param_2 < 0x100000000) && (param_2 < 0)) {
    return -0x1e;
  }
  if (param_2 == 0) {
    return 0;
  }
  lVar1 = FUN_004890a0((uint)param_2,param_2._4_4_);
  if (lVar1 != param_2) {
    FUN_00487380(*(int *)(param_1 + 0x10),0xffffffff,0x52a828);
    lVar1 = -0x1e;
  }
  return lVar1;
}


