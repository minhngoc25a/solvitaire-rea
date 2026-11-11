// Function: FUN_00494820
// Entry: 00494820
// Size: 79 bytes
// Thunk: false
// External: false


int __cdecl FUN_00494820(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0047f911(1,0x40);
  if (iVar1 == 0) {
    return 0;
  }
  *(int *)(iVar1 + 8) = param_1;
  *(undefined4 *)(iVar1 + 0x38) = 1;
  if (*(int *)(param_1 + 0x9c) == 0) {
    *(int *)(param_1 + 0x9c) = iVar1;
    *(int *)(param_1 + 0xa0) = iVar1;
    return iVar1;
  }
  *(int *)(*(int *)(param_1 + 0xa0) + 0xc) = iVar1;
  *(int *)(param_1 + 0xa0) = iVar1;
  return iVar1;
}


