// Function: FUN_0049d6d0
// Entry: 0049d6d0
// Size: 90 bytes
// Thunk: false
// External: false


int __cdecl FUN_0049d6d0(int param_1,uint *param_2)

{
  int iVar1;
  
  iVar1 = FUN_0049b330(param_1);
  if (iVar1 == 0) {
    iVar1 = FUN_004ea2d0(*(undefined4 **)(param_1 + 0x24),*(int *)(param_1 + 0x20),param_2,
                         &LAB_0049d800,'\x01');
    if (iVar1 != 0) {
      FUN_0049b1c0(param_1);
      return iVar1;
    }
    *(undefined1 *)(*(int *)(param_1 + 0x24) + 0x38) = 1;
    *(undefined1 *)(*(int *)(param_1 + 0x24) + 0x39) = 1;
    *(undefined1 *)(*(int *)(param_1 + 0x24) + 0x3b) = 1;
    iVar1 = 0;
  }
  return iVar1;
}


