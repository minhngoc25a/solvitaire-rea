// Function: FUN_00482a15
// Entry: 00482a15
// Size: 23 bytes
// Thunk: false
// External: false


void FUN_00482a15(void)

{
  int unaff_EBP;
  int unaff_ESI;
  
  if (unaff_ESI == 0) {
    __acrt_stdio_free_stream(*(undefined4 *)(unaff_EBP + -0x1c));
  }
  __unlock_file(*(FILE **)(unaff_EBP + -0x1c));
  return;
}


