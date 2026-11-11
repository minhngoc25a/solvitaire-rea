// Function: FUN_0050b616
// Entry: 0050b616
// Size: 645 bytes
// Thunk: false
// External: false


void __cdecl FUN_0050b616(byte *param_1,byte *param_2,int *param_3)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  HANDLE hFindFile;
  int iVar4;
  char *pcVar5;
  BOOL BVar6;
  undefined4 local_290;
  undefined4 local_28c;
  LPVOID local_288;
  undefined4 local_284;
  undefined4 local_280;
  char local_27c;
  undefined4 local_278;
  undefined4 local_274;
  LPVOID local_270;
  undefined4 local_26c;
  undefined4 local_268;
  char local_264;
  int *local_260;
  byte local_259;
  _WIN32_FIND_DATAW local_258;
  uint local_8;
  
  local_8 = DAT_0053fbc0 ^ (uint)&stack0xfffffffc;
  local_260 = param_3;
  for (; (((param_2 != param_1 && (bVar1 = *param_2, bVar1 != 0x2f)) && (bVar1 != 0x5c)) &&
         (bVar1 != 0x3a)); param_2 = (byte *)FUN_0050ba10(param_1,param_2)) {
  }
  local_259 = *param_2;
  if ((local_259 == 0x3a) && (param_2 != param_1 + 1)) {
    FUN_0050b565((char *)param_1,0,0,local_260);
  }
  else {
    if ((local_259 == 0x2f) || ((local_259 == 0x5c || (bVar1 = 0, local_259 == 0x3a)))) {
      bVar1 = 1;
    }
    local_290 = 0;
    local_28c = 0;
    local_288 = (LPVOID)0x0;
    local_284 = 0;
    local_280 = 0;
    local_27c = '\0';
    uVar2 = __acrt_get_utf8_acp_compatibility_codepage();
    iVar3 = __acrt_mbs_to_wcs_cp<__crt_win32_buffer_internal_dynamic_resizing>
                      ((char *)param_1,
                       (__crt_win32_buffer<wchar_t,__crt_win32_buffer_internal_dynamic_resizing> *)
                       &local_290,uVar2);
    hFindFile = FindFirstFileExW((LPCWSTR)(~-(uint)(iVar3 != 0) & (uint)local_288),
                                 FindExInfoStandard,&local_258,FindExSearchNameMatch,(LPVOID)0x0,0);
    if (hFindFile == (HANDLE)0xffffffff) {
      FUN_0050b565((char *)param_1,0,0,local_260);
      if (local_27c != '\0') {
        FUN_004247be(local_288);
      }
    }
    else {
      iVar3 = local_260[1] - *local_260 >> 2;
      do {
        local_278 = 0;
        local_274 = 0;
        local_270 = (LPVOID)0x0;
        local_26c = 0;
        local_268 = 0;
        local_264 = '\0';
        uVar2 = __acrt_get_utf8_acp_compatibility_codepage();
        iVar4 = FUN_0050b3f3(local_258.cFileName,
                             (__crt_win32_buffer<wchar_t,__crt_win32_buffer_internal_dynamic_resizing>
                              *)&local_278,&local_259,uVar2);
        pcVar5 = (char *)(~-(uint)(iVar4 != 0) & (uint)local_270);
        if (((*pcVar5 != '.') ||
            ((pcVar5[1] != '\0' && ((pcVar5[1] != '.' || (pcVar5[2] != '\0')))))) &&
           (iVar4 = FUN_0050b565(pcVar5,(int)param_1,
                                 -(uint)bVar1 & (uint)(param_2 + (1 - (int)param_1)),local_260),
           iVar4 != 0)) {
          if (local_264 != '\0') {
            FUN_004247be(local_270);
          }
          FindClose(hFindFile);
          if (local_27c != '\0') {
            FUN_004247be(local_288);
          }
          goto LAB_0050b88d;
        }
        if (local_264 != '\0') {
          FUN_004247be(local_270);
        }
        BVar6 = FindNextFileW(hFindFile,&local_258);
      } while (BVar6 != 0);
      iVar4 = local_260[1] - *local_260 >> 2;
      if (iVar3 != iVar4) {
        FUN_005034c0((undefined1 *)(*local_260 + iVar3 * 4),iVar4 - iVar3,4,&LAB_0050b89b);
      }
      FindClose(hFindFile);
      if (local_27c != '\0') {
        FUN_004247be(local_288);
      }
    }
  }
LAB_0050b88d:
  FUN_004257be(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


