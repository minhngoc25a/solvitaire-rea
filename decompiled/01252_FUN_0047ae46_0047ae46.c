// Function: FUN_0047ae46
// Entry: 0047ae46
// Size: 426 bytes
// Thunk: false
// External: false


HBITMAP FUN_0047ae46(HANDLE param_1,int param_2,int param_3)

{
  HDC hdc;
  HDC hdc_00;
  int iVar1;
  int iVar2;
  HBITMAP h;
  int iVar3;
  void *local_48;
  undefined1 local_44 [4];
  int local_40;
  int local_3c;
  ushort local_32;
  BITMAPINFO local_2c;
  
  h = (HBITMAP)0x0;
  hdc = CreateCompatibleDC((HDC)0x0);
  if (hdc != (HDC)0x0) {
    SelectObject(hdc,param_1);
    hdc_00 = CreateCompatibleDC((HDC)0x0);
    if (hdc_00 != (HDC)0x0) {
      iVar1 = GetObjectW(param_1,0x18,local_44);
      if (iVar1 == 0x18) {
        if (param_2 == -1) {
          param_2 = local_40;
          param_3 = local_3c;
        }
        _memset(&local_2c,0,0x2c);
        local_2c.bmiHeader.biWidth = param_2;
        local_2c.bmiHeader.biHeight = param_3;
        local_2c.bmiHeader.biSize = 0x28;
        local_2c.bmiHeader.biPlanes = 1;
        local_2c.bmiHeader.biCompression = 0;
        iVar1 = (-(uint)(0x18 < local_32) & 8) + 0x18;
        local_2c.bmiHeader.biBitCount = (WORD)iVar1;
        h = CreateDIBSection(hdc_00,&local_2c,0,&local_48,(HANDLE)0x0,0);
        if (h != (HBITMAP)0x0) {
          SelectObject(hdc_00,h);
          if ((param_2 == local_40) && (param_3 == local_3c)) {
            BitBlt(hdc_00,0,0,local_40,local_3c,hdc,0,0,0xcc0020);
          }
          else if ((iVar1 == 0x18) && ((0x50 < local_40 && (0x50 < local_3c)))) {
            SetStretchBltMode(hdc_00,4);
            SetBrushOrgEx(hdc_00,0,0,(LPPOINT)0x0);
            StretchBlt(hdc_00,0,0,param_2,param_3,hdc,0,0,local_40,local_3c,0xcc0020);
          }
          else {
            iVar3 = iVar1;
            iVar2 = FUN_0047a6f7(local_40,iVar1);
            iVar1 = FUN_0047a6f7(param_2,iVar1);
            FUN_0042165b(h,param_2,param_3,iVar1,param_1,local_40,local_3c,iVar2,iVar3);
          }
        }
      }
      DeleteDC(hdc_00);
    }
    DeleteDC(hdc);
  }
  return h;
}


