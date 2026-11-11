// Function: FUN_00418f2b
// Entry: 00418f2b
// Size: 79 bytes
// Thunk: false
// External: false


void __fastcall FUN_00418f2b(int param_1,int param_2,short *param_3,int param_4,uint param_5)

{
  short *psVar1;
  uint uVar2;
  
  uVar2 = param_5 >> 1;
  FUN_00418c6b(param_1,param_2,param_3);
  *param_3 = 1;
  psVar1 = HeapAlloc(DAT_00542264,0,uVar2 * 2 + 2);
  *(short **)(param_3 + 4) = psVar1;
  if (psVar1 != (short *)0x0) {
    FUN_0044c204(psVar1,param_4,uVar2);
    *(undefined2 *)(*(int *)(param_3 + 4) + uVar2 * 2) = 0;
  }
  return;
}


