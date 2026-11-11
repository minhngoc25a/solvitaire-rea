// Function: FUN_004a9af0
// Entry: 004a9af0
// Size: 147 bytes
// Thunk: false
// External: false


void * __cdecl FUN_004a9af0(int param_1,uint param_2,int param_3)

{
  LPVOID pvVar1;
  void *_Dst;
  
  pvVar1 = *(LPVOID *)(param_1 + 0x2a0);
  if (pvVar1 != (LPVOID)0x0) {
    if (param_2 <= *(uint *)(param_1 + 0x2a4)) {
      return pvVar1;
    }
    *(undefined4 *)(param_1 + 0x2a0) = 0;
    *(undefined4 *)(param_1 + 0x2a4) = 0;
    FUN_004a48e0(param_1,pvVar1);
  }
  _Dst = (void *)FUN_004a4910(param_1,param_2);
  if (_Dst == (void *)0x0) {
    if (param_3 < 2) {
      if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0046f190(param_1);
      }
      FUN_0046f210(param_1,0x5262e4);
      return (void *)0x0;
    }
  }
  else {
    _memset(_Dst,0,param_2);
    *(void **)(param_1 + 0x2a0) = _Dst;
    *(uint *)(param_1 + 0x2a4) = param_2;
  }
  return _Dst;
}


