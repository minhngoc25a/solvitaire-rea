// Function: FUN_004ff00e
// Entry: 004ff00e
// Size: 104 bytes
// Thunk: false
// External: false


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_004ff00e(void *this,undefined8 param_1,double param_2)

{
  undefined1 auVar1 [10];
  float10 fVar2;
  longlong lVar3;
  
  if (param_2 < 0.0) {
    return 0;
  }
  auVar1 = FUN_005077f0(this,SUB84(param_2 / _DAT_0050c0a8,0),
                        (uint)((ulonglong)(param_2 / _DAT_0050c0a8) >> 0x20),(int)param_1,
                        (uint)((ulonglong)param_1 >> 0x20));
  fVar2 = FUN_0046a200((double)((((float10)auVar1 * (float10)_DAT_0050c0a8) / (float10)_DAT_0050c0a8
                                ) * (float10)_DAT_00522398));
  if ((float10)_DAT_0050c0a8 < fVar2) {
    return 0xff;
  }
  lVar3 = FUN_00469de0();
  return (int)lVar3;
}


