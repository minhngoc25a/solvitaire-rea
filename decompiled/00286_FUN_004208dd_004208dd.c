// Function: FUN_004208dd
// Entry: 004208dd
// Size: 400 bytes
// Thunk: false
// External: false


HBITMAP FUN_004208dd(HBITMAP param_1,int param_2,int param_3,int param_4,uint param_5)

{
  HBITMAP pHVar1;
  HBITMAP h;
  int iVar2;
  HDC hdc;
  HBRUSH hbr;
  int iVar3;
  int iVar4;
  uint *puVar5;
  RECT local_28;
  undefined1 local_18 [4];
  int local_14;
  undefined2 local_10;
  ushort local_6;
  int local_4;
  
  if (param_4 == 0x20) {
    param_5 = -(uint)(param_5 != 0xffffffff) & (param_5 | 0xff000000);
    iVar4 = 0x20;
  }
  else {
    iVar4 = 0x18;
  }
  pHVar1 = (HBITMAP)FUN_0042583b(DAT_005434a8,(int)param_1);
  h = FUN_0047a682(param_2,param_3,iVar4);
  if (h != (HBITMAP)0x0) {
    GetObjectW(h,0x18,local_18);
    iVar2 = FUN_0047a6f7(local_14,(uint)local_6);
    if ((iVar4 == 0x20) && (local_4 != 0)) {
      if (0 < param_3) {
        iVar4 = 0;
        do {
          puVar5 = (uint *)(iVar4 + local_4);
          iVar3 = param_2;
          if (0 < param_2) {
            for (; iVar3 != 0; iVar3 = iVar3 + -1) {
              *puVar5 = (int)param_5 >> 0x10 & 0xffU | (param_5 & 0xff) << 0x10 |
                        param_5 & 0xff00ff00;
              puVar5 = puVar5 + 1;
            }
          }
          iVar4 = iVar4 + iVar2;
          param_3 = param_3 + -1;
        } while (param_3 != 0);
      }
    }
    else {
      hdc = CreateCompatibleDC((HDC)0x0);
      if (hdc != (HDC)0x0) {
        SelectObject(hdc,h);
        local_28.top = 0;
        local_28.left = 0;
        local_28.right = param_2;
        local_28.bottom = param_3;
        hbr = CreateSolidBrush(param_5);
        FillRect(hdc,&local_28,hbr);
        DeleteObject(hbr);
        DeleteDC(hdc);
      }
    }
    pHVar1->unused = (int)h;
    *(undefined2 *)&pHVar1[1].unused = (undefined2)local_14;
    *(undefined2 *)((int)&pHVar1[1].unused + 2) = local_10;
    *(undefined1 *)&pHVar1[2].unused = (undefined1)local_6;
    *(undefined1 *)((int)&pHVar1[2].unused + 1) = (undefined1)local_6;
    pHVar1[4].unused = 1;
    if (param_1 != (HBITMAP)0xffffffff) {
      return h;
    }
    if (pHVar1 != (HBITMAP)0x0) {
      return pHVar1;
    }
  }
  if (param_1 != (HBITMAP)0xffffffff) {
    pHVar1 = param_1;
  }
  FUN_00425965(DAT_005434a8,(int)pHVar1);
  return (HBITMAP)0x0;
}


