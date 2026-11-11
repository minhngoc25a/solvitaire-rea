// Function: FUN_0049ae11
// Entry: 0049ae11
// Size: 42 bytes
// Thunk: false
// External: false


uint FUN_0049ae11(int param_1)

{
  uint uVar1;
  
  if (*(int *)(param_1 + 0x14) == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = FUN_0048bcc0(*(int *)(param_1 + 0x14));
    uVar1 = (uint)((short)uVar1 == 0x4000);
  }
  return uVar1;
}


