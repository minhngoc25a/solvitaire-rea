// Function: ___acrt_SetEnvironmentVariableA
// Entry: 004ffb2d
// Size: 149 bytes
// Thunk: false
// External: false


/* Library Function - Single Match
    ___acrt_SetEnvironmentVariableA
   
   Library: Visual Studio 2019 Release */

BOOL __cdecl ___acrt_SetEnvironmentVariableA(char *param_1,char *param_2)

{
  uint uVar1;
  int iVar2;
  BOOL BVar3;
  LPCWSTR pWVar4;
  undefined4 local_34;
  undefined4 local_30;
  LPCWSTR local_2c;
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
  pWVar4 = (LPCWSTR)0x0;
  local_34 = 0;
  local_30 = 0;
  local_2c = (LPCWSTR)0x0;
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
                              *)&local_34,uVar1);
  if (iVar2 == 0) {
    uVar1 = __acrt_get_utf8_acp_compatibility_codepage();
    iVar2 = __acrt_mbs_to_wcs_cp<__crt_win32_buffer_internal_dynamic_resizing>
                      (param_2,(__crt_win32_buffer<wchar_t,__crt_win32_buffer_internal_dynamic_resizing>
                                *)&local_1c,uVar1);
    pWVar4 = local_14;
    if (iVar2 == 0) {
      BVar3 = SetEnvironmentVariableW(local_2c,local_14);
    }
  }
  if (local_8 != '\0') {
    FUN_004247be(pWVar4);
  }
  if (local_20 != '\0') {
    FUN_004247be(local_2c);
  }
  return BVar3;
}


