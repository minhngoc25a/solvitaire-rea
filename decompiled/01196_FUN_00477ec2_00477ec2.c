// Function: FUN_00477ec2
// Entry: 00477ec2
// Size: 280 bytes
// Thunk: false
// External: false


void FUN_00477ec2(int param_1)

{
  HWND hWndParent;
  HWND hWnd;
  BOOL BVar1;
  int iVar2;
  uint uVar3;
  HWND hWnd_00;
  HWND local_74;
  HWND local_70;
  int local_6c;
  int local_68;
  WCHAR local_64 [50];
  
  hWndParent = GetActiveWindow();
  hWnd = GetFocus();
  local_70 = (HWND)0x0;
  local_6c = 0;
  local_68 = 0;
  BVar1 = IsChild(hWndParent,hWnd);
  hWnd_00 = hWnd;
  local_74 = hWnd;
  if (BVar1 == 0) {
    local_74 = (HWND)0x0;
  }
  else {
    for (; hWnd_00 != (HWND)0x0; hWnd_00 = GetParent(hWnd_00)) {
      GetClassNameW(hWnd_00,local_64,0x32);
      iVar2 = _wcscmp(local_64,L"MDI_ChildClass");
      if (iVar2 == 0) {
        hWndParent = hWnd_00;
        if (hWnd == hWnd_00) {
          local_74 = (HWND)0x0;
        }
      }
      else {
        iVar2 = _wcscmp(local_64,L"ComboBoxEx32");
        if (iVar2 == 0) {
          uVar3 = GetWindowLongW(hWnd_00,-0x10);
          if ((uVar3 & 1) != 0) {
LAB_00477f69:
            local_74 = hWnd_00;
          }
        }
        else {
          iVar2 = _wcscmp(local_64,L"SysIPAddress32");
          if (iVar2 == 0) goto LAB_00477f69;
        }
      }
    }
  }
  if (param_1 == 0) {
    EnumChildWindows(hWndParent,(WNDENUMPROC)&LAB_00478021,(LPARAM)&local_74);
    if (local_6c != 0) {
      EnumChildWindows(hWndParent,(WNDENUMPROC)&LAB_00478021,(LPARAM)&local_74);
    }
  }
  else {
    EnumChildWindows(hWndParent,(WNDENUMPROC)&LAB_00478087,(LPARAM)&local_74);
    if ((local_68 == 0) && (local_70 != (HWND)0x0)) {
      SetFocus(local_70);
    }
  }
  return;
}


