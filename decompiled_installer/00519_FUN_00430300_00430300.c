// Function: FUN_00430300
// Entry: 00430300
// Size: 3925 bytes
// Thunk: false
// External: false


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int __cdecl FUN_00430300(int param_1,int *param_2,int *param_3)

{
  uint *puVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  SIZE_T SVar8;
  void *pvVar9;
  uint uVar10;
  uint uVar11;
  int *piVar12;
  uint uVar13;
  int *piVar14;
  ulonglong uVar15;
  undefined4 *puVar16;
  int *local_1470;
  uint *local_146c;
  int aiStack_1468 [7];
  int local_144c;
  int local_1448;
  uint local_1444;
  int local_1440;
  uint local_143c [64];
  int local_133c;
  int local_1338;
  int local_1334;
  int local_1330;
  int local_132c;
  int local_1328;
  uint local_1324;
  int local_1320;
  uint local_131c [64];
  int local_121c;
  int local_1218;
  int local_1214;
  char acStack_1210 [256];
  char acStack_1110 [256];
  undefined1 auStack_1010 [1024];
  undefined4 auStack_c10 [64];
  undefined1 auStack_b10 [1288];
  undefined4 auStack_608 [64];
  undefined1 auStack_508 [1284];
  undefined4 uStack_4;
  
  uStack_4 = 0x43030a;
  if (param_1 == 0) {
    iVar4 = FUN_00431260((uint *)0x0,0,(undefined4 *)0x0,param_2,param_3);
    return iVar4;
  }
  if ((param_3 == (int *)0x0) || (_memset(param_3,0,0xbc0), param_2 == (int *)0x0)) {
    return -2;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    return -3;
  }
  iVar4 = *param_2;
  if ((iVar4 == 2) || (iVar4 == 3)) {
    if (0xfe < (uint)param_2[0x1c]) {
      return -2;
    }
    iVar5 = FUN_004415a0((char *)param_2[0x1d],param_2[0x1c]);
    if (iVar5 == 0) {
      return -2;
    }
  }
  if (((iVar4 == 1) || (iVar4 == 3)) || (iVar4 == 4)) {
    if (0xfe < (uint)param_2[0x15]) {
      return -2;
    }
    iVar4 = FUN_004415a0((char *)param_2[0x16],param_2[0x15]);
    if (iVar4 == 0) {
      return -2;
    }
  }
  *param_3 = param_1;
  param_3[7] = param_2[10];
  param_3[4] = param_2[7];
  param_3[5] = param_2[8];
  param_3[6] = param_2[9];
  if ((int *)param_2[0x13] == (int *)0x0) {
    piVar6 = (int *)0x0;
  }
  else {
    piVar6 = param_3 + 0x33;
    piVar12 = (int *)param_2[0x13];
    piVar14 = piVar6;
    for (iVar4 = 0x40; iVar4 != 0; iVar4 = iVar4 + -1) {
      *piVar14 = *piVar12;
      piVar12 = piVar12 + 1;
      piVar14 = piVar14 + 1;
    }
  }
  param_3[0x32] = (int)piVar6;
  if ((int *)param_2[0x1a] == (int *)0x0) {
    piVar6 = (int *)0x0;
  }
  else {
    piVar6 = param_3 + 0x185;
    piVar12 = (int *)param_2[0x1a];
    piVar14 = piVar6;
    for (iVar4 = 0x40; iVar4 != 0; iVar4 = iVar4 + -1) {
      *piVar14 = *piVar12;
      piVar12 = piVar12 + 1;
      piVar14 = piVar14 + 1;
    }
  }
  param_3[0x184] = (int)piVar6;
  *(char *)((int)param_3 + 0x39) = (char)param_2[6];
  *(undefined1 *)((int)param_3 + 0x3a) = *(undefined1 *)((int)param_2 + 0x19);
  *(undefined1 *)((int)param_3 + 0x3b) = *(undefined1 *)((int)param_2 + 0x1a);
  *(undefined1 *)(param_3 + 0xf) = *(undefined1 *)((int)param_2 + 0x1b);
  LOCK();
  param_3[0x10] = 0x3f800000;
  UNLOCK();
  puVar1 = (uint *)(param_3 + 0x208);
  param_3[1] = *param_2;
  param_3[2] = param_2[1];
  param_3[0x2e] = param_2[0xf];
  param_3[0x31] = param_2[0x12];
  param_3[0x2f] = param_2[0x10];
  param_3[0x30] = param_2[0x11];
  param_3[0x205] = param_2[0x20];
  param_3[0x206] = param_2[0x1b];
  param_3[0x207] = param_2[0x1c];
  uVar7 = param_2[0x1c];
  if ((puVar1 != (uint *)0x0) && (uVar7 != 0)) {
    if ((uint *)param_2[0x1d] == (uint *)0x0) {
      uVar13 = 0;
      iVar4 = 0xfe;
      if (uVar7 != 0) {
        do {
          if (iVar4 == 0) break;
          cVar3 = FUN_00448a20(0,uVar7,uVar13);
          iVar4 = iVar4 + -1;
          *(char *)(uVar13 + (int)puVar1) = cVar3;
          uVar13 = uVar13 + 1;
        } while (uVar13 < uVar7);
      }
    }
    else {
      FUN_0044c490(puVar1,(uint *)param_2[0x1d],uVar7);
    }
  }
  puVar1 = (uint *)(param_3 + 0xb6);
  param_3[0x28d] = param_2[0x1e];
  param_3[0x28e] = param_2[0x1f];
  param_3[0xb3] = param_2[0x19];
  param_3[0xb4] = param_2[0x14];
  param_3[0xb5] = param_2[0x15];
  uVar7 = param_2[0x15];
  if ((puVar1 != (uint *)0x0) && (uVar7 != 0)) {
    if ((uint *)param_2[0x16] == (uint *)0x0) {
      uVar13 = 0;
      iVar4 = 0xfe;
      if (uVar7 != 0) {
        do {
          if (iVar4 == 0) break;
          cVar3 = FUN_00448a20(0,uVar7,uVar13);
          iVar4 = iVar4 + -1;
          *(char *)(uVar13 + (int)puVar1) = cVar3;
          uVar13 = uVar13 + 1;
        } while (uVar13 < uVar7);
      }
    }
    else {
      FUN_0044c490(puVar1,(uint *)param_2[0x16],uVar7);
    }
  }
  piVar6 = param_3 + 8;
  param_3[0x13b] = param_2[0x17];
  param_3[0x13c] = param_2[0x18];
  iVar4 = FUN_0042fa70(piVar6);
  if (iVar4 != 0) {
    return iVar4;
  }
  piVar12 = param_3 + 9;
  iVar4 = FUN_0042fac0(piVar12);
  if (iVar4 != 0) {
    if (piVar6 != (int *)0x0) {
      CloseHandle((HANDLE)*piVar6);
      return iVar4;
    }
    return iVar4;
  }
  iVar4 = FUN_0042fac0(param_3 + 10);
  if (iVar4 != 0) {
    if (piVar12 != (int *)0x0) {
      CloseHandle((HANDLE)*piVar12);
    }
    if (piVar6 != (int *)0x0) {
      CloseHandle((HANDLE)*piVar6);
      return iVar4;
    }
    return iVar4;
  }
  iVar4 = FUN_0042fac0(param_3 + 0xb);
  if (iVar4 != 0) {
    if (param_3 + 10 != (int *)0x0) {
      CloseHandle((HANDLE)param_3[10]);
    }
    if (piVar12 != (int *)0x0) {
      CloseHandle((HANDLE)*piVar12);
    }
    if (param_3 + 8 != (int *)0x0) {
      CloseHandle((HANDLE)param_3[8]);
      return iVar4;
    }
    return iVar4;
  }
  _memset(local_131c,0,0x10c);
  local_1330 = param_2[0x13];
  local_1324 = param_2[0x15];
  local_132c = param_2[0x19];
  local_1328 = param_2[0x14];
  local_1320 = param_2[1];
  if (local_1324 != 0) {
    if ((uint *)param_2[0x16] == (uint *)0x0) {
      uVar7 = 0;
      iVar4 = 0xfe;
      if (local_1324 != 0) {
        uVar13 = param_2[0x15];
        do {
          if (iVar4 == 0) break;
          cVar3 = FUN_00448a20(0,uVar13,uVar7);
          *(char *)((int)local_131c + uVar7) = cVar3;
          uVar7 = uVar7 + 1;
          iVar4 = iVar4 + -1;
        } while (uVar7 < uVar13);
      }
    }
    else {
      FUN_0044c490(local_131c,(uint *)param_2[0x16],local_1324);
    }
  }
  local_121c = param_2[2];
  local_1218 = param_2[3];
  local_1214 = param_2[4];
  if (local_1214 == 0) {
    local_1214 = 3;
  }
  _memset(local_143c,0,0x10c);
  aiStack_1468[6] = param_2[0x1a];
  local_1444 = param_2[0x1c];
  local_144c = param_2[0x20];
  local_1448 = param_2[0x1b];
  local_1440 = param_2[1];
  if (local_1444 != 0) {
    if ((uint *)param_2[0x1d] == (uint *)0x0) {
      uVar7 = 0;
      iVar4 = 0xfe;
      if (local_1444 != 0) {
        uVar13 = param_2[0x1c];
        do {
          if (iVar4 == 0) break;
          cVar3 = FUN_00448a20(0,uVar13,uVar7);
          *(char *)((int)local_143c + uVar7) = cVar3;
          uVar7 = uVar7 + 1;
          iVar4 = iVar4 + -1;
        } while (uVar7 < uVar13);
      }
    }
    else {
      FUN_0044c490(local_143c,(uint *)param_2[0x1d],local_1444);
    }
  }
  local_133c = param_2[2];
  local_1338 = param_2[3];
  local_1334 = param_2[4];
  if (local_1334 == 0) {
    local_1334 = 3;
  }
  iVar4 = (**(code **)(param_1 + 0x10))(param_3,param_2,&local_1330,aiStack_1468 + 6);
  if (iVar4 != 0) {
    if (param_3 + 10 != (int *)0x0) {
      CloseHandle((HANDLE)param_3[10]);
    }
    if (param_3 + 9 != (int *)0x0) {
      CloseHandle((HANDLE)param_3[9]);
    }
    if (param_3 + 8 != (int *)0x0) {
      CloseHandle((HANDLE)param_3[8]);
      return iVar4;
    }
    return iVar4;
  }
  iVar4 = FUN_00431b40(param_3,*param_2,&local_1330,aiStack_1468 + 6);
  if (iVar4 != 0) goto LAB_00430bf7;
  if (*(char *)((int)param_2 + 0x1b) == '\0') {
    uVar7 = param_2[2];
    if (uVar7 == 0) {
      uVar7 = FUN_00431ea0(param_2[3],param_3[2]);
    }
    iVar4 = *param_2;
    if (((iVar4 == 2) || (iVar4 == 3)) || (iVar4 == 4)) {
      param_3[0x2ce] = 0;
      param_3[0x2cd] = uVar7;
      uVar13 = uVar7;
      if (uVar7 == 0) {
        uVar13 = param_3[0x28b];
        param_3[0x2cd] = uVar13;
      }
      aiStack_1468[0] = 0;
      aiStack_1468[1] = 1;
      aiStack_1468[2] = 2;
      aiStack_1468[3] = 3;
      aiStack_1468[4] = 4;
      aiStack_1468[5] = 4;
      SVar8 = aiStack_1468[param_3[0x206]] * param_3[0x207] * uVar13;
      if ((undefined4 *)(param_1 + 0x80) == (undefined4 *)0x0) {
        pvVar9 = (void *)FUN_00482949(SVar8);
      }
      else {
        if (*(code **)(param_1 + 0x84) == (code *)0x0) {
          param_3[0x2cc] = 0;
          goto LAB_00430919;
        }
        pvVar9 = (void *)(**(code **)(param_1 + 0x84))(SVar8,*(undefined4 *)(param_1 + 0x80));
      }
      param_3[0x2cc] = (int)pvVar9;
      if (pvVar9 == (void *)0x0) goto LAB_00430919;
      FUN_00431f80(pvVar9,param_3[0x2cd],0,param_3[0x206],param_3[0x207]);
      param_3[0x2ce] = param_3[0x2cd];
    }
    if ((*param_2 == 1) || (*param_2 == 3)) {
      param_3[0x17c] = 0;
      if (*param_2 == 3) {
        uVar7 = param_3[0x2cd];
LAB_004309cf:
        param_3[0x17b] = uVar7;
      }
      else {
        param_3[0x17b] = uVar7;
        if (uVar7 == 0) {
          uVar7 = param_3[0x139];
          goto LAB_004309cf;
        }
      }
      local_146c = (uint *)(param_3 + 0x17b);
      local_1470 = param_3 + 0x17c;
      aiStack_1468[0] = 0;
      aiStack_1468[1] = 1;
      aiStack_1468[2] = 2;
      aiStack_1468[3] = 3;
      aiStack_1468[4] = 4;
      aiStack_1468[5] = 4;
      SVar8 = aiStack_1468[param_3[0xb4]] * param_3[0xb5] * uVar7;
      if ((undefined4 *)(param_1 + 0x80) == (undefined4 *)0x0) {
        pvVar9 = (void *)FUN_00482949(SVar8);
      }
      else {
        if (*(code **)(param_1 + 0x84) == (code *)0x0) {
          param_3[0x17a] = 0;
          goto LAB_00430919;
        }
        pvVar9 = (void *)(**(code **)(param_1 + 0x84))(SVar8,*(undefined4 *)(param_1 + 0x80));
      }
      param_3[0x17a] = (int)pvVar9;
      if (pvVar9 == (void *)0x0) {
LAB_00430919:
        FUN_004313d0(param_3);
        return -4;
      }
      FUN_00431f80(pvVar9,*local_146c,0,param_3[0xb4],param_3[0xb5]);
      *local_1470 = 0;
    }
  }
  if (((*(int *)(param_1 + 0x20) == 0) && (*(int *)(param_1 + 0x24) == 0)) &&
     (*(int *)(param_1 + 0x28) == 0)) {
    if (*param_2 == 3) {
      iVar5 = param_3[0x28b];
      uVar15 = FUN_004355b0(param_3[2],param_3[0x24a],iVar5 * 5,0);
      if ((int)uVar15 == 0) {
        FUN_004313d0(param_3);
        return -2;
      }
      iVar4 = FUN_0042f450(param_3[0x206],param_3[0x207],(int)uVar15,1,0,0,(int *)(*param_3 + 0x80),
                           param_3 + 0x12);
      if (iVar4 != 0) goto LAB_00430bf7;
      if (param_3 + 0x12 != (int *)0x0) {
        aiStack_1468[0] = iVar4;
        aiStack_1468[1] = 1;
        aiStack_1468[2] = 2;
        aiStack_1468[3] = 3;
        aiStack_1468[4] = 4;
        aiStack_1468[5] = 4;
        iVar4 = aiStack_1468[param_3[0x2b]] * param_3[0x2c] * iVar5 * 2;
        if (param_3 != (int *)0xffffff80) {
          LOCK();
          uVar7 = param_3[0x24];
          if (uVar7 == 0) {
            param_3[0x24] = 0;
            uVar7 = 0;
          }
          UNLOCK();
          LOCK();
          uVar13 = param_3[0x25];
          if (uVar13 == 0) {
            param_3[0x25] = 0;
            uVar13 = 0;
          }
          UNLOCK();
          uVar10 = uVar13 & 0x80000000;
          uVar11 = (uVar13 & 0x7fffffff) + iVar4;
          if ((uVar7 & 0x80000000) == uVar10) {
            if ((uint)param_3[0x21] <= uVar11) {
              uVar10 = uVar10 ^ 0x80000000;
              uVar11 = ((uVar13 & 0x7fffffff) - param_3[0x21]) + iVar4;
            }
          }
          else if ((uVar7 & 0x7fffffff) < uVar11) {
            uVar11 = uVar7 & 0x7fffffff;
          }
          LOCK();
          param_3[0x25] = uVar11 | uVar10;
          UNLOCK();
        }
      }
    }
    LOCK();
    param_3[3] = 1;
    UNLOCK();
  }
  else {
    iVar4 = FUN_004357d0(param_3 + 0xc,*(undefined4 *)(param_1 + 0x74),*(SIZE_T *)(param_1 + 0x78),
                         0x441600,(int)param_3,(int *)(param_1 + 0x80));
    if (iVar4 != 0) {
LAB_00430bf7:
      FUN_004313d0(param_3);
      return iVar4;
    }
    FUN_0042fb10(param_3 + 0xb);
    LOCK();
    iVar4 = param_3[3];
    if (iVar4 == 0) {
      param_3[3] = 0;
      iVar4 = 0;
    }
    UNLOCK();
    if (iVar4 != 1) {
      FID_conflict___assert
                (L"ma_device_get_state(pDevice) == ma_device_state_stopped",
                 L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h",
                 0xa3f9);
    }
  }
  if (*param_3 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(*param_3 + 0x38);
  }
  FUN_004277a0(iVar4,3,0x52b630);
  iVar4 = param_3[1];
  if (((iVar4 == 2) || (iVar4 == 3)) || (iVar4 == 4)) {
    acStack_1210[0] = '\0';
    iVar5 = (iVar4 != 4) + 1;
    _memset(auStack_c10,0,0x608);
    pcVar2 = *(code **)(*param_3 + 0x30);
    if (pcVar2 == (code *)0x0) {
      if (iVar4 == 4) {
        puVar16 = (undefined4 *)param_3[0x32];
      }
      else {
        puVar16 = (undefined4 *)param_3[0x184];
      }
      iVar4 = FUN_004301d0(*param_3,iVar5,puVar16,auStack_c10);
    }
    else {
      iVar4 = (*pcVar2)(param_3,iVar5,auStack_c10);
    }
    if (iVar4 == 0) {
      FUN_004353b0(acStack_1210,0x100,(int)auStack_b10,0xffffffff);
    }
    iVar4 = 0;
    if (*param_3 != 0) {
      iVar4 = *(int *)(*param_3 + 0x38);
    }
    FUN_004277a0(iVar4,3,0x52b880);
    if (*param_3 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(*param_3 + 0x38);
    }
    FUN_0042f9c0(param_3[0x206]);
    FUN_0042f9c0(param_3[0x248]);
    FUN_004277a0(iVar4,3,0x52b38c);
    iVar4 = 0;
    if (*param_3 != 0) {
      iVar4 = *(int *)(*param_3 + 0x38);
    }
    FUN_004277a0(iVar4,3,0x52b610);
    iVar4 = 0;
    if (*param_3 != 0) {
      iVar4 = *(int *)(*param_3 + 0x38);
    }
    FUN_004277a0(iVar4,3,0x52b5f4);
    iVar4 = 0;
    if (*param_3 != 0) {
      iVar4 = *(int *)(*param_3 + 0x38);
    }
    FUN_004277a0(iVar4,3,0x52b88c);
    iVar4 = 0;
    if (*param_3 != 0) {
      iVar4 = *(int *)(*param_3 + 0x38);
    }
    FUN_004277a0(iVar4,3,0x52b67c);
    if (*param_3 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(*param_3 + 0x38);
    }
    FUN_004277a0(iVar4,3,0x52b448);
    iVar4 = 0;
    if (*param_3 != 0) {
      iVar4 = *(int *)(*param_3 + 0x38);
    }
    FUN_004277a0(iVar4,3,0x52b3dc);
    iVar4 = 0;
    if (*param_3 != 0) {
      iVar4 = *(int *)(*param_3 + 0x38);
    }
    FUN_004277a0(iVar4,3,0x52b49c);
    iVar4 = 0;
    if (*param_3 != 0) {
      iVar4 = *(int *)(*param_3 + 0x38);
    }
    FUN_004277a0(iVar4,3,0x52b4e4);
    if (*param_3 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(*param_3 + 0x38);
    }
    FUN_004277a0(iVar4,3,0x52b4c0);
    FUN_0042e870((int)(param_3 + 0x24b),param_3[0x249],(int)auStack_1010,0x400);
    iVar4 = 0;
    if (*param_3 != 0) {
      iVar4 = *(int *)(*param_3 + 0x38);
    }
    FUN_004277a0(iVar4,3,0x52b300);
    FUN_0042e870((int)(param_3 + 0x208),param_3[0x207],(int)auStack_1010,0x400);
    iVar4 = 0;
    if (*param_3 != 0) {
      iVar4 = *(int *)(*param_3 + 0x38);
    }
    FUN_004277a0(iVar4,3,0x52b2dc);
  }
  if ((param_3[1] == 1) || (param_3[1] == 3)) {
    acStack_1110[0] = '\0';
    _memset(auStack_608,0,0x608);
    pcVar2 = *(code **)(*param_3 + 0x30);
    if (pcVar2 == (code *)0x0) {
      iVar4 = FUN_004301d0(*param_3,1,(undefined4 *)param_3[0x32],auStack_608);
    }
    else {
      iVar4 = (*pcVar2)(param_3,1,auStack_608);
    }
    if (iVar4 == 0) {
      FUN_004353b0(acStack_1110,0x100,(int)auStack_508,0xffffffff);
    }
    iVar4 = 0;
    if (*param_3 != 0) {
      iVar4 = *(int *)(*param_3 + 0x38);
    }
    FUN_004277a0(iVar4,3,0x52b880);
    if (*param_3 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(*param_3 + 0x38);
    }
    FUN_0042f9c0(param_3[0xf6]);
    FUN_0042f9c0(param_3[0xb4]);
    FUN_004277a0(iVar4,3,0x52b38c);
    iVar4 = 0;
    if (*param_3 != 0) {
      iVar4 = *(int *)(*param_3 + 0x38);
    }
    FUN_004277a0(iVar4,3,0x52b610);
    iVar4 = 0;
    if (*param_3 != 0) {
      iVar4 = *(int *)(*param_3 + 0x38);
    }
    FUN_004277a0(iVar4,3,0x52b5f4);
    iVar4 = 0;
    if (*param_3 != 0) {
      iVar4 = *(int *)(*param_3 + 0x38);
    }
    FUN_004277a0(iVar4,3,0x52b88c);
    iVar4 = 0;
    if (*param_3 != 0) {
      iVar4 = *(int *)(*param_3 + 0x38);
    }
    FUN_004277a0(iVar4,3,0x52b67c);
    if (*param_3 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(*param_3 + 0x38);
    }
    FUN_004277a0(iVar4,3,0x52b448);
    iVar4 = 0;
    if (*param_3 != 0) {
      iVar4 = *(int *)(*param_3 + 0x38);
    }
    FUN_004277a0(iVar4,3,0x52b3dc);
    iVar4 = 0;
    if (*param_3 != 0) {
      iVar4 = *(int *)(*param_3 + 0x38);
    }
    FUN_004277a0(iVar4,3,0x52b49c);
    iVar4 = 0;
    if (*param_3 != 0) {
      iVar4 = *(int *)(*param_3 + 0x38);
    }
    FUN_004277a0(iVar4,3,0x52b4e4);
    iVar4 = 0;
    if (*param_3 != 0) {
      iVar4 = *(int *)(*param_3 + 0x38);
    }
    FUN_004277a0(iVar4,3,0x52b4c0);
    FUN_0042e870((int)(param_3 + 0xb6),param_3[0xb5],(int)auStack_1010,0x400);
    iVar4 = 0;
    if (*param_3 != 0) {
      iVar4 = *(int *)(*param_3 + 0x38);
    }
    FUN_004277a0(iVar4,3,0x52b300);
    FUN_0042e870((int)(param_3 + 0xf9),param_3[0xf7],(int)auStack_1010,0x400);
    iVar4 = 0;
    if (*param_3 != 0) {
      iVar4 = *(int *)(*param_3 + 0x38);
    }
    FUN_004277a0(iVar4,3,0x52b2dc);
  }
  LOCK();
  iVar4 = param_3[3];
  if (iVar4 == 0) {
    param_3[3] = 0;
    iVar4 = 0;
  }
  UNLOCK();
  if (iVar4 != 1) {
    FID_conflict___assert
              (L"ma_device_get_state(pDevice) == ma_device_state_stopped",
               L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h",
               0xa441);
  }
  return 0;
}


