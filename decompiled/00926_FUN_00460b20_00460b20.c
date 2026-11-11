// Function: FUN_00460b20
// Entry: 00460b20
// Size: 99 bytes
// Thunk: false
// External: false


undefined4 __cdecl
FUN_00460b20(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_00482949(0x18);
  if (puVar1 == (undefined4 *)0x0) {
    return 0xffffffe2;
  }
  puVar1[1] = param_6;
  puVar1[2] = param_2;
  puVar1[3] = param_3;
  *puVar1 = 0;
  puVar1[4] = param_4;
  puVar1[5] = param_5;
  if ((*(int *)(param_1 + 0x38) != 0) && (*(undefined4 **)(param_1 + 0x3c) != (undefined4 *)0x0)) {
    **(undefined4 **)(param_1 + 0x3c) = puVar1;
    *(undefined4 **)(param_1 + 0x3c) = puVar1;
    return 0;
  }
  *(undefined4 **)(param_1 + 0x38) = puVar1;
  *(undefined4 **)(param_1 + 0x3c) = puVar1;
  return 0;
}


