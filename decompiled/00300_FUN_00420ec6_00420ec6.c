// Function: FUN_00420ec6
// Entry: 00420ec6
// Size: 158 bytes
// Thunk: false
// External: false


int * FUN_00420ec6(int *param_1)

{
  int *piVar1;
  int *_Dst;
  
  _Dst = FUN_00478ad9((int *)param_1[7]);
  if (_Dst != (int *)0x0) {
    _memset(_Dst,0,param_1[10]);
    if (*(char *)((int)param_1 + 0x31) != '\0') {
      FUN_0047a01e((int)(_Dst + 2),(int *)param_1[6]);
    }
    param_1[4] = param_1[4] + 1;
    if (param_1[2] == 0) {
      if (*param_1 != 0) {
        *(int **)(*param_1 + 4) = _Dst;
      }
      param_1[2] = (int)_Dst;
      *_Dst = *param_1;
      _Dst[1] = 0;
      param_1[5] = 0;
      *(undefined1 *)(param_1 + 0xc) = 0;
    }
    else {
      _Dst[1] = param_1[2];
      *_Dst = *(int *)param_1[2];
      if (*(int *)param_1[2] != 0) {
        *(int **)(*(int *)param_1[2] + 4) = _Dst;
      }
      *(int **)param_1[2] = _Dst;
      param_1[5] = param_1[5] + 1;
      param_1[2] = (int)_Dst;
    }
    piVar1 = (int *)param_1[2];
    if (piVar1[1] == 0) {
      *param_1 = (int)piVar1;
    }
    if (*piVar1 == 0) {
      param_1[1] = (int)piVar1;
    }
    *(int **)param_1[3] = piVar1;
    _Dst = _Dst + 2;
  }
  return _Dst;
}


