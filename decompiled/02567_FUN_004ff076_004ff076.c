// Function: FUN_004ff076
// Entry: 004ff076
// Size: 74 bytes
// Thunk: false
// External: false


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_004ff076(double param_1)

{
  float10 fVar1;
  longlong lVar2;
  
  if (param_1 < 0.0) {
    return 0;
  }
  fVar1 = FUN_0046a200((param_1 / _DAT_0050c0a8) * _DAT_00522398);
  if ((float10)_DAT_0050c0a8 < fVar1) {
    return 0xff;
  }
  lVar2 = FUN_00469de0();
  return (int)lVar2;
}


