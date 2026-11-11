// Function: FUN_004a327c
// Entry: 004a327c
// Size: 104 bytes
// Thunk: false
// External: false


undefined4 __cdecl FUN_004a327c(double param_1)

{
  uint uVar1;
  float10 fVar2;
  float10 fVar3;
  
  uVar1 = __fpclass(param_1);
  if ((uVar1 & 0x90) == 0) {
    fVar2 = __frnd(param_1);
    if ((float10)param_1 == fVar2) {
      fVar2 = (float10)param_1 * (float10)DAT_0050c088;
      fVar3 = __frnd((double)fVar2);
      if ((float10)(double)fVar2 != fVar3) {
        return 1;
      }
      return 2;
    }
  }
  return 0;
}


