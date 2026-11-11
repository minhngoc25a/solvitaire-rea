// Function: FUN_0042c1d0
// Entry: 0042c1d0
// Size: 1111 bytes
// Thunk: false
// External: false


int __cdecl FUN_0042c1d0(uint *param_1,uint *param_2,uint *param_3,uint *param_4,uint *param_5)

{
  uint *puVar1;
  code *pcVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  uint local_28;
  uint *local_20;
  uint uStack_1c;
  int local_18 [6];
  
  puVar7 = param_1;
  if (param_1 == (uint *)0x0) {
    return -2;
  }
  switch(param_1[7]) {
  case 0:
    if (param_3 == (uint *)0x0) {
      uStack_1c = 0;
      local_20 = (uint *)0x0;
      uVar4 = uStack_1c;
    }
    else {
      local_20 = (uint *)*param_3;
      uVar4 = param_3[1];
    }
    uStack_1c = 0;
    if (param_5 == (uint *)0x0) {
      local_20 = (uint *)0x0;
      param_1 = local_20;
      local_28 = uStack_1c;
    }
    else {
      uVar6 = param_5[1];
      puVar1 = (uint *)*param_5;
      param_1 = puVar1;
      local_28 = uVar6;
      if (((uVar4 <= uVar6) && (param_1 = local_20, local_28 = uVar4, uVar6 <= uVar4)) &&
         (param_1 = puVar1, local_28 = uVar6, local_20 < puVar1)) {
        param_1 = local_20;
        local_28 = uVar4;
      }
    }
    if (param_4 != (uint *)0x0) {
      uVar4 = puVar7[3];
      uVar6 = puVar7[1];
      local_18[0] = 0;
      local_18[1] = 1;
      local_18[2] = 2;
      local_18[3] = 3;
      local_18[4] = 4;
      local_18[5] = 4;
      if (param_2 == (uint *)0x0) {
        uVar4 = local_18[uVar6] * uVar4;
        lVar3 = ZEXT48(param_1) * (ulonglong)uVar4;
        iVar5 = local_28 * uVar4 + (int)((ulonglong)lVar3 >> 0x20);
        for (uVar4 = (uint)lVar3; (iVar5 != 0 || (uVar4 != 0)); uVar4 = uVar4 - uVar6) {
          uVar6 = uVar4;
          if (iVar5 != 0) {
            uVar6 = 0xffffffff;
          }
          if (param_4 == (uint *)0x0) {
            if (uVar6 != 0) {
              FID_conflict___assert
                        (L"sz == 0",
                         L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h"
                         ,0x2fbb);
            }
          }
          else if (uVar6 != 0) {
            _memset(param_4,0,uVar6);
          }
          iVar5 = iVar5 - (uint)(uVar4 < uVar6);
          param_4 = (uint *)((int)param_4 + uVar6);
        }
      }
      else {
        uVar4 = local_18[uVar6] * uVar4;
        lVar3 = ZEXT48(param_1) * (ulonglong)uVar4;
        iVar5 = local_28 * uVar4 + (int)((ulonglong)lVar3 >> 0x20);
        for (uVar4 = (uint)lVar3; (iVar5 != 0 || (uVar4 != 0)); uVar4 = uVar4 - uVar6) {
          uVar6 = uVar4;
          if (iVar5 != 0) {
            uVar6 = 0xffffffff;
          }
          FUN_0044c490(param_4,param_2,uVar6);
          iVar5 = iVar5 - (uint)(uVar4 < uVar6);
          param_2 = (uint *)((int)param_2 + uVar6);
          param_4 = (uint *)((int)param_4 + uVar6);
        }
      }
    }
    if (param_3 != (uint *)0x0) {
      *param_3 = (uint)param_1;
      param_3[1] = local_28;
    }
    if (param_5 != (uint *)0x0) {
      *param_5 = (uint)param_1;
      param_5[1] = local_28;
      return 0;
    }
    break;
  case 1:
    if (param_3 == (uint *)0x0) {
      uStack_1c = 0;
      local_20 = (uint *)0x0;
      uVar4 = uStack_1c;
      puVar7 = local_20;
    }
    else {
      uVar4 = param_3[1];
      puVar7 = (uint *)*param_3;
    }
    if (param_5 == (uint *)0x0) {
      uStack_1c = 0;
      local_20 = (uint *)0x0;
    }
    else {
      uStack_1c = param_5[1];
      local_20 = (uint *)*param_5;
      if ((uVar4 <= uStack_1c) && ((uVar4 < uStack_1c || (puVar7 < local_20)))) {
        uStack_1c = uVar4;
        local_20 = puVar7;
      }
    }
    if (param_4 != (uint *)0x0) {
      if (param_2 == (uint *)0x0) {
        local_18[0] = 0;
        local_18[1] = 1;
        local_18[2] = 2;
        local_18[3] = 3;
        local_18[4] = 4;
        local_18[5] = 4;
        lVar3 = ZEXT48(local_20) * (ulonglong)(local_18[param_1[1]] * param_1[3]);
        iVar5 = uStack_1c * local_18[param_1[1]] * param_1[3] + (int)((ulonglong)lVar3 >> 0x20);
        for (uVar4 = (uint)lVar3; (iVar5 != 0 || (uVar4 != 0)); uVar4 = uVar4 - uVar6) {
          uVar6 = uVar4;
          if (iVar5 != 0) {
            uVar6 = 0xffffffff;
          }
          if (param_4 == (uint *)0x0) {
            if (uVar6 != 0) {
              FID_conflict___assert
                        (L"sz == 0",
                         L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h"
                         ,0x2fbb);
            }
          }
          else if (uVar6 != 0) {
            _memset(param_4,0,uVar6);
          }
          iVar5 = iVar5 - (uint)(uVar4 < uVar6);
          param_4 = (uint *)((int)param_4 + uVar6);
        }
      }
      else {
        FUN_0042d9a0(param_4,param_1[1],param_2,*param_1,
                     (uint)(ZEXT48(local_20) * (ulonglong)param_1[2]),
                     uStack_1c * param_1[2] +
                     (int)(ZEXT48(local_20) * (ulonglong)param_1[2] >> 0x20),param_1[6]);
      }
    }
    if (param_3 != (uint *)0x0) {
      *param_3 = (uint)local_20;
      param_3[1] = uStack_1c;
    }
    if (param_5 != (uint *)0x0) {
      *param_5 = (uint)local_20;
      param_5[1] = uStack_1c;
    }
    break;
  case 2:
    iVar5 = FUN_00447970((int *)param_1,param_2,param_3,param_4,param_5);
    return iVar5;
  case 3:
    if (((char)param_1[0x38] != '\0') || (*(char *)((int)param_1 + 0xe1) != '\0')) {
      iVar5 = FUN_00447410((int *)param_1,(int)param_2,param_3,(int)param_4,param_5);
      return iVar5;
    }
    if ((param_1 + 0x14 != (uint *)0x0) && ((param_5 != (uint *)0x0 || (param_3 != (uint *)0x0)))) {
      if ((param_1[0x15] != 0) && (pcVar2 = *(code **)(param_1[0x15] + 0xc), pcVar2 != (code *)0x0))
      {
        iVar5 = (*pcVar2)(param_1[0x16],param_1[0x14],param_2,param_3,param_4,param_5);
        return iVar5;
      }
      return -0x1d;
    }
    return -2;
  case 4:
    iVar5 = FUN_00447d80((int *)param_1,(int)param_2,param_3,(int)param_4,param_5);
    return iVar5;
  case 5:
    iVar5 = FUN_004483d0((int *)param_1,(int)param_2,param_3,(int)param_4,param_5);
    return iVar5;
  default:
    return -3;
  }
  return 0;
}


