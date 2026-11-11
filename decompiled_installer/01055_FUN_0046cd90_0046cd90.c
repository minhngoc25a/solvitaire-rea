// Function: FUN_0046cd90
// Entry: 0046cd90
// Size: 168 bytes
// Thunk: false
// External: false


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_0046cd90(int *param_1,int param_2,int param_3,int param_4)

{
  float10 fVar1;
  
  if (param_4 != 0) {
    if ((param_2 == 0) || (param_3 == 0)) {
      *param_1 = 0;
      return 1;
    }
    fVar1 = FUN_0046a200(((double)param_2 * (double)param_3) / (double)param_4 + DAT_0050c088);
    if (((double)fVar1 <= DAT_0050c360) && (_DAT_0050db38 <= (double)fVar1)) {
      *param_1 = (int)fVar1;
      return 1;
    }
  }
  return 0;
}


