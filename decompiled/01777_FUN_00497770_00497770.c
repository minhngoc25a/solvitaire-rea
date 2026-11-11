// Function: FUN_00497770
// Entry: 00497770
// Size: 509 bytes
// Thunk: false
// External: false


int __cdecl FUN_00497770(byte *param_1,uint param_2,int param_3)

{
  uint uVar1;
  DWORD DVar2;
  __acrt_ptd *p_Var3;
  HANDLE _OSFileHandle;
  int iVar4;
  LPWSTR lpFileName;
  
  lpFileName = (LPWSTR)0x0;
  if ((param_2 & 0xffff7fff) == 0) {
    uVar1 = GetFileAttributesA((LPCSTR)param_1);
    if (uVar1 == 0xffffffff) {
      DVar2 = GetLastError();
      if (DVar2 != 3) {
LAB_004977d1:
        DVar2 = GetLastError();
        FUN_00497cb0(DVar2);
        FUN_0047d191(lpFileName);
        return -1;
      }
      lpFileName = FUN_00497a70(param_1);
      if (lpFileName == (LPWSTR)0x0) goto LAB_004977b2;
      uVar1 = GetFileAttributesW(lpFileName);
      if (uVar1 == 0xffffffff) goto LAB_004977d1;
    }
    if ((uVar1 & 0x10) != 0) {
      if (lpFileName == (LPCWSTR)0x0) {
        _OSFileHandle =
             CreateFileA((LPCSTR)param_1,0,0,(LPSECURITY_ATTRIBUTES)0x0,3,0x2000001,(HANDLE)0x0);
      }
      else {
        _OSFileHandle =
             CreateFileW(lpFileName,0,0,(LPSECURITY_ATTRIBUTES)0x0,3,0x2000001,(HANDLE)0x0);
      }
      FUN_0047d191(lpFileName);
      if (_OSFileHandle == (HANDLE)0xffffffff) {
        DVar2 = GetLastError();
        FUN_00497cb0(DVar2);
        return -1;
      }
      iVar4 = __open_osfhandle((intptr_t)_OSFileHandle,0);
      return iVar4;
    }
    if (lpFileName != (LPCWSTR)0x0) goto LAB_004978df;
  }
  iVar4 = FUN_004d27bd((char *)param_1,param_2,param_3);
  if (iVar4 < 0) {
    p_Var3 = FUN_0042470e();
    if ((*(int *)p_Var3 == 0xd) && ((param_2 & 0x100) != 0)) {
      DVar2 = GetFileAttributesA((LPCSTR)param_1);
      if (DVar2 == 0xffffffff) {
        DVar2 = GetLastError();
        FUN_00497cb0(DVar2);
        return -1;
      }
      if ((DVar2 & 0x10) != 0) {
        p_Var3 = FUN_0042470e();
        *(undefined4 *)p_Var3 = 0x15;
        return -1;
      }
      p_Var3 = FUN_0042470e();
      *(undefined4 *)p_Var3 = 0xd;
      return -1;
    }
    p_Var3 = FUN_0042470e();
    if (*(int *)p_Var3 == 2) {
      lpFileName = FUN_00497a70(param_1);
      if (lpFileName == (LPWSTR)0x0) {
LAB_004977b2:
        p_Var3 = FUN_0042470e();
        *(undefined4 *)p_Var3 = 0x16;
        return -1;
      }
LAB_004978df:
      iVar4 = FUN_004d28a6(lpFileName,param_2,param_3);
      if (iVar4 < 0) {
        p_Var3 = FUN_0042470e();
        if ((*(int *)p_Var3 == 0xd) && ((param_2 & 0x100) != 0)) {
          DVar2 = GetFileAttributesW(lpFileName);
          if (DVar2 == 0xffffffff) {
            DVar2 = GetLastError();
            FUN_00497cb0(DVar2);
            FUN_0047d191(lpFileName);
            return iVar4;
          }
          if ((DVar2 & 0x10) != 0) {
            p_Var3 = FUN_0042470e();
            *(undefined4 *)p_Var3 = 0x15;
            FUN_0047d191(lpFileName);
            return iVar4;
          }
          p_Var3 = FUN_0042470e();
          *(undefined4 *)p_Var3 = 0xd;
        }
      }
      FUN_0047d191(lpFileName);
      return iVar4;
    }
  }
  return iVar4;
}


