// Function: FUN_004a1edc
// Entry: 004a1edc
// Size: 74 bytes
// Thunk: false
// External: false


void __cdecl FUN_004a1edc(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x10);
  piVar1 = (int *)(param_1 + 0xc);
  *(int *)(param_1 + 0x10) = iVar2 + -1;
  if (iVar2 == 0) {
    **(undefined1 **)(param_1 + 8) = *(undefined1 *)piVar1;
    *(undefined1 *)(*(int *)(param_1 + 8) + 1) = *(undefined1 *)(param_1 + 0xd);
    *(int *)(param_1 + 8) = *(int *)(param_1 + 4);
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 2;
    *(undefined4 *)(param_1 + 0x10) = 0xf;
  }
  *piVar1 = (uint)(param_2 != 0) + *piVar1 * 2;
  return;
}


