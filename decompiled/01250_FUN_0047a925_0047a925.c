// Function: FUN_0047a925
// Entry: 0047a925
// Size: 466 bytes
// Thunk: false
// External: false


void FUN_0047a925(int param_1,HGDIOBJ param_2)

{
  int iVar1;
  int iVar2;
  HBITMAP h;
  int iVar3;
  LONG LVar4;
  tagSIZE local_4c;
  undefined1 local_44 [4];
  int local_40;
  ushort local_32;
  BITMAPINFO local_2c;
  
  if (*(int *)(param_1 + 0x140) != 0) {
    if (param_2 == (HGDIOBJ)0xffffffff) {
      param_2 = GetStockObject(0xd);
    }
    iVar2 = FUN_004b7ed3(param_1,param_2);
    *(int *)(param_1 + 0x158) = iVar2;
    SelectObject(*(HDC *)(param_1 + 0x140),param_2);
    SelectObject(*(HDC *)(param_1 + 0x168),param_2);
    *(HGDIOBJ *)(param_1 + 0x13c) = param_2;
    if (*(HGDIOBJ *)(param_1 + 0x15c) != (HGDIOBJ)0x0) {
      DeleteObject(*(HGDIOBJ *)(param_1 + 0x15c));
    }
    *(undefined4 *)(param_1 + 0x15c) = 0;
    GetTextExtentPoint32W(*(HDC *)(param_1 + 0x140),L"Hg",2,&local_4c);
    local_4c.cy = local_4c.cy + 0x14;
    if (local_4c.cy < 0x32) {
      local_4c.cy = 0x32;
    }
    iVar2 = *(int *)(param_1 + 0x150);
    if ((iVar2 < local_4c.cy) || (*(int *)(param_1 + 0x154) < *(int *)(param_1 + 0x158))) {
      iVar3 = *(int *)(param_1 + 0x158);
      if (*(int *)(param_1 + 0x158) <= *(int *)(param_1 + 0x154)) {
        iVar3 = *(int *)(param_1 + 0x154);
      }
      iVar1 = *(int *)(param_1 + 0x80);
      LVar4 = local_4c.cy;
      if (local_4c.cy <= iVar2) {
        LVar4 = iVar2;
      }
      _memset(&local_2c,0,0x2c);
      local_2c.bmiHeader.biSize = 0x28;
      local_2c.bmiHeader.biHeight = -LVar4;
      local_2c.bmiHeader.biCompression = 0;
      local_2c.bmiHeader.biPlanes = 1;
      local_2c.bmiHeader.biBitCount = 0x18;
      local_2c.bmiHeader.biWidth = iVar1 + iVar3 * 2;
      h = CreateDIBSection(*(HDC *)(param_1 + 0x140),&local_2c,0,(void **)(param_1 + 0x148),
                           (HANDLE)0x0,0);
      if (h != (HBITMAP)0x0) {
        GetObjectW(h,0x18,local_44);
        *(LONG *)(param_1 + 0x150) = LVar4;
        *(int *)(param_1 + 0x154) = iVar3;
        iVar2 = FUN_0047a6f7(local_40,(uint)local_32);
        *(int *)(param_1 + 0x14c) = iVar2;
        SelectObject(*(HDC *)(param_1 + 0x140),h);
        if (*(HGDIOBJ *)(param_1 + 0x144) != (HGDIOBJ)0x0) {
          DeleteObject(*(HGDIOBJ *)(param_1 + 0x144));
        }
        *(HBITMAP *)(param_1 + 0x144) = h;
        SetBkMode(*(HDC *)(param_1 + 0x140),2);
        SetTextAlign(*(HDC *)(param_1 + 0x140),0);
        SetBkColor(*(HDC *)(param_1 + 0x140),0);
        SetTextColor(*(HDC *)(param_1 + 0x140),0xffffff);
      }
    }
  }
  return;
}


