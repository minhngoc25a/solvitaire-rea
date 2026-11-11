// Function: FUN_004d2330
// Entry: 004d2330
// Size: 89 bytes
// Thunk: false
// External: false


void __cdecl FUN_004d2330(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x16bc) < 9) {
    if (*(int *)(param_1 + 0x16bc) < 1) goto LAB_004d2378;
    iVar3 = *(int *)(param_1 + 8);
    iVar2 = *(int *)(param_1 + 0x14);
    uVar1 = *(undefined1 *)(param_1 + 0x16b8);
  }
  else {
    *(undefined1 *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0x14)) =
         *(undefined1 *)(param_1 + 0x16b8);
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    iVar3 = *(int *)(param_1 + 0x14);
    iVar2 = *(int *)(param_1 + 8);
    uVar1 = *(undefined1 *)(param_1 + 0x16b9);
  }
  *(undefined1 *)(iVar3 + iVar2) = uVar1;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
LAB_004d2378:
  *(undefined2 *)(param_1 + 0x16b8) = 0;
  *(undefined4 *)(param_1 + 0x16bc) = 0;
  return;
}


