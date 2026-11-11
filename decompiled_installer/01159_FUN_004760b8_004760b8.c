// Function: FUN_004760b8
// Entry: 004760b8
// Size: 47 bytes
// Thunk: false
// External: false


HWND FUN_004760b8(HWND param_1)

{
  HANDLE pvVar1;
  HWND hWnd;
  
  do {
    hWnd = param_1;
    param_1 = GetParent(hWnd);
    if (param_1 == (HWND)0x0) {
      return hWnd;
    }
    pvVar1 = GetPropW(hWnd,L"PB_WindowID");
  } while (pvVar1 == (HANDLE)0x0);
  return hWnd;
}


