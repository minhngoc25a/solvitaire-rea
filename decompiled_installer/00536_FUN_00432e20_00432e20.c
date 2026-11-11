// Function: FUN_00432e20
// Entry: 00432e20
// Size: 804 bytes
// Thunk: false
// External: false


int __cdecl FUN_00432e20(int param_1,int *param_2,void *param_3,int *param_4)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  void *pvVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  size_t local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  if (param_4 == (int *)0x0) {
    return -2;
  }
  _memset(param_4,0,0x100);
  iVar1 = FUN_0044a330(param_1,param_2,&local_18);
  if (iVar1 == 0) {
    param_4[0x3e] = (int)param_3;
    if (param_3 == (void *)0x0) {
      if (local_18 != 0) {
        FID_conflict___assert
                  (L"sz == 0",
                   L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h"
                   ,0x2fbb);
      }
    }
    else if (local_18 != 0) {
      _memset(param_3,0,local_18);
    }
    *param_4 = param_1;
    param_4[1] = *param_2;
    param_4[5] = param_2[1];
    param_4[6] = 0;
    param_4[7] = 0;
    param_4[8] = -1;
    param_4[9] = -1;
    param_4[0xc] = local_8;
    param_4[0xd] = local_4;
    if (local_14 == -1) {
      piVar2 = param_4 + 0x10;
    }
    else {
      piVar2 = (int *)(local_14 + (int)param_3);
    }
    param_4[0xe] = (int)piVar2;
    if (local_10 == -1) {
      piVar2 = param_4 + 0x2a;
    }
    else {
      piVar2 = (int *)(local_10 + (int)param_3);
    }
    param_4[0xf] = (int)piVar2;
    if (local_c == -1) {
      param_4[2] = 0;
    }
    else {
      param_4[2] = local_c + (int)param_3;
      *(undefined2 *)(param_4 + 3) = *(undefined2 *)(param_1 + 0x200);
    }
    iVar1 = 0;
    for (uVar5 = 0; uVar5 < (uint)param_4[0xc]; uVar5 = uVar5 + 1) {
      pvVar6 = (void *)(param_4[0xe] + iVar1);
      uVar3 = *(uint *)(param_2[4] + uVar5 * 4);
      if (pvVar6 == (void *)0x0) {
        FID_conflict___assert
                  (L"pInputBus != ((void *)0)",
                   L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h"
                   ,0x1170b);
      }
      if (0xff < uVar3) {
        FID_conflict___assert
                  (L"channels < 256",
                   L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h"
                   ,0x1170c);
      }
      if (pvVar6 == (void *)0x0) {
        FID_conflict___assert
                  (L"sz == 0",
                   L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h"
                   ,0x2fbb);
      }
      else {
        _memset(pvVar6,0,0x34);
      }
      if (uVar3 == 0) {
        return -2;
      }
      *(char *)((int)pvVar6 + 0x30) = (char)uVar3;
      iVar1 = iVar1 + 0x34;
    }
    iVar1 = 0;
    for (uVar5 = 0; uVar5 < (uint)param_4[0xd]; uVar5 = uVar5 + 1) {
      puVar7 = (undefined4 *)(param_4[0xf] + iVar1);
      uVar3 = *(uint *)(param_2[5] + uVar5 * 4);
      if (puVar7 == (undefined4 *)0x0) {
        FID_conflict___assert
                  (L"pOutputBus != ((void *)0)",
                   L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h"
                   ,0x116b7);
      }
      if (0xfd < uVar5) {
        FID_conflict___assert
                  (L"outputBusIndex < 254",
                   L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h"
                   ,0x116b8);
      }
      if ((uint)param_4[0xd] <= uVar5) {
        FID_conflict___assert
                  (L"outputBusIndex < ma_node_get_output_bus_count(pNode)",
                   L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h"
                   ,0x116b9);
      }
      if (0xff < uVar3) {
        FID_conflict___assert
                  (L"channels < 256",
                   L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h"
                   ,0x116ba);
      }
      if (puVar7 == (undefined4 *)0x0) {
        FID_conflict___assert
                  (L"sz == 0",
                   L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h"
                   ,0x2fbb);
      }
      else {
        *puVar7 = 0;
        puVar7[1] = 0;
        puVar7[2] = 0;
        puVar7[3] = 0;
        puVar7[4] = 0;
        puVar7[5] = 0;
        puVar7[6] = 0;
        puVar7[7] = 0;
        *(undefined8 *)(puVar7 + 8) = 0;
      }
      if (uVar3 == 0) {
        return -2;
      }
      *(char *)((int)puVar7 + 5) = (char)uVar3;
      *(char *)(puVar7 + 1) = (char)uVar5;
      *puVar7 = param_4;
      iVar1 = iVar1 + 0x28;
      puVar7[2] = 1;
      puVar7[6] = 0x3f800000;
    }
    if (param_4[2] != 0) {
      iVar1 = 0;
      for (uVar5 = 0; uVar5 < (uint)param_4[0xc]; uVar5 = uVar5 + 1) {
        uVar3 = (uint)*(byte *)(iVar1 + 0x30 + param_4[0xe]);
        uVar4 = (uint)*(ushort *)(param_4 + 3);
        iVar9 = 5;
        iVar8 = 0;
        pvVar6 = (void *)FUN_0044a190((int)param_4,uVar5);
        FUN_00431f80(pvVar6,uVar4,iVar8,iVar9,uVar3);
        iVar1 = iVar1 + 0x34;
      }
      iVar1 = 0;
      for (uVar5 = 0; uVar5 < (uint)param_4[0xd]; uVar5 = uVar5 + 1) {
        uVar3 = (uint)*(byte *)(iVar1 + 5 + param_4[0xf]);
        uVar4 = (uint)*(ushort *)(param_4 + 3);
        iVar9 = 5;
        iVar8 = 0;
        pvVar6 = (void *)FUN_0044a250((int)param_4,uVar5);
        FUN_00431f80(pvVar6,uVar4,iVar8,iVar9,uVar3);
        iVar1 = iVar1 + 0x28;
      }
    }
    iVar1 = 0;
  }
  return iVar1;
}


