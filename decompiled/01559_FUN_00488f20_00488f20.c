// Function: FUN_00488f20
// Entry: 00488f20
// Size: 148 bytes
// Thunk: false
// External: false


longlong __cdecl FUN_00488f20(int param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  
  if ((param_2 < 0x100000000) && (param_2 < 0)) {
    return -0x1e;
  }
  if (param_2 == 0) {
    return 0;
  }
  iVar1 = *(int *)(param_1 + 0x168);
  lVar2 = FUN_004890a0((uint)param_2,param_2._4_4_);
  if (lVar2 != param_2) {
    FUN_00487380(*(int *)(iVar1 + 0x10),0xffffffff,0x52a828);
    lVar2 = -0x1e;
  }
  return lVar2;
}


