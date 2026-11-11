// Function: __clearfp
// Entry: 004c6872
// Size: 222 bytes
// Thunk: false
// External: false


/* Library Function - Single Match
    __clearfp
   
   Library: Visual Studio 2019 Release */

uint __cdecl __clearfp(void)

{
  uint uVar1;
  uint uVar2;
  ushort in_FPUStatusWord;
  
  if (DAT_00544988 < 1) {
    uVar1 = 0;
    if ((in_FPUStatusWord & 0x3f) != 0) {
      uVar1 = (in_FPUStatusWord & 1) << 4;
      if ((in_FPUStatusWord & 4) != 0) {
        uVar1 = uVar1 | 8;
      }
      if ((in_FPUStatusWord & 8) != 0) {
        uVar1 = uVar1 | 4;
      }
      if ((in_FPUStatusWord & 0x10) != 0) {
        uVar1 = uVar1 | 2;
      }
      if ((in_FPUStatusWord & 0x20) != 0) {
        uVar1 = uVar1 | 1;
      }
      if ((in_FPUStatusWord & 2) != 0) {
        uVar1 = uVar1 | 0x80000;
      }
    }
  }
  else {
    uVar1 = 0;
    uVar2 = 0;
    if ((in_FPUStatusWord & 0x3f) != 0) {
      uVar2 = (in_FPUStatusWord & 1) << 4;
      if ((in_FPUStatusWord & 4) != 0) {
        uVar2 = uVar2 | 8;
      }
      if ((in_FPUStatusWord & 8) != 0) {
        uVar2 = uVar2 | 4;
      }
      if ((in_FPUStatusWord & 0x10) != 0) {
        uVar2 = uVar2 | 2;
      }
      if ((in_FPUStatusWord & 0x20) != 0) {
        uVar2 = uVar2 | 1;
      }
      if ((in_FPUStatusWord & 2) != 0) {
        uVar2 = uVar2 | 0x80000;
      }
    }
    if ((MXCSR & 0x3f) != 0) {
      uVar1 = (MXCSR & 1) << 4;
      if ((MXCSR & 4) != 0) {
        uVar1 = uVar1 | 8;
      }
      if ((MXCSR & 8) != 0) {
        uVar1 = uVar1 | 4;
      }
      if ((MXCSR & 0x10) != 0) {
        uVar1 = uVar1 | 2;
      }
      if ((MXCSR & 0x20) != 0) {
        uVar1 = uVar1 | 1;
      }
      if ((MXCSR & 2) != 0) {
        uVar1 = uVar1 | 0x80000;
      }
    }
    uVar1 = uVar1 | uVar2;
    MXCSR = MXCSR & 0xffffffc0;
  }
  return uVar1;
}


