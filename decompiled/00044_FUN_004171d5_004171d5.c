// Function: FUN_004171d5
// Entry: 004171d5
// Size: 93 bytes
// Thunk: false
// External: false


void FUN_004171d5(int param_1)

{
  wchar_t *lpFilename;
  DWORD DVar1;
  int iVar2;
  
  lpFilename = (wchar_t *)FUN_0044c3e0(0x104,param_1);
  DVar1 = GetModuleFileNameW(DAT_00542260,lpFilename,0x104);
  iVar2 = _wcscmp(lpFilename,L"\\\\?\\");
  if (iVar2 == 0) {
    DVar1 = DVar1 - 4;
    FUN_0044c490((uint *)lpFilename,(uint *)(lpFilename + 4),DVar1 * 2);
  }
  FUN_0044c470(0x104 - DVar1);
  lpFilename[DVar1] = L'\0';
  return;
}


