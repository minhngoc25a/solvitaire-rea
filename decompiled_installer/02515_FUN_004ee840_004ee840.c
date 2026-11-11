// Function: FUN_004ee840
// Entry: 004ee840
// Size: 108 bytes
// Thunk: false
// External: false


void __cdecl FUN_004ee840(uint param_1,uint *param_2,uint param_3)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  
  for (; (param_3 != 0 && (((uint)param_2 & 0x3f) != 0)); param_2 = param_2 + 1) {
    uVar3 = *param_2;
    if (*param_2 < param_1) {
      uVar3 = param_1;
    }
    *param_2 = uVar3 - param_1;
    param_3 = param_3 - 1;
  }
  uVar3 = param_3 & 0xf;
  puVar2 = param_2 + (param_3 & 0xfffffff0);
  if (param_2 != puVar2) {
    if (DAT_00544ae0 == (code *)0x0) {
      FUN_004eeb20(param_1,(int)param_2,puVar2);
    }
    else {
      (*DAT_00544ae0)();
    }
  }
  for (; uVar3 != 0; uVar3 = uVar3 - 1) {
    uVar1 = *puVar2;
    if (*puVar2 < param_1) {
      uVar1 = param_1;
    }
    *puVar2 = uVar1 - param_1;
    puVar2 = puVar2 + 1;
  }
  return;
}


