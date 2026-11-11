// Function: FUN_0046cf50
// Entry: 0046cf50
// Size: 234 bytes
// Thunk: false
// External: false


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl FUN_0046cf50(int param_1,uint param_2)

{
  float10 fVar1;
  double dVar2;
  
  if (*(char *)(param_1 + 0x150) == '\b') {
    if (param_2 - 1 < 0xfe) {
      dVar2 = (double)(int)param_2 / _DAT_0050c0a8;
      FUN_00483370(param_2);
      fVar1 = FUN_0046a200(dVar2 * _DAT_0050c0a8 + DAT_0050c088);
      param_2 = (uint)fVar1;
    }
    return param_2 & 0xff;
  }
  if (param_2 - 1 < 0xfffe) {
    dVar2 = (double)(int)param_2 / _DAT_0050db18;
    FUN_00483370(param_2);
    fVar1 = FUN_0046a200(dVar2 * _DAT_0050db18 + DAT_0050c088);
    return (int)fVar1 & 0xffff;
  }
  return param_2 & 0xffff;
}


