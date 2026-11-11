// Function: FUN_004804fb
// Entry: 004804fb
// Size: 27 bytes
// Thunk: false
// External: false


uint __cdecl FUN_004804fb(uint param_1)

{
  byte bVar1;
  
  bVar1 = (byte)DAT_0053fbc0 & 0x1f;
  return (param_1 ^ DAT_0053fbc0) >> bVar1 | (param_1 ^ DAT_0053fbc0) << 0x20 - bVar1;
}


