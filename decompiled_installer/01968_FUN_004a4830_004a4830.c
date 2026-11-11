// Function: FUN_004a4830
// Entry: 004a4830
// Size: 84 bytes
// Thunk: false
// External: false


void * __cdecl FUN_004a4830(int param_1,SIZE_T param_2)

{
  void *_Dst;
  
  if (param_1 == 0) {
    return (void *)0x0;
  }
  if (param_2 != 0) {
    if (*(code **)(param_1 + 0x25c) == (code *)0x0) {
      _Dst = (void *)FUN_00482949(param_2);
    }
    else {
      _Dst = (void *)(**(code **)(param_1 + 0x25c))(param_1);
    }
    if (_Dst != (void *)0x0) {
      _memset(_Dst,0,param_2);
      return _Dst;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0046f190(param_1);
}


