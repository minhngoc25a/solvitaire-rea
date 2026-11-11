// Function: FUN_0046b4b0
// Entry: 0046b4b0
// Size: 50 bytes
// Thunk: false
// External: false


void * __cdecl FUN_0046b4b0(int param_1)

{
  void *_Dst;
  
  if (param_1 == 0) {
    return (void *)0x0;
  }
  _Dst = (void *)FUN_004a4910(param_1,0x10c);
  if (_Dst != (void *)0x0) {
    _memset(_Dst,0,0x10c);
  }
  return _Dst;
}


