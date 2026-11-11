// Function: __waccess_s
// Entry: 00425486
// Size: 190 bytes
// Thunk: false
// External: false


/* Library Function - Single Match
    __waccess_s
   
   Library: Visual Studio 2019 Release */

errno_t __cdecl __waccess_s(wchar_t *_Filename,int _AccessMode)

{
  __acrt_ptd *p_Var1;
  BOOL BVar2;
  DWORD DVar3;
  errno_t eVar4;
  byte local_2c [36];
  uint local_8;
  
  local_8 = DAT_0053fbc0 ^ (uint)&stack0xfffffffc;
  if (_Filename == (wchar_t *)0x0) {
    p_Var1 = FUN_00424721();
    *(undefined4 *)p_Var1 = 0;
    p_Var1 = FUN_0042470e();
    *(undefined4 *)p_Var1 = 0x16;
    FUN_004243be();
  }
  else if ((_AccessMode & 0xfffffff9U) == 0) {
    BVar2 = GetFileAttributesExW(_Filename,GetFileExInfoStandard,local_2c);
    if (BVar2 == 0) {
      DVar3 = GetLastError();
      ___acrt_errno_map_os_error(DVar3);
    }
    else {
      if ((((local_2c[0] & 0x10) != 0) || ((local_2c[0] & 1) == 0)) ||
         (((uint)_AccessMode >> 1 & 1) == 0)) goto LAB_00425537;
      p_Var1 = FUN_00424721();
      *(undefined4 *)p_Var1 = 5;
      p_Var1 = FUN_0042470e();
      *(undefined4 *)p_Var1 = 0xd;
    }
    FUN_0042470e();
  }
  else {
    p_Var1 = FUN_00424721();
    *(undefined4 *)p_Var1 = 0;
    p_Var1 = FUN_0042470e();
    *(undefined4 *)p_Var1 = 0x16;
    FUN_004243be();
  }
LAB_00425537:
  eVar4 = FUN_004257be(local_8 ^ (uint)&stack0xfffffffc);
  return eVar4;
}


