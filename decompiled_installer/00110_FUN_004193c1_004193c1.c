// Function: FUN_004193c1
// Entry: 004193c1
// Size: 38 bytes
// Thunk: false
// External: false


short * __fastcall FUN_004193c1(int param_1,int param_2,short *param_3)

{
  undefined4 *puVar1;
  
  FUN_00418c6b(param_1,param_2,param_3);
  *param_3 = 4;
  puVar1 = FUN_00420f7e(0x10,(undefined4 *)0x0,(int *)0x0,0);
  *(undefined4 **)(param_3 + 4) = puVar1;
  return param_3;
}


