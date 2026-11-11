// Function: FUN_00435110
// Entry: 00435110
// Size: 47 bytes
// Thunk: false
// External: false


void __cdecl FUN_00435110(int param_1,float param_2)

{
  float fVar1;
  
  if ((param_1 != 0) && (param_1 != -0x248)) {
    if (DAT_0050c314 <= param_2) {
      param_2 = DAT_0050c314;
    }
    fVar1 = DAT_0050c38c;
    if (DAT_0050c38c <= param_2) {
      fVar1 = param_2;
    }
    *(float *)(param_1 + 0x254) = fVar1;
  }
  return;
}


