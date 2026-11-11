// Function: FUN_004b77d9
// Entry: 004b77d9
// Size: 69 bytes
// Thunk: false
// External: false


undefined4 FUN_004b77d9(int *param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  HWND hWnd;
  HANDLE pvVar2;
  undefined4 uVar3;
  wchar_t *lpString;
  
  puVar1 = (undefined4 *)FUN_004258d0(DAT_00542fa0,param_1);
  if (puVar1 == (undefined4 *)0x0) {
    uVar3 = 0;
  }
  else {
    lpString = L"PB_WindowID";
    hWnd = FUN_004760b8((HWND)*puVar1);
    pvVar2 = GetPropW(hWnd,lpString);
    uVar3 = FUN_004fde0d(0x332c,param_2,(int)pvVar2 + -1,param_1,param_3);
  }
  return uVar3;
}


