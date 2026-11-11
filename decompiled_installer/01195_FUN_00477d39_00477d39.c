// Function: FUN_00477d39
// Entry: 00477d39
// Size: 393 bytes
// Thunk: false
// External: false


undefined4 FUN_00477d39(HWND param_1)

{
  bool bVar1;
  SHORT SVar2;
  HWND hWnd;
  HANDLE pvVar3;
  DWORD DVar4;
  int iVar5;
  uint uVar6;
  short *psVar7;
  uint uVar8;
  DWORD local_24;
  WCHAR local_20 [16];
  
  uVar8 = 0;
  hWnd = GetFocus();
  bVar1 = false;
  pvVar3 = GetPropW(param_1,L"PB_WindowID");
  if (((pvVar3 != (HANDLE)0x0) && (DVar4 = GetWindowThreadProcessId(param_1,&local_24), DVar4 != 0))
     && (DVar4 = GetCurrentProcessId(), local_24 == DVar4)) {
    uVar8 = FUN_004258d0(DAT_0054398c,(int *)((int)pvVar3 + -1));
    bVar1 = true;
    iVar5 = 0;
    if (0 < *(int *)(uVar8 + 0x10)) {
      psVar7 = (short *)(*(int *)(uVar8 + 4) + 4);
      do {
        if ((psVar7[-1] == 9) && (*psVar7 == -0x5ff)) {
          bVar1 = false;
          break;
        }
        iVar5 = iVar5 + 1;
        psVar7 = psVar7 + 3;
      } while (iVar5 < *(int *)(uVar8 + 0x10));
    }
  }
  if ((((hWnd == (HWND)0x0) || (SVar2 = GetKeyState(9), -1 < (char)SVar2)) ||
      ((SVar2 = GetKeyState(0x11), (char)SVar2 < '\0' ||
       (((SVar2 = GetKeyState(0x10), (char)SVar2 < '\0' ||
         (SVar2 = GetKeyState(0x12), (char)SVar2 < '\0')) ||
        (GetClassNameW(hWnd,local_20,0x10), bVar1)))))) ||
     ((((iVar5 = _wcsncmp(local_20,L"RichE",5), iVar5 != 0 &&
        (iVar5 = _wcsncmp(local_20,L"RICHE",4), iVar5 != 0)) ||
       (uVar6 = SendMessageW(hWnd,0x44e,0,0), (uVar6 & 0x800) != 0)) &&
      (iVar5 = _wcscmp(local_20,L"Scintilla"), iVar5 != 0)))) {
    if ((param_1 != (HWND)0x0) &&
       (((SVar2 = GetKeyState(0x11), (char)SVar2 < '\0' ||
         (SVar2 = GetKeyState(0x10), (char)SVar2 < '\0')) ||
        (SVar2 = GetKeyState(0x12), (char)SVar2 < '\0')))) {
      FUN_00477fda(param_1,1);
    }
    if (((hWnd == (HWND)0x0) || (pvVar3 = GetPropW(hWnd,L"PB_Hotkey"), pvVar3 == (HANDLE)0x0)) &&
       (uVar8 != 0)) {
      return *(undefined4 *)(uVar8 + 8);
    }
  }
  return 0;
}


