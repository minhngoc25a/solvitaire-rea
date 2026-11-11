// Function: FUN_00405cf0
// Entry: 00405cf0
// Size: 409 bytes
// Thunk: false
// External: false


int FUN_00405cf0(LPCWSTR param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  LPITEMIDLIST pidl;
  BOOL BVar2;
  int iVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar4;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar5;
  LPWSTR pWVar6;
  WCHAR *pWVar7;
  LPITEMIDLIST local_440;
  _browseinfoW local_43c;
  WCHAR local_41c [260];
  WCHAR local_214 [260];
  
  FUN_004242b0(param_3);
  FUN_00423f50();
  FUN_00424040(&param_1,param_1);
  uVar1 = 0;
  pWVar6 = local_41c;
  for (iVar3 = 0x82; iVar3 != 0; iVar3 = iVar3 + -1) {
    pWVar6[0] = L'\0';
    pWVar6[1] = L'\0';
    pWVar6 = pWVar6 + 2;
  }
  do {
    *(undefined4 *)((int)&local_43c.hwndOwner + uVar1) = 0;
    uVar1 = uVar1 + 4;
  } while (uVar1 < 0x20);
  pWVar7 = local_214;
  for (iVar3 = 0x82; iVar3 != 0; iVar3 = iVar3 + -1) {
    pWVar7[0] = L'\0';
    pWVar7[1] = L'\0';
    pWVar7 = pWVar7 + 2;
  }
  local_440 = (LPCITEMIDLIST)0x0;
  local_43c.hwndOwner = GetActiveWindow();
  SHGetSpecialFolderLocation((HWND)0x0,param_2,&local_440);
  local_43c.pidlRoot = local_440;
  local_43c.pszDisplayName = local_214;
  local_43c.lpszTitle = param_1;
  local_43c.ulFlags = 0x41;
  local_43c.lpfn = (BFFCALLBACK)0x0;
  local_43c.lParam = 0;
  local_43c.iImage = 0;
  pidl = SHBrowseForFolderW(&local_43c);
  CoTaskMemFree(local_440);
  if (pidl == (LPITEMIDLIST)0x0) {
    FUN_004241c0();
    FUN_00423ff0((short *)&DAT_00542460);
    iVar3 = FUN_00424280();
    uVar4 = extraout_ECX_00;
    uVar5 = extraout_EDX_00;
  }
  else {
    BVar2 = SHGetPathFromIDListW(pidl,local_41c);
    if (BVar2 == 0) {
      FUN_00423ef0(local_41c,0x104,0x542460);
    }
    CoTaskMemFree(pidl);
    FUN_004241c0();
    FUN_00423f90(local_41c,0x104);
    iVar3 = FUN_00424280();
    uVar4 = extraout_ECX;
    uVar5 = extraout_EDX;
  }
  FUN_00424120(uVar4,uVar5,param_1);
  return iVar3;
}


