// Function: FUN_004be98d
// Entry: 004be98d
// Size: 417 bytes
// Thunk: false
// External: false


HBITMAP FUN_004be98d(HICON param_1)

{
  BOOL BVar1;
  int iVar2;
  HDC hdc;
  int iVar3;
  HBITMAP h;
  int iVar4;
  int iVar5;
  int iVar6;
  void *local_64;
  code *local_60;
  HBITMAP local_5c;
  ICONINFO local_58;
  undefined1 local_44 [4];
  int local_40;
  int local_3c;
  BITMAPINFO local_2c;
  
  h = (HBITMAP)0x0;
  BVar1 = GetIconInfo(param_1,&local_58);
  if (BVar1 != 0) {
    iVar2 = FUN_0042107f(local_58.hbmColor);
    if (iVar2 == 0) {
      hdc = CreateCompatibleDC((HDC)0x0);
      if (hdc != (HDC)0x0) {
        iVar2 = GetObjectW(local_58.hbmColor,0x18,local_44);
        if (iVar2 == 0x18) {
          _memset(&local_2c,0,0x2c);
          local_2c.bmiHeader.biWidth = local_40;
          local_2c.bmiHeader.biHeight = local_3c;
          local_2c.bmiHeader.biSize = 0x28;
          local_2c.bmiHeader.biPlanes = 1;
          local_2c.bmiHeader.biBitCount = 0x20;
          local_2c.bmiHeader.biCompression = 0;
          h = CreateDIBSection(hdc,&local_2c,0,&local_64,(HANDLE)0x0,0);
          local_5c = h;
          if (h != (HBITMAP)0x0) {
            SelectObject(hdc,h);
            DrawIconEx(hdc,0,0,param_1,local_40,local_3c,0,(HBRUSH)0x0,2);
            SelectObject(hdc,local_58.hbmMask);
            iVar2 = GetObjectW(local_58.hbmColor,0x18,local_44);
            if (iVar2 == 0x18) {
              iVar6 = 0;
              iVar2 = local_40 * 4;
              if (0 < local_3c) {
                local_60 = GetPixel_exref;
                iVar3 = local_3c;
                iVar5 = local_40;
                do {
                  iVar4 = 0;
                  param_1 = (HICON)((int)local_64 + ((iVar3 - iVar6) + -1) * iVar2 + 3);
                  if (0 < iVar5) {
                    do {
                      iVar3 = (*local_60)(hdc,iVar4,iVar6);
                      *(char *)&param_1->unused = (iVar3 != 0) + -1;
                      param_1 = param_1 + 1;
                      iVar4 = iVar4 + 1;
                      iVar3 = local_3c;
                      iVar5 = local_40;
                    } while (iVar4 < local_40);
                  }
                  iVar6 = iVar6 + 1;
                  h = local_5c;
                } while (iVar6 < iVar3);
              }
            }
          }
        }
        DeleteDC(hdc);
      }
      DeleteObject(local_58.hbmMask);
      DeleteObject(local_58.hbmColor);
    }
    else {
      DeleteObject(local_58.hbmMask);
      h = local_58.hbmColor;
    }
  }
  return h;
}


