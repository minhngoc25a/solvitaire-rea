// Function: _memcpy_s
// Entry: 0044e99f
// Size: 129 bytes
// Thunk: false
// External: false


/* Library Function - Single Match
    _memcpy_s
   
   Libraries: Visual Studio 2012, Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

errno_t __cdecl _memcpy_s(void *_Dst,rsize_t _DstSize,void *_Src,rsize_t _MaxCount)

{
  errno_t eVar1;
  __acrt_ptd *p_Var2;
  
  if (_MaxCount == 0) {
    eVar1 = 0;
  }
  else if (_Dst == (void *)0x0) {
    p_Var2 = FUN_0042470e();
    eVar1 = 0x16;
    *(undefined4 *)p_Var2 = 0x16;
    FUN_004243be();
  }
  else if ((_Src == (void *)0x0) || (_DstSize < _MaxCount)) {
    _memset(_Dst,0,_DstSize);
    if (_Src == (void *)0x0) {
      p_Var2 = FUN_0042470e();
      eVar1 = 0x16;
    }
    else {
      if (_MaxCount <= _DstSize) {
        return 0x16;
      }
      p_Var2 = FUN_0042470e();
      eVar1 = 0x22;
    }
    *(errno_t *)p_Var2 = eVar1;
    FUN_004243be();
  }
  else {
    FUN_0044c490(_Dst,_Src,_MaxCount);
    eVar1 = 0;
  }
  return eVar1;
}


