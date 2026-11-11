// Function: FUN_0041a867
// Entry: 0041a867
// Size: 151 bytes
// Thunk: false
// External: false


void FUN_0041a867(undefined4 *param_1)

{
  LRESULT LVar1;
  uint uVar2;
  int iVar3;
  LPWSTR lpString;
  
  LVar1 = SendMessageW((HWND)*param_1,0x147,0,0);
  if (((LVar1 != -1) && (uVar2 = GetWindowLongW((HWND)*param_1,-0x10), (uVar2 & 1) == 0)) &&
     (param_1[6] == 0)) {
    iVar3 = GetWindowTextLengthW((HWND)*param_1);
    lpString = HeapAlloc(DAT_00542264,0,iVar3 * 2 + 2);
    *lpString = L'\0';
    GetWindowTextW((HWND)*param_1,lpString,iVar3 + 1);
    SendMessageW((HWND)*param_1,0x158,0xffffffff,(LPARAM)lpString);
    HeapFree(DAT_00542264,0,lpString);
  }
  return;
}


