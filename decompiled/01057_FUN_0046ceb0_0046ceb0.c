// Function: FUN_0046ceb0
// Entry: 0046ceb0
// Size: 127 bytes
// Thunk: false
// External: false


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl FUN_0046ceb0(int param_1,int param_2)

{
  float10 fVar1;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    fVar1 = FUN_0046a200((DAT_0050db30 / (double)param_1) / (double)param_2 + DAT_0050c088);
    if (((double)fVar1 <= DAT_0050c360) && (_DAT_0050db38 <= (double)fVar1)) {
      return (int)fVar1;
    }
  }
  return 0;
}


