// Function: FUN_0048cb90
// Entry: 0048cb90
// Size: 48 bytes
// Thunk: false
// External: false


void __cdecl FUN_0048cb90(int param_1,uint *param_2,uint param_3,DWORD param_4)

{
  int iVar1;
  
  iVar1 = 0x174;
  if ((*(byte *)(param_1 + 0x98) & 2) == 0) {
    iVar1 = 0x10c;
  }
  FUN_0048dd60((int *)(iVar1 + param_1),param_2,param_3,param_4);
  return;
}


