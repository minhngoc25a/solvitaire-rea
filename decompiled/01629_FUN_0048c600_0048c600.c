// Function: FUN_0048c600
// Entry: 0048c600
// Size: 40 bytes
// Thunk: false
// External: false


void __cdecl FUN_0048c600(int param_1,uint *param_2)

{
  int iVar1;
  
  iVar1 = 0x174;
  if ((*(byte *)(param_1 + 0x98) & 2) == 0) {
    iVar1 = 0x10c;
  }
  FUN_0048dca0((int *)(iVar1 + param_1),param_2);
  return;
}


