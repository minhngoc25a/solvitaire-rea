// Function: FUN_004d9090
// Entry: 004d9090
// Size: 88 bytes
// Thunk: false
// External: false


longlong __cdecl FUN_004d9090(int param_1,uint param_2)

{
  uint uVar1;
  undefined4 extraout_EDX;
  longlong lVar2;
  
  uVar1 = *(uint *)(*(int *)(param_1 + 0xa4) + 66000);
  if ((param_2 <= uVar1) && (uVar1 != 0)) {
    *(uint *)(*(int *)(param_1 + 0xa4) + 66000) = uVar1 - param_2;
    if (uVar1 - param_2 < 0x800) {
      lVar2 = FUN_004d8fd0(param_1);
      return lVar2;
    }
    return (ulonglong)param_2 << 0x20;
  }
  FUN_00487380(param_1,0xffffffff,0x52f2f8);
  return CONCAT44(extraout_EDX,0xffffffe2);
}


