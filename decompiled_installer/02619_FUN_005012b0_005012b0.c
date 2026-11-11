// Function: FUN_005012b0
// Entry: 005012b0
// Size: 79 bytes
// Thunk: false
// External: false


void FUN_005012b0(void)

{
  ushort in_FPUControlWord;
  float10 in_ST0;
  double dVar1;
  
  if ((DAT_005449b8 != 0) && ((MXCSR & 0x7f80) == 0x1f80 && (in_FPUControlWord & 0x7f) == 0x7f)) {
    FUN_00507c70();
    return;
  }
  dVar1 = (double)in_ST0;
  FUN_004a3178(SUB84(dVar1,0),(uint)((ulonglong)dVar1 >> 0x20));
  FUN_00501308(SUB84(dVar1,0),(uint)((ulonglong)dVar1 >> 0x20));
  return;
}


