// Function: FUN_00469e90
// Entry: 00469e90
// Size: 84 bytes
// Thunk: false
// External: false


void FUN_00469e90(void)

{
  ushort in_FPUControlWord;
  float10 in_ST0;
  float10 in_ST1;
  
  if ((DAT_005449b8 != 0) && ((MXCSR & 0x7f80) == 0x1f80 && (in_FPUControlWord & 0x7f) == 0x7f)) {
    FUN_004a2100();
    return;
  }
  FUN_00469eed(SUB84((double)in_ST1,0),(uint)((ulonglong)(double)in_ST1 >> 0x20),
               SUB84((double)in_ST0,0),(uint)((ulonglong)(double)in_ST0 >> 0x20));
  return;
}


