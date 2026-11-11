// Function: FUN_00447970
// Entry: 00447970
// Size: 1038 bytes
// Thunk: false
// External: false


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int __cdecl FUN_00447970(int *param_1,uint *param_2,uint *param_3,uint *param_4,uint *param_5)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  bool bVar5;
  uint local_203c;
  uint local_2038;
  uint *local_2034;
  uint local_2030;
  uint uStack_202c;
  uint local_2028;
  uint local_2024;
  int local_2020 [7];
  uint *local_2004;
  uint local_2000 [1024];
  uint local_1000 [1023];
  undefined4 uStack_4;
  
  uStack_4 = 0x44797a;
  if (param_1 == (int *)0x0) {
    FID_conflict___assert
              (L"pConverter != ((void *)0)",
               L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h",
               0xd4de);
  }
  if (param_3 == (uint *)0x0) {
    uStack_202c = 0;
    local_2030 = 0;
  }
  else {
    local_2030 = *param_3;
    uStack_202c = param_3[1];
  }
  if (param_5 == (uint *)0x0) {
    uStack_202c = 0;
    local_2030 = 0;
    local_203c = uStack_202c;
    local_2038 = local_2030;
  }
  else {
    uVar4 = param_5[1];
    uVar2 = *param_5;
    local_203c = uVar4;
    local_2038 = uVar2;
    if (((uStack_202c <= uVar4) &&
        (local_203c = uStack_202c, local_2038 = local_2030, uVar4 <= uStack_202c)) &&
       (local_203c = uVar4, local_2038 = uVar2, local_2030 < uVar2)) {
      local_203c = uStack_202c;
      local_2038 = local_2030;
    }
  }
  if (((char)param_1[0x38] == '\0') && (*(char *)((int)param_1 + 0xe1) == '\0')) {
    iVar1 = FUN_0042bbc0(param_1 + 8,param_4,param_2,local_2038,local_203c);
    if (iVar1 != 0) {
      return iVar1;
    }
  }
  else if ((local_203c != 0) || (local_2038 != 0)) {
    local_2028 = 0;
    local_2024 = 0;
    while( true ) {
      local_2020[0] = 0;
      local_2020[1] = 1;
      local_2020[2] = 2;
      local_2020[3] = 3;
      local_2020[4] = 4;
      local_2020[5] = 4;
      local_2020[6] = (int)(0x1000 / (ulonglong)(uint)(local_2020[param_1[8]] * param_1[10]));
      if (param_2 == (uint *)0x0) {
        puVar3 = (uint *)0x0;
      }
      else {
        local_2020[0] = 0;
        local_2020[1] = 1;
        local_2020[2] = 2;
        local_2020[3] = 3;
        local_2020[4] = 4;
        local_2020[5] = 4;
        puVar3 = (uint *)(local_2020[*param_1] * param_1[2] * local_2024 + (int)param_2);
      }
      local_2004 = puVar3;
      if (param_4 == (uint *)0x0) {
        local_2034 = (uint *)0x0;
      }
      else {
        local_2020[0] = 0;
        local_2020[1] = 1;
        local_2020[2] = 2;
        local_2020[3] = 3;
        local_2020[4] = 4;
        local_2020[5] = 4;
        local_2034 = (uint *)(local_2020[param_1[1]] * param_1[3] * local_2024 + (int)param_4);
      }
      local_2020[5] = 4;
      local_2020[4] = 4;
      local_2020[3] = 3;
      local_2020[2] = 2;
      local_2020[1] = 1;
      local_2020[0] = 0;
      if ((char)param_1[0x38] == '\0') {
        if (*(char *)((int)param_1 + 0xe1) != '\x01') {
          FID_conflict___assert
                    (L"pConverter->hasPostFormatConversion == 1",
                     L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h"
                     ,0xd52c);
        }
        if ((local_203c - local_2028 != (uint)(local_2038 < local_2024)) ||
           (uVar4 = local_2038 - local_2024, (uint)local_2020[6] < local_2038 - local_2024)) {
          uVar4 = local_2020[6];
        }
        iVar1 = FUN_0042bbc0(param_1 + 8,local_1000,puVar3,uVar4,0);
      }
      else {
        local_2020[0] = 0;
        local_2020[1] = 1;
        local_2020[2] = 2;
        local_2020[3] = 3;
        local_2020[4] = 4;
        local_2020[5] = 4;
        uVar2 = (uint)(0x1000 / (ulonglong)(uint)(local_2020[param_1[8]] * param_1[9]));
        if ((local_203c - local_2028 != (uint)(local_2038 < local_2024)) ||
           (uVar4 = local_2038 - local_2024, uVar2 < local_2038 - local_2024)) {
          uVar4 = uVar2;
        }
        if ((*(char *)((int)param_1 + 0xe1) != '\0') && ((uint)local_2020[6] < uVar4)) {
          uVar4 = local_2020[6];
        }
        if (puVar3 == (uint *)0x0) {
          _memset(local_2000,0,0x1000);
        }
        else {
          FUN_0042d9a0(local_2000,param_1[8],puVar3,*param_1,
                       (uint)((ulonglong)uVar4 * (ulonglong)(uint)param_1[2]),
                       (uint)((ulonglong)uVar4 * (ulonglong)(uint)param_1[2] >> 0x20),param_1[6]);
        }
        if (*(char *)((int)param_1 + 0xe1) == '\0') {
          iVar1 = FUN_0042bbc0(param_1 + 8,local_2034,local_2000,uVar4,0);
        }
        else {
          iVar1 = FUN_0042bbc0(param_1 + 8,local_1000,local_2000,uVar4,0);
        }
      }
      if (iVar1 != 0) break;
      if ((*(char *)((int)param_1 + 0xe1) != '\0') && (local_2034 != (uint *)0x0)) {
        FUN_0042d9a0(local_2034,param_1[1],local_1000,param_1[8],
                     (uint)((ulonglong)uVar4 * (ulonglong)(uint)param_1[10]),
                     (uint)((ulonglong)uVar4 * (ulonglong)(uint)param_1[10] >> 0x20),param_1[6]);
      }
      bVar5 = CARRY4(local_2024,uVar4);
      local_2024 = local_2024 + uVar4;
      local_2028 = local_2028 + bVar5;
      if ((local_203c <= local_2028) && ((local_203c < local_2028 || (local_2038 <= local_2024))))
      break;
    }
  }
  if (param_3 != (uint *)0x0) {
    *param_3 = local_2038;
    param_3[1] = local_203c;
  }
  if (param_5 != (uint *)0x0) {
    *param_5 = local_2038;
    param_5[1] = local_203c;
  }
  return 0;
}


