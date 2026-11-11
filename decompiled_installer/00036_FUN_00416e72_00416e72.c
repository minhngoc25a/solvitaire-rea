// Function: FUN_00416e72
// Entry: 00416e72
// Size: 55 bytes
// Thunk: false
// External: false


void FUN_00416e72(void)

{
  INITCOMMONCONTROLSEX local_c;
  
  _memset(&local_c,0,8);
  local_c.dwSize = 8;
  local_c.dwICC = 0xb48;
  InitCommonControlsEx(&local_c);
  CoInitialize((LPVOID)0x0);
  return;
}


