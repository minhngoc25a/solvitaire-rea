// Function: FUN_0047a682
// Entry: 0047a682
// Size: 117 bytes
// Thunk: false
// External: false


HBITMAP FUN_0047a682(LONG param_1,LONG param_2,int param_3)

{
  HDC hdc;
  HBITMAP pHVar1;
  BITMAPINFO local_34;
  void *local_8;
  
  pHVar1 = (HBITMAP)0x0;
  hdc = CreateCompatibleDC((HDC)0x0);
  if (hdc != (HDC)0x0) {
    _memset(&local_34,0,0x2c);
    if (param_3 < 0x18) {
      param_3 = 0x18;
    }
    local_34.bmiHeader.biWidth = param_1;
    local_34.bmiHeader.biHeight = param_2;
    local_34.bmiHeader.biSize = 0x28;
    local_34.bmiHeader.biPlanes = 1;
    local_34.bmiHeader.biBitCount = (WORD)param_3;
    local_34.bmiHeader.biCompression = 0;
    pHVar1 = CreateDIBSection(hdc,&local_34,0,&local_8,(HANDLE)0x0,0);
    DeleteDC(hdc);
  }
  return pHVar1;
}


