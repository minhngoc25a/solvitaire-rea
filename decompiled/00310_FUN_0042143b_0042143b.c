// Function: FUN_0042143b
// Entry: 0042143b
// Size: 321 bytes
// Thunk: false
// External: false


HBITMAP FUN_0042143b(HBITMAP param_1)

{
  HBITMAP h;
  HDC hdc;
  LPVOID lpMem;
  int iVar1;
  HBRUSH hbr;
  int iVar2;
  int iVar3;
  int y;
  int x;
  uint *puVar4;
  COLORREF color;
  int local_2c;
  RECT local_28;
  undefined1 local_18 [4];
  int local_14;
  int local_10;
  ushort local_6;
  
  GetObjectW(param_1,0x18,local_18);
  h = CreateBitmap(local_14,local_10,1,1,(void *)0x0);
  if ((h != (HBITMAP)0x0) && (hdc = CreateCompatibleDC((HDC)0x0), hdc != (HDC)0x0)) {
    SelectObject(hdc,h);
    if ((local_6 == 0x20) && (lpMem = FUN_0042157c(param_1,&local_2c), lpMem != (LPVOID)0x0)) {
      iVar1 = FUN_0047a6f7(local_14,(uint)local_6);
      y = 0;
      iVar2 = local_10;
      iVar3 = local_14;
      if (0 < local_10) {
        do {
          puVar4 = (uint *)(((iVar2 - y) + -1) * iVar1 + (int)lpMem);
          x = 0;
          if (0 < iVar3) {
            do {
              if ((*puVar4 & 0xff000000) == 0) {
                color = 0xffffff;
              }
              else {
                color = 0;
              }
              SetPixel(hdc,x,y,color);
              puVar4 = puVar4 + 1;
              x = x + 1;
              iVar2 = local_10;
              iVar3 = local_14;
            } while (x < local_14);
          }
          y = y + 1;
        } while (y < iVar2);
      }
      if (local_2c != 0) {
        HeapFree(DAT_00542264,0,lpMem);
      }
    }
    else {
      local_28.right = local_14;
      local_28.top = 0;
      local_28.left = 0;
      local_28.bottom = local_10;
      hbr = GetStockObject(4);
      FillRect(hdc,&local_28,hbr);
    }
    DeleteDC(hdc);
  }
  return h;
}


