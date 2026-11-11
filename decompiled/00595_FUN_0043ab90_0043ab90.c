// Function: FUN_0043ab90
// Entry: 0043ab90
// Size: 2986 bytes
// Thunk: false
// External: false


uint __cdecl FUN_0043ab90(uint *param_1,int param_2,undefined4 *param_3,int param_4)

{
  uint *puVar1;
  undefined4 *puVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  int iVar7;
  uint uVar8;
  uint *unaff_EBX;
  int unaff_EBP;
  char *pcVar9;
  uint *puVar10;
  int *unaff_ESI;
  longlong lVar11;
  ulonglong uVar12;
  int *piVar13;
  undefined8 uVar14;
  int *piStack_9c;
  undefined8 uStack_98;
  uint local_90;
  int *piStack_8c;
  uint *local_88;
  int *piStack_84;
  int local_80;
  uint uStack_7c;
  int *local_78;
  int iStack_74;
  uint uStack_70;
  uint local_6c;
  uint local_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  uint *local_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 *puStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 uStack_20;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined8 uStack_8;
  
  pcVar9 = "";
  local_80 = 0;
  local_88 = (uint *)0x0;
  if (param_1 == (uint *)0x0) {
    FID_conflict___assert
              (L"pContext != ((void *)0)",
               L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h",
               0x561f);
  }
  if (param_4 == 0) {
    FID_conflict___assert
              (L"pData != ((void *)0)",
               L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h",
               0x5620);
  }
  if (param_2 == 3) {
    return 0xfffffffe;
  }
  if (((param_2 != 4) || (*(int *)(param_4 + 300) == 0)) ||
     (local_6c = 1, param_3 != (undefined4 *)0x0)) {
    local_6c = 0;
  }
  *(undefined4 *)(param_4 + 0x134) = 0;
  uVar4 = 0x40000;
  *(undefined4 *)(param_4 + 0x138) = 0;
  *(undefined4 *)(param_4 + 0x13c) = 0;
  if (((*(int *)(param_4 + 0x120) == 0) && (*(int *)(param_4 + 8) != 0)) &&
     (*(int *)(param_4 + 0x118) != 1)) {
    uVar4 = 0x80040000;
  }
  if (((*(int *)(param_4 + 0x124) == 0) && (*(int *)(param_4 + 8) != 0)) && ((int)uVar4 < 0)) {
    uVar4 = uVar4 | 0x8000000;
  }
  local_90 = uVar4 | 0x20000;
  if (param_2 != 4) {
    local_90 = uVar4;
  }
  uVar4 = FUN_0043a5d0((int)param_1,param_2,param_3,*(int *)(param_4 + 300),
                       *(int *)(param_4 + 0x130),param_4 + 0x134,&local_88);
  if (uVar4 != 0) goto LAB_0043b692;
  local_68 = 0;
  uStack_64 = 0;
  uStack_60 = 0;
  uStack_5c = 0;
  local_58 = (uint *)0x0;
  uStack_54 = 0;
  uStack_50 = 0;
  uStack_4c = 0;
  local_48 = 0;
  if ((*(int *)(param_4 + 0x128) == 0) &&
     (iVar5 = (**(code **)**(undefined4 **)(param_4 + 0x134))(), -1 < iVar5)) {
    uStack_98 = uStack_98 & 0xffffffff00000000;
    lVar11 = ZEXT48(&uStack_98) << 0x20;
    piVar13 = local_78;
    iVar5 = (**(code **)(*local_78 + 0x3c))();
    if ((-1 < iVar5) && (unaff_EBP != 0)) {
      local_48 = 0x10000000c;
      uStack_40 = 0;
      (**(code **)(*piStack_84 + 0x40))();
    }
    (**(code **)(*piStack_84 + 8))(piStack_84,piVar13,lVar11);
  }
  if (*(int *)(param_4 + 0x118) == 1) {
    uStack_98 = uStack_98 & 0xffffffff;
    iVar5 = (**(code **)(*local_88 + 0x10))();
    if (-1 < iVar5) {
      puStack_30 = (undefined4 *)0x0;
      uStack_2c = 0;
      uStack_28 = 0;
      uStack_24 = 0;
      uStack_20 = 0;
      uVar14 = CONCAT44(&puStack_30,&DAT_0050c24c);
      piVar13 = uStack_98._4_4_;
      iVar5 = (**(code **)(*uStack_98._4_4_ + 0x14))();
      puVar2 = puStack_30;
      if (-1 < iVar5) {
        iVar5 = (**(code **)(**(int **)(param_4 + 0x134) + 0x1c))
                          (*(int **)(param_4 + 0x134),1,puStack_30,0,piVar13,uVar14);
        if (-1 < iVar5) {
          piStack_84 = (int *)*puVar2;
          local_80 = puVar2[1];
          uStack_7c = puVar2[2];
          local_78 = (int *)puVar2[3];
          iStack_74 = puVar2[4];
          uStack_70 = puVar2[5];
          local_6c = puVar2[6];
          local_68 = puVar2[7];
          uStack_64 = puVar2[8];
          uStack_60 = puVar2[9];
        }
        (*(code *)param_1[0x52])(&uStack_4c);
      }
      (**(code **)(*unaff_EBX + 8))(unaff_EBX);
    }
    uVar4 = -(uint)(iVar5 != 0) & 0xffffff36;
    piStack_8c = (int *)(uint)(iVar5 == 0);
  }
  else {
    piVar13 = *(int **)(param_4 + 0x134);
    uStack_98 = uStack_98 & 0xffffffff00000000;
    iVar5 = (**(code **)(*piVar13 + 0x20))(piVar13);
    if (iVar5 == 0) {
      if ((short)*unaff_EBX == -2) {
        uStack_70 = *unaff_EBX;
        local_6c = unaff_EBX[1];
        local_68 = unaff_EBX[2];
        uStack_64 = unaff_EBX[3];
        uStack_60 = unaff_EBX[4];
        uStack_5c = unaff_EBX[5];
        local_58 = (uint *)unaff_EBX[6];
        uStack_54 = unaff_EBX[7];
        uStack_50 = unaff_EBX[8];
        uStack_4c = unaff_EBX[9];
      }
      else {
        uVar4 = (uint)(ushort)unaff_EBX[4];
        if (uVar4 == 0) {
          uVar4 = 0x14;
        }
        else if (0x28 < uVar4) {
          uVar4 = 0x28;
        }
        FUN_0044c490(&uStack_70,unaff_EBX,uVar4);
      }
LAB_0043aedd:
      uVar4 = 0;
    }
    else {
      if (iStack_74 != 0) {
        uStack_70 = 0x20003;
        local_6c = 0xac44;
        uStack_64 = 0x200008;
        local_68 = 0x56220;
        uStack_60 = CONCAT22(uStack_60._2_2_,0x14);
        goto LAB_0043aedd;
      }
      uVar4 = 0xffffff38;
    }
    (*(code *)param_1[0x51])();
    piStack_8c = (int *)0x0;
  }
  if (uVar4 != 0) {
    pcVar9 = "[WASAPI] Failed to find best device mix format.";
    goto LAB_0043b692;
  }
  uStack_7c = uStack_64;
  if ((int)local_90 < 0) {
    uStack_64 = 48000;
    if (*(uint *)(param_4 + 8) != 0) {
      uStack_64 = *(uint *)(param_4 + 8);
    }
    uStack_60 = (uStack_5c & 0xffff) * uStack_64;
  }
  iVar5 = FUN_00439460((short *)&local_68);
  *(int *)(param_4 + 0x140) = iVar5;
  if (iVar5 == 0) {
    pcVar9 = "[WASAPI] Native format not supported.";
    uVar4 = ((uint)piStack_8c ^ 1) * 2 - 0xca;
    goto LAB_0043b692;
  }
  uVar4 = local_68 >> 0x10;
  *(uint *)(param_4 + 0x144) = uVar4;
  *(uint *)(param_4 + 0x148) = uStack_64;
  if (((short)local_68 == -2) || (0x27 < (ushort)local_58)) {
    FUN_004391d0(uStack_54,uVar4,(undefined1 *)(param_4 + 0x14c));
  }
  else {
    iVar5 = 0xfe;
    if (((param_4 != -0x14c) && (uVar4 != 0)) && (uVar8 = 0, uVar4 != 0)) {
      do {
        if (iVar5 == 0) break;
        cVar3 = FUN_00448a20(0,uVar4,uVar8);
        *(char *)(uVar8 + 0x14c + param_4) = cVar3;
        uVar8 = uVar8 + 1;
        iVar5 = iVar5 + -1;
      } while (uVar8 < uVar4);
    }
  }
  piStack_9c = (int *)0x3;
  if (*(int **)(param_4 + 0x114) != (int *)0x0) {
    piStack_9c = *(int **)(param_4 + 0x114);
  }
  uVar4 = *(uint *)(param_4 + 0x10c);
  *(int **)(param_4 + 0x250) = piStack_9c;
  *(uint *)(param_4 + 0x24c) = uVar4;
  if (uVar4 == 0) {
    iVar5 = *(int *)(param_4 + 0x110);
    if (iVar5 == 0) {
      if (*(int *)(param_4 + 0x11c) == 0) {
        iVar5 = 10;
      }
      else {
        iVar5 = 100;
      }
    }
    uVar4 = FUN_00431ea0(iVar5,uStack_64);
    *(uint *)(param_4 + 0x24c) = uVar4;
  }
  uVar8 = uStack_64;
  lVar11 = ((ulonglong)uVar4 * 1000 & 0xffffffff) * 1000;
  uStack_98 = __aulldiv((uint)lVar11,
                        (int)((ulonglong)uVar4 * 1000 >> 0x20) * 1000 +
                        (int)((ulonglong)lVar11 >> 0x20),uStack_64,0);
  uVar4 = (uint)uStack_98;
  if (piStack_8c == (int *)0x1) {
    lVar11 = __allmul((uint)piStack_9c,0,uVar4,(int)(uStack_98 >> 0x20));
    uVar4 = (uint)(lVar11 * 5);
    uVar8 = (int)((ulonglong)(lVar11 * 5) >> 0x20) << 1 | uVar4 >> 0x1f;
    uVar4 = uVar4 * 2;
    iVar5 = (**(code **)(**(int **)(param_4 + 0x134) + 0xc))
                      (*(int **)(param_4 + 0x134),piStack_8c,local_90,uVar4,uVar8,uVar4,uVar8,
                       &local_68);
    while (iVar5 == -0x7776ffe0) {
      if ((0 < (int)uVar8) || ((-1 < (int)uVar8 && (5000000 < uVar4)))) goto LAB_0043b232;
      if (uVar4 == 0 && uVar8 == 0) break;
      uVar8 = uVar8 << 1 | uVar4 >> 0x1f;
      uVar4 = uVar4 * 2;
      iVar5 = (**(code **)(**(int **)(param_4 + 0x134) + 0xc))
                        (*(int **)(param_4 + 0x134),1,local_90,uVar4,uVar8,uVar4,uVar8,&local_68);
    }
    if (iVar5 == -0x7776ffe7) {
      iVar5 = (**(code **)(**(int **)(param_4 + 0x134) + 0x10))(*(int **)(param_4 + 0x134));
      if (-1 < iVar5) {
        lVar11 = FUN_00482d00();
        (**(code **)(**(int **)(param_4 + 0x134) + 8))();
        iVar5 = (**(code **)(*piStack_8c + 0xc))
                          (piStack_8c,&DAT_0050c270,0x17,0,(undefined4 *)(param_4 + 0x134));
        if (-1 < iVar5) {
          piVar13 = *(int **)(param_4 + 0x134);
          iVar5 = (**(code **)(*piVar13 + 0xc))(piVar13,piStack_8c,local_90,lVar11,lVar11,&local_68)
          ;
          goto LAB_0043b1eb;
        }
      }
    }
    else {
LAB_0043b1eb:
      if (-1 < iVar5) {
        uVar4 = (uint)uStack_98;
        goto LAB_0043b526;
      }
    }
    if (iVar5 == -0x7ff8fffb) {
      pcVar9 = "[WASAPI] Failed to initialize device in exclusive mode. Access denied.";
      uVar4 = 0xfffffffa;
    }
    else if (iVar5 == -0x7776fff6) {
      pcVar9 = "[WASAPI] Failed to initialize device in exclusive mode. Device in use.";
      uVar4 = 0xffffffed;
    }
    else {
LAB_0043b232:
      pcVar9 = "[WASAPI] Failed to initialize device in exclusive mode.";
      uVar4 = FUN_00435aa0(iVar5);
    }
    goto LAB_0043b692;
  }
  if (piStack_8c == (int *)0x0) {
    if (((int)local_90 < 0) && (uStack_7c != uVar8)) {
LAB_0043b475:
      iVar5 = (int)uStack_98._4_4_;
      lVar11 = __allmul(*(uint *)(param_4 + 0x250),0,uVar4,(int)uStack_98._4_4_);
      uVar4 = (uint)(lVar11 * 5);
      iVar7 = (**(code **)(**(int **)(param_4 + 0x134) + 0xc))
                        (*(int **)(param_4 + 0x134),piStack_8c,local_90,uVar4 * 2,
                         (int)((ulonglong)(lVar11 * 5) >> 0x20) << 1 | uVar4 >> 0x1f,0,0,&local_68);
      if (iVar7 < 0) {
        if (iVar7 == -0x7ff8fffb) {
          pcVar9 = "[WASAPI] Failed to initialize device. Access denied.";
          uVar4 = 0xfffffffa;
        }
        else if (iVar7 == -0x7776fff6) {
          pcVar9 = "[WASAPI] Failed to initialize device. Device in use.";
          uVar4 = 0xffffffed;
        }
        else {
          pcVar9 = "[WASAPI] Failed to initialize device.";
          uVar4 = FUN_00435aa0(iVar7);
        }
        goto LAB_0043b692;
      }
      uVar4 = (uint)uStack_98;
      goto LAB_0043b52a;
    }
    piStack_84 = (int *)0x0;
    iVar5 = (**(code **)**(undefined4 **)(param_4 + 0x134))();
    if (iVar5 < 0) goto LAB_0043b475;
    puVar10 = &uStack_70;
    iVar5 = (**(code **)(*piStack_84 + 0x48))(piStack_84,&local_68,&uStack_7c);
    if (iVar5 < 0) {
      if (param_1 == (uint *)0x0) {
        uVar8 = 0;
      }
      else {
        uVar8 = param_1[0xe];
      }
      FUN_004277a0(uVar8,4,0x52ff58);
      (**(code **)(*piStack_9c + 8))(piStack_9c);
      goto LAB_0043b475;
    }
    local_58 = *(uint **)(param_4 + 0x24c);
    puVar1 = param_1 + 0xe;
    puVar6 = (uint *)(((uint)local_58 / (uint)piStack_8c) * (int)piStack_8c);
    if (puVar6 < puVar10) {
      puVar10 = puVar6;
    }
    if (puVar10 < local_88) {
      puVar10 = local_88;
    }
    if (param_1 == (uint *)0x0) {
      FUN_004277a0(0,4,0x530880);
      FUN_004277a0(0,4,0x52b594);
      FUN_004277a0(0,4,0x52b5d0);
      FUN_004277a0(0,4,0x52b5b4);
      uVar4 = 0;
    }
    else {
      FUN_004277a0(*puVar1,4,0x530880);
      FUN_004277a0(*puVar1,4,0x52b594);
      FUN_004277a0(*puVar1,4,0x52b5d0);
      FUN_004277a0(*puVar1,4,0x52b5b4);
      uVar4 = *puVar1;
    }
    FUN_004277a0(uVar4,4,0x52b578);
    if (puVar10 < local_58) {
      if (param_1 == (uint *)0x0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *puVar1;
      }
      pcVar9 = 
      "[WASAPI] Not using IAudioClient3 because the desired period size is larger than the maximum supported by IAudioClient3.\n"
      ;
LAB_0043b421:
      FUN_004277a0(uVar4,4,(int)pcVar9);
    }
    else {
      iVar5 = (**(code **)(*piStack_9c + 0x50))
                        (piStack_9c,(uint)unaff_ESI & 0x77ffffff,puVar10,&local_80,0);
      if (iVar5 < 0) {
        if (param_1 == (uint *)0x0) {
          uVar4 = 0;
          pcVar9 = 
          "[WASAPI] IAudioClient3_InitializeSharedAudioStream failed. Falling back to IAudioClient.\n"
          ;
        }
        else {
          uVar4 = *puVar1;
          pcVar9 = 
          "[WASAPI] IAudioClient3_InitializeSharedAudioStream failed. Falling back to IAudioClient.\n"
          ;
        }
        goto LAB_0043b421;
      }
      uStack_98 = CONCAT44(uStack_98._4_4_,1);
      *(uint **)(param_4 + 0x24c) = puVar10;
      if (param_1 == (uint *)0x0) {
        FUN_004277a0(0,4,0x52b6a8);
        uVar4 = 0;
      }
      else {
        FUN_004277a0(*puVar1,4,0x52b6a8);
        uVar4 = *puVar1;
      }
      FUN_004277a0(uVar4,4,0x52b558);
    }
    iVar5 = (uint)uStack_98;
    (**(code **)(*piStack_9c + 8))(piStack_9c);
    if (iVar5 == 0) {
      uVar4 = (uint)uStack_98;
      goto LAB_0043b475;
    }
  }
  else {
LAB_0043b526:
    iVar5 = (int)uStack_98._4_4_;
LAB_0043b52a:
    piStack_9c = (int *)0x0;
    iVar7 = (**(code **)(**(int **)(param_4 + 0x134) + 0x10))(*(int **)(param_4 + 0x134));
    if (iVar7 < 0) {
      pcVar9 = "[WASAPI] Failed to get audio client\'s actual buffer size.";
      uVar4 = FUN_00435aa0(iVar7);
      goto LAB_0043b692;
    }
    if (local_6c == 0) {
      uVar12 = 0;
    }
    else {
      lVar11 = (ulonglong)*(uint *)(param_4 + 0x148) * (ulonglong)*(uint *)(param_4 + 0x250);
      lVar11 = __allmul((uint)lVar11,(int)((ulonglong)lVar11 >> 0x20),uVar4,iVar5);
      uVar12 = __alldiv((uint)lVar11,(uint)((ulonglong)lVar11 >> 0x20),1000000,0);
    }
    *(int *)(param_4 + 0x24c) = (int)((uVar12 & 0xffffffff) / (ulonglong)*(uint *)(param_4 + 0x250))
    ;
    iVar5 = local_80;
  }
  *(int *)(param_4 + 0x254) = iVar5;
  uVar4 = FUN_00439a40((int)param_1,param_2,*(undefined4 *)(param_4 + 0x134),
                       (uint)(param_2 != 1) * 4 + 0x138 + param_4);
  if (uVar4 == 0) {
    iVar5 = (**(code **)(*local_88 + 0x10))();
    if (-1 < iVar5) {
      uStack_18 = 0;
      uStack_14 = 0;
      uStack_10 = 0;
      uStack_c = 0;
      uStack_8 = 0;
      uVar14 = CONCAT44(&uStack_18,&DAT_0050c238);
      iVar5 = (**(code **)(*piStack_9c + 0x14))();
      if (-1 < iVar5) {
        WideCharToMultiByte(0xfde9,0,uStack_20._4_4_,-1,(LPSTR)(param_4 + 600),0x100,(LPCSTR)0x0,
                            (LPBOOL)0x0);
        (*(code *)param_1[0x52])(&uStack_24,piStack_9c,uVar14);
      }
      (**(code **)(*unaff_ESI + 8))(unaff_ESI);
    }
    FUN_0043a050(param_1,(int *)local_88,(uint *)(param_4 + 0x358));
    pcVar9 = "";
    uVar4 = 0;
  }
  else {
    pcVar9 = "[WASAPI] Failed to get audio client service.";
  }
LAB_0043b692:
  if (local_88 != (uint *)0x0) {
    (**(code **)(*local_88 + 8))();
  }
  if (uVar4 != 0) {
    if (*(int **)(param_4 + 0x138) != (int *)0x0) {
      (**(code **)(**(int **)(param_4 + 0x138) + 8))();
      *(undefined4 *)(param_4 + 0x138) = 0;
    }
    if (*(int **)(param_4 + 0x13c) != (int *)0x0) {
      (**(code **)(**(int **)(param_4 + 0x13c) + 8))();
      *(undefined4 *)(param_4 + 0x13c) = 0;
    }
    if (*(int **)(param_4 + 0x134) != (int *)0x0) {
      (**(code **)(**(int **)(param_4 + 0x134) + 8))();
      *(undefined4 *)(param_4 + 0x134) = 0;
    }
    if (*pcVar9 != '\0') {
      if (param_1 == (uint *)0x0) {
        uVar8 = 0;
      }
      else {
        uVar8 = param_1[0xe];
      }
      FUN_004277a0(uVar8,1,0x52b510);
    }
    return uVar4;
  }
  return 0;
}


