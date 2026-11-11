// Function: FUN_00454a3d
// Entry: 00454a3d
// Size: 56 bytes
// Thunk: false
// External: false


bool __thiscall FUN_00454a3d(void *this,int *param_1)

{
  bool bVar1;
  
  if (*(_iobuf **)this == (_iobuf *)0x0) {
    *(undefined1 *)(param_1 + 7) = 1;
    param_1[6] = 0x16;
    FUN_0042454a((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,param_1);
    bVar1 = false;
  }
  else {
    bVar1 = __acrt_stdio_char_traits<char>::validate_stream_is_ansi_if_required(*(_iobuf **)this);
  }
  return bVar1;
}


