// Function: FUN_004d2390
// Entry: 004d2390
// Size: 117 bytes
// Thunk: false
// External: false


void __cdecl FUN_004d2390(int param_1)

{
  if (*(int *)(param_1 + 0x16bc) == 0x10) {
    *(undefined1 *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0x14)) =
         *(undefined1 *)(param_1 + 0x16b8);
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    *(undefined1 *)(*(int *)(param_1 + 0x14) + *(int *)(param_1 + 8)) =
         *(undefined1 *)(param_1 + 0x16b9);
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    *(undefined4 *)(param_1 + 0x16bc) = 0;
    *(undefined2 *)(param_1 + 0x16b8) = 0;
    return;
  }
  if (7 < *(int *)(param_1 + 0x16bc)) {
    *(undefined1 *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0x14)) =
         *(undefined1 *)(param_1 + 0x16b8);
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    *(int *)(param_1 + 0x16bc) = *(int *)(param_1 + 0x16bc) + -8;
    *(ushort *)(param_1 + 0x16b8) = (ushort)*(byte *)(param_1 + 0x16b9);
  }
  return;
}


