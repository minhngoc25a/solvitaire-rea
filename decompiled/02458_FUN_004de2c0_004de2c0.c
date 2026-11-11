// Function: FUN_004de2c0
// Entry: 004de2c0
// Size: 51 bytes
// Thunk: false
// External: false


void __cdecl FUN_004de2c0(undefined1 *param_1,undefined4 param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  
  *param_1 = (char)param_2;
  param_1[7] = (char)param_2;
  uVar3 = (undefined1)((uint)param_2 >> 8);
  param_1[1] = uVar3;
  uVar2 = (undefined1)((uint)param_2 >> 0x10);
  param_1[2] = uVar2;
  uVar1 = (undefined1)((uint)param_2 >> 0x18);
  param_1[3] = uVar1;
  param_1[4] = uVar1;
  param_1[5] = uVar2;
  param_1[6] = uVar3;
  return;
}


