// Function: FUN_00437cf0
// Entry: 00437cf0
// Size: 1505 bytes
// Thunk: false
// External: false


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int __cdecl FUN_00437cf0(int *param_1)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int local_4058 [7];
  int iStack_403c;
  uint local_4038;
  uint uStack_4034;
  uint local_4030;
  uint uStack_402c;
  int iStack_4028;
  uint uStack_4024;
  int iStack_4020;
  uint uStack_401c;
  undefined4 uStack_4018;
  int iStack_4014;
  uint local_4010;
  uint uStack_400c;
  uint local_4008;
  int iStack_4004;
  uint local_4000 [1024];
  uint auStack_3000 [1024];
  uint auStack_2000 [1024];
  uint auStack_1000 [1023];
  undefined4 uStack_4;
  
  uStack_4 = 0x437cfa;
  iVar7 = 0;
  bVar2 = false;
  uVar6 = 0;
  local_4030 = 0;
  if (param_1 == (int *)0x0) {
    FID_conflict___assert
              (L"pDevice != ((void *)0)",
               L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h",
               0x4af3);
  }
  iVar4 = param_1[1];
  if (((iVar4 == 2) || (iVar4 == 3)) || (iVar4 == 4)) {
    if (*(int *)(*param_1 + 0x20) == 0) {
      return -0x1d;
    }
    local_4058[0] = 0;
    local_4058[1] = 1;
    local_4058[2] = 2;
    local_4058[3] = 3;
    local_4058[4] = 4;
    local_4058[5] = 4;
    local_4030 = (uint)(0x1000 / (ulonglong)(uint)(local_4058[param_1[0x248]] * param_1[0x249]));
  }
  if ((iVar4 == 1) || (iVar4 == 3)) {
    if (*(int *)(*param_1 + 0x24) == 0) {
      return -0x1d;
    }
    local_4058[0] = 0;
    local_4058[1] = 1;
    local_4058[2] = 2;
    local_4058[3] = 3;
    local_4058[4] = 4;
    local_4058[5] = 4;
    uVar6 = (uint)(0x1000 / (ulonglong)(uint)(local_4058[param_1[0xf6]] * param_1[0xf7]));
  }
  bVar1 = false;
LAB_00437e00:
  do {
    LOCK();
    iVar4 = param_1[3];
    if (iVar4 == 0) {
      param_1[3] = 0;
      iVar4 = 0;
    }
    UNLOCK();
    if ((iVar4 != 2) || (bVar1)) {
      return iVar7;
    }
    switch(param_1[1]) {
    case 1:
      goto switchD_00437e25_caseD_1;
    case 2:
    case 4:
      local_4038 = param_1[0x28b];
      uVar5 = 0;
      if (local_4038 == 0) goto LAB_00437e00;
      goto LAB_004381d6;
    case 3:
      local_4010 = 0;
      local_4038 = param_1[0x28b];
      if ((uint)param_1[0x139] <= (uint)param_1[0x28b]) {
        local_4038 = param_1[0x139];
      }
      bVar1 = bVar2;
      if (local_4038 != 0) goto LAB_00437e50;
    }
  } while( true );
LAB_00437e50:
  uVar5 = local_4038 - local_4010;
  if (local_4030 < local_4038 - local_4010) {
    uVar5 = local_4030;
  }
  iVar7 = (**(code **)(*param_1 + 0x20))(param_1,local_4000,uVar5,&local_4008);
  if (iVar7 != 0) goto LAB_004382a6;
  iVar4 = 0;
  uStack_4034 = local_4008;
  local_4058[0] = 0;
  local_4058[1] = 1;
  local_4058[2] = 2;
  local_4058[3] = 3;
  local_4058[4] = 4;
  local_4058[5] = 4;
  local_4058[0] = 0;
  local_4058[1] = 1;
  local_4058[2] = 2;
  local_4058[3] = 3;
  uVar5 = (uint)(0x1000 / (ulonglong)(uint)(local_4058[param_1[0x206]] * param_1[0x207]));
  local_4058[4] = 4;
  local_4058[5] = 4;
  iStack_403c = 0;
  uStack_4018 = 0;
  local_4058[6] = (int)(0x1000 / (ulonglong)(uint)(local_4058[param_1[0xb4]] * param_1[0xb5]));
  if (uVar5 < (uint)local_4058[6]) {
    local_4058[6] = uVar5;
  }
  uStack_401c = local_4008;
  iVar7 = FUN_0042c1d0((uint *)(param_1 + 0x290),local_4000,&uStack_401c,auStack_1000,
                       (uint *)(local_4058 + 6));
  bVar1 = bVar2;
  if (iVar7 != 0) goto LAB_00437e00;
  while (local_4058[6] != 0 || iStack_403c != 0) {
    FUN_00436270((uint)param_1,auStack_2000,(int)auStack_1000,local_4058[6]);
    iStack_4014 = iVar4 + uStack_401c;
    uStack_4034 = uStack_4034 - uStack_401c;
    uStack_4024 = local_4058[6];
    iStack_4020 = iStack_403c;
    iStack_4028 = 0;
    uStack_402c = uVar6;
    iVar7 = FUN_0042c1d0((uint *)(param_1 + 0x13e),auStack_2000,&uStack_4024,auStack_3000,
                         &uStack_402c);
    while( true ) {
      if ((iVar7 != 0) ||
         (iVar7 = (**(code **)(*param_1 + 0x24))(param_1,auStack_3000,uStack_402c,0),
         iVar4 = iStack_4014, iVar7 != 0)) {
        bVar2 = true;
        iVar4 = iStack_4014;
        goto LAB_0043819f;
      }
      uVar5 = local_4058[6] - uStack_4024;
      iStack_403c = iStack_403c - (uint)((uint)local_4058[6] < uStack_4024);
      local_4058[6] = uVar5;
      if (uVar5 == 0 && iStack_403c == 0) break;
      uStack_402c = uVar6;
      iStack_4028 = iVar7;
      uStack_4024 = uVar5;
      iStack_4020 = iStack_403c;
      iVar7 = FUN_0042c1d0((uint *)(param_1 + 0x13e),auStack_2000,&uStack_4024,auStack_3000,
                           &uStack_402c);
    }
    local_4058[0] = 0;
    local_4058[1] = 1;
    local_4058[2] = 2;
    local_4058[3] = 3;
    local_4058[4] = 4;
    local_4058[5] = 4;
    local_4058[0] = 0;
    local_4058[1] = 1;
    local_4058[2] = 2;
    local_4058[3] = 3;
    uVar5 = (uint)(0x1000 / (ulonglong)(uint)(local_4058[param_1[0x206]] * param_1[0x207]));
    local_4058[4] = 4;
    local_4058[5] = 4;
    local_4058[0] = 0;
    local_4058[1] = 1;
    local_4058[2] = 2;
    local_4058[3] = 3;
    local_4058[6] = (int)(0x1000 / (ulonglong)(uint)(local_4058[param_1[0xb4]] * param_1[0xb5]));
    local_4058[4] = 4;
    local_4058[5] = 4;
    if (uVar5 < (uint)local_4058[6]) {
      local_4058[6] = uVar5;
    }
    iStack_403c = 0;
    uStack_401c = uStack_4034;
    uStack_4018 = 0;
    iVar7 = FUN_0042c1d0((uint *)(param_1 + 0x290),
                         (uint *)((int)local_4000 +
                                 local_4058[param_1[0x248]] * param_1[0x249] * iStack_4014),
                         &uStack_401c,auStack_1000,(uint *)(local_4058 + 6));
    if (iVar7 != 0) break;
  }
LAB_0043819f:
  bVar1 = bVar2;
  if ((iVar4 == 0) || (local_4010 = local_4010 + iVar4, local_4038 <= local_4010))
  goto LAB_00437e00;
  goto LAB_00437e50;
  while( true ) {
    FUN_004369f0((uint)param_1,uStack_400c,local_4000);
    uVar5 = uVar5 + uStack_400c;
    if (local_4038 <= uVar5) break;
LAB_004381d6:
    uVar3 = local_4038 - uVar5;
    if (local_4030 < local_4038 - uVar5) {
      uVar3 = local_4030;
    }
    iVar7 = (**(code **)(*param_1 + 0x20))(param_1,local_4000,uVar3,&uStack_400c);
    if (iVar7 != 0) goto LAB_004382a6;
    bVar1 = bVar2;
    if (uStack_400c == 0) break;
  }
  goto LAB_00437e00;
switchD_00437e25_caseD_1:
  local_4038 = param_1[0x139];
  uVar5 = 0;
  if (local_4038 != 0) {
    do {
      uVar3 = local_4038 - uVar5;
      if (uVar6 < local_4038 - uVar5) {
        uVar3 = uVar6;
      }
      FUN_00436540((uint)param_1,uVar3,auStack_3000);
      iVar7 = (**(code **)(*param_1 + 0x24))(param_1,auStack_3000,uVar3,&iStack_4004);
      if (iVar7 != 0) goto LAB_004382a6;
      bVar1 = bVar2;
    } while ((iStack_4004 != 0) && (uVar5 = uVar5 + iStack_4004, uVar5 < local_4038));
  }
  goto LAB_00437e00;
LAB_004382a6:
  bVar2 = true;
  bVar1 = true;
  goto LAB_00437e00;
}


