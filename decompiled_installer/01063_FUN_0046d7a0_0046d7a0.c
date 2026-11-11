// Function: FUN_0046d7a0
// Entry: 0046d7a0
// Size: 234 bytes
// Thunk: false
// External: false


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl FUN_0046d7a0(int param_1,int *param_2,int param_3,int param_4)

{
  ushort uVar1;
  float10 fVar2;
  
  uVar1 = *(ushort *)((int)param_2 + 0x4a);
  if ((uVar1 & 1) == 0) {
    return true;
  }
  if ((param_3 != 0) && (*param_2 != 0)) {
    fVar2 = FUN_0046a200(((double)*param_2 * DAT_0050db20) / (double)param_3 + DAT_0050c088);
    if (((double)fVar2 <= DAT_0050c360) &&
       ((_DAT_0050db38 <= (double)fVar2 && ((int)fVar2 - 95000U < 0x2711)))) {
      return true;
    }
  }
  if (((uVar1 & 0x20) == 0) && (param_4 != 2)) {
    FUN_0046f6d0(param_1,"gamma value does not match libpng estimate",0);
    return param_4 == 1;
  }
  FUN_0046f6d0(param_1,"gamma value does not match sRGB",2);
  return param_4 == 2;
}


