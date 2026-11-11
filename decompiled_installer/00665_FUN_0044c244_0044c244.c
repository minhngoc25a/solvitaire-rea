// Function: FUN_0044c244
// Entry: 0044c244
// Size: 52 bytes
// Thunk: false
// External: false


uint FUN_0044c244(void)

{
  HWND hWnd;
  DWORD DVar1;
  uint uVar2;
  DWORD local_8;
  
  hWnd = GetForegroundWindow();
  uVar2 = 0;
  if (hWnd != (HWND)0x0) {
    GetWindowThreadProcessId(hWnd,&local_8);
    DVar1 = GetCurrentProcessId();
    uVar2 = (uint)hWnd & ~-(uint)(local_8 != DVar1);
  }
  return uVar2;
}


