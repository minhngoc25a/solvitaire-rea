// Function: FUN_004d2934
// Entry: 004d2934
// Size: 72 bytes
// Thunk: false
// External: false


void FUN_004d2934(void)

{
  uint uVar1;
  int unaff_EBP;
  int unaff_EDI;
  
  if (*(int *)(unaff_EBP + -0x24) != 0) {
    if (unaff_EDI != 0) {
      uVar1 = *(uint *)(unaff_EBP + -0x1c);
      *(byte *)((&DAT_00544378)[(int)uVar1 >> 6] + 0x28 + (uVar1 & 0x3f) * 0x38) =
           *(byte *)((&DAT_00544378)[(int)uVar1 >> 6] + 0x28 + (uVar1 & 0x3f) * 0x38) & 0xfe;
    }
    ___acrt_lowio_unlock_fh(*(uint *)(unaff_EBP + -0x1c));
  }
  return;
}


