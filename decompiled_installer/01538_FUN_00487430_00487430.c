// Function: FUN_00487430
// Entry: 00487430
// Size: 802 bytes
// Thunk: false
// External: false


int __cdecl FUN_00487430(uint *param_1,LPCWSTR param_2)

{
  WCHAR *pWVar1;
  WCHAR WVar2;
  LPCWSTR pWVar3;
  DWORD DVar4;
  LPWSTR lpBuffer;
  __acrt_ptd *p_Var5;
  uint uVar6;
  LPCWSTR pbBuffer;
  BOOL BVar7;
  HANDLE hObject;
  LPWSTR pWVar8;
  uint *puVar9;
  LPWSTR lpFileName;
  code *pcVar10;
  int iVar11;
  LPCWSTR pWVar12;
  HCRYPTPROV local_14;
  uint local_10;
  LPCWSTR local_c;
  int local_8;
  undefined4 local_4;
  
  pcVar10 = GetLastError_exref;
  lpFileName = (LPWSTR)0x0;
  iVar11 = -1;
  local_14 = 0;
  if (param_2 != (LPCWSTR)0x0) {
    pbBuffer = (LPCWSTR)FUN_004811eb((ushort *)param_2,0x58);
    if (pbBuffer == (LPCWSTR)0x0) {
LAB_0048774d:
                    /* WARNING: Subroutine does not return */
      FUN_0047d96c();
    }
    WVar2 = *pbBuffer;
    pWVar12 = pbBuffer;
    while (WVar2 == L'X') {
      pWVar1 = pWVar12 + 1;
      pWVar12 = pWVar12 + 1;
      WVar2 = *pWVar1;
    }
    if (WVar2 != L'\0') goto LAB_0048774d;
LAB_004875ec:
    BVar7 = CryptAcquireContextW(&local_14,(LPCWSTR)0x0,(LPCWSTR)0x0,1,0xf0000000);
    if (BVar7 != 0) {
      local_10 = (int)pWVar12 - (int)pbBuffer & 0xfffffffe;
      iVar11 = CryptGenRandom(local_14,local_10,(BYTE *)pbBuffer);
      while (pWVar3 = pbBuffer, iVar11 != 0) {
        for (; pWVar3 < pWVar12; pWVar3 = pWVar3 + 1) {
          *pWVar3 = *(WCHAR *)(&DAT_0050f090 + ((uint)(ushort)*pWVar3 % 0x3e) * 2);
        }
        FUN_0047d191(lpFileName);
        lpFileName = FUN_00497ae0(param_2);
        if (lpFileName == (LPWSTR)0x0) {
          p_Var5 = FUN_0042470e();
          iVar11 = -1;
          *(undefined4 *)p_Var5 = 0x16;
          goto LAB_004876d9;
        }
        DVar4 = 0x80;
        if (param_2 == local_c) {
          DVar4 = 0x4000100;
        }
        hObject = CreateFileW(lpFileName,0xc0010000,0,(LPSECURITY_ATTRIBUTES)0x0,1,DVar4,(HANDLE)0x0
                             );
        pcVar10 = GetLastError_exref;
        if (hObject != (HANDLE)0xffffffff) {
          iVar11 = __open_osfhandle((intptr_t)hObject,0x8002);
          if (iVar11 == -1) {
            DVar4 = GetLastError();
            FUN_00497cb0(DVar4);
            CloseHandle(hObject);
          }
          goto LAB_004876d9;
        }
        DVar4 = GetLastError();
        if (DVar4 != 0x50) break;
        iVar11 = CryptGenRandom(local_14,local_10,(BYTE *)pbBuffer);
      }
    }
    goto LAB_004876c7;
  }
  local_c = (LPCWSTR)0x0;
  local_8 = 0;
  local_4 = 0;
  if (param_1 == (uint *)0x0) {
    DVar4 = GetTempPathW(0,(LPWSTR)0x0);
    if (DVar4 == 0) {
      DVar4 = GetLastError();
      FUN_00497cb0(DVar4);
      goto LAB_004876d9;
    }
    lpBuffer = (LPWSTR)FUN_00482949(DVar4 * 2);
    if (lpBuffer != (LPWSTR)0x0) {
      GetTempPathW(DVar4,lpBuffer);
      pWVar8 = lpBuffer;
      do {
        WVar2 = *pWVar8;
        pWVar8 = pWVar8 + 1;
      } while (WVar2 != L'\0');
      FUN_0048d5e0((int *)&local_c,(uint *)lpBuffer,(int)pWVar8 - (int)(lpBuffer + 1) >> 1);
      FUN_0047d191(lpBuffer);
      goto LAB_00487521;
    }
    p_Var5 = FUN_0042470e();
    *(undefined4 *)p_Var5 = 0xc;
  }
  else {
    puVar9 = param_1;
    do {
      uVar6 = *puVar9;
      puVar9 = (uint *)((int)puVar9 + 1);
    } while ((char)uVar6 != '\0');
    iVar11 = FUN_0048d740((int *)&local_c,param_1,(int)puVar9 - ((int)param_1 + 1));
    if (-1 < iVar11) {
      if (local_c[local_8 + -1] != L'/') {
        FUN_0048cf50((int *)&local_c,0x2f);
      }
LAB_00487521:
      uVar6 = GetFileAttributesW(local_c);
      if (uVar6 == 0xffffffff) {
        DVar4 = GetLastError();
        if (DVar4 == 2) {
          lpFileName = FUN_00497ae0(local_c);
          if (lpFileName == (LPWSTR)0x0) {
            p_Var5 = FUN_0042470e();
            *(undefined4 *)p_Var5 = 0x16;
            goto LAB_004876d2;
          }
          uVar6 = GetFileAttributesW(lpFileName);
          if (uVar6 != 0xffffffff) goto LAB_0048756b;
        }
LAB_004876c7:
        iVar11 = (*pcVar10)();
        FUN_00497cb0(iVar11);
      }
      else {
LAB_0048756b:
        if ((uVar6 & 0x10) != 0) {
          FUN_0048d6f0((int *)&local_c,(uint *)L"libarchive_");
          FUN_0048d6f0((int *)&local_c,(uint *)L"XXXXXXXXXX");
          param_2 = local_c;
          pWVar12 = local_c + local_8;
          pbBuffer = pWVar12 + -10;
          goto LAB_004875ec;
        }
        p_Var5 = FUN_0042470e();
        *(undefined4 *)p_Var5 = 0x14;
      }
    }
  }
LAB_004876d2:
  iVar11 = -1;
LAB_004876d9:
  if (local_14 != 0) {
    CryptReleaseContext(local_14,0);
  }
  FUN_0047d191(lpFileName);
  if (param_2 == local_c) {
    FUN_0048d710(&local_c);
  }
  return iVar11;
}


