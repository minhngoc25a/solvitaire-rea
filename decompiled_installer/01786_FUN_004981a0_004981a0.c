// Function: FUN_004981a0
// Entry: 004981a0
// Size: 114 bytes
// Thunk: false
// External: false


void __cdecl FUN_004981a0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = param_2[1];
  param_1[6] = *param_2;
  param_1[7] = uVar1;
  uVar1 = param_2[5];
  param_1[10] = param_2[4];
  param_1[0xb] = uVar1;
  uVar1 = param_2[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar1;
  *(undefined2 *)(param_1 + 3) = *(undefined2 *)(param_2 + 0xb);
  *(ushort *)(param_1 + 1) = (ushort)((uint)param_2[0xc] >> 0x10) ^ (ushort)param_2[0xc];
  *(undefined2 *)((int)param_1 + 6) = *(undefined2 *)(param_2 + 0xe);
  *(undefined2 *)(param_1 + 2) = *(undefined2 *)(param_2 + 0xf);
  param_1[5] = param_2[0x10];
  *(undefined2 *)((int)param_1 + 10) = *(undefined2 *)(param_2 + 0x12);
  *param_1 = param_2[0x13];
  param_1[4] = param_2[0x14];
  return;
}


