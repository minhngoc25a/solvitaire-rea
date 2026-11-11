// Function: FUN_0041fc79
// Entry: 0041fc79
// Size: 112 bytes
// Thunk: false
// External: false


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0041fc79(void)

{
  HDC hdc;
  
  if (DAT_00535000 != 0) {
    hdc = GetDC((HWND)0x0);
    DAT_0053fba0 = GetDeviceCaps(hdc,0x58);
    DAT_0053fba4 = GetDeviceCaps(hdc,0x5a);
    _DAT_0053fb90 = (double)DAT_0053fba0 / _DAT_0050c0a0;
    _DAT_0053fb98 = (double)DAT_0053fba4 / _DAT_0050c0a0;
    ReleaseDC((HWND)0x0,hdc);
  }
  return;
}


