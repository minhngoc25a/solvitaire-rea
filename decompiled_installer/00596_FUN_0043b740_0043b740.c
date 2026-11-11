// Function: FUN_0043b740
// Entry: 0043b740
// Size: 1021 bytes
// Thunk: false
// External: false


uint __cdecl FUN_0043b740(undefined4 *param_1,int param_2)

{
  short sVar1;
  int *piVar2;
  undefined4 uVar3;
  uint uVar4;
  short *psVar5;
  short *psVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 uStack_458;
  undefined4 uStack_454;
  undefined4 uStack_450;
  undefined4 auStack_44c [64];
  undefined4 uStack_34c;
  undefined4 uStack_348;
  undefined4 uStack_344;
  undefined4 uStack_340;
  undefined4 uStack_33c;
  uint uStack_338;
  uint uStack_334;
  uint uStack_330;
  undefined4 uStack_32c;
  uint uStack_328;
  undefined4 uStack_324;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  undefined4 uStack_318;
  undefined4 uStack_314;
  undefined4 uStack_310;
  undefined4 auStack_30c [62];
  undefined4 uStack_214;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined1 auStack_200 [240];
  short asStack_110 [8];
  short asStack_100 [128];
  
  if (param_1 == (undefined4 *)0x0) {
    FID_conflict___assert
              (L"pDevice != ((void *)0)",
               L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h",
               0x57f7);
  }
  if (param_2 == 3) {
    return 0xfffffffe;
  }
  if ((param_2 == 2) || (param_2 == 4)) {
    piVar2 = (int *)param_1[0x2d3];
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 8))(piVar2);
      param_1[0x2d3] = 0;
    }
    if (param_1[0x2d1] != 0) {
      param_1[0x2d1] = 0;
    }
  }
  if (param_2 == 1) {
    piVar2 = (int *)param_1[0x2d2];
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 8))(piVar2);
      param_1[0x2d2] = 0;
    }
    if (param_1[0x2d0] != 0) {
      param_1[0x2d0] = 0;
    }
    uStack_458 = param_1[0xb4];
    puVar8 = param_1 + 0xb6;
    uStack_454 = param_1[0xb5];
    uVar3 = param_1[0xb3];
  }
  else {
    uStack_458 = param_1[0x206];
    puVar8 = param_1 + 0x208;
    uStack_454 = param_1[0x207];
    uVar3 = param_1[0x205];
  }
  puVar9 = auStack_44c;
  for (iVar7 = 0x3f; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar9 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar9 = puVar9 + 1;
  }
  *(undefined2 *)puVar9 = *(undefined2 *)puVar8;
  uStack_450 = param_1[2];
  uStack_34c = param_1[0x2dc];
  uStack_348 = param_1[0x2dd];
  uStack_344 = param_1[0x2de];
  uStack_33c = param_1[0x2df];
  uStack_338 = (uint)*(byte *)((int)param_1 + 0xbad);
  uStack_334 = (uint)*(byte *)((int)param_1 + 0xbae);
  uStack_330 = (uint)*(byte *)((int)param_1 + 0xbaf);
  uStack_32c = param_1[0x2ea];
  uStack_328 = (uint)*(byte *)(param_1 + 0x2eb);
  uStack_340 = uVar3;
  uVar4 = FUN_0043ab90((uint *)*param_1,param_2,(undefined4 *)0x0,(int)&uStack_458);
  if (uVar4 == 0) {
    if ((param_2 == 2) || (param_2 == 4)) {
      param_1[0x2d1] = uStack_324;
      puVar8 = auStack_30c;
      puVar9 = param_1 + 0x24b;
      for (iVar7 = 0x3f; iVar7 != 0; iVar7 = iVar7 + -1) {
        *puVar9 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar9 = puVar9 + 1;
      }
      param_1[0x2d3] = uStack_31c;
      param_1[0x248] = uStack_318;
      param_1[0x249] = uStack_314;
      param_1[0x24a] = uStack_310;
      param_1[0x28b] = uStack_20c;
      param_1[0x28c] = uStack_208;
      *(undefined2 *)puVar9 = *(undefined2 *)puVar8;
      FUN_00435340((char *)(param_1 + 0x1c5),0x100,(int)auStack_200);
      (**(code **)(*(int *)param_1[0x2d1] + 0x34))((int *)param_1[0x2d1],param_1[0x2d9]);
      param_1[0x2e1] = uStack_214;
      (**(code **)(*(int *)param_1[0x2d1] + 0x10))((int *)param_1[0x2d1],param_1 + 0x2db);
      psVar5 = (short *)(param_1 + 0x185);
      if (psVar5 != (short *)0x0) {
        uVar4 = 0;
        iVar7 = (int)asStack_100 - (int)psVar5;
        do {
          sVar1 = *(short *)(iVar7 + (int)psVar5);
          if (sVar1 == 0) {
            *(undefined2 *)((int)param_1 + uVar4 * 2 + 0x614) = 0;
            goto LAB_0043ba2d;
          }
          *psVar5 = sVar1;
          uVar4 = uVar4 + 1;
          psVar5 = psVar5 + 1;
        } while (uVar4 < 0x80);
        *(undefined2 *)(param_1 + 0x185) = 0;
      }
    }
LAB_0043ba2d:
    puVar8 = param_1 + 0x2d0;
    if (param_2 == 1) {
      *puVar8 = uStack_324;
      param_1[0x2d2] = uStack_320;
      puVar9 = auStack_30c;
      puVar10 = param_1 + 0xf9;
      for (iVar7 = 0x3f; iVar7 != 0; iVar7 = iVar7 + -1) {
        *puVar10 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar10 = puVar10 + 1;
      }
      param_1[0xf6] = uStack_318;
      param_1[0xf7] = uStack_314;
      param_1[0xf8] = uStack_310;
      param_1[0x139] = uStack_20c;
      param_1[0x13a] = uStack_208;
      *(undefined2 *)puVar10 = *(undefined2 *)puVar9;
      FUN_00435340((char *)(param_1 + 0x73),0x100,(int)auStack_200);
      (**(code **)(*(int *)*puVar8 + 0x34))((int *)*puVar8,param_1[0x2d8]);
      param_1[0x2e0] = uStack_214;
      (**(code **)(*(int *)*puVar8 + 0x10))((int *)*puVar8,param_1 + 0x2da);
      psVar5 = (short *)(param_1 + 0x33);
      if (psVar5 != (short *)0x0) {
        uVar4 = 0;
        psVar6 = psVar5;
        while (sVar1 = *(short *)(((int)asStack_110 - (int)psVar5) + (int)psVar6), sVar1 != 0) {
          *psVar6 = sVar1;
          uVar4 = uVar4 + 1;
          psVar6 = psVar6 + 1;
          if (0x7f < uVar4) {
            *psVar5 = 0;
            return 0;
          }
        }
        psVar5[uVar4] = 0;
      }
    }
    uVar4 = 0;
  }
  return uVar4;
}


