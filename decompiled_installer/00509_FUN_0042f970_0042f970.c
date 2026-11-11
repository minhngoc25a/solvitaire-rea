// Function: FUN_0042f970
// Entry: 0042f970
// Size: 76 bytes
// Thunk: false
// External: false


void * __cdecl FUN_0042f970(SIZE_T param_1,undefined4 *param_2)

{
  void *_Dst;
  
  if (param_2 == (undefined4 *)0x0) {
    _Dst = (void *)FUN_00482949(param_1);
  }
  else {
    if ((code *)param_2[1] == (code *)0x0) {
      return (void *)0x0;
    }
    _Dst = (void *)(*(code *)param_2[1])(param_1,*param_2);
  }
  if ((_Dst != (void *)0x0) && (param_1 != 0)) {
    _memset(_Dst,0,param_1);
  }
  return _Dst;
}


