// Function: FUN_00435140
// Entry: 00435140
// Size: 40 bytes
// Thunk: false
// External: false


void __cdecl FUN_00435140(int param_1,float param_2)

{
  if ((param_1 != 0) && (0.0 < param_2)) {
    LOCK();
    *(float *)(param_1 + 0x27c) = param_2;
    UNLOCK();
  }
  return;
}


