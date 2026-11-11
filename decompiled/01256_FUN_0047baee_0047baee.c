// Function: FUN_0047baee
// Entry: 0047baee
// Size: 302 bytes
// Thunk: false
// External: false


HBITMAP FUN_0047baee(HGDIOBJ param_1,int param_2,int param_3,LONG param_4,LONG param_5,int param_6,
                    int param_7)

{
  HBITMAP h;
  HDC hdc;
  HDC hdc_00;
  int iVar1;
  int iVar2;
  int iVar3;
  HBITMAP pHVar4;
  
  pHVar4 = (HBITMAP)0x0;
  if ((param_2 < 1) || (param_3 < 1)) {
    return (HBITMAP)0x0;
  }
  h = FUN_0047a682(param_4,param_5,param_6);
  if (h == (HBITMAP)0x0) {
    return (HBITMAP)0x0;
  }
  hdc = CreateCompatibleDC((HDC)0x0);
  if (hdc == (HDC)0x0) goto LAB_0047bc07;
  hdc_00 = CreateCompatibleDC((HDC)0x0);
  if (hdc_00 != (HDC)0x0) {
    SelectObject(hdc,h);
    SelectObject(hdc_00,param_1);
    if (param_7 == 0) {
      if (((param_6 == 0x18) && (0x50 < param_2)) && (0x50 < param_3)) {
        SetStretchBltMode(hdc,4);
        SetBrushOrgEx(hdc,0,0,(LPPOINT)0x0);
        goto LAB_0047bbc8;
      }
      iVar3 = param_6;
      iVar1 = FUN_0047a6f7(param_2,param_6);
      iVar2 = FUN_0047a6f7(param_4,param_6);
      iVar3 = FUN_0042165b(h,param_4,param_5,iVar2,param_1,param_2,param_3,iVar1,iVar3);
    }
    else {
      SetStretchBltMode(hdc,3);
LAB_0047bbc8:
      iVar3 = StretchBlt(hdc,0,0,param_4,param_5,hdc_00,0,0,param_2,param_3,0xcc0020);
    }
    if (iVar3 != 0) {
      pHVar4 = h;
    }
    DeleteDC(hdc_00);
  }
  DeleteDC(hdc);
  if (pHVar4 != (HBITMAP)0x0) {
    return pHVar4;
  }
LAB_0047bc07:
  DeleteObject(h);
  return (HBITMAP)0x0;
}


