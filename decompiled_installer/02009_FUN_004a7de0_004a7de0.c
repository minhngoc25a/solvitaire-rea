// Function: FUN_004a7de0
// Entry: 004a7de0
// Size: 1331 bytes
// Thunk: false
// External: false


void __cdecl FUN_004a7de0(uint *param_1,undefined4 param_2,uint param_3,uint param_4)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  char *pcStack_4f0;
  int iStack_4ec;
  uint local_4e8;
  int iStack_4e4;
  uint *puStack_4e0;
  int iStack_4dc;
  undefined4 local_4d8;
  undefined4 uStack_4d4;
  char acStack_4d0 [80];
  undefined4 uStack_480;
  undefined1 uStack_400;
  undefined1 uStack_3ff;
  undefined1 uStack_3fe;
  undefined1 uStack_3fd;
  uint auStack_3fc [255];
  
  local_4e8 = 0;
  if ((param_1[0x1d] & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0046f190((int)param_1);
  }
  if ((param_1[0x1d] & 6) != 0) {
    FUN_004a5f90((int)param_1,param_3);
    FUN_0046f3d0((int)param_1,0x5279c0);
    return;
  }
  if (param_3 < 0xe) {
    FUN_004a5f90((int)param_1,param_3);
    FUN_0046f3d0((int)param_1,0x52424c);
    return;
  }
  if ((short)*(ushort *)((int)param_1 + 0x30e) < 0) {
    FUN_004a5f90((int)param_1,param_3);
    return;
  }
  uVar6 = param_3;
  if ((*(ushort *)((int)param_1 + 0x30e) & 4) == 0) {
    uVar7 = 0x51;
    if (param_3 < 0x51) {
      uVar7 = param_3;
    }
    FUN_00474230((int)param_1);
    FUN_0046bd70((int)param_1,&uStack_4d4,uVar7);
    uVar6 = param_3 - uVar7;
    param_4 = uVar6;
    if (uVar6 < 0xb) {
      FUN_004a5f90((int)param_1,uVar6);
      FUN_0046f3d0((int)param_1,0x52424c);
      return;
    }
    uVar8 = 0;
    uVar3 = 3;
    uVar5 = 1;
    while( true ) {
      uVar9 = uVar8;
      if ((uVar7 <= uVar8) || (*(char *)((int)&local_4d8 + uVar5 + 3) == '\0')) goto LAB_004a7f3c;
      if ((uVar7 <= uVar5) || (*(char *)((int)&uStack_4d4 + uVar5) == '\0')) break;
      if ((uVar7 <= uVar3 - 1) || (*(char *)((int)&local_4d8 + uVar3 + 3) == '\0')) {
        uVar9 = uVar8 + 2;
        goto LAB_004a7f3c;
      }
      if ((uVar7 <= uVar3) || (*(char *)((int)&uStack_4d4 + uVar3) == '\0')) {
        uVar9 = uVar8 + 3;
        goto LAB_004a7f3c;
      }
      uVar9 = uVar8 + 4;
      if ((uVar7 <= uVar9) || (acStack_4d0[uVar8] == '\0')) goto LAB_004a7f3c;
      uVar5 = uVar5 + 5;
      uVar8 = uVar8 + 5;
      uVar3 = uVar3 + 5;
      uVar9 = uVar8;
      if (0x50 < uVar5) goto LAB_004a7f3c;
    }
    uVar9 = uVar8 + 1;
LAB_004a7f3c:
    if (uVar9 - 1 < 0x4f) {
      local_4e8 = uVar9 + 1;
      if ((local_4e8 < uVar7) && (*(char *)((int)&uStack_4d4 + uVar9 + 1) == '\0')) {
        iVar1 = FUN_004a9b90((int)param_1,0x69434350);
        if (iVar1 == 0) {
          _memset(&uStack_480,0,0x84);
          iStack_4ec = 0x84;
          param_1[0x21] = (int)&uStack_4d4 + uVar9 + 2;
          param_1[0x22] = (uVar7 - uVar9) - 2;
          FUN_004aa080((int)param_1,auStack_3fc,0x400,&param_4,&uStack_480,&iStack_4ec,0);
          if (iStack_4ec == 0) {
            uVar7 = CONCAT31(CONCAT21(CONCAT11((undefined1)uStack_480,uStack_480._1_1_),
                                      uStack_480._2_1_),uStack_480._3_1_);
            local_4d8 = uVar7;
            iVar1 = FUN_0046c140((int)param_1,(int)(param_1 + 0xb1),(char *)&uStack_4d4,uVar7);
            uVar6 = param_4;
            if ((iVar1 != 0) &&
               (iVar1 = FUN_0046c1a0((int)param_1,(int)(param_1 + 0xb1),(char *)&uStack_4d4,uVar7,
                                     (undefined1 *)&uStack_480,*(byte *)((int)param_1 + 0x14f)),
               uVar6 = param_4, iVar1 != 0)) {
              iStack_4ec = CONCAT31(CONCAT21(CONCAT11(uStack_400,uStack_3ff),uStack_3fe),uStack_3fd)
              ;
              puStack_4e0 = FUN_004a9af0((int)param_1,uVar7,2);
              iVar1 = iStack_4ec;
              if (puStack_4e0 == (uint *)0x0) {
                pcStack_4f0 = "out of memory";
                uVar6 = param_4;
              }
              else {
                puVar10 = &uStack_480;
                puVar2 = puStack_4e0;
                for (iVar4 = 0x21; iVar4 != 0; iVar4 = iVar4 + -1) {
                  *puVar2 = *puVar10;
                  puVar10 = puVar10 + 1;
                  puVar2 = puVar2 + 1;
                }
                iStack_4ec = iStack_4ec * 0xc;
                iStack_4dc = iStack_4ec;
                FUN_004aa080((int)param_1,auStack_3fc,0x400,&param_4,puStack_4e0 + 0x21,&iStack_4ec,
                             0);
                puVar10 = puStack_4e0;
                if (iStack_4ec != 0) goto LAB_004a8275;
                iVar4 = FUN_0046c4c0((int)param_1,(int)(param_1 + 0xb1),(char *)&uStack_4d4,uVar7,
                                     (int)puStack_4e0);
                uVar6 = param_4;
                if (iVar4 != 0) {
                  iStack_4ec = (uVar7 - iStack_4dc) + -0x84;
                  FUN_004aa080((int)param_1,auStack_3fc,0x400,&param_4,puVar10 + (iVar1 + 0xb) * 3,
                               &iStack_4ec,1);
                  uVar6 = param_4;
                  if ((param_4 == 0) || ((param_1[0x1e] & 0x100000) != 0)) {
                    if (iStack_4ec != 0) goto LAB_004a8275;
                    if (param_4 != 0) {
                      FUN_0046f210((int)param_1,0x528978);
                    }
                    FUN_004a5f90((int)param_1,uVar6);
                    iStack_4e4 = 1;
                    FUN_0046c5c0((int)param_1,(int *)(param_1 + 0xb1),puVar10,param_1[0x2d]);
                    if (param_3 == 0) {
LAB_004a8228:
                      param_1[0x20] = 0;
                      return;
                    }
                    FUN_0046b550(param_1,param_3,0x10,0);
                    puVar2 = (uint *)FUN_004a4910((int)param_1,local_4e8);
                    *(uint **)(param_3 + 0x74) = puVar2;
                    if (puVar2 != (uint *)0x0) {
                      FUN_0044c490(puVar2,&uStack_4d4,local_4e8);
                      *(uint *)(param_3 + 0xe8) = *(uint *)(param_3 + 0xe8) | 0x10;
                      *(uint *)(param_3 + 8) = *(uint *)(param_3 + 8) | 0x1000;
                      *(uint *)(param_3 + 0x7c) = local_4d8;
                      *(uint **)(param_3 + 0x78) = puVar10;
                      param_1[0xa8] = 0;
                      FUN_0046bed0(param_1,param_3);
                      goto LAB_004a8228;
                    }
                    pcStack_4f0 = "out of memory";
                    *(ushort *)((int)param_1 + 0x30e) = *(ushort *)((int)param_1 + 0x30e) | 0x8000;
                    FUN_0046bed0(param_1,param_3);
                  }
                  else {
                    pcStack_4f0 = "extra compressed data";
                  }
                }
              }
            }
          }
          else {
LAB_004a8275:
            pcStack_4f0 = (char *)param_1[0x27];
            uVar6 = param_4;
          }
          param_1[0x20] = 0;
          if (iStack_4e4 != 0) goto LAB_004a82d9;
        }
        else {
          pcStack_4f0 = (char *)param_1[0x27];
        }
      }
      else {
        pcStack_4f0 = "bad compression method";
      }
    }
    else {
      pcStack_4f0 = "bad keyword";
    }
  }
  FUN_004a5f90((int)param_1,uVar6);
LAB_004a82d9:
  *(ushort *)((int)param_1 + 0x30e) = *(ushort *)((int)param_1 + 0x30e) | 0x8000;
  FUN_0046bed0(param_1,param_3);
  if (pcStack_4f0 != (char *)0x0) {
    FUN_0046f3d0((int)param_1,(int)pcStack_4f0);
  }
  return;
}


