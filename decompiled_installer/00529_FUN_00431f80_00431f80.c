// Function: FUN_00431f80
// Entry: 00431f80
// Size: 291 bytes
// Thunk: false
// External: false


void __cdecl FUN_00431f80(void *param_1,uint param_2,int param_3,int param_4,uint param_5)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  uint local_20;
  uint uStack_1c;
  int local_18 [6];
  
  if (param_4 == 1) {
    uVar2 = (uint)((ulonglong)param_2 * (ulonglong)param_5);
    uVar4 = param_3 * param_5 + (int)((ulonglong)param_2 * (ulonglong)param_5 >> 0x20);
    if ((uVar4 != 0) || (uVar2 != 0)) {
      uStack_1c = 0;
      local_20 = 0;
      while( true ) {
        do {
          *(undefined1 *)(local_20 + (int)param_1) = 0x80;
          bVar5 = 0xfffffffe < local_20;
          local_20 = local_20 + 1;
          uStack_1c = uStack_1c + bVar5;
        } while (uStack_1c < uVar4);
        if (uVar4 < uStack_1c) break;
        if (uVar2 <= local_20) {
          return;
        }
      }
    }
  }
  else {
    local_18[0] = 0;
    local_18[1] = 1;
    local_18[2] = 2;
    local_18[3] = 3;
    local_18[4] = 4;
    local_18[5] = 4;
    lVar1 = (ulonglong)param_2 * (ulonglong)(local_18[param_4] * param_5);
    iVar3 = param_3 * local_18[param_4] * param_5 + (int)((ulonglong)lVar1 >> 0x20);
    for (uVar2 = (uint)lVar1; (iVar3 != 0 || (uVar2 != 0)); uVar2 = uVar2 - uVar4) {
      uVar4 = uVar2;
      if (iVar3 != 0) {
        uVar4 = 0xffffffff;
      }
      if (param_1 == (void *)0x0) {
        if (uVar4 != 0) {
          FID_conflict___assert
                    (L"sz == 0",
                     L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h"
                     ,0x2fbb);
        }
      }
      else if (uVar4 != 0) {
        _memset(param_1,0,uVar4);
      }
      iVar3 = iVar3 - (uint)(uVar2 < uVar4);
      param_1 = (void *)((int)param_1 + uVar4);
    }
  }
  return;
}


