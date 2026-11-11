// Function: FUN_004193e7
// Entry: 004193e7
// Size: 54 bytes
// Thunk: false
// External: false


short * __fastcall FUN_004193e7(int param_1,int param_2,short *param_3)

{
  undefined4 *puVar1;
  
  FUN_00418c6b(param_1,param_2,param_3);
  *param_3 = 5;
  puVar1 = FUN_0046b020(0x10,7,(int *)0x0,(undefined4 *)(param_3 + 4),0x40);
  *(undefined4 **)(param_3 + 4) = puVar1;
  if (*(char *)((int)param_3 + 3) != '\0') {
    puVar1[0xb] = puVar1[0xb] | 1;
  }
  return param_3;
}


