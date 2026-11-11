// Function: FUN_0046b1be
// Entry: 0046b1be
// Size: 473 bytes
// Thunk: false
// External: false


uint __cdecl FUN_0046b1be(LPWSTR param_1,char *param_2,uint param_3,uint param_4,FILE *param_5)

{
  int *piVar1;
  __acrt_ptd *p_Var2;
  char *_MaxCount;
  char *_DstSize;
  char *pcVar3;
  LPWSTR pWVar4;
  uint uVar5;
  LPWSTR local_14;
  char *local_10;
  char *local_c;
  
  if (param_3 == 0) {
    return 0;
  }
  if (param_4 == 0) {
    return 0;
  }
  if (param_1 == (LPWSTR)0x0) {
LAB_0046b1dd:
    p_Var2 = FUN_0042470e();
    *(undefined4 *)p_Var2 = 0x16;
  }
  else {
    if ((param_5 == (FILE *)0x0) || ((uint)(0xffffffff / (ulonglong)param_3) < param_4)) {
      if (param_2 != (char *)0xffffffff) {
        _memset(param_1,0,(size_t)param_2);
      }
      if ((param_5 == (FILE *)0x0) || ((uint)(0xffffffff / (ulonglong)param_3) < param_4))
      goto LAB_0046b1dd;
    }
    piVar1 = &param_5->_flag;
    if ((*piVar1 & 0x4c0U) == 0) {
      local_10 = (char *)0x1000;
    }
    else {
      local_10 = (char *)param_5->_bufsiz;
    }
    local_14 = param_1;
    _DstSize = param_2;
    pcVar3 = (char *)(param_3 * param_4);
    while( true ) {
      if (pcVar3 == (char *)0x0) {
        return param_4;
      }
      if ((param_5->_flag & 0x4c0U) != 0) break;
LAB_0046b2b6:
      if (pcVar3 < local_10) {
        uVar5 = FUN_004a44f4(param_5);
        if (uVar5 == 0xffffffff) goto LAB_0046b385;
        if (_DstSize == (char *)0x0) goto LAB_0046b359;
        pcVar3 = pcVar3 + -1;
        _DstSize = _DstSize + -1;
        *(char *)local_14 = (char)uVar5;
        local_10 = (char *)param_5->_bufsiz;
        _MaxCount = (char *)0x1;
      }
      else {
        local_c = pcVar3;
        if ((char *)0x7fffffff < pcVar3) {
          local_c = (char *)0x7fffffff;
        }
        if (local_10 != (char *)0x0) {
          local_c = local_c + -((uint)local_c % (uint)local_10);
        }
        if (_DstSize < local_c) goto LAB_0046b359;
        param_5->_base = (char *)0x0;
        param_5->_ptr = (char *)param_5->_cnt;
        pWVar4 = local_14;
        uVar5 = __fileno(param_5);
        _MaxCount = (char *)FUN_004a3c8d(uVar5,pWVar4,(uint)local_c);
        if (_MaxCount == (char *)0x0) {
          uVar5 = 8;
          goto LAB_0046b37e;
        }
        if ((int)_MaxCount < 0) goto LAB_0046b37c;
        pcVar3 = pcVar3 + -(int)_MaxCount;
        _DstSize = _DstSize + -(int)_MaxCount;
      }
LAB_0046b343:
      local_14 = (LPWSTR)((int)local_14 + (int)_MaxCount);
    }
    _MaxCount = param_5->_base;
    if (_MaxCount == (char *)0x0) goto LAB_0046b2b6;
    if ((int)_MaxCount < 0) {
LAB_0046b37c:
      uVar5 = 0x10;
LAB_0046b37e:
      LOCK();
      *piVar1 = *piVar1 | uVar5;
      UNLOCK();
LAB_0046b385:
      return (uint)((int)(param_3 * param_4) - (int)pcVar3) / param_3;
    }
    if (pcVar3 < _MaxCount) {
      _MaxCount = pcVar3;
    }
    if (_MaxCount <= _DstSize) {
      _memcpy_s(local_14,(rsize_t)_DstSize,param_5->_ptr,(rsize_t)_MaxCount);
      pcVar3 = pcVar3 + -(int)_MaxCount;
      param_5->_base = param_5->_base + -(int)_MaxCount;
      param_5->_ptr = _MaxCount + (int)param_5->_ptr;
      _DstSize = _DstSize + -(int)_MaxCount;
      goto LAB_0046b343;
    }
LAB_0046b359:
    if (param_2 != (char *)0xffffffff) {
      _memset(param_1,0,(size_t)param_2);
    }
    p_Var2 = FUN_0042470e();
    *(undefined4 *)p_Var2 = 0x22;
  }
  FUN_004243be();
  return 0;
}


