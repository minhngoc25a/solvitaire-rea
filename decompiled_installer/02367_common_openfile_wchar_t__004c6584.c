// Function: common_openfile<wchar_t>
// Entry: 004c6584
// Size: 131 bytes
// Thunk: false
// External: false


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    struct _iobuf * __cdecl common_openfile<wchar_t>(wchar_t const * const,wchar_t const *
   const,int,class __crt_stdio_stream)
   
   Library: Visual Studio 2019 Release */

_iobuf * __cdecl
common_openfile<wchar_t>(char *param_1,undefined4 param_2,int param_3,_iobuf *param_4)

{
  int *piVar1;
  errno_t eVar2;
  wchar_t local_20 [6];
  int local_14;
  uint local_10;
  int local_c;
  int local_8;
  
  piVar1 = (int *)__acrt_stdio_parse_mode<wchar_t>(local_20);
  local_14 = *piVar1;
  local_10 = piVar1[1];
  local_c = piVar1[2];
  if ((char)local_c != '\0') {
    eVar2 = FID_conflict___sopen_s(&local_8,param_1,local_14,param_3,0x180);
    if (eVar2 == 0) {
      _DAT_005449a0 = _DAT_005449a0 + 1;
      LOCK();
      param_4->_flag = param_4->_flag | local_10;
      UNLOCK();
      param_4->_base = (char *)0x0;
      param_4->_tmpfname = (char *)0x0;
      param_4->_cnt = 0;
      param_4->_ptr = (char *)0x0;
      param_4->_file = local_8;
      return param_4;
    }
  }
  return (_iobuf *)0x0;
}


