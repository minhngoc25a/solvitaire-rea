// Function: FUN_0048cbd0
// Entry: 0048cbd0
// Size: 61 bytes
// Thunk: false
// External: false


void __cdecl FUN_0048cbd0(int param_1,uint *param_2,uint param_3,DWORD param_4)

{
  int iVar1;
  
  iVar1 = FUN_0048dd60((int *)(param_1 + 0x174),param_2,param_3,param_4);
  if ((param_2 != (uint *)0x0) && (iVar1 == 0)) {
    *(uint *)(param_1 + 0x98) = *(uint *)(param_1 + 0x98) | 2;
    return;
  }
  *(uint *)(param_1 + 0x98) = *(uint *)(param_1 + 0x98) & 0xfffffffd;
  return;
}


