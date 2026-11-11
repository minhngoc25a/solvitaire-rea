// Function: FUN_00447d80
// Entry: 00447d80
// Size: 1605 bytes
// Thunk: false
// External: false


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Removing unreachable block (ram,0x004481a2) */

int __cdecl FUN_00447d80(int *param_1,int param_2,uint *param_3,int param_4,uint *param_5)

{
  code *pcVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  ulonglong uVar12;
  char local_307d;
  uint local_307c;
  uint local_3078;
  uint local_3074;
  undefined8 local_3070;
  undefined8 local_3068;
  uint *local_3060;
  uint local_305c;
  int local_3058 [7];
  undefined4 local_303c;
  uint local_3038;
  uint local_3034;
  uint local_302c;
  uint local_3028;
  uint local_3024;
  undefined8 local_3020;
  uint local_3018;
  uint local_3014;
  uint local_3010;
  uint local_300c;
  ulonglong local_3008;
  uint auStack_3000 [1024];
  uint auStack_2000 [1024];
  uint auStack_1000 [1023];
  undefined4 uStack_4;
  
  uStack_4 = 0x447d8a;
  if (param_1 == (int *)0x0) {
    FID_conflict___assert
              (L"pConverter != ((void *)0)",
               L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h",
               0xd55c);
  }
  if (param_1[0x17] != param_1[8]) {
    FID_conflict___assert
              (L"pConverter->resampler.format == pConverter->channelConverter.format",
               L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h",
               0xd55d);
  }
  if (param_1[0x18] != param_1[9]) {
    FID_conflict___assert
              (L"pConverter->resampler.channels == pConverter->channelConverter.channelsIn",
               L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h",
               0xd55e);
  }
  uVar9 = param_1[0x18];
  uVar10 = param_1[10];
  if (uVar10 <= uVar9) {
    FID_conflict___assert
              (L"pConverter->resampler.channels < pConverter->channelConverter.channelsOut",
               L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h",
               0xd55f);
    uVar9 = param_1[0x18];
    uVar10 = param_1[10];
  }
  if (param_3 == (uint *)0x0) {
    local_302c = 0;
    local_3028 = 0;
  }
  else {
    local_3028 = *param_3;
    local_302c = param_3[1];
  }
  if (param_5 == (uint *)0x0) {
    local_305c = 0;
    local_3074 = 0;
  }
  else {
    local_3074 = *param_5;
    local_305c = param_5[1];
  }
  local_3058[0] = 0;
  local_3058[1] = 1;
  local_3058[2] = 2;
  local_3058[3] = 3;
  local_3058[4] = 4;
  local_3058[5] = 4;
  local_3058[0] = 0;
  local_3058[1] = 1;
  local_3058[2] = 2;
  local_3058[3] = 3;
  local_3058[4] = 4;
  local_3058[5] = 4;
  local_3018 = (uint)(0x1000 / (ulonglong)(local_3058[param_1[0x17]] * uVar9));
  local_3058[0] = 0;
  local_3058[1] = 1;
  local_3058[2] = 2;
  local_3058[3] = 3;
  local_3058[4] = 4;
  local_3058[5] = 4;
  local_3014 = (uint)(0x1000 / (ulonglong)(local_3058[param_1[0x17]] * uVar9));
  local_3020 = 0;
  local_3010 = (uint)(0x1000 / (ulonglong)(local_3058[param_1[8]] * uVar10));
  local_3070._0_4_ = 0;
  local_3070._4_4_ = 0;
  local_3020._0_4_ = (uint *)0x0;
  local_3020._4_4_ = 0;
  uVar9 = (uint)local_3070;
  uVar10 = (uint)(uint *)local_3020;
  if ((local_305c != 0) ||
     (local_3034 = local_3020._4_4_, uVar6 = local_3070._4_4_, local_3074 != 0)) {
    local_3024 = 0;
    local_300c = 0;
    local_3034 = 0;
    local_3070 = 0;
    do {
      local_3060 = (uint *)0x0;
      uVar12 = local_3020 >> 0x20;
      local_3020 = local_3020 & 0xffffffff00000000;
      if (param_2 != 0) {
        local_3058[0] = 0;
        local_3058[1] = 1;
        local_3058[2] = 2;
        local_3058[3] = 3;
        local_3058[4] = 4;
        local_3058[5] = 4;
        local_3060 = (uint *)(local_3058[*param_1] * param_1[2] * uVar9 + param_2);
      }
      if (param_4 != 0) {
        local_3058[0] = 0;
        local_3058[1] = 1;
        local_3058[2] = 2;
        local_3058[3] = 3;
        local_3058[4] = 4;
        local_3058[5] = 4;
        local_3020 = CONCAT44((int)uVar12,local_3058[param_1[1]] * param_1[3] * uVar10 + param_4);
      }
      local_307d = (char)param_1[0x38];
      uVar6 = local_3028 - uVar9;
      iVar8 = (local_302c - local_3024) - (uint)(local_3028 < uVar9);
      local_3068 = CONCAT44(iVar8,uVar6);
      if ((local_307d != '\0') && ((iVar8 != 0 || (local_3018 < uVar6)))) {
        iVar8 = 0;
        local_3068 = (ulonglong)local_3018;
        uVar6 = local_3018;
      }
      if ((local_305c - local_3034 != (uint)(local_3074 < uVar10)) ||
         (local_3058[6] = local_3074 - uVar10, local_3014 < local_3074 - uVar10)) {
        local_3058[6] = local_3014;
      }
      local_3078 = 0;
      local_303c = local_3078;
      local_3038 = local_3058[6];
      if ((*(char *)((int)param_1 + 0xe1) != '\0') && (local_3010 < (uint)local_3058[6])) {
        local_3038 = local_3010;
      }
      local_3078 = 0;
      local_3008 = 0;
      if (((param_1 == (int *)0xffffffb0) || (param_1[0x15] == 0)) ||
         (pcVar1 = *(code **)(param_1[0x15] + 0x1c), pcVar1 == (code *)0x0)) {
LAB_0044817c:
        local_307c = local_3038;
        uVar12 = __aulldiv((uint)((ulonglong)local_3038 * (ulonglong)(uint)param_1[0x19]),
                           local_3078 * param_1[0x19] +
                           (int)((ulonglong)local_3038 * (ulonglong)(uint)param_1[0x19] >> 0x20),
                           param_1[0x1a],0);
      }
      else {
        local_307c = local_3038;
        iVar5 = (*pcVar1)(param_1[0x16],param_1[0x14],local_3038,0,&local_3008);
        local_307d = (char)param_1[0x38];
        uVar6 = (uint)local_3068;
        iVar8 = local_3068._4_4_;
        uVar12 = local_3008;
        if (iVar5 != 0) {
          local_3038 = local_307c;
          goto LAB_0044817c;
        }
      }
      uVar3 = CONCAT44(iVar8,uVar6);
      if (uVar12 < CONCAT44(iVar8,uVar6)) {
        uVar3 = uVar12;
        local_3068 = uVar12;
      }
      if (local_307d != '\0') {
        if (param_2 == 0) {
          local_3060 = (uint *)0x0;
        }
        else {
          lVar2 = (uVar3 & 0xffffffff) * (ulonglong)(uint)param_1[2];
          FUN_0042d9a0(auStack_3000,param_1[0x17],local_3060,*param_1,(uint)lVar2,
                       (int)(uVar3 >> 0x20) * param_1[2] + (int)((ulonglong)lVar2 >> 0x20),
                       param_1[6]);
          local_3060 = auStack_3000;
        }
      }
      if (param_1 + 0x14 == (int *)0x0) {
        return -2;
      }
      if ((param_1[0x15] == 0) || (pcVar1 = *(code **)(param_1[0x15] + 0xc), pcVar1 == (code *)0x0))
      {
        return -0x1d;
      }
      iVar8 = (*pcVar1)(param_1[0x16],param_1[0x14],local_3060,&local_3068,auStack_2000,&local_307c)
      ;
      if (iVar8 != 0) {
        return iVar8;
      }
      if (param_4 != 0) {
        puVar4 = (uint *)local_3020;
        puVar7 = auStack_1000;
        if (*(char *)((int)param_1 + 0xe1) == '\0') {
          puVar7 = (uint *)local_3020;
        }
        iVar8 = FUN_0042bbc0(param_1 + 8,puVar7,auStack_2000,local_307c,local_3078);
        if (iVar8 != 0) {
          return iVar8;
        }
        if (*(char *)((int)param_1 + 0xe1) != '\0') {
          FUN_0042d9a0(puVar4,param_1[1],puVar7,param_1[8],
                       (uint)((ulonglong)local_307c * (ulonglong)(uint)param_1[10]),
                       local_3078 * param_1[10] +
                       (int)((ulonglong)local_307c * (ulonglong)(uint)param_1[10] >> 0x20),
                       param_1[6]);
        }
      }
      uVar9 = local_300c + (uint)local_3068;
      uVar6 = local_3024 + local_3068._4_4_ + (uint)CARRY4(local_300c,(uint)local_3068);
      bVar11 = CARRY4((uint)local_3070,local_307c);
      uVar10 = (uint)local_3070 + local_307c;
      local_300c = uVar9;
      local_3024 = uVar6;
      local_3070 = CONCAT44(local_3070._4_4_,uVar10);
      local_3034 = local_3034 + local_3078 + (uint)bVar11;
      if ((local_302c <= uVar6) && ((local_302c < uVar6 || (local_3028 < uVar9)))) {
        FID_conflict___assert
                  (L"framesProcessedIn <= frameCountIn",
                   L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h"
                   ,0xd5d8);
      }
      if ((local_305c <= local_3034) && ((local_305c < local_3034 || (local_3074 < uVar10)))) {
        FID_conflict___assert
                  (L"framesProcessedOut <= frameCountOut",
                   L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h"
                   ,0xd5d9);
      }
    } while (((local_307c != 0 || local_3078 != 0) && (local_3034 <= local_305c)) &&
            ((local_3034 < local_305c || (uVar10 < local_3074))));
  }
  if (param_3 != (uint *)0x0) {
    *param_3 = uVar9;
    param_3[1] = uVar6;
  }
  if (param_5 != (uint *)0x0) {
    *param_5 = uVar10;
    param_5[1] = local_3034;
  }
  return 0;
}


