// Function: FUN_004e6f83
// Entry: 004e6f83
// Size: 78 bytes
// Thunk: false
// External: false


void * __fastcall FUN_004e6f83(undefined4 *param_1)

{
  void *_Dst;
  
  _Dst = (void *)param_1[2];
  if ((_Dst == (void *)0x0) || (param_1[4] == 0)) {
    _Dst = (void *)0x0;
  }
  else {
    if (*(char *)(param_1 + 5) == '\0') {
      _Dst = (void *)FUN_00482949(param_1[4] * 2);
      _memcpy_s(_Dst,param_1[4],(void *)param_1[2],param_1[3]);
    }
    param_1[4] = 0;
    param_1[2] = *param_1;
    param_1[3] = param_1[1];
  }
  return _Dst;
}


