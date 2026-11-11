// Function: FUN_00447410
// Entry: 00447410
// Size: 1365 bytes
// Thunk: false
// External: false


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int __cdecl FUN_00447410(int *param_1,int param_2,uint *param_3,int param_4,uint *param_5)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  int iVar5;
  uint *puVar6;
  uint *puVar7;
  uint uVar8;
  bool bVar9;
  uint *puVar10;
  uint local_2054;
  uint local_2050;
  uint local_204c;
  int local_2048;
  undefined8 local_2044;
  uint local_203c;
  uint local_2038;
  int local_2034;
  uint local_2030;
  uint local_202c;
  undefined8 local_2028;
  uint local_2020;
  uint local_201c;
  int local_2018 [1030];
  uint local_1000 [1023];
  undefined4 uStack_4;
  
  uStack_4 = 0x44741a;
  iVar5 = 0;
  if (param_1 == (int *)0x0) {
    FID_conflict___assert
              (L"pConverter != ((void *)0)",
               L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h",
               0xd454);
  }
  if (param_3 == (uint *)0x0) {
    local_2020 = 0;
    local_2044._0_4_ = 0;
    local_201c = (uint)local_2044;
  }
  else {
    local_2020 = param_3[1];
    local_201c = *param_3;
  }
  if (param_5 == (uint *)0x0) {
    local_2044._4_4_ = 0;
    local_2044._0_4_ = 0;
    local_203c = (uint)local_2044;
    local_202c = local_2044._4_4_;
  }
  else {
    local_203c = *param_5;
    local_202c = param_5[1];
  }
  local_2028 = 0;
  local_2044._0_4_ = 0;
  local_2044._4_4_ = 0;
  local_2028._0_4_ = 0;
  local_2028._4_4_ = 0;
  uVar3 = (uint)local_2044;
  uVar2 = (uint)local_2028;
  if ((local_202c == 0) &&
     (local_2054 = local_2044._4_4_, local_2050 = local_2028._4_4_, local_203c == 0)) {
LAB_0044791f:
    if (param_3 != (uint *)0x0) {
      *param_3 = uVar3;
      param_3[1] = local_2054;
    }
    if (param_5 != (uint *)0x0) {
      *param_5 = uVar2;
      param_5[1] = local_2050;
    }
    return iVar5;
  }
  local_2054 = 0;
  local_2050 = 0;
  local_2044 = 0;
  do {
    local_2018[0] = 0;
    local_2018[1] = 1;
    local_2018[2] = 2;
    local_2018[3] = 3;
    local_2018[4] = 4;
    local_2018[5] = 4;
    local_2030 = (uint)(0x1000 / (ulonglong)(uint)(local_2018[param_1[0x17]] * param_1[0x18]));
    if (param_2 == 0) {
      puVar6 = (uint *)0x0;
    }
    else {
      local_2018[0] = 0;
      local_2018[1] = 1;
      local_2018[2] = 2;
      local_2018[3] = 3;
      local_2018[4] = 4;
      local_2018[5] = 4;
      puVar6 = (uint *)(local_2018[*param_1] * param_1[2] * uVar3 + param_2);
    }
    if (param_4 == 0) {
      puVar7 = (uint *)0x0;
    }
    else {
      local_2018[0] = 0;
      local_2018[1] = 1;
      local_2018[2] = 2;
      local_2018[3] = 3;
      local_2018[4] = 4;
      local_2018[5] = 4;
      puVar7 = (uint *)(local_2018[param_1[1]] * param_1[3] * uVar2 + param_4);
    }
    local_2018[5] = 4;
    local_2018[4] = 4;
    local_2018[3] = 3;
    local_2018[2] = 2;
    local_2018[1] = 1;
    local_2018[0] = 0;
    if ((char)param_1[0x38] == '\0') {
      if (*(char *)((int)param_1 + 0xe1) != '\x01') {
        FID_conflict___assert
                  (L"pConverter->hasPostFormatConversion == 1",
                   L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h"
                   ,0xd4a0);
      }
      local_2038 = local_201c - uVar3;
      local_2034 = (local_2020 - local_2054) - (uint)(local_201c < uVar3);
      local_204c = local_203c - uVar2;
      if ((local_202c - local_2050 != (uint)(local_203c < uVar2)) || (local_2030 < local_204c)) {
        local_204c = local_2030;
      }
      local_2048 = 0;
      if (param_1 == (int *)0xffffffb0) {
        iVar5 = -2;
        goto LAB_0044791f;
      }
      if ((param_1[0x15] == 0) || (pcVar4 = *(code **)(param_1[0x15] + 0xc), pcVar4 == (code *)0x0))
      {
        iVar5 = -0x1d;
        goto LAB_0044791f;
      }
      puVar10 = local_1000;
LAB_0044781d:
      iVar5 = (*pcVar4)(param_1[0x16],param_1[0x14],puVar6,&local_2038,puVar10,&local_204c);
    }
    else {
      local_2018[0] = 0;
      local_2018[1] = 1;
      local_2018[2] = 2;
      local_2018[3] = 3;
      local_2018[4] = 4;
      local_2018[5] = 4;
      uVar2 = (uint)(0x1000 / (ulonglong)(uint)(local_2018[param_1[0x17]] * param_1[0x18]));
      if ((local_2020 - local_2054 != (uint)(local_201c < uVar3)) ||
         (local_2038 = local_201c - uVar3, uVar2 < local_201c - uVar3)) {
        local_2038 = uVar2;
      }
      local_2028 = CONCAT44(local_2028._4_4_,local_2038);
      if ((*(char *)((int)param_1 + 0xe1) != '\0') &&
         (local_2028 = CONCAT44(local_2028._4_4_,local_2038), local_2030 < local_2038)) {
        local_2028 = CONCAT44(local_2028._4_4_,local_2030);
        local_2038 = local_2030;
      }
      local_2034 = 0;
      if (puVar6 == (uint *)0x0) {
        _memset(local_2018 + 6,0,0x1000);
      }
      else {
        lVar1 = (local_2028 & 0xffffffff) * (ulonglong)(uint)param_1[2];
        FUN_0042d9a0((uint *)(local_2018 + 6),param_1[0x17],puVar6,*param_1,(uint)lVar1,
                     (uint)((ulonglong)lVar1 >> 0x20),param_1[6]);
      }
      local_204c = local_203c - (uint)local_2044;
      local_2048 = (local_202c - local_2050) - (uint)(local_203c < (uint)local_2044);
      uVar2 = (uint)local_2044;
      if (*(char *)((int)param_1 + 0xe1) == '\0') {
        if (param_1 != (int *)0xffffffb0) {
          if ((param_1[0x15] == 0) ||
             (pcVar4 = *(code **)(param_1[0x15] + 0xc), pcVar4 == (code *)0x0)) goto LAB_00447777;
          puVar6 = (uint *)(local_2018 + 6);
          puVar10 = puVar7;
          goto LAB_0044781d;
        }
        iVar5 = -2;
      }
      else {
        if ((local_2048 != 0) || (local_2030 < local_204c)) {
          local_204c = local_2030;
          local_2048 = 0;
        }
        if (param_1 == (int *)0xffffffb0) {
          iVar5 = -2;
        }
        else {
          if ((param_1[0x15] != 0) &&
             (pcVar4 = *(code **)(param_1[0x15] + 0xc), pcVar4 != (code *)0x0)) {
            puVar6 = (uint *)(local_2018 + 6);
            puVar10 = local_1000;
            goto LAB_0044781d;
          }
LAB_00447777:
          iVar5 = -0x1d;
        }
      }
    }
    if (iVar5 != 0) goto LAB_0044791f;
    uVar8 = uVar2;
    if ((*(char *)((int)param_1 + 0xe1) != '\0') && (puVar7 != (uint *)0x0)) {
      FUN_0042d9a0(puVar7,param_1[1],local_1000,param_1[0x17],
                   (uint)((ulonglong)local_204c * (ulonglong)(uint)param_1[0x18]),
                   local_2048 * param_1[0x18] +
                   (int)((ulonglong)local_204c * (ulonglong)(uint)param_1[0x18] >> 0x20),param_1[6])
      ;
      uVar8 = (uint)local_2044;
    }
    bVar9 = CARRY4(uVar3,local_2038);
    uVar3 = uVar3 + local_2038;
    local_2054 = local_2054 + local_2034 + (uint)bVar9;
    uVar2 = uVar8 + local_204c;
    local_2050 = local_2050 + local_2048 + (uint)CARRY4(uVar8,local_204c);
    local_2044 = CONCAT44(local_2044._4_4_,uVar2);
    if ((local_2020 <= local_2054) && ((local_2020 < local_2054 || (local_201c < uVar3)))) {
      FID_conflict___assert
                (L"framesProcessedIn <= frameCountIn",
                 L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h",
                 0xd4b8);
    }
    if ((local_202c <= local_2050) && ((local_202c < local_2050 || (local_203c < uVar2)))) {
      FID_conflict___assert
                (L"framesProcessedOut <= frameCountOut",
                 L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h",
                 0xd4b9);
    }
    if (((local_204c == 0 && local_2048 == 0) || (local_202c < local_2050)) ||
       ((local_202c <= local_2050 && (local_203c <= uVar2)))) goto LAB_0044791f;
  } while( true );
}


