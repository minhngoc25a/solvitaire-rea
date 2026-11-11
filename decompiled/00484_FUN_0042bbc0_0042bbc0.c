// Function: FUN_0042bbc0
// Entry: 0042bbc0
// Size: 571 bytes
// Thunk: false
// External: false


undefined4 __cdecl FUN_0042bbc0(int *param_1,uint *param_2,uint *param_3,uint param_4,uint param_5)

{
  longlong lVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;
  uint *local_18 [6];
  
  if ((param_1 == (int *)0x0) || (param_2 == (uint *)0x0)) {
    return 0xfffffffe;
  }
  if (param_3 == (uint *)0x0) {
    local_18[0] = param_3;
    local_18[1] = (uint *)0x1;
    local_18[2] = (uint *)0x2;
    local_18[3] = (uint *)0x3;
    local_18[4] = (uint *)0x4;
    local_18[5] = (uint *)0x4;
    lVar1 = (ulonglong)param_4 * (ulonglong)(uint)((int)local_18[*param_1] * param_1[2]);
    uVar2 = (uint)lVar1;
    iVar4 = param_5 * (int)local_18[*param_1] * param_1[2] + (int)((ulonglong)lVar1 >> 0x20);
    if ((iVar4 != 0) || (uVar2 != 0)) {
      do {
        uVar5 = uVar2;
        if (iVar4 != 0) {
          uVar5 = 0xffffffff;
        }
        if (param_2 == (uint *)0x0) {
          if (uVar5 != 0) {
            FID_conflict___assert
                      (L"sz == 0",
                       L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h"
                       ,0x2fbb);
          }
        }
        else if (uVar5 != 0) {
          _memset(param_2,0,uVar5);
        }
        bVar6 = uVar2 < uVar5;
        uVar2 = uVar2 - uVar5;
        iVar4 = iVar4 - (uint)bVar6;
        param_2 = (uint *)((int)param_2 + uVar5);
      } while ((iVar4 != 0) || (uVar2 != 0));
      return 0;
    }
  }
  else {
    switch(param_1[4]) {
    case 1:
      local_18[0] = (uint *)0x0;
      local_18[1] = (uint *)0x1;
      local_18[2] = (uint *)0x2;
      local_18[3] = (uint *)0x3;
      local_18[4] = (uint *)0x4;
      local_18[5] = (uint *)0x4;
      lVar1 = (ulonglong)param_4 * (ulonglong)(uint)((int)local_18[*param_1] * param_1[2]);
      iVar4 = param_5 * (int)local_18[*param_1] * param_1[2] + (int)((ulonglong)lVar1 >> 0x20);
      break;
    case 2:
      uVar3 = FUN_004463b0(param_1,(int)param_2,(int)param_3,param_4,param_5);
      return uVar3;
    case 3:
      uVar3 = FUN_00445fc0(param_1,(uint)param_2,(uint)param_3,param_4,param_5);
      return uVar3;
    case 4:
      if (param_1[1] != param_1[2]) {
        FID_conflict___assert
                  (L"pConverter->channelsIn == pConverter->channelsOut",
                   L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h"
                   ,0xd131);
      }
      uVar3 = FUN_00445020((undefined1 *)param_2,param_1[2],(int)param_3,param_1[1],param_4,param_5,
                           param_1[7],*param_1);
      return uVar3;
    default:
      uVar3 = FUN_00446a60(param_1,param_2,(int)param_3,param_4,param_5);
      return uVar3;
    }
    for (uVar2 = (uint)lVar1; (iVar4 != 0 || (uVar2 != 0)); uVar2 = uVar2 - uVar5) {
      uVar5 = uVar2;
      if (iVar4 != 0) {
        uVar5 = 0xffffffff;
      }
      FUN_0044c490(param_2,param_3,uVar5);
      iVar4 = iVar4 - (uint)(uVar2 < uVar5);
      param_3 = (uint *)((int)param_3 + uVar5);
      param_2 = (uint *)((int)param_2 + uVar5);
    }
  }
  return 0;
}


