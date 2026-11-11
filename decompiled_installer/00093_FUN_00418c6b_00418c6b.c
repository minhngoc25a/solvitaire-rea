// Function: FUN_00418c6b
// Entry: 00418c6b
// Size: 143 bytes
// Thunk: false
// External: false


void __fastcall FUN_00418c6b(int param_1,int param_2,short *param_3)

{
  undefined1 uVar1;
  short sVar2;
  short *psVar3;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_EDX;
  int extraout_EDX_00;
  undefined4 *puVar4;
  
  sVar2 = *param_3;
  uVar1 = *(undefined1 *)((int)param_3 + 3);
  if (sVar2 == 1) {
    if (*(int *)(param_3 + 4) != 0) {
      HeapFree(DAT_00542264,0,*(LPVOID *)(param_3 + 4));
    }
  }
  else if (sVar2 == 4) {
    for (puVar4 = (undefined4 *)**(undefined4 **)(param_3 + 4); puVar4 != (undefined4 *)0x0;
        puVar4 = (undefined4 *)*puVar4) {
      FUN_00418c6b(param_1,param_2,(short *)(puVar4 + 2));
      param_1 = extraout_ECX_00;
      param_2 = extraout_EDX_00;
    }
    FUN_0046a4ef(param_1,param_2,*(undefined4 **)(param_3 + 4));
  }
  else if (sVar2 == 5) {
    FUN_0046a600(*(undefined4 **)(param_3 + 4));
    while( true ) {
      psVar3 = (short *)FUN_0046a560(*(int **)(param_3 + 4));
      if (psVar3 == (short *)0x0) break;
      FUN_00418c6b(extraout_ECX,extraout_EDX,psVar3);
    }
    FUN_0046a620(*(int **)(param_3 + 4));
  }
  _memset(param_3,0,0x10);
  *(undefined1 *)((int)param_3 + 3) = uVar1;
  return;
}


