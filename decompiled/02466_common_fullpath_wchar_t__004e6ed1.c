// Function: common_fullpath<wchar_t>
// Entry: 004e6ed1
// Size: 152 bytes
// Thunk: false
// External: false


/* Library Function - Single Match
    wchar_t * __cdecl common_fullpath<wchar_t>(wchar_t * const,wchar_t const * const,unsigned
   int,int,char const * const,int)
   
   Library: Visual Studio 2019 Release */

wchar_t * __cdecl
common_fullpath<wchar_t>
          (wchar_t *param_1,wchar_t *param_2,uint param_3,int param_4,char *param_5,int param_6)

{
  int iVar1;
  wchar_t *pwVar2;
  wchar_t *local_1c;
  uint local_18;
  wchar_t *local_14;
  uint local_10;
  undefined4 local_c;
  char local_8;
  
  if ((param_2 == (wchar_t *)0x0) || (*param_2 == L'\0')) {
    if (0x7ffffffe < param_3) {
      param_3 = 0x7fffffff;
    }
    pwVar2 = __wgetcwd(param_1,param_3);
  }
  else {
    local_c = 0;
    local_8 = '\0';
    if (param_1 == (wchar_t *)0x0) {
      local_1c = (wchar_t *)0x0;
      local_18 = 0;
      local_14 = (LPVOID)0x0;
      local_10 = 0;
      FUN_004e702a(param_2,&local_1c);
      pwVar2 = FUN_004e6f83(&local_1c);
      if (local_8 != '\0') {
        FUN_0047d191(local_14);
      }
    }
    else {
      local_18 = param_3;
      local_10 = param_3;
      local_1c = param_1;
      local_14 = param_1;
      iVar1 = FUN_004e6f69(param_2,(__crt_win32_buffer<wchar_t,__crt_win32_buffer_no_resizing> *)
                                   &local_1c);
      pwVar2 = (wchar_t *)(~-(uint)(iVar1 != 0) & (uint)param_1);
    }
  }
  return pwVar2;
}


