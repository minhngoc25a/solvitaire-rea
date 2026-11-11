// Function: FUN_00427fe0
// Entry: 00427fe0
// Size: 364 bytes
// Thunk: false
// External: false


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl FUN_00427fe0(int *param_1,void *param_2,int *param_3)

{
  size_t _Size;
  void *extraout_ECX;
  void *extraout_ECX_00;
  int iVar1;
  double dVar2;
  double dVar3;
  int local_38;
  int local_34;
  double local_30;
  double local_28;
  double local_20;
  double local_18;
  double local_10;
  double local_8;
  
  if ((param_3 == (int *)0x0) || (_memset(param_3,0,0x2c), param_1 == (int *)0x0)) {
    return -2;
  }
  dVar3 = (*(double *)(param_1 + 4) * _DAT_0050c338) /
          ((double)param_1[2] + (double)(&DAT_0050c3d0)[-(param_1[2] >> 0x1f)]);
  dVar2 = DAT_0050c320 - dVar3;
  FUN_00483ec0(extraout_ECX);
  FUN_00483ec0(extraout_ECX_00);
  local_34 = param_1[1];
  local_28 = DAT_0050c098 - dVar2;
  local_10 = dVar2 * _DAT_0050c390;
  local_38 = *param_1;
  local_30 = local_28 * DAT_0050c088;
  dVar3 = dVar3 / (*(double *)(param_1 + 6) + *(double *)(param_1 + 6));
  local_18 = dVar3 + DAT_0050c098;
  local_8 = DAT_0050c098 - dVar3;
  if (local_34 == 0) {
    iVar1 = -2;
  }
  else {
    iVar1 = local_34 * 4;
    param_3[9] = (int)param_2;
    _Size = local_34 * 8;
    local_20 = local_30;
    if (param_2 == (void *)0x0) {
      if (_Size != 0) {
        FID_conflict___assert
                  (L"sz == 0",
                   L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h"
                   ,0x2fbb);
      }
    }
    else if (_Size != 0) {
      _memset(param_2,0,_Size);
    }
    param_3[7] = (int)param_2;
    param_3[8] = (int)(iVar1 + (int)param_2);
    iVar1 = FUN_00427930(&local_38,param_3);
    if (iVar1 == 0) {
      return 0;
    }
  }
  return iVar1;
}


