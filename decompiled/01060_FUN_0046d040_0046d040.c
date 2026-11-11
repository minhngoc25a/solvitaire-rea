// Function: FUN_0046d040
// Entry: 0046d040
// Size: 114 bytes
// Thunk: false
// External: false


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl FUN_0046d040(int param_1)

{
  float10 fVar1;
  double dVar2;
  
  if (param_1 - 1U < 0xfe) {
    dVar2 = (double)param_1 / _DAT_0050c0a8;
    FUN_00483370(param_1);
    fVar1 = FUN_0046a200(dVar2 * _DAT_0050c0a8 + DAT_0050c088);
    return (int)fVar1;
  }
  return CONCAT31((int3)(param_1 - 1U >> 8),(char)param_1);
}


