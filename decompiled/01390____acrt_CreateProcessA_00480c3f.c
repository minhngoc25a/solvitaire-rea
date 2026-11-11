// Function: ___acrt_CreateProcessA
// Entry: 00480c3f
// Size: 238 bytes
// Thunk: false
// External: false


/* Library Function - Single Match
    ___acrt_CreateProcessA
   
   Library: Visual Studio 2019 Release */

BOOL __cdecl
___acrt_CreateProcessA
          (char *param_1,char *param_2,LPSECURITY_ATTRIBUTES param_3,LPSECURITY_ATTRIBUTES param_4,
          BOOL param_5,DWORD param_6,LPVOID param_7,char *param_8,LPSTARTUPINFOW param_9,
          LPPROCESS_INFORMATION param_10)

{
  uint uVar1;
  int iVar2;
  BOOL BVar3;
  LPCWSTR lpCurrentDirectory;
  undefined4 local_4c;
  undefined4 local_48;
  LPCWSTR local_44;
  undefined4 local_40;
  undefined4 local_3c;
  char local_38;
  undefined4 local_34;
  undefined4 local_30;
  LPWSTR local_2c;
  undefined4 local_28;
  undefined4 local_24;
  char local_20;
  undefined4 local_1c;
  undefined4 local_18;
  LPCWSTR local_14;
  undefined4 local_10;
  undefined4 local_c;
  char local_8;
  
  BVar3 = 0;
  lpCurrentDirectory = (LPCWSTR)0x0;
  local_4c = 0;
  local_48 = 0;
  local_44 = (LPCWSTR)0x0;
  local_40 = 0;
  local_3c = 0;
  local_38 = '\0';
  local_34 = 0;
  local_30 = 0;
  local_2c = (LPWSTR)0x0;
  local_28 = 0;
  local_24 = 0;
  local_20 = '\0';
  local_1c = 0;
  local_18 = 0;
  local_14 = (LPCWSTR)0x0;
  local_10 = 0;
  local_c = 0;
  local_8 = '\0';
  uVar1 = __acrt_get_utf8_acp_compatibility_codepage();
  iVar2 = __acrt_mbs_to_wcs_cp<__crt_win32_buffer_internal_dynamic_resizing>
                    (param_1,(__crt_win32_buffer<wchar_t,__crt_win32_buffer_internal_dynamic_resizing>
                              *)&local_4c,uVar1);
  if (iVar2 == 0) {
    uVar1 = __acrt_get_utf8_acp_compatibility_codepage();
    iVar2 = __acrt_mbs_to_wcs_cp<__crt_win32_buffer_internal_dynamic_resizing>
                      (param_2,(__crt_win32_buffer<wchar_t,__crt_win32_buffer_internal_dynamic_resizing>
                                *)&local_34,uVar1);
    if (iVar2 == 0) {
      if (param_8 != (char *)0x0) {
        uVar1 = __acrt_get_utf8_acp_compatibility_codepage();
        iVar2 = __acrt_mbs_to_wcs_cp<__crt_win32_buffer_internal_dynamic_resizing>
                          (param_8,(__crt_win32_buffer<wchar_t,__crt_win32_buffer_internal_dynamic_resizing>
                                    *)&local_1c,uVar1);
        lpCurrentDirectory = local_14;
        if (iVar2 != 0) goto LAB_00480cfc;
      }
      BVar3 = CreateProcessW(local_44,local_2c,param_3,param_4,param_5,param_6,param_7,
                             lpCurrentDirectory,param_9,param_10);
    }
  }
LAB_00480cfc:
  if (local_8 != '\0') {
    FUN_004247be(lpCurrentDirectory);
  }
  if (local_20 != '\0') {
    FUN_004247be(local_2c);
  }
  if (local_38 != '\0') {
    FUN_004247be(local_44);
  }
  return BVar3;
}


