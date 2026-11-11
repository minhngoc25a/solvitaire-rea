// Function: FUN_0041d364
// Entry: 0041d364
// Size: 295 bytes
// Thunk: false
// External: false


void FUN_0041d364(undefined4 *param_1,int param_2,int param_3,int param_4,int param_5)

{
  HWND hWndTo;
  LONG X;
  int Y;
  int nWidth;
  int nHeight;
  tagRECT *lpPoints;
  UINT cPoints;
  tagRECT local_10;
  
  if ((((param_2 == -0xffff) || (param_3 == -0xffff)) || (param_4 == -0xffff)) ||
     (param_5 == -0xffff)) {
    GetWindowRect((HWND)*param_1,&local_10);
    cPoints = 2;
    lpPoints = &local_10;
    hWndTo = GetParent((HWND)*param_1);
    MapWindowPoints((HWND)0x0,hWndTo,(LPPOINT)lpPoints,cPoints);
    if (param_2 == -0xffff) {
      X = local_10.left;
      if (*(code **)(param_1[1] + 0x4c) != (code *)0x0) {
        X = (**(code **)(param_1[1] + 0x4c))(param_1);
      }
      goto LAB_0041d3d7;
    }
  }
  X = FUN_0041fc31(param_2);
LAB_0041d3d7:
  if (param_3 == -0xffff) {
    Y = local_10.top;
    if (*(code **)(param_1[1] + 0x50) != (code *)0x0) {
      Y = (**(code **)(param_1[1] + 0x50))(param_1);
    }
  }
  else {
    Y = FUN_0041fc55(param_3);
  }
  if (param_4 == -0xffff) {
    if (*(code **)(param_1[1] + 0x54) == (code *)0x0) {
      nWidth = local_10.right - local_10.left;
    }
    else {
      nWidth = (**(code **)(param_1[1] + 0x54))(param_1);
    }
  }
  else {
    nWidth = FUN_0041fc31(param_4);
  }
  if (param_5 == -0xffff) {
    if (*(code **)(param_1[1] + 0x58) == (code *)0x0) {
      nHeight = local_10.bottom - local_10.top;
    }
    else {
      nHeight = (**(code **)(param_1[1] + 0x58))(param_1);
    }
  }
  else {
    nHeight = FUN_0041fc55(param_5);
  }
  MoveWindow((HWND)*param_1,X,Y,nWidth,nHeight,1);
  InvalidateRect((HWND)*param_1,(RECT *)0x0,0);
  if (*(int *)param_1[1] == 1) {
    RedrawWindow((HWND)*param_1,(RECT *)0x0,(HRGN)0x0,7);
  }
  return;
}


