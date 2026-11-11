// Function: FUN_004b7ed3
// Entry: 004b7ed3
// Size: 460 bytes
// Thunk: false
// External: false


int FUN_004b7ed3(undefined4 param_1,HGDIOBJ param_2)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  HDC hdc;
  HBITMAP h;
  HBRUSH hbr;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  int iVar8;
  void *local_90;
  int local_8c;
  HDC local_88;
  HBITMAP local_84;
  tagSIZE local_80;
  RECT local_78;
  BITMAPINFO local_68;
  tagTEXTMETRICW local_3c;
  
  iVar8 = 0;
  bVar3 = false;
  hdc = CreateCompatibleDC((HDC)0x0);
  if (hdc != (HDC)0x0) {
    local_88 = hdc;
    SelectObject(hdc,param_2);
    GetTextMetricsW(hdc,&local_3c);
    GetTextExtentPoint32W(hdc,L"H",1,&local_80);
    iVar1 = local_80.cx * 2;
    local_68.bmiHeader.biHeight = -local_80.cy;
    local_68.bmiHeader.biSizeImage = 0;
    local_68.bmiHeader.biPlanes = 1;
    local_68.bmiHeader.biBitCount = 0x18;
    local_68.bmiHeader.biXPelsPerMeter = 0;
    local_68.bmiHeader.biYPelsPerMeter = 0;
    local_68.bmiHeader.biClrUsed = 0;
    local_68.bmiHeader.biClrImportant = 0;
    local_68.bmiColors[0].rgbBlue = '\0';
    local_68.bmiColors[0].rgbGreen = '\0';
    local_68.bmiColors[0].rgbRed = '\0';
    local_68.bmiColors[0].rgbReserved = '\0';
    local_68.bmiHeader.biSize = 0x28;
    local_68.bmiHeader.biCompression = 0;
    local_68.bmiHeader.biWidth = iVar1;
    h = CreateDIBSection(hdc,&local_68,0,&local_90,(HANDLE)0x0,0);
    local_84 = h;
    if (h != (HBITMAP)0x0) {
      SelectObject(hdc,h);
      SetBkMode(hdc,2);
      SetTextAlign(hdc,0);
      SetBkColor(hdc,0);
      SetTextColor(hdc,0xffffff);
      local_78.left = 0;
      local_78.top = 0;
      local_78.bottom = local_80.cy;
      local_78.right = iVar1;
      hbr = GetStockObject(4);
      FillRect(hdc,&local_78,hbr);
      TextOutW(hdc,0,0,L"H",1);
      local_8c = FUN_0047a6f7(iVar1,0x18);
      iVar5 = iVar1 + -1;
      if (-1 < iVar5) {
        bVar2 = false;
        pbVar7 = (byte *)(iVar5 * 3 + (int)local_90);
        do {
          h = local_84;
          hdc = local_88;
          if (bVar2) break;
          iVar6 = 0;
          pbVar4 = pbVar7;
          if (0 < local_80.cy) {
            do {
              if (200 < *pbVar4) {
                iVar8 = (iVar5 - iVar1 / 2) + 2;
                if (iVar8 < 0) {
                  iVar8 = 0;
                }
                bVar3 = true;
                bVar2 = true;
                break;
              }
              iVar6 = iVar6 + 1;
              pbVar4 = pbVar4 + local_8c;
              bVar2 = bVar3;
            } while (iVar6 < local_80.cy);
          }
          pbVar7 = pbVar7 + -3;
          iVar5 = iVar5 + -1;
        } while (-1 < iVar5);
      }
    }
    DeleteDC(hdc);
    if (h != (HBITMAP)0x0) {
      DeleteObject(h);
    }
  }
  return iVar8;
}


