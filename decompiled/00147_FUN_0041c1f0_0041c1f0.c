// Function: FUN_0041c1f0
// Entry: 0041c1f0
// Size: 164 bytes
// Thunk: false
// External: false


void FUN_0041c1f0(void)

{
  BOOL BVar1;
  undefined4 local_200 [102];
  LOGFONTW local_68;
  INITCOMMONCONTROLSEX local_c;
  
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_00542fc0);
  DAT_00542fa8 = GetStockObject(0x11);
  local_200[0] = 500;
  BVar1 = SystemParametersInfoW(0x29,500,local_200,0);
  if (BVar1 != 0) {
    DAT_00542fa8 = CreateFontIndirectW(&local_68);
  }
  DAT_00542fa0 = FUN_004259b4(0x20,0x32,FUN_0041c17b);
  DAT_00542fa4 = FUN_00423d36(0x20,&LAB_0041c1ad,0x41c1da);
  _memset(&local_c,0,8);
  local_c.dwSize = 8;
  local_c.dwICC = 0xb48;
  InitCommonControlsEx(&local_c);
  return;
}


