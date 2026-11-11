// Function: FUN_0041ee68
// Entry: 0041ee68
// Size: 263 bytes
// Thunk: false
// External: false


undefined8 FUN_0041ee68(short *param_1)

{
  WCHAR WVar1;
  LPCWSTR lpFileName;
  uint uVar2;
  UINT UVar3;
  BOOL BVar4;
  HANDLE hFindFile;
  DWORD DVar5;
  WCHAR WVar6;
  uint uVar7;
  uint uVar8;
  _WIN32_FIND_DATAW local_250;
  
  uVar8 = 0xffffffff;
  uVar7 = 0xffffffff;
  lpFileName = FUN_00478184(param_1);
  if (lpFileName == (LPCWSTR)0x0) goto LAB_0041eee2;
  uVar2 = FUN_0044be0a(lpFileName);
  if (((uVar2 == 2) || (uVar2 == 3)) && (lpFileName[1] == L':')) {
    if (uVar2 == 2) {
      FUN_0044ca44(lpFileName,(short *)&DAT_0052d5b4);
    }
LAB_0041eeb5:
    UVar3 = GetDriveTypeW(lpFileName);
    if (1 < UVar3) {
LAB_0041eec1:
      uVar8 = 0xfffffffe;
      uVar2 = uVar7;
      goto LAB_0041eec4;
    }
  }
  else {
    hFindFile = FindFirstFileW(lpFileName,&local_250);
    if (hFindFile == (HANDLE)0xffffffff) {
      WVar1 = *lpFileName;
      if (WVar1 == L'\\') {
        if (lpFileName[1] != L'\\') {
LAB_0041ef3b:
          WVar6 = L'.';
          if (WVar1 != L'.') goto LAB_0041eed3;
          goto LAB_0041ef4d;
        }
      }
      else {
        WVar6 = L'/';
        if (WVar1 != L'/') goto LAB_0041ef3b;
LAB_0041ef4d:
        if (lpFileName[1] != WVar6) goto LAB_0041eed3;
      }
      DVar5 = GetFileAttributesW(lpFileName);
      if (DVar5 == 0xffffffff) goto LAB_0041eeb5;
      if ((DVar5 & 0x10) == 0) goto LAB_0041eed3;
      goto LAB_0041eec1;
    }
    uVar2 = local_250.nFileSizeHigh;
    uVar8 = local_250.nFileSizeLow;
    if (((byte)local_250.dwFileAttributes & 0x10) != 0) {
      uVar2 = uVar7;
      uVar8 = 0xfffffffe;
    }
    FindClose(hFindFile);
    uVar7 = uVar2;
    if ((uVar8 & uVar2) == 0xffffffff) goto LAB_0041eed3;
LAB_0041eec4:
    BVar4 = PathFileExistsW(lpFileName);
    uVar7 = uVar2;
    if (BVar4 == 0) {
      uVar8 = 0xffffffff;
      uVar7 = 0xffffffff;
    }
  }
LAB_0041eed3:
  HeapFree(DAT_00542264,0,lpFileName);
LAB_0041eee2:
  return CONCAT44(uVar7,uVar8);
}


