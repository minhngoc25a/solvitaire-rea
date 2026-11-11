// Function: FUN_004483d0
// Entry: 004483d0
// Size: 1603 bytes
// Thunk: false
// External: false


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Removing unreachable block (ram,0x00448802) */

int __cdecl FUN_004483d0(int *param_1,int param_2,uint *param_3,int param_4,uint *param_5)

{
  code *pcVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint *puVar4;
  uint uVar5;
  uint *puVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  char local_3075;
  undefined8 local_3074;
  uint local_306c;
  int local_3068;
  uint local_3064;
  uint local_3060;
  undefined8 local_305c;
  uint local_3054;
  int local_3050 [7];
  uint local_3034;
  uint *local_3030;
  uint local_3028;
  uint local_3024;
  uint local_3020;
  undefined8 local_301c;
  uint local_3014;
  uint local_3010;
  uint *local_300c;
  ulonglong local_3008;
  uint auStack_3000 [1024];
  uint auStack_2000 [1024];
  uint auStack_1000 [1023];
  undefined4 uStack_4;
  
  uStack_4 = 0x4483da;
  if (param_1 == (int *)0x0) {
    FID_conflict___assert
              (L"pConverter != ((void *)0)",
               L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h",
               0xd5f8);
  }
  if (param_1[0x17] != param_1[8]) {
    FID_conflict___assert
              (L"pConverter->resampler.format == pConverter->channelConverter.format",
               L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h",
               0xd5f9);
  }
  iVar7 = param_1[10];
  if (param_1[0x18] != iVar7) {
    FID_conflict___assert
              (L"pConverter->resampler.channels == pConverter->channelConverter.channelsOut",
               L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h",
               0xd5fa);
    iVar7 = param_1[10];
  }
  uVar5 = param_1[0x18];
  uVar9 = param_1[9];
  if (uVar9 < uVar5) {
    FID_conflict___assert
              (L"pConverter->resampler.channels <= pConverter->channelConverter.channelsIn",
               L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h",
               0xd5fb);
    uVar9 = param_1[9];
    iVar7 = param_1[10];
    uVar5 = param_1[0x18];
  }
  if (param_3 == (uint *)0x0) {
    local_3024 = 0;
    local_3020 = 0;
  }
  else {
    local_3020 = *param_3;
    local_3024 = param_3[1];
  }
  if (param_5 == (uint *)0x0) {
    local_3054 = 0;
    local_3064 = 0;
  }
  else {
    local_3064 = *param_5;
    local_3054 = param_5[1];
  }
  local_3050[0] = 0;
  local_3050[1] = 1;
  local_3050[2] = 2;
  local_3050[3] = 3;
  local_3050[4] = 4;
  local_3050[5] = 4;
  local_3050[0] = 0;
  local_3050[1] = 1;
  local_3050[2] = 2;
  local_3050[3] = 3;
  local_3050[4] = 4;
  local_3050[5] = 4;
  local_3010 = (uint)(0x1000 / (ulonglong)(local_3050[param_1[8]] * uVar9));
  local_3050[0] = 0;
  local_3050[1] = 1;
  local_3050[2] = 2;
  local_3050[3] = 3;
  local_3050[4] = 4;
  local_3050[5] = 4;
  local_3050[6] = (uint)(0x1000 / (ulonglong)(uint)(local_3050[param_1[8]] * iVar7));
  local_3014 = (uint)(0x1000 / (ulonglong)(local_3050[param_1[0x17]] * uVar5));
  local_305c._0_4_ = 0;
  local_305c._4_4_ = 0;
  local_301c._0_4_ = 0;
  local_301c._4_4_ = 0;
  uVar5 = (uint)local_301c;
  uVar9 = local_301c._4_4_;
  uVar10 = (uint)local_305c;
  if ((local_3054 != 0) || (local_3060 = local_305c._4_4_, local_3064 != 0)) {
    local_3060 = 0;
    local_3028 = 0;
    local_305c = 0;
    local_301c = 0;
    do {
      local_3030 = (uint *)0x0;
      local_300c = (uint *)0x0;
      if (param_2 != 0) {
        local_3050[0] = 0;
        local_3050[1] = 1;
        local_3050[2] = 2;
        local_3050[3] = 3;
        local_3050[4] = 4;
        local_3050[5] = 4;
        local_3030 = (uint *)(local_3050[*param_1] * param_1[2] * uVar10 + param_2);
      }
      if (param_4 != 0) {
        local_3050[0] = 0;
        local_3050[1] = 1;
        local_3050[2] = 2;
        local_3050[3] = 3;
        local_3050[4] = 4;
        local_3050[5] = 4;
        local_300c = (uint *)(local_3050[param_1[1]] * param_1[3] * uVar5 + param_4);
      }
      if ((local_3054 - uVar9 != (uint)(local_3064 < uVar5)) ||
         (local_3034 = local_3064 - uVar5, (uint)local_3050[6] < local_3064 - uVar5)) {
        local_3034 = local_3050[6];
      }
      if ((*(char *)((int)param_1 + 0xe1) != '\0') && (local_3014 < local_3034)) {
        local_3034 = local_3014;
      }
      local_3068 = 0;
      uVar5 = local_3020 - local_3028;
      local_3075 = (char)param_1[0x38];
      iVar7 = (local_3024 - local_3060) - (uint)(local_3020 < local_3028);
      local_3074 = CONCAT44(iVar7,uVar5);
      if ((local_3075 != '\0') && ((iVar7 != 0 || (local_3010 < uVar5)))) {
        iVar7 = 0;
        local_3074 = (ulonglong)local_3010;
        uVar5 = local_3010;
      }
      if ((iVar7 != 0) || ((uint)local_3050[6] < uVar5)) {
        local_3074 = (ulonglong)(uint)local_3050[6];
        uVar5 = local_3050[6];
      }
      uVar8 = 0;
      local_3008 = 0;
      if (((param_1 + 0x14 == (int *)0x0) || (param_1[0x15] == 0)) ||
         (pcVar1 = *(code **)(param_1[0x15] + 0x1c), pcVar1 == (code *)0x0)) {
LAB_004487dc:
        local_306c = local_3034;
        uVar11 = __aulldiv((uint)((ulonglong)local_3034 * (ulonglong)(uint)param_1[0x19]),
                           local_3068 * param_1[0x19] +
                           (int)((ulonglong)local_3034 * (ulonglong)(uint)param_1[0x19] >> 0x20),
                           param_1[0x1a],0);
      }
      else {
        local_306c = local_3034;
        iVar7 = (*pcVar1)(param_1[0x16],param_1[0x14],local_3034,0);
        local_3075 = (char)param_1[0x38];
        uVar5 = (uint)local_3074;
        uVar8 = local_3074._4_4_;
        uVar11 = local_3008;
        if (iVar7 != 0) {
          local_3034 = local_306c;
          goto LAB_004487dc;
        }
      }
      uVar3 = CONCAT44(uVar8,uVar5);
      if (uVar11 < CONCAT44(uVar8,uVar5)) {
        uVar3 = uVar11;
        local_3074 = uVar11;
      }
      puVar4 = local_3030;
      if (local_3075 != '\0') {
        if (local_3030 == (uint *)0x0) {
          puVar4 = (uint *)0x0;
        }
        else {
          lVar2 = (uVar3 & 0xffffffff) * (ulonglong)(uint)param_1[2];
          FUN_0042d9a0(auStack_3000,param_1[8],local_3030,*param_1,(uint)lVar2,
                       (int)(uVar3 >> 0x20) * param_1[2] + (int)((ulonglong)lVar2 >> 0x20),
                       param_1[6]);
          puVar4 = auStack_3000;
          uVar3 = local_3074;
        }
      }
      iVar7 = FUN_0042bbc0(param_1 + 8,auStack_2000,puVar4,(uint)uVar3,(uint)(uVar3 >> 0x20));
      puVar4 = local_300c;
      if (iVar7 != 0) {
        return iVar7;
      }
      puVar6 = auStack_1000;
      if (*(char *)((int)param_1 + 0xe1) == '\0') {
        puVar6 = local_300c;
      }
      if (param_1 + 0x14 == (int *)0x0) {
        return -2;
      }
      if ((param_1[0x15] == 0) || (pcVar1 = *(code **)(param_1[0x15] + 0xc), pcVar1 == (code *)0x0))
      {
        return -0x1d;
      }
      iVar7 = (*pcVar1)(param_1[0x16],param_1[0x14],auStack_2000,&local_3074,puVar6);
      if (iVar7 != 0) {
        return iVar7;
      }
      if ((*(char *)((int)param_1 + 0xe1) != '\0') && (puVar4 != (uint *)0x0)) {
        FUN_0042d9a0(puVar4,param_1[1],puVar6,param_1[0x17],
                     (uint)((ulonglong)local_306c * (ulonglong)(uint)param_1[3]),
                     local_3068 * param_1[3] +
                     (int)((ulonglong)local_306c * (ulonglong)(uint)param_1[3] >> 0x20),param_1[6]);
      }
      uVar10 = local_3028 + (uint)local_3074;
      local_3060 = local_3060 + local_3074._4_4_ + (uint)CARRY4(local_3028,(uint)local_3074);
      uVar5 = (uint)local_301c + local_306c;
      uVar9 = (uint)local_305c + local_3068 + (uint)CARRY4((uint)local_301c,local_306c);
      local_3028 = uVar10;
      local_301c = CONCAT44(local_301c._4_4_,uVar5);
      local_305c = CONCAT44(local_305c._4_4_,uVar9);
      if ((local_3024 <= local_3060) && ((local_3024 < local_3060 || (local_3020 < uVar10)))) {
        FID_conflict___assert
                  (L"framesProcessedIn <= frameCountIn",
                   L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h"
                   ,0xd67c);
      }
      if ((local_3054 <= uVar9) && ((local_3054 < uVar9 || (local_3064 < uVar5)))) {
        FID_conflict___assert
                  (L"framesProcessedOut <= frameCountOut",
                   L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h"
                   ,0xd67d);
      }
    } while (((local_306c != 0 || local_3068 != 0) && (uVar9 <= local_3054)) &&
            ((uVar9 < local_3054 || (uVar5 < local_3064))));
  }
  if (param_3 != (uint *)0x0) {
    *param_3 = uVar10;
    param_3[1] = local_3060;
  }
  if (param_5 != (uint *)0x0) {
    *param_5 = uVar5;
    param_5[1] = uVar9;
  }
  return 0;
}


