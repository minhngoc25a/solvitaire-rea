// Function: FUN_0046ce40
// Entry: 0046ce40
// Size: 103 bytes
// Thunk: false
// External: false


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl FUN_0046ce40(int param_1)

{
  float10 fVar1;
  
  fVar1 = FUN_0046a200(DAT_0050db28 / (double)param_1 + DAT_0050c088);
  if (((double)fVar1 <= DAT_0050c360) && (_DAT_0050db38 <= (double)fVar1)) {
    return (int)fVar1;
  }
  return 0;
}


