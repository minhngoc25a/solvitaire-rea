// Function: FUN_0041fad7
// Entry: 0041fad7
// Size: 213 bytes
// Thunk: false
// External: false


void FUN_0041fad7(void)

{
  WNDCLASSW local_2c;
  
  _memset(&local_2c,0,0x28);
  local_2c.hInstance = DAT_00542260;
  local_2c.style = 8;
  local_2c.lpfnWndProc = (WNDPROC)&DAT_0041fa7e;
  local_2c.cbWndExtra = 0;
  local_2c.hIcon = (HICON)0x0;
  local_2c.hCursor = (HCURSOR)0x0;
  local_2c.hbrBackground = (HBRUSH)0x10;
  local_2c.lpszClassName = L"PostEventClass";
  RegisterClassW(&local_2c);
  DAT_00543a20 = CreateWindowExW(0,L"PostEventClass",(LPCWSTR)0x0,0xc00000,0,0,1,1,(HWND)0x0,
                                 (HMENU)0x0,DAT_00542260,(LPVOID)0x0);
  DAT_00543a1c = RegisterWindowMessageW(L"PB_UnlockQueueEventMessage");
  DAT_00543490 = GetCurrentThreadId();
  DAT_00543a24 = FUN_00423d36(0x28,&LAB_0041fa84,0x41facb);
  DAT_00543a18 = FUN_0046b020(8,7,(int *)0x0,&DAT_00543a18,0x400);
  if (DAT_00535004 != 0) {
    InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_005439c0);
  }
  return;
}


