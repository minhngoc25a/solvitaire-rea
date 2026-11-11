// Function: FUN_0049b670
// Entry: 0049b670
// Size: 82 bytes
// Thunk: false
// External: false


int __cdecl FUN_0049b670(int param_1,uint *param_2)

{
  int iVar1;
  
  iVar1 = FUN_0049b330(param_1);
  if (iVar1 == 0) {
    iVar1 = FUN_004ea2d0(*(undefined4 **)(param_1 + 0x24),*(int *)(param_1 + 0x20),param_2,
                         &LAB_0049b750,'\0');
    if (iVar1 != 0) {
      FUN_0049b1c0(param_1);
      return iVar1;
    }
    *(undefined1 *)(*(int *)(param_1 + 0x24) + 0x38) = 1;
    *(undefined1 *)(*(int *)(param_1 + 0x24) + 0x3b) = 1;
    iVar1 = 0;
  }
  return iVar1;
}


