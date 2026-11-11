// Function: FUN_0047a3ec
// Entry: 0047a3ec
// Size: 182 bytes
// Thunk: false
// External: false


HBITMAP FUN_0047a3ec(void)

{
  undefined4 uVar1;
  HDC hdc;
  HBITMAP h;
  int iVar2;
  HBITMAP pHVar3;
  undefined1 local_88 [4];
  int local_84;
  ushort local_76;
  BITMAPINFO local_34;
  void *local_8;
  
  _memset(&local_34,0,0x2c);
  local_34.bmiHeader.biSize = 0x28;
  local_34.bmiHeader.biWidth = FUN_004220f0();
  local_34.bmiHeader.biHeight = FUN_004220ff();
  uVar1 = FUN_0042210e();
  local_34.bmiHeader.biBitCount = (WORD)uVar1;
  local_34.bmiHeader.biCompression = 0;
  local_34.bmiHeader.biPlanes = 1;
  hdc = CreateCompatibleDC((HDC)0x0);
  if (hdc == (HDC)0x0) {
    return (HBITMAP)0x0;
  }
  h = CreateDIBSection(hdc,&local_34,0,&local_8,(HANDLE)0x0,0);
  pHVar3 = (HBITMAP)0x0;
  if (h != (HBITMAP)0x0) {
    iVar2 = GetObjectW(h,0x54,local_88);
    if (iVar2 == 0x54) {
      uVar1 = 2;
      iVar2 = FUN_0047a6f7(local_84,(uint)local_76);
      iVar2 = FUN_0042214a(local_8,iVar2,uVar1);
      pHVar3 = h;
      if (iVar2 != 0) goto LAB_0047a494;
    }
    DeleteObject(h);
    pHVar3 = (HBITMAP)0x0;
  }
LAB_0047a494:
  DeleteDC(hdc);
  return pHVar3;
}


