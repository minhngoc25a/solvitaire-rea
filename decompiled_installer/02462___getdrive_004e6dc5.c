// Function: __getdrive
// Entry: 004e6dc5
// Size: 164 bytes
// Thunk: false
// External: false


/* Library Function - Single Match
    __getdrive
   
   Library: Visual Studio 2019 Release */

int __cdecl __getdrive(void)

{
  DWORD DVar1;
  wchar_t *lpBuffer;
  __acrt_ptd *p_Var2;
  int iVar3;
  WCHAR local_214 [262];
  uint local_8;
  
  local_8 = DAT_0053fbc0 ^ (uint)&stack0xfffffffc;
  _memset(local_214,0,0x20a);
  DVar1 = GetCurrentDirectoryW(0x105,local_214);
  if (DVar1 < 0x105) {
    get_drive_number_from_path(local_214);
    goto LAB_004e6e5c;
  }
  lpBuffer = __calloc_base(DVar1 + 1,2);
  if (lpBuffer == (wchar_t *)0x0) {
LAB_004e6e3b:
    p_Var2 = FUN_0042470e();
    *(undefined4 *)p_Var2 = 0xc;
  }
  else {
    DVar1 = GetCurrentDirectoryW(DVar1 + 1,lpBuffer);
    if (DVar1 == 0) goto LAB_004e6e3b;
    get_drive_number_from_path(lpBuffer);
  }
  FUN_004247be(lpBuffer);
LAB_004e6e5c:
  iVar3 = FUN_004257be(local_8 ^ (uint)&stack0xfffffffc);
  return iVar3;
}


