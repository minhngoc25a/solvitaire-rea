// Function: FUN_004c5a12
// Entry: 004c5a12
// Size: 63 bytes
// Thunk: false
// External: false


void FUN_004c5a12(void)

{
  char in_AL;
  uint unaff_ESI;
  
  if (in_AL == '\0') {
    *(byte *)((&DAT_00544378)[(int)unaff_ESI >> 6] + 0x28 + (unaff_ESI & 0x3f) * 0x38) =
         *(byte *)((&DAT_00544378)[(int)unaff_ESI >> 6] + 0x28 + (unaff_ESI & 0x3f) * 0x38) & 0xfe;
  }
  ___acrt_lowio_unlock_fh(unaff_ESI);
  return;
}


