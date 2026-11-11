// Function: FUN_0041b24f
// Entry: 0041b24f
// Size: 687 bytes
// Thunk: false
// External: false


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

HWND FUN_0041b24f(HWND param_1,int param_2,int param_3,int param_4,int param_5,byte param_6)

{
  undefined4 *puVar1;
  HWND hWnd;
  HWND pHVar2;
  LPVOID hData;
  uint uVar3;
  HWND pHVar4;
  wchar_t *lpClassName;
  bool bVar5;
  
  puVar1 = (undefined4 *)FUN_00423ccb(DAT_00542fa4);
  FUN_00475fd5();
  FUN_004761ec();
  if (DAT_00542ed8 == 0) {
    _memset(&DAT_00542e30,0,0xa8);
    _DAT_00542e34 = 0xa8;
    _DAT_00542e30 = 0x16;
    _DAT_00542e38 = &LAB_0041bc29;
    _DAT_00542e50 = &LAB_0041b529;
    _DAT_00542e48 = &LAB_0041b6bb;
    _DAT_00542e4c = &LAB_0041b6ec;
    _DAT_00542e64 = FUN_0041b4fe;
    _DAT_00542e5c = FUN_0041b613;
    _DAT_00542e58 = &LAB_0041b62d;
    _DAT_00542e70 = &LAB_0041b76e;
    _DAT_00542e74 = &LAB_0041b7dd;
    _DAT_00542e98 = &LAB_0041b91d;
    _DAT_00542e9c = FUN_0041b967;
    _DAT_00542eac = &LAB_0041b8f7;
    _DAT_00542ea8 = FUN_0041b85d;
    _DAT_00542ec8 = &LAB_0041ba02;
    _DAT_00542ecc = &LAB_0041b9d3;
    DAT_00542edc = LoadLibraryW(L"MSFTEDIT.DLL");
    DAT_00542ee0 = LoadLibraryW(L"RICHED20.DLL");
    if (DAT_00542ee0 == (HMODULE)0x0) {
      LoadLibraryW(L"RICHED32.DLL");
    }
    DAT_00542ed8 = 1;
  }
  bVar5 = DAT_00542f98 != 0;
  if (DAT_00542edc == (HMODULE)0x0) {
    lpClassName = L"RichEdit20W";
    if (DAT_00542ee0 == (HMODULE)0x0) {
      lpClassName = L"RichEdit";
    }
  }
  else {
    lpClassName = L"RICHEDIT50W";
  }
  FUN_00475fe7(&param_2,&param_3,&param_4,&param_5);
  hWnd = CreateWindowExW((-(uint)bVar5 & 0xfffffe00) + 0x200,lpClassName,(LPCWSTR)0x0,0x503111c4,
                         param_2,param_3,param_4,param_5,(HWND)*puVar1,(HMENU)0xffffffff,
                         DAT_00542260,(LPVOID)0x0);
  pHVar4 = (HWND)0x0;
  if (hWnd != (HWND)0x0) {
    pHVar2 = (HWND)FUN_0042583b(DAT_00542fa0,(int)param_1);
    pHVar2[6].unused = -1;
    pHVar2[5].unused = -1;
    pHVar2[7].unused = puVar1[2];
    hData = HeapAlloc(DAT_00542264,8,0x10);
    SetPropW(hWnd,L"PB_ClientRect",hData);
    SendMessageW(hWnd,0xc5,0xffffffff,0);
    SendMessageW(hWnd,0x459,1,0);
    DAT_00542ee4 = SetWindowLongW(hWnd,-4,0x41bc56);
    SetWindowPos(hWnd,(HWND)0x0,0,0,0,0,0x37);
    RedrawWindow(hWnd,(RECT *)0x0,(HRGN)0x0,0x541);
    uVar3 = SendMessageW(hWnd,0x43b,0,0);
    SendMessageW(hWnd,0x445,0,uVar3 | 1);
    if (DAT_00542edc != (HMODULE)0x0) {
      SendMessageW(hWnd,0x513,4,4);
    }
    pHVar4 = FUN_0047603c(param_1,pHVar2,hWnd,0x542e30);
    if ((param_6 & 2) != 0) {
      FUN_0041b967(pHVar2,2,(HANDLE)0x1,0);
    }
    if ((param_6 & 1) != 0) {
      FUN_0041b967(pHVar2,1,(HANDLE)0x1,0);
    }
    if ((param_6 & 4) != 0) {
      SetPropW((HWND)pHVar2->unused,L"PB_TabNavigation",(HANDLE)0x1);
    }
  }
  FUN_00475fde();
  return pHVar4;
}


