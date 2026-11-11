// Function: FUN_0042b060
// Entry: 0042b060
// Size: 193 bytes
// Thunk: false
// External: false


int __cdecl FUN_0042b060(int *param_1,void *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  size_t local_10;
  int local_c;
  int local_8;
  
  if (param_3 != (int *)0x0) {
    _memset(param_3,0,0x68);
    iVar4 = FUN_00443ae0(param_1,&local_10);
    if (iVar4 == 0) {
      iVar4 = param_1[1];
      iVar1 = param_1[2];
      iVar2 = param_1[3];
      *param_3 = *param_1;
      param_3[1] = iVar4;
      param_3[2] = iVar1;
      param_3[3] = iVar2;
      iVar4 = param_1[4];
      iVar1 = param_1[5];
      iVar2 = param_1[6];
      iVar3 = param_1[7];
      param_3[0x17] = (int)param_2;
      param_3[4] = iVar4;
      param_3[5] = iVar1;
      param_3[6] = iVar2;
      param_3[7] = iVar3;
      if (param_2 == (void *)0x0) {
        if (local_10 != 0) {
          FID_conflict___assert
                    (L"sz == 0",
                     L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h"
                     ,0x2fbb);
        }
      }
      else if (local_10 != 0) {
        _memset(param_2,0,local_10);
      }
      param_3[0xc] = local_c + (int)param_2;
      param_3[0xd] = local_8 + (int)param_2;
      iVar4 = FUN_00443980(param_3,(int)param_2,(int)&local_10,param_1[2],param_1[3],0);
      if (iVar4 == 0) {
        param_3[10] = 1;
        param_3[0xb] = 0;
      }
    }
    return iVar4;
  }
  return -2;
}


