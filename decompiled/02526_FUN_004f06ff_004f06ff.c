// Function: FUN_004f06ff
// Entry: 004f06ff
// Size: 29 bytes
// Thunk: false
// External: false


bool FUN_004f06ff(void)

{
  byte bVar1;
  
  bVar1 = (byte)DAT_0053fbc0 & 0x1f;
  return (DAT_00544ae4 ^ DAT_0053fbc0) >> bVar1 != 0 ||
         (DAT_00544ae4 ^ DAT_0053fbc0) << 0x20 - bVar1 != 0;
}


