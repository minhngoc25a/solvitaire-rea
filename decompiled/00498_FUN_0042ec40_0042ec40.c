// Function: FUN_0042ec40
// Entry: 0042ec40
// Size: 757 bytes
// Thunk: false
// External: false


int __cdecl FUN_0042ec40(int *param_1,int param_2,uint param_3,uint param_4,uint *param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  bool bVar9;
  uint local_3c;
  int local_38;
  int local_34;
  int local_30;
  int iStack_2c;
  int iStack_28;
  undefined1 local_24 [4];
  undefined8 local_20;
  int aiStack_18 [6];
  
  piVar5 = param_1;
  local_3c = 0;
  iVar8 = 0;
  local_20 = 0;
  if (param_5 != (uint *)0x0) {
    *param_5 = 0;
    param_5[1] = 0;
  }
  if ((param_3 == 0 && param_4 == 0) || (param_1 == (int *)0x0)) {
    return -2;
  }
  LOCK();
  local_30 = param_1[0xd];
  if (local_30 == 0) {
    param_1[0xd] = 0;
    local_30 = 0;
  }
  UNLOCK();
  if ((*(code **)(*param_1 + 8) == (code *)0x0) ||
     (iVar3 = (**(code **)(*param_1 + 8))(param_1,&local_38,&local_34,local_24,0,0), iVar3 != 0)) {
    piVar5 = (int *)param_1[10];
    if ((piVar5 == (int *)0x0) && ((param_1[0xb] != 0 || (piVar5 = param_1, param_1[0xc] != 0)))) {
      piVar5 = (int *)0x0;
    }
    iVar8 = FUN_004490d0(piVar5,param_2,param_3,param_4,(int *)param_5);
    return iVar8;
  }
  iStack_2c = local_38;
  iStack_28 = local_34;
  uVar6 = (uint)local_20;
  if ((param_4 == 0) && (param_1 = local_20._4_4_, param_3 == 0)) {
LAB_0042eea4:
    if (param_5 != (uint *)0x0) {
      *param_5 = uVar6;
      param_5[1] = (uint)param_1;
    }
    if (iVar8 == -0x11) {
      if ((param_1 != (int *)0x0) || (uVar6 != 0)) {
        FID_conflict___assert
                  (L"!(result == MA_AT_END && totalFramesProcessed > 0)",
                   L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h"
                   ,0xe045);
        return -0x11;
      }
    }
    else if ((iVar8 == 0) && (uVar6 == 0 && param_1 == (int *)0x0)) {
      iVar8 = -0x11;
    }
    return iVar8;
  }
  param_1 = local_20._4_4_;
  do {
    piVar7 = (int *)piVar5[10];
    if (piVar7 == (int *)0x0) {
      if ((piVar5[0xb] != 0) || (piVar7 = piVar5, piVar5[0xc] != 0)) {
        piVar7 = (int *)0x0;
      }
      iVar8 = 0;
      if (piVar7 == (int *)0x0) goto LAB_0042eea4;
    }
    iVar8 = FUN_004490d0(piVar7,param_2,param_3 - uVar6,
                         (param_4 - (int)param_1) - (uint)(param_3 < uVar6),(int *)&local_20);
    bVar9 = CARRY4(uVar6,(uint)local_20);
    uVar6 = uVar6 + (uint)local_20;
    param_1 = (int *)((int)param_1 + (uint)bVar9 + (int)local_20._4_4_);
    if (iVar8 != 0) {
      if (iVar8 != -0x11) goto LAB_0042eea4;
      iVar8 = 0;
      if (local_30 == 0) {
        piVar4 = (int *)piVar7[0xb];
        if (piVar4 == (int *)0x0) {
          if ((code *)piVar7[0xc] == (code *)0x0) goto LAB_0042eea4;
          piVar4 = (int *)(*(code *)piVar7[0xc])(piVar7);
          piVar5[10] = (int)piVar4;
          if (piVar4 == (int *)0x0) goto LAB_0042eea4;
        }
        else {
          piVar5[10] = (int)piVar4;
        }
        if (*(code **)(*piVar4 + 4) == (code *)0x0) {
          iVar8 = -0x1d;
          goto LAB_0042eea4;
        }
        iVar8 = (**(code **)(*piVar4 + 4))(piVar4,piVar4[2],piVar4[3]);
      }
      else {
        if ((uint)local_20 == 0 && local_20._4_4_ == (int *)0x0) {
          local_3c = local_3c + 1;
          if (1 < local_3c) goto LAB_0042eea4;
        }
        else {
          local_3c = 0;
        }
        if (*(code **)(*piVar7 + 4) == (code *)0x0) {
          iVar8 = -0x1d;
          goto LAB_0042eea4;
        }
        uVar1 = piVar7[7];
        uVar2 = piVar7[6];
        if (((uint)piVar7[5] < uVar1) || (((uint)piVar7[5] <= uVar1 && ((uint)piVar7[4] < uVar2))))
        {
          iVar8 = -3;
          goto LAB_0042eea4;
        }
        iVar8 = (**(code **)(*piVar7 + 4))
                          (piVar7,uVar2 + piVar7[2],
                           piVar7[3] + uVar1 + (uint)CARRY4(uVar2,piVar7[2]));
      }
      if (iVar8 != 0) goto LAB_0042eea4;
    }
    if (param_2 != 0) {
      aiStack_18[0] = 0;
      aiStack_18[1] = 1;
      aiStack_18[2] = 2;
      aiStack_18[3] = 3;
      aiStack_18[4] = 4;
      aiStack_18[5] = 4;
      param_2 = param_2 + aiStack_18[iStack_2c] * (uint)local_20 * iStack_28;
    }
    if ((param_4 < param_1) || ((param_4 <= param_1 && (param_3 <= uVar6)))) goto LAB_0042eea4;
  } while( true );
}


