// Function: FUN_00427cf0
// Entry: 00427cf0
// Size: 267 bytes
// Thunk: false
// External: false


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_00427cf0(int *param_1,void *param_2,int *param_3)

{
  int iVar1;
  uint _Size;
  double dVar2;
  
  if (param_3 != (int *)0x0) {
    *param_3 = 0;
    param_3[1] = 0;
    param_3[2] = 0;
    param_3[3] = 0;
    param_3[4] = 0;
    param_3[5] = 0;
    if ((param_1 != (int *)0x0) && (iVar1 = param_1[1], iVar1 != 0)) {
      param_3[4] = (int)param_2;
      _Size = iVar1 * 4 + 7U & 0xfffffff8;
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
      param_3[3] = (int)param_2;
      iVar1 = *param_1;
      if ((iVar1 == 5) || (iVar1 == 2)) {
        if (((*param_3 == 0) || (*param_3 == iVar1)) &&
           ((param_3[1] == 0 || (param_3[1] == param_1[1])))) {
          *param_3 = iVar1;
          param_3[1] = param_1[1];
          dVar2 = (*(double *)(param_1 + 4) * _DAT_0050c398) /
                  ((double)param_1[2] + (double)(&DAT_0050c3d0)[-(param_1[2] >> 0x1f)]);
          FUN_00482e00();
          if (*param_1 != 5) {
            param_3[2] = (int)(dVar2 * DAT_0050c350);
            return 0;
          }
          param_3[2] = (int)(float)dVar2;
          return 0;
        }
        return 0xfffffffd;
      }
    }
  }
  return 0xfffffffe;
}


