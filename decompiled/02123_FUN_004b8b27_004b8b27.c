// Function: FUN_004b8b27
// Entry: 004b8b27
// Size: 76 bytes
// Thunk: false
// External: false


void __cdecl FUN_004b8b27(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = param_3;
  if (*(int *)(param_1 + 0xe8) != 0) {
    iVar1 = (*(int *)(param_1 + 0x84) - param_3) + -1;
  }
  FUN_004b86f7(param_1,param_2,param_3,
               (byte *)(*(int *)(param_1 + 0xcc) * iVar1 + *(int *)(param_1 + 0xd4) * param_2 +
                       *(int *)(param_1 + 200)));
  return;
}


