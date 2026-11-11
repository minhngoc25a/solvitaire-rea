// Function: FUN_004eeb20
// Entry: 004eeb20
// Size: 132 bytes
// Thunk: false
// External: false


void __fastcall FUN_004eeb20(uint param_1,int param_2,uint *param_3)

{
  uint *puVar1;
  uint uVar2;
  uint *puVar3;
  
  puVar3 = (uint *)(param_2 + 8);
  do {
    uVar2 = puVar3[-2];
    if (puVar3[-2] < param_1) {
      uVar2 = param_1;
    }
    puVar3[-2] = uVar2 - param_1;
    uVar2 = puVar3[-1];
    if (puVar3[-1] < param_1) {
      uVar2 = param_1;
    }
    puVar3[-1] = uVar2 - param_1;
    uVar2 = *puVar3;
    if (*puVar3 < param_1) {
      uVar2 = param_1;
    }
    *puVar3 = uVar2 - param_1;
    uVar2 = puVar3[1];
    if (puVar3[1] < param_1) {
      uVar2 = param_1;
    }
    puVar3[1] = uVar2 - param_1;
    uVar2 = puVar3[2];
    if (puVar3[2] < param_1) {
      uVar2 = param_1;
    }
    puVar3[2] = uVar2 - param_1;
    uVar2 = puVar3[3];
    if (puVar3[3] < param_1) {
      uVar2 = param_1;
    }
    puVar3[3] = uVar2 - param_1;
    uVar2 = puVar3[4];
    if (puVar3[4] < param_1) {
      uVar2 = param_1;
    }
    puVar3[4] = uVar2 - param_1;
    uVar2 = puVar3[5];
    if (puVar3[5] < param_1) {
      uVar2 = param_1;
    }
    puVar3[5] = uVar2 - param_1;
    puVar1 = puVar3 + 6;
    puVar3 = puVar3 + 8;
  } while (puVar1 != param_3);
  return;
}


