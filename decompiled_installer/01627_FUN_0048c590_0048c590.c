// Function: FUN_0048c590
// Entry: 0048c590
// Size: 54 bytes
// Thunk: false
// External: false


void __cdecl FUN_0048c590(int param_1,uint *param_2)

{
  uint uVar1;
  
  FUN_0048dd00(param_1 + 0x10c,param_2);
  uVar1 = *(uint *)(param_1 + 0x98) | 1;
  if (param_2 == (uint *)0x0) {
    uVar1 = *(uint *)(param_1 + 0x98) & 0xfffffffe;
  }
  *(uint *)(param_1 + 0x98) = uVar1;
  return;
}


