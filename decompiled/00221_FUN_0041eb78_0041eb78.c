// Function: FUN_0041eb78
// Entry: 0041eb78
// Size: 752 bytes
// Thunk: false
// External: false


BOOL FUN_0041eb78(short *param_1,wchar_t *param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  HANDLE pvVar3;
  BOOL BVar4;
  BOOL BVar5;
  int local_670;
  uint local_66c;
  undefined2 ***local_668 [130];
  undefined2 local_460;
  _WIN32_FIND_DATAW local_45c;
  WCHAR local_20c [260];
  undefined2 local_4;
  
  BVar5 = 0;
  if ((param_1 != (short *)0x0) && (*param_1 != 0)) {
    FUN_0044c204((short *)local_668,(int)param_1,0x104);
    local_460 = 0;
    uVar1 = FUN_0044be0a(param_1);
    if ((uVar1 != 0) && (((int)uVar1 < 0x104 && (param_1[uVar1 - 1] != 0x5c)))) {
      FUN_0044ca44((short *)local_668,(short *)&DAT_0052d5b4);
    }
    FUN_0044c204(local_20c,(int)local_668,0x104);
    local_4 = 0;
    if (((param_2 == (wchar_t *)0x0) || (*param_2 == L'\0')) ||
       (iVar2 = _wcscmp(param_2,L"*.*"), iVar2 == 0)) {
      param_2 = L"*.*";
      local_670 = 0;
    }
    else if ((param_3 & 1) != 0) {
      FUN_0041eb5c(local_668,0x104,0x52e5ec);
      pvVar3 = FindFirstFileW((LPCWSTR)local_668,&local_45c);
      if (pvVar3 != (HANDLE)0xffffffff) {
        do {
          FUN_0041eb5c(local_668,0x104,0x52c0bc);
          if (((((byte)local_45c.dwFileAttributes & 0x10) != 0) &&
              (iVar2 = _wcscmp(local_45c.cFileName,L".."), iVar2 != 0)) &&
             (iVar2 = _wcscmp(local_45c.cFileName,L"."), iVar2 != 0)) {
            FUN_0041eb78((short *)local_668,param_2,param_3);
          }
          BVar4 = FindNextFileW(pvVar3,&local_45c);
        } while (BVar4 != 0);
        FindClose(pvVar3);
      }
      local_670 = 1;
    }
    local_66c = param_3 & 1;
    FUN_0041eb5c(local_668,0x104,0x52c0bc);
    pvVar3 = FindFirstFileW((LPCWSTR)local_668,&local_45c);
    if (pvVar3 != (HANDLE)0xffffffff) {
      do {
        FUN_0041eb5c(local_668,0x104,0x52c0bc);
        if (((byte)local_45c.dwFileAttributes & 0x10) == 0) {
          if ((param_3 & 2) != 0) {
            SetFileAttributesW((LPCWSTR)local_668,0x80);
          }
          DeleteFileW((LPCWSTR)local_668);
        }
        else if (((local_670 == 0) && (local_66c != 0)) &&
                ((iVar2 = _wcscmp(local_45c.cFileName,L".."), iVar2 != 0 &&
                 (iVar2 = _wcscmp(local_45c.cFileName,L"."), iVar2 != 0)))) {
          FUN_0041eb78((short *)local_668,param_2,param_3);
        }
        BVar5 = FindNextFileW(pvVar3,&local_45c);
      } while (BVar5 != 0);
      FindClose(pvVar3);
      if ((param_3 & 2) != 0) {
        SetFileAttributesW(local_20c,0x80);
      }
      if (local_670 == 0) {
        BVar5 = RemoveDirectoryW(local_20c);
      }
      else {
        BVar5 = 1;
      }
    }
  }
  return BVar5;
}


