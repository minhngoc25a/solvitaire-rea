// Function: FUN_004741b0
// Entry: 004741b0
// Size: 72 bytes
// Thunk: false
// External: false


void __cdecl FUN_004741b0(int param_1,undefined4 param_2,undefined1 *param_3)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x60) = param_2;
    if (param_3 == (undefined1 *)0x0) {
      param_3 = &LAB_00474200;
    }
    *(undefined1 **)(param_1 + 0x5c) = param_3;
    if (*(int *)(param_1 + 0x58) != 0) {
      *(undefined4 *)(param_1 + 0x58) = 0;
      FUN_0046f1c0(param_1,"Can\'t set both read_data_fn and write_data_fn in the same structure");
    }
    *(undefined4 *)(param_1 + 0x178) = 0;
  }
  return;
}


