// Function: FUN_0044b290
// Entry: 0044b290
// Size: 738 bytes
// Thunk: false
// External: false


uint __cdecl FUN_0044b290(int param_1,uint param_2,int *param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  LPVOID pvVar7;
  SIZE_T local_54 [5];
  int local_40;
  uint uStack_3c;
  uint uStack_38;
  uint uStack_34;
  int *local_30;
  int iStack_2c;
  undefined4 uStack_28;
  uint uStack_24;
  int local_20;
  uint uStack_1c;
  undefined8 uStack_18;
  undefined8 local_10;
  undefined4 uStack_8;
  uint uStack_4;
  
  piVar2 = param_3;
  uVar4 = param_2;
  iVar3 = param_1;
  if (param_1 == 0) {
    FID_conflict___assert
              (L"pEngine != ((void *)0)",
               L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h",
               0x1280d);
  }
  if (piVar2 == (int *)0x0) {
    FID_conflict___assert
              (L"pSound != ((void *)0)",
               L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h",
               0x1280e);
  }
  if (uVar4 == 0) {
    return 0xfffffffe;
  }
  piVar2[0xae] = *(int *)(uVar4 + 8);
  piVar1 = *(int **)(uVar4 + 8);
  uStack_3c = (uint)(piVar1 == (int *)0x0);
  uStack_18 = 0;
  local_10 = 0;
  local_20 = iVar3;
  uStack_8 = *(undefined4 *)(iVar3 + 0x3d0);
  uStack_38 = *(uint *)(uVar4 + 0x14);
  local_40 = iVar3;
  uStack_4 = (CONCAT11((char)(*(uint *)(uVar4 + 0x20) >> 0xe),(char)(*(uint *)(uVar4 + 0x20) >> 0xd)
                      ) & 0xff01) & 0xffff01ff;
  iStack_2c = *(int *)(uVar4 + 0x24);
  uStack_28 = *(undefined4 *)(uVar4 + 0x1c);
  uVar6 = *(uint *)(uVar4 + 0x18);
  local_30 = (int *)0x0;
  uStack_24 = uStack_4;
  if (iStack_2c == 0) {
    iStack_2c = *(int *)(iVar3 + 0x3cc);
  }
  uStack_34 = uVar6;
  uStack_1c = uStack_3c;
  if (piVar1 != (int *)0x0) {
    if (*(code **)(*piVar1 + 8) == (code *)0x0) {
      return 0xffffffe3;
    }
    uVar5 = (**(code **)(*piVar1 + 8))(piVar1,&param_1,&param_2,&param_3,0,0);
    if (uVar5 != 0) {
      return uVar5;
    }
    uStack_38 = param_2;
    local_30 = param_3;
    if (param_2 == 0) {
      return 0xfffffffd;
    }
    uStack_34 = uVar6;
    if (uVar6 == 0xffffffff) {
      uStack_34 = param_2;
    }
  }
  piVar1 = (int *)(iVar3 + 0x3a8);
  param_3 = piVar1;
  uVar6 = FUN_0044afc0(&local_40,(int *)local_54);
  if (uVar6 != 0) {
    return uVar6;
  }
  if (local_54[0] == 0) {
    pvVar7 = (LPVOID)0x0;
  }
  else {
    if (piVar1 == (int *)0x0) {
      pvVar7 = (LPVOID)FUN_00482949(local_54[0]);
    }
    else {
      if (*(code **)(iVar3 + 0x3ac) == (code *)0x0) {
        return 0xfffffffc;
      }
      pvVar7 = (LPVOID)(**(code **)(iVar3 + 0x3ac))(local_54[0],*piVar1);
    }
    if (pvVar7 == (LPVOID)0x0) {
      return 0xfffffffc;
    }
  }
  param_2 = FUN_004335a0(&local_40,pvVar7,piVar2);
  if (param_2 != 0) {
    if (pvVar7 == (LPVOID)0x0) {
      return param_2;
    }
    if (param_3 == (int *)0x0) {
      FUN_0047d191(pvVar7);
    }
    else if ((code *)param_3[3] != (code *)0x0) {
      (*(code *)param_3[3])(pvVar7,*param_3);
      return param_2;
    }
    return param_2;
  }
  *(undefined1 *)(piVar2 + 0xac) = 1;
  uVar6 = *(uint *)(uVar4 + 0xc);
  if (uVar6 == 0) {
    if ((*(uint *)(uVar4 + 0x20) & 0x1000) != 0) goto LAB_0044b4ea;
    uVar6 = -(uint)(iVar3 != 0) & iVar3 + 0x100U;
    uVar5 = 0;
  }
  else {
    uVar5 = *(uint *)(uVar4 + 0x10);
  }
  uVar6 = FUN_00433220((int)piVar2,0,uVar6,uVar5);
  if (uVar6 != 0) {
    FUN_00433b50((int)piVar2,param_3);
    return uVar6;
  }
LAB_0044b4ea:
  if ((*(uint *)(uVar4 + 0x30) != 0 || *(uint *)(uVar4 + 0x34) != 0) ||
     ((*(uint *)(uVar4 + 0x38) & *(uint *)(uVar4 + 0x3c)) != 0xffffffff)) {
    FUN_0042f030((int *)piVar2[0xae],*(uint *)(uVar4 + 0x30),*(uint *)(uVar4 + 0x34),
                 *(uint *)(uVar4 + 0x38),*(uint *)(uVar4 + 0x3c));
  }
  if ((*(uint *)(uVar4 + 0x40) != 0 || *(uint *)(uVar4 + 0x44) != 0) ||
     ((*(uint *)(uVar4 + 0x48) & *(uint *)(uVar4 + 0x4c)) != 0xffffffff)) {
    FUN_0042f030((int *)piVar2[0xae],*(uint *)(uVar4 + 0x40),*(uint *)(uVar4 + 0x44),
                 *(uint *)(uVar4 + 0x48),*(uint *)(uVar4 + 0x4c));
  }
  piVar2 = (int *)piVar2[0xae];
  iVar3 = *(int *)(uVar4 + 0x50);
  if (piVar2 != (int *)0x0) {
    LOCK();
    piVar2[0xd] = iVar3;
    UNLOCK();
    if (*(code **)(*piVar2 + 0x14) != (code *)0x0) {
      (**(code **)(*piVar2 + 0x14))(piVar2,iVar3);
    }
  }
  return 0;
}


