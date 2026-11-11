// Function: FUN_0041c4bb
// Entry: 0041c4bb
// Size: 163 bytes
// Thunk: false
// External: false


int FUN_0041c4bb(int *param_1,byte param_2)

{
  undefined4 *puVar1;
  HWND pHVar2;
  HWND hWndFrom;
  int iVar3;
  tagPOINT *ptVar4;
  tagRECT *lpPoint;
  UINT cPoints;
  tagRECT local_1c;
  tagPOINT local_c;
  
  iVar3 = 0;
  puVar1 = (undefined4 *)FUN_004258d0(DAT_00542fa0,param_1);
  if (puVar1 != (undefined4 *)0x0) {
    if (*(code **)(puVar1[1] + 0x50) == (code *)0x0) {
      GetWindowRect((HWND)*puVar1,&local_1c);
      lpPoint = &local_1c;
      pHVar2 = GetParent((HWND)*puVar1);
      ScreenToClient(pHVar2,(LPPOINT)lpPoint);
    }
    else {
      local_1c.top = (**(code **)(puVar1[1] + 0x50))(puVar1);
    }
    if ((param_2 & 1) == 0) {
      if ((param_2 & 2) != 0) {
        ptVar4 = &local_c;
        cPoints = 1;
        local_c.y = local_1c.top;
        pHVar2 = GetParent((HWND)*puVar1);
        pHVar2 = FUN_004760b8(pHVar2);
        hWndFrom = GetParent((HWND)*puVar1);
        MapWindowPoints(hWndFrom,pHVar2,ptVar4,cPoints);
        local_1c.top = local_c.y;
      }
    }
    else {
      ptVar4 = &local_c;
      local_c.y = local_1c.top;
      pHVar2 = GetParent((HWND)*puVar1);
      ClientToScreen(pHVar2,ptVar4);
      local_1c.top = local_c.y;
    }
    iVar3 = FUN_004761af(local_1c.top);
  }
  return iVar3;
}


