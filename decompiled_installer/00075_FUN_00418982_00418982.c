// Function: FUN_00418982
// Entry: 00418982
// Size: 50 bytes
// Thunk: false
// External: false


void FUN_00418982(uint param_1,undefined4 param_2)

{
  uint *puVar1;
  
  puVar1 = FUN_00418903(param_1);
  if (puVar1 == (uint *)0x0) {
    (&DAT_00542938)[DAT_00542934 * 2] = param_1;
    *(undefined4 *)(&DAT_0054293c + DAT_00542934 * 8) = param_2;
    DAT_00542934 = DAT_00542934 + 1;
  }
  return;
}


