// Function: FUN_0046bd70
// Entry: 0046bd70
// Size: 105 bytes
// Thunk: false
// External: false


void __cdecl FUN_0046bd70(int param_1,uint *param_2,uint param_3)

{
  uint uVar1;
  
  if ((*(uint *)(param_1 + 0x11c) & 0x20000000) == 0) {
    if ((*(uint *)(param_1 + 0x78) & 0x800) != 0) {
      return;
    }
  }
  else if ((*(uint *)(param_1 + 0x78) & 0x300) == 0x300) {
    return;
  }
  if (param_3 != 0) {
    uVar1 = *(uint *)(param_1 + 0x138);
    while (param_3 == 0) {
      uVar1 = thunk_FUN_0048b320(uVar1,param_2,0xffffffff);
      param_2 = (uint *)((int)param_2 + -1);
      param_3 = 1;
    }
    uVar1 = thunk_FUN_0048b320(uVar1,param_2,param_3);
    *(uint *)(param_1 + 0x138) = uVar1;
  }
  return;
}


