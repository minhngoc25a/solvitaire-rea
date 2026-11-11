// Function: FUN_0041c9cb
// Entry: 0041c9cb
// Size: 102 bytes
// Thunk: false
// External: false


void __cdecl FUN_0041c9cb(HWND param_1,int param_2)

{
  DWORD DVar1;
  HWND hWnd;
  undefined1 local_14 [16];
  
  if (((*(int *)(param_2 + 0x10) != 0) && (*(int *)(param_2 + 0x14) == 0)) &&
     (DVar1 = GetObjectType(*(HGDIOBJ *)(param_2 + 0x10)), DVar1 == 7)) {
    return;
  }
  hWnd = FUN_004760b8(param_1);
  GetWindowRect(param_1,(LPRECT)local_14);
  ScreenToClient(hWnd,(LPPOINT)local_14);
  ScreenToClient(hWnd,(LPPOINT)(local_14 + 8));
  RedrawWindow(hWnd,(RECT *)local_14,(HRGN)0x0,0x105);
  return;
}


