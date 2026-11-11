// Function: FUN_004995c0
// Entry: 004995c0
// Size: 123 bytes
// Thunk: false
// External: false


undefined4 __cdecl FUN_004995c0(uint param_1,int param_2,void *param_3,size_t param_4)

{
  uint uVar1;
  size_t sVar2;
  char *_Dst;
  
  if ((param_2 < 1) && (param_2 < 0)) {
    if (0 < (int)param_4) {
      _memset(param_3,0x30,param_4);
      return 0xffffffff;
    }
  }
  else {
    _Dst = (char *)((int)param_3 + param_4);
    for (sVar2 = param_4; 0 < (int)sVar2; sVar2 = sVar2 - 1) {
      _Dst = _Dst + -1;
      uVar1 = param_2 << 0x1d;
      param_2 = param_2 >> 3;
      *_Dst = ((byte)param_1 & 7) + 0x30;
      param_1 = param_1 >> 3 | uVar1;
    }
    if (param_1 == 0 && param_2 == 0) {
      return 0;
    }
    if (0 < (int)param_4) {
      _memset(_Dst,0x37,param_4);
    }
  }
  return 0xffffffff;
}


