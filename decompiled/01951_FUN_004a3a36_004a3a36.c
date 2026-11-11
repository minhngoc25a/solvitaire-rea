// Function: FUN_004a3a36
// Entry: 004a3a36
// Size: 94 bytes
// Thunk: false
// External: false


void __fastcall FUN_004a3a36(int param_1,int param_2,undefined4 *param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  int extraout_ECX;
  int extraout_EDX;
  undefined4 *puVar3;
  
  piVar1 = (int *)param_3[6];
  puVar3 = (undefined4 *)*param_3;
  if (piVar1 == (int *)0x0) {
    while (puVar3 != (undefined4 *)0x0) {
      puVar2 = (undefined4 *)*puVar3;
      FUN_00478c4a((int *)param_3[7],(int)puVar3);
      puVar3 = puVar2;
    }
  }
  else {
    while (puVar3 != (undefined4 *)0x0) {
      puVar2 = (undefined4 *)*puVar3;
      FUN_004a3931(param_1,param_2,(int)(puVar3 + 2),piVar1);
      FUN_00478c4a((int *)param_3[7],(int)puVar3);
      param_1 = extraout_ECX;
      param_2 = extraout_EDX;
      puVar3 = puVar2;
    }
  }
  param_3[2] = 0;
  *(undefined4 *)param_3[3] = 0;
  *param_3 = 0;
  param_3[1] = 0;
  param_3[4] = 0;
  *(undefined1 *)(param_3 + 0xc) = 1;
  return;
}


