// Function: FUN_004767d8
// Entry: 004767d8
// Size: 68 bytes
// Thunk: false
// External: false


void FUN_004767d8(HWND param_1,int param_2)

{
  LONG LVar1;
  HWND hWnd;
  HANDLE pvVar2;
  wchar_t *lpString;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  LVar1 = GetWindowLongW(param_1,-0xc);
  if (LVar1 != -1) {
    uVar5 = 1;
    iVar4 = 0;
    iVar3 = 0;
    lpString = L"PB_WindowID";
    hWnd = FUN_004760b8(param_1);
    pvVar2 = GetPropW(hWnd,lpString);
    FUN_004779a6(0x332c,LVar1,(int)pvVar2 + -1,param_2,iVar3,iVar4,uVar5);
  }
  return;
}


