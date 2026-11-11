// Function: FUN_00449440
// Entry: 00449440
// Size: 1981 bytes
// Thunk: false
// External: false


int __cdecl
FUN_00449440(int param_1,uint param_2,uint *param_3,int *param_4,int *param_5,int *param_6,
            uint param_7)

{
  longlong lVar1;
  ushort uVar2;
  code *pcVar3;
  undefined4 *puVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint *puVar9;
  float *pfVar10;
  uint uVar11;
  int *piVar12;
  uint *puVar13;
  int *piVar14;
  int *local_824;
  int *local_820;
  int *local_81c;
  int *local_818;
  uint *local_814;
  int *local_810;
  int *local_80c;
  int *local_808;
  uint local_804;
  int *local_800;
  int local_7f8;
  int *local_7f4;
  uint *local_7f0 [254];
  uint *local_3f8 [254];
  
  local_7f8 = 0;
  local_818 = (int *)0x0;
  if (param_5 == (int *)0x0) {
    FID_conflict___assert
              (L"pFramesRead != ((void *)0)",
               L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h",
               0x11b5d);
  }
  else {
    *param_5 = 0;
    if ((param_1 != 0) && (param_2 < *(uint *)(param_1 + 0x34))) {
      local_814 = (uint *)((int)param_4 + (int)param_6);
      local_808 = (int *)(param_7 + CARRY4((uint)param_4,(uint)param_6));
      iVar6 = FUN_00433390(param_1,(uint)param_6,param_7,(uint)local_814,(uint)local_808);
      if (iVar6 != 0) {
        return 0;
      }
      local_824 = (int *)0x0;
      uVar11 = 0;
      LOCK();
      lVar1 = *(longlong *)(param_1 + 0x18);
      if (lVar1 == 0) {
        *(longlong *)(param_1 + 0x18) = 0;
      }
      else {
        uVar11 = (uint)((ulonglong)lVar1 >> 0x20);
        local_824 = (int *)lVar1;
      }
      UNLOCK();
      uVar7 = 0;
      piVar12 = (int *)0x0;
      LOCK();
      lVar1 = *(longlong *)(param_1 + 0x20);
      if (lVar1 == 0) {
        *(longlong *)(param_1 + 0x20) = 0;
      }
      else {
        piVar12 = (int *)((ulonglong)lVar1 >> 0x20);
        uVar7 = (uint)lVar1;
      }
      UNLOCK();
      if ((uVar11 < param_7) || ((uVar11 <= param_7 && (local_824 <= param_6)))) {
        local_804 = 0;
      }
      else {
        local_804 = (int)local_814 - (int)local_824;
      }
      if ((local_808 < piVar12) || ((local_808 <= piVar12 && (local_814 <= uVar7)))) {
        iVar6 = 0;
      }
      else {
        iVar6 = (int)local_814 - uVar7;
      }
      if (local_804 != 0) {
        if (param_2 < *(uint *)(param_1 + 0x34)) {
          uVar11 = (uint)*(byte *)(param_2 * 0x28 + 5 + *(int *)(param_1 + 0x3c));
        }
        else {
          uVar11 = 0;
        }
        FUN_00431f80(param_3,local_804,0,5,uVar11);
        if (param_2 < *(uint *)(param_1 + 0x34)) {
          param_4 = (int *)((int)param_4 - local_804);
          param_3 = param_3 + *(byte *)(param_2 * 0x28 + 5 + *(int *)(param_1 + 0x3c)) * local_804;
        }
        else {
          param_4 = (int *)((int)param_4 - local_804);
        }
      }
      if (iVar6 != 0) {
        param_4 = (int *)((int)param_4 - iVar6);
      }
      piVar12 = *(int **)(param_1 + 0x30);
      piVar14 = *(int **)(param_1 + 0x34);
      local_814 = param_3;
      local_80c = piVar12;
      local_7f4 = piVar14;
      if ((piVar12 == (int *)0x0) && (piVar14 == (int *)0x1)) {
        local_820 = param_4;
        local_81c = piVar12;
        local_7f0[0] = param_3;
        if ((*(byte *)(*(int *)(param_1 + 4) + 0xc) & 1) != 0) {
          if (param_2 == 0) {
            uVar11 = (uint)*(byte *)(*(int *)(param_1 + 0x3c) + 5);
          }
          else {
            uVar11 = 0;
          }
          FUN_00431f80(param_3,(uint)param_4,0,5,uVar11);
        }
        piVar12 = local_820;
        if ((code *)**(undefined4 **)(param_1 + 4) != (code *)0x0) {
          (*(code *)**(undefined4 **)(param_1 + 4))(param_1,0,&local_81c,local_7f0,&local_820);
          piVar12 = local_820;
        }
      }
      else if ((*(byte *)(*(int *)(param_1 + 4) + 0xc) & 1) == 0) {
        piVar14 = param_4;
        if ((int *)(uint)*(ushort *)(param_1 + 0xc) < param_4) {
          piVar14 = (int *)(uint)*(ushort *)(param_1 + 0xc);
        }
        pcVar3 = *(code **)(*(int *)(param_1 + 4) + 4);
        local_810 = param_4;
        local_800 = piVar14;
        if (pcVar3 != (code *)0x0) {
          (*pcVar3)(param_1,piVar14,&local_810);
        }
        if ((int *)(uint)*(ushort *)(param_1 + 0xc) < local_810) {
          local_810 = (int *)(uint)*(ushort *)(param_1 + 0xc);
        }
        if ((int *)0xffff < local_810) {
          FID_conflict___assert
                    (L"framesToProcessIn <= 0xFFFF",
                     L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h"
                     ,0x11bf2);
        }
        if ((int *)0xffff < piVar14) {
          FID_conflict___assert
                    (L"framesToProcessOut <= 0xFFFF",
                     L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h"
                     ,0x11bf3);
        }
        puVar13 = local_814;
        local_824 = (int *)(param_1 + 0x3c);
        local_818 = (int *)(param_2 * 0x28);
        puVar9 = (uint *)((int)local_818 + *local_824 + 8);
        LOCK();
        uVar11 = *puVar9;
        if (uVar11 == 0) {
          *puVar9 = 0;
          uVar11 = 0;
        }
        UNLOCK();
        if ((uVar11 & 1) == 0) {
          if (local_814 != (uint *)0x0) {
            if (param_2 < *(uint *)(param_1 + 0x34)) {
              uVar11 = (uint)*(byte *)((int)local_818 + *local_824 + 5);
            }
            else {
              uVar11 = 0;
            }
            uVar7 = (uint)*(ushort *)(param_1 + 0xe);
            iVar8 = 5;
            iVar6 = 0;
            puVar9 = (uint *)FUN_0044a250(param_1,param_2);
            FUN_00431ec0(puVar13,puVar9,uVar7,iVar6,iVar8,uVar11);
          }
        }
        else {
          *(undefined2 *)(param_1 + 0xe) = 0;
          do {
            piVar14 = (int *)0x0;
            local_820 = (int *)0x0;
            if (local_7f4 != (int *)0x0) {
              iVar6 = 0;
              do {
                puVar13 = (uint *)(*(int *)(param_1 + 0x3c) + 8 + iVar6);
                do {
                  uVar7 = *puVar13;
                  LOCK();
                  uVar11 = *puVar13;
                  if (uVar7 == uVar11) {
                    *puVar13 = uVar7 & 0xfffffffe;
                    uVar11 = uVar7;
                  }
                  UNLOCK();
                } while (uVar11 != uVar7);
                puVar13 = (uint *)FUN_0044a250(param_1,(uint)piVar14);
                local_7f0[(int)piVar14] = puVar13;
                piVar14 = (int *)((int)piVar14 + 1);
                iVar6 = iVar6 + 0x28;
                piVar12 = local_80c;
              } while (piVar14 < local_7f4);
            }
            if (*(short *)(param_1 + 0x10) == 0) {
              piVar14 = (int *)0x0;
              local_808 = (int *)0x0;
              if (piVar12 != (int *)0x0) {
                iVar6 = 0;
                do {
                  puVar13 = (uint *)FUN_0044a190(param_1,(uint)piVar14);
                  local_3f8[(int)piVar14] = puVar13;
                  local_7f8 = FUN_00449dd0(param_1,*(int *)(param_1 + 0x38) + iVar6,puVar13,
                                           (uint)local_810,(uint *)&local_824,(uint)param_6,param_7)
                  ;
                  uVar11 = 0;
                  piVar12 = local_824;
                  if (local_7f8 != 0) {
                    piVar12 = (int *)0x0;
                  }
                  local_824 = piVar12;
                  if (piVar12 < local_810) {
                    if (piVar14 < *(int **)(param_1 + 0x30)) {
                      uVar7 = (uint)*(byte *)(*(int *)(param_1 + 0x38) + 0x30 + iVar6);
                      uVar11 = (uint)*(byte *)(*(int *)(param_1 + 0x38) + 0x30 + iVar6);
                    }
                    else {
                      uVar7 = 0;
                    }
                    FUN_00431f80(local_3f8[(int)piVar14] + uVar11 * (int)piVar12,
                                 (int)local_810 - (int)piVar12,0,5,uVar7);
                  }
                  if (piVar12 < local_808) {
                    piVar12 = local_808;
                  }
                  piVar14 = (int *)((int)piVar14 + 1);
                  iVar6 = iVar6 + 0x34;
                  local_808 = piVar12;
                } while (piVar14 < local_80c);
              }
              *(short *)(param_1 + 0x10) = (short)local_808;
              *(undefined2 *)(param_1 + 0x12) = 0;
            }
            else {
              piVar12 = (int *)0x0;
              if (local_80c != (int *)0x0) {
                iVar6 = 0;
                do {
                  if (piVar12 < *(int **)(param_1 + 0x30)) {
                    uVar11 = (uint)*(byte *)(*(int *)(param_1 + 0x38) + 0x30 + iVar6);
                  }
                  else {
                    uVar11 = 0;
                  }
                  iVar8 = FUN_0044a190(param_1,(uint)piVar12);
                  iVar6 = iVar6 + 0x34;
                  local_3f8[(int)piVar12] =
                       (uint *)(iVar8 + *(ushort *)(param_1 + 0x12) * uVar11 * 4);
                  piVar12 = (int *)((int)piVar12 + 1);
                } while (piVar12 < local_80c);
              }
            }
            if (local_814 != (uint *)0x0) {
              if (param_2 < *(uint *)(param_1 + 0x34)) {
                uVar11 = (uint)*(byte *)((int)local_818 + *(int *)(param_1 + 0x3c) + 5);
              }
              else {
                uVar11 = 0;
              }
              local_7f0[param_2] = local_814 + *(ushort *)(param_1 + 0xe) * uVar11;
            }
            puVar4 = *(undefined4 **)(param_1 + 4);
            local_820 = (int *)((int)local_800 - (uint)*(ushort *)(param_1 + 0xe));
            if ((*(byte *)(puVar4 + 3) & 2) == 0) {
              local_81c = (int *)(uint)*(ushort *)(param_1 + 0x10);
LAB_00449a67:
              if ((local_81c == (int *)0x0) && ((*(byte *)(puVar4 + 3) & 8) == 0)) {
                local_820 = (int *)0x0;
              }
              else if ((code *)**(undefined4 **)(param_1 + 4) != (code *)0x0) {
                (*(code *)**(undefined4 **)(param_1 + 4))
                          (param_1,local_3f8,&local_81c,local_7f0,&local_820);
              }
              *(short *)(param_1 + 0x12) = *(short *)(param_1 + 0x12) + (short)local_81c;
              *(short *)(param_1 + 0x10) = *(short *)(param_1 + 0x10) - (short)local_81c;
            }
            else {
              local_808 = (int *)((uint)local_810 & 0xffff);
              local_81c = local_810;
              if ((((*(byte *)(puVar4 + 3) & 4) == 0) || (*(short *)(param_1 + 0x12) != 0)) ||
                 (*(short *)(param_1 + 0x10) != 0)) {
                bVar5 = false;
              }
              else {
                bVar5 = true;
              }
              if (*(ushort *)(param_1 + 0x10) < (ushort)local_810) {
                *(ushort *)(param_1 + 0x10) = (ushort)local_810;
              }
              if (!bVar5) goto LAB_00449a67;
              if ((code *)*puVar4 != (code *)0x0) {
                (*(code *)*puVar4)(param_1,0,&local_81c,local_7f0,&local_820);
              }
            }
            *(short *)(param_1 + 0xe) = *(short *)(param_1 + 0xe) + (short)local_820;
          } while (((int *)(uint)*(ushort *)(param_1 + 0xe) != local_800) &&
                  ((piVar12 = local_80c, local_820 != (int *)0x0 || (local_81c != (int *)0x0))));
          local_818 = (int *)(param_2 * 0x28);
        }
        local_824 = (int *)(param_1 + 0x3c);
        uVar2 = *(ushort *)(param_1 + 0xe);
        puVar13 = (uint *)((int)local_818 + *local_824 + 8);
        do {
          uVar7 = *puVar13;
          LOCK();
          uVar11 = *puVar13;
          if (uVar7 == uVar11) {
            *puVar13 = uVar7 | 1;
            uVar11 = uVar7;
          }
          UNLOCK();
          piVar12 = (int *)(uint)uVar2;
        } while (uVar11 != uVar7);
      }
      else {
        if (piVar14 != piVar12) {
          FID_conflict___assert
                    (L"outputBusCount == inputBusCount",
                     L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h"
                     ,0x11bb2);
        }
        if (piVar14 != (int *)0x1) {
          FID_conflict___assert
                    (L"outputBusCount == 1",
                     L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h"
                     ,0x11bb3);
        }
        if (param_2 != 0) {
          FID_conflict___assert
                    (L"outputBusIndex == 0",
                     L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h"
                     ,0x11bb4);
        }
        local_7f0[0] = local_814;
        local_3f8[0] = local_814;
        local_7f8 = FUN_00449dd0(param_1,*(int *)(param_1 + 0x38),local_814,(uint)param_4,
                                 (uint *)&local_818,(uint)param_6,param_7);
        piVar12 = local_818;
        if (local_7f8 == 0) {
          local_81c = local_818;
          local_820 = local_818;
          if ((local_818 != (int *)0x0) && ((code *)**(undefined4 **)(param_1 + 4) != (code *)0x0))
          {
            (*(code *)**(undefined4 **)(param_1 + 4))
                      (param_1,local_3f8,&local_81c,local_7f0,&local_820);
            if (local_81c != piVar12) {
              FID_conflict___assert
                        (L"frameCountIn == totalFramesRead",
                         L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h"
                         ,0x11bc8);
            }
            if (local_820 != piVar12) {
              FID_conflict___assert
                        (L"frameCountOut == totalFramesRead",
                         L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h"
                         ,0x11bc9);
            }
          }
        }
      }
      pfVar10 = (float *)(*(int *)(param_1 + 0x3c) + 0x18 + param_2 * 0x28);
      LOCK();
      local_800 = (int *)*pfVar10;
      if (local_800 == (int *)0x0) {
        *pfVar10 = 0.0;
        local_800 = (int *)0.0;
      }
      UNLOCK();
      if (param_2 < *(uint *)(param_1 + 0x34)) {
        uVar11 = (uint)*(byte *)(param_2 * 0x28 + 5 + *(int *)(param_1 + 0x3c));
      }
      else {
        uVar11 = 0;
      }
      FUN_00432590((int)local_814,(int)local_814,uVar11 * (int)piVar12,0,(float)local_800);
      puVar13 = (uint *)(param_1 + 0x28);
      do {
        uVar11 = *puVar13;
        iVar6 = *(int *)(param_1 + 0x2c);
        LOCK();
        lVar1 = *(longlong *)puVar13;
        if (*(longlong *)puVar13 == lVar1) {
          *(longlong *)puVar13 =
               CONCAT44(iVar6 + (uint)CARRY4(uVar11,(uint)piVar12),uVar11 + (int)piVar12);
          uVar7 = uVar11;
          iVar8 = iVar6;
        }
        else {
          uVar7 = (uint)lVar1;
          iVar8 = (int)((ulonglong)lVar1 >> 0x20);
        }
        UNLOCK();
      } while ((uVar7 != uVar11) || (iVar8 != iVar6));
      *param_5 = local_804 + (int)piVar12;
      return local_7f8;
    }
  }
  return -2;
}


