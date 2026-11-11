// Function: FUN_0041e354
// Entry: 0041e354
// Size: 786 bytes
// Thunk: false
// External: false


int * FUN_0041e354(int *param_1,int param_2,int param_3,int param_4,int param_5,LPCWSTR param_6,
                  uint param_7,HWND param_8)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  HWND hWnd;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int local_258;
  tagRECT local_24c;
  int local_23c;
  int local_238;
  uint local_234;
  uint local_230;
  uint local_22c;
  WNDCLASSW local_228;
  wchar_t local_200 [256];
  
  local_234 = param_7;
  piVar1 = FUN_0042583b(DAT_0054398c,(int)param_1);
  if (param_1 == (int *)0xffffffff) {
    param_1 = piVar1;
  }
  FUN_0041e2d9(local_200,L"WindowClass_%d");
  if (param_6 == (LPCWSTR)0x0) {
    param_6 = L"";
  }
  _memset(&local_228,0,0x28);
  local_228.cbWndExtra = 0;
  local_228.hInstance = DAT_00542260;
  local_228.hIcon = DAT_00543994;
  local_228.hCursor = DAT_00543998;
  local_228.lpszClassName = local_200;
  local_228.style = 8;
  local_228.lpfnWndProc = (WNDPROC)&LAB_00476f72;
  local_228.hbrBackground = (HBRUSH)0x10;
  RegisterClassW(&local_228);
  local_22c = param_7 & 8;
  uVar5 = param_7 & 0xfffffff7;
  if ((param_7 & 0xeffffff4) == 0) {
    uVar5 = uVar5 | 0xc00000;
  }
  local_230 = uVar5 & 0x10000000;
  if (local_230 != 0) {
    uVar5 = uVar5 & 0xefffffff;
  }
  uVar6 = uVar5 & 0x2000000;
  uVar2 = uVar5 & 4;
  if (uVar2 != 0) {
    uVar5 = uVar5 & 0xdefcffff | 0xc00000;
  }
  uVar2 = -(uint)(uVar2 != 0) & 0x80;
  iVar3 = FUN_0041fc31(param_4);
  local_24c.bottom = FUN_0041fc55(param_5);
  local_24c.left = 0;
  local_24c.top = 0;
  local_24c.right = iVar3;
  AdjustWindowRectEx(&local_24c,uVar5 & 0xfffffff8,0,uVar2);
  local_238 = local_24c.right - local_24c.left;
  local_23c = local_24c.bottom - local_24c.top;
  iVar3 = -0x80000000;
  if ((param_2 == -0xffff) || ((param_3 == -0xffff && ((uVar5 & 3) == 0)))) {
    local_258 = -0x80000000;
  }
  else {
    local_258 = FUN_0041fc31(param_2);
    iVar3 = FUN_0041fc55(param_3);
  }
  hWnd = CreateWindowExW(uVar2,local_200,param_6,uVar5 & 0xfdfffff8,local_258,iVar3,local_238,
                         local_23c,param_8,(HMENU)0x0,DAT_00542260,(LPVOID)0x0);
  *piVar1 = (int)hWnd;
  if (hWnd == (HWND)0x0) {
    UnregisterClassW(local_200,DAT_00542260);
    FUN_00425965(DAT_0054398c,(int)param_1);
    param_1 = (int *)0x0;
  }
  else {
    piVar1[0xc] = 0;
    piVar1[7] = 0;
    SetPropW(hWnd,L"PB_WindowID",(HANDLE)((int)param_1 + 1));
    if ((local_234 & 3) == 0) {
      if (local_258 != -0x80000000) {
        iVar4 = FUN_00477717();
        SetWindowPos((HWND)*piVar1,(HWND)0x0,local_258 - iVar4,iVar3,0,0,0x15);
      }
    }
    else {
      FUN_00477652((HWND)*piVar1,local_234,param_8);
    }
    if (local_230 == 0) {
      if ((uVar5 & 0x1000000) == 0) {
        if ((uVar5 & 0x20000000) == 0) {
          iVar3 = (-(uint)(uVar6 != 0) & 3) + 1;
        }
        else {
          iVar3 = (-(uint)(uVar6 != 0) & 5) + 2;
        }
      }
      else {
        iVar3 = (-(uint)(uVar6 != 0) & 5) + 3;
      }
      ShowWindow((HWND)*piVar1,iVar3);
    }
    piVar1[0xb] = (uint)((uVar5 & 0x21000000) != 0);
    FUN_0041e2f3((int)piVar1);
    piVar1[0xf] = -1;
    piVar1[5] = -1;
    if (local_22c == 0) {
      FUN_0047771c((HWND)*piVar1);
    }
    piVar1[0xc] = 1;
    if (param_1 != piVar1) {
      param_1 = (int *)*piVar1;
    }
  }
  return param_1;
}


