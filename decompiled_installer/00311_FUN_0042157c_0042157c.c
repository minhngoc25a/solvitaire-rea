// Function: FUN_0042157c
// Entry: 0042157c
// Size: 223 bytes
// Thunk: false
// External: false


LPVOID FUN_0042157c(HBITMAP param_1,undefined4 *param_2)

{
  int iVar1;
  HDC hdc;
  LPVOID lpvBits;
  undefined1 local_44 [4];
  int local_40;
  UINT local_3c;
  ushort local_32;
  LPVOID local_30;
  tagBITMAPINFO local_2c;
  
  lpvBits = (LPVOID)0x0;
  iVar1 = GetObjectW(param_1,0x18,local_44);
  if (iVar1 != 0) {
    if (local_30 == (LPVOID)0x0) {
      *param_2 = 1;
      hdc = CreateCompatibleDC((HDC)0x0);
      if (hdc != (HDC)0x0) {
        iVar1 = FUN_0047a6f7(local_40,(uint)local_32);
        lpvBits = HeapAlloc(DAT_00542264,0,iVar1 * local_3c);
        if (lpvBits != (LPVOID)0x0) {
          local_2c.bmiHeader.biBitCount = 0x20;
          local_2c.bmiHeader.biWidth = local_40;
          local_2c.bmiHeader.biHeight = -local_3c;
          local_2c.bmiHeader.biSize = 0x28;
          local_2c.bmiHeader.biPlanes = 1;
          local_2c.bmiHeader.biCompression = 0;
          iVar1 = GetDIBits(hdc,param_1,0,local_3c,lpvBits,&local_2c,0);
          if (iVar1 == 0) {
            HeapFree(DAT_00542264,0,lpvBits);
            lpvBits = (LPVOID)0x0;
          }
        }
        DeleteDC(hdc);
      }
    }
    else {
      *param_2 = 0;
      lpvBits = local_30;
    }
  }
  return lpvBits;
}


