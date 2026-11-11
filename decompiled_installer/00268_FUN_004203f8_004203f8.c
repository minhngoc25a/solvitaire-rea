// Function: FUN_004203f8
// Entry: 004203f8
// Size: 156 bytes
// Thunk: false
// External: false


undefined4 * __fastcall
FUN_004203f8(int param_1,int param_2,int param_3,int param_4,undefined4 param_5,int *param_6,
            int *param_7)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *_Dst;
  
  _Dst = (undefined4 *)0x0;
  FUN_0047a1ef(param_1,param_2,*param_7);
  if (0 < param_4) {
    _Dst = HeapAlloc(DAT_00542264,0,param_3 * param_4 + 0x18);
    if (_Dst != (undefined4 *)0x0) {
      _Dst[1] = param_3;
      _Dst[4] = param_4;
      _Dst[5] = param_5;
      _Dst[2] = param_6;
      _Dst[3] = param_7;
      *_Dst = 1;
      _Dst = _Dst + 6;
      _memset(_Dst,0,param_3 * param_4);
      *param_7 = (int)_Dst;
      iVar1 = FUN_0047a193(param_6);
      puVar2 = _Dst;
      while (iVar1 != 0) {
        FUN_0047a01e((int)puVar2,param_6);
        puVar2 = (undefined4 *)((int)puVar2 + param_3);
        param_4 = param_4 + -1;
        iVar1 = param_4;
      }
    }
  }
  return _Dst;
}


