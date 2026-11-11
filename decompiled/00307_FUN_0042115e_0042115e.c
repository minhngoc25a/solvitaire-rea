// Function: FUN_0042115e
// Entry: 0042115e
// Size: 524 bytes
// Thunk: false
// External: false


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

HBITMAP FUN_0042115e(HBITMAP param_1,HDC param_2,int param_3)

{
  uint uVar1;
  HDC hdc;
  int iVar2;
  uint uVar3;
  HBITMAP pHVar4;
  longlong lVar5;
  byte *local_54;
  double local_50;
  HBITMAP local_48;
  undefined1 local_44 [4];
  LONG local_40;
  UINT local_3c;
  BITMAPINFO local_2c;
  
  pHVar4 = (HBITMAP)0x0;
  if ((DAT_005434b0 != 0) &&
     ((hdc = param_2, param_2 != (HDC)0x0 || (hdc = CreateCompatibleDC((HDC)0x0), hdc != (HDC)0x0)))
     ) {
    iVar2 = GetObjectW(param_1,0x18,local_44);
    if (iVar2 != 0) {
      local_50 = (double)CONCAT44(local_50._4_4_,local_40);
      _memset(&local_2c,0,0x2c);
      local_2c.bmiHeader.biSize = 0x28;
      local_2c.bmiHeader.biWidth = local_40;
      local_2c.bmiHeader.biHeight = local_3c;
      local_2c.bmiHeader.biPlanes = 1;
      local_2c.bmiHeader.biBitCount = 0x20;
      local_2c.bmiHeader.biCompression = 0;
      pHVar4 = CreateDIBSection(hdc,&local_2c,0,&local_54,(HANDLE)0x0,0);
      local_48 = pHVar4;
      if (pHVar4 != (HBITMAP)0x0) {
        GetDIBits(hdc,param_1,0,local_3c,local_54,&local_2c,0);
        iVar2 = local_3c * local_50._0_4_;
        if (0 < iVar2) {
          if (param_3 == 0) {
            do {
              if (local_54[3] != 0xff) {
                *local_54 = (byte)((uint)local_54[3] * (uint)*local_54 >> 8);
                local_54[1] = (byte)((uint)local_54[3] * (uint)local_54[1] >> 8);
                local_54[2] = (byte)((uint)local_54[3] * (uint)local_54[2] >> 8);
              }
              local_54 = local_54 + 4;
              iVar2 = iVar2 + -1;
            } while (iVar2 != 0);
          }
          else {
            do {
              uVar1 = (((uint)local_54[2] + (uint)local_54[1] * 2) * 3 + (uint)*local_54) / 10;
              uVar3 = uVar1 & 0xff;
              if ((byte)uVar1 < 0x40) {
                uVar3 = (int)(((uVar1 & 0xff) - 0x40) * 7) / 10 + 0x40;
              }
              else if (0xc0 < (byte)uVar1) {
                uVar3 = (uint)(byte)((char)((int)(((uVar1 & 0xff) - 0xc0) * 7) / 10) - 0x40);
              }
              local_50 = (double)(uVar3 & 0xff);
              lVar5 = FUN_00469de0();
              *local_54 = (byte)lVar5;
              local_54[1] = (byte)lVar5;
              local_54[2] = *local_54;
              local_54 = local_54 + 4;
              iVar2 = iVar2 + -1;
              pHVar4 = local_48;
            } while (iVar2 != 0);
          }
        }
      }
    }
    if (param_2 == (HDC)0x0) {
      DeleteDC(hdc);
    }
  }
  return pHVar4;
}


