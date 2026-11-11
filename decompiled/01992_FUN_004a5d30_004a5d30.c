// Function: FUN_004a5d30
// Entry: 004a5d30
// Size: 88 bytes
// Thunk: false
// External: false


byte __cdecl FUN_004a5d30(int param_1,byte param_2)

{
  byte bVar1;
  byte bVar2;
  
  if ((param_2 & 0xb) == 0) {
    if ((*(uint *)(param_1 + 0x74) & 0x8000) != 0) goto LAB_004a5d82;
    FUN_0046f610(param_1,"png_set_unknown_chunks now expects a valid location");
    param_2 = *(byte *)(param_1 + 0x74);
  }
  bVar2 = param_2 & 0xb;
  if ((param_2 & 0xb) != 0) {
    bVar1 = -bVar2 & bVar2;
    if (bVar2 != bVar1) {
      do {
        bVar2 = bVar2 & ~bVar1;
        bVar1 = -bVar2 & bVar2;
      } while (bVar2 != bVar1);
    }
    return bVar2;
  }
LAB_004a5d82:
                    /* WARNING: Subroutine does not return */
  FUN_0046f190(param_1);
}


