// Function: FUN_004d2a24
// Entry: 004d2a24
// Size: 70 bytes
// Thunk: false
// External: false


void FUN_004d2a24(void)

{
  int unaff_EBP;
  uint *unaff_ESI;
  int unaff_EDI;
  
  if (*(int *)(unaff_EBP + -0x20) != 0) {
    if (unaff_EDI != 0) {
      *(byte *)((&DAT_00544378)[(int)*unaff_ESI >> 6] + 0x28 + (*unaff_ESI & 0x3f) * 0x38) =
           *(byte *)((&DAT_00544378)[(int)*unaff_ESI >> 6] + 0x28 + (*unaff_ESI & 0x3f) * 0x38) &
           0xfe;
    }
    ___acrt_lowio_unlock_fh(*unaff_ESI);
  }
  return;
}


