// Function: FUN_0048c820
// Entry: 0048c820
// Size: 54 bytes
// Thunk: false
// External: false


void __cdecl FUN_0048c820(int param_1,uint *param_2)

{
  uint uVar1;
  
  FUN_0048dca0((int *)(param_1 + 0x174),param_2);
  uVar1 = *(uint *)(param_1 + 0x98) | 2;
  if (param_2 == (uint *)0x0) {
    uVar1 = *(uint *)(param_1 + 0x98) & 0xfffffffd;
  }
  *(uint *)(param_1 + 0x98) = uVar1;
  return;
}


