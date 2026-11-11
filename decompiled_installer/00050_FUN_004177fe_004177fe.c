// Function: FUN_004177fe
// Entry: 004177fe
// Size: 98 bytes
// Thunk: false
// External: false


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

HDC FUN_004177fe(void)

{
  BOOL BVar1;
  HDC pHVar2;
  WCHAR local_120c [2306];
  DWORD local_8;
  
  local_8 = 0x1202;
  pHVar2 = (HDC)0x0;
  BVar1 = GetDefaultPrinterW(local_120c,&local_8);
  if (BVar1 != 0) {
    if (DAT_00543790 != (HDC)0x0) {
      DeleteDC(DAT_00543790);
      DAT_00543790 = (HDC)0x0;
    }
    pHVar2 = CreateDCW(L"WINSPOOL",local_120c,(LPCWSTR)0x0,(DEVMODEW *)0x0);
    DAT_00543790 = pHVar2;
  }
  return pHVar2;
}


