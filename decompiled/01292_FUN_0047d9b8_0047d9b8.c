// Function: FUN_0047d9b8
// Entry: 0047d9b8
// Size: 48 bytes
// Thunk: false
// External: false


WORD FUN_0047d9b8(void)

{
  WORD WVar1;
  _STARTUPINFOW local_48;
  
  _memset(&local_48,0,0x44);
  GetStartupInfoW(&local_48);
  WVar1 = 10;
  if (((byte)local_48.dwFlags & 1) != 0) {
    WVar1 = local_48.wShowWindow;
  }
  return WVar1;
}


