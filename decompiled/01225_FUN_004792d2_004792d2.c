// Function: FUN_004792d2
// Entry: 004792d2
// Size: 154 bytes
// Thunk: false
// External: false


void __cdecl FUN_004792d2(int *param_1,int param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = param_1[4] + param_3 * 8;
  uVar2 = (uint)param_1[4] >> 3 & 0x3f;
  param_1[4] = uVar1;
  if (uVar1 < param_3 * 8) {
    param_1[5] = param_1[5] + 1;
  }
  param_1[5] = param_1[5] + (param_3 >> 0x1d);
  uVar1 = -uVar2 + 0x40;
  if (param_3 < uVar1) {
    uVar1 = 0;
  }
  else {
    FUN_00479b2b((undefined1 *)((int)param_1 + uVar2 + 0x18),param_2,uVar1);
    FUN_004793d0(param_1,(int)(param_1 + 6));
    for (uVar2 = -uVar2 + 0x7f; uVar2 < param_3; uVar2 = uVar2 + 0x40) {
      FUN_004793d0(param_1,param_2 + -0x3f + uVar2);
      uVar1 = uVar1 + 0x40;
    }
    uVar2 = 0;
  }
  FUN_00479b2b((undefined1 *)((int)param_1 + uVar2 + 0x18),param_2 + uVar1,param_3 - uVar1);
  return;
}


