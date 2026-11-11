// Function: FUN_0047679a
// Entry: 0047679a
// Size: 62 bytes
// Thunk: false
// External: false


void FUN_0047679a(HWND param_1,int param_2)

{
  LONG LVar1;
  HWND hWnd;
  HANDLE pvVar2;
  wchar_t *lpString;
  
  LVar1 = GetWindowLongW(param_1,-0xc);
  if (LVar1 != -1) {
    lpString = L"PB_WindowID";
    hWnd = FUN_004760b8(param_1);
    pvVar2 = GetPropW(hWnd,lpString);
    FUN_00477989(0x332c,LVar1,(int)pvVar2 + -1,param_2);
  }
  return;
}


