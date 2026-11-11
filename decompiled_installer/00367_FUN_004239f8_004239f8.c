// Function: FUN_004239f8
// Entry: 004239f8
// Size: 77 bytes
// Thunk: false
// External: false


void FUN_004239f8(void)

{
  HDC hdc;
  
  DAT_00543570 = FUN_004259b4(4,0x10,&LAB_004239ab);
  hdc = CreateDCW(L"DISPLAY",(LPCWSTR)0x0,(LPCWSTR)0x0,(DEVMODEW *)0x0);
  if (hdc != (HDC)0x0) {
    DAT_00543574 = GetDeviceCaps(hdc,0x5a);
    DeleteDC(hdc);
    return;
  }
  DAT_00543574 = 0x60;
  return;
}


