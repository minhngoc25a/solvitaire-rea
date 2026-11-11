// Function: FUN_004c7a7c
// Entry: 004c7a7c
// Size: 5607 bytes
// Thunk: false
// External: false


/* WARNING: Type propagation algorithm not settling */

void __cdecl
FUN_004c7a7c(uint *******param_1,uint param_2,int param_3,int param_4,undefined4 *param_5,
            uint *******param_6,int param_7)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  __acrt_fp_class _Var4;
  int iVar5;
  undefined1 *puVar6;
  uint *************pppppppppppppuVar7;
  rsize_t rVar8;
  uint ***********pppppppppppuVar9;
  uint uVar10;
  uint *************pppppppppppppuVar11;
  uint ***********pppppppppppuVar12;
  uint ***********pppppppppppuVar13;
  uint ***********pppppppppppuVar14;
  uint *************pppppppppppppuVar15;
  uint ***********pppppppppppuVar16;
  uint ************ppppppppppppuVar17;
  uint uVar18;
  uint *************pppppppppppppuVar19;
  uint ************ppppppppppppuVar20;
  bool bVar21;
  float10 fVar22;
  longlong lVar23;
  ulonglong uVar24;
  char *pcVar25;
  uint ***********local_974 [115];
  uint local_7a8;
  byte local_7a4 [8];
  char local_79c;
  uint local_798;
  uint local_794;
  undefined4 *local_790;
  uint local_78c;
  uint local_788;
  uint *************local_784;
  undefined8 local_780;
  uint *************local_774;
  uint *************local_770;
  uint *************local_76c;
  uint ************local_768;
  uint *************local_764;
  undefined1 local_75d;
  uint *************local_75c;
  uint *************local_758;
  uint ************local_754;
  uint *************local_750;
  uint *************local_74c;
  uint *************local_748;
  uint ***********local_744 [115];
  uint *************local_578;
  uint ***********local_574 [115];
  uint ***********local_3a8;
  uint *************local_3a4;
  uint ************local_3a0 [114];
  uint ***********local_1d8;
  uint *************local_1d4;
  uint local_1d0 [114];
  uint local_8;
  
  local_8 = DAT_0053fbc0 ^ (uint)&stack0xfffffffc;
  local_790 = param_5;
  local_764 = (uint *************)param_6;
  fegetenv((uint *)local_7a4);
  local_79c = (local_7a4[0] & 0x1f) != 0x1f;
  if ((bool)local_79c) {
    FUN_00501261((uint *)local_7a4);
  }
  uVar10 = param_2;
  uVar3 = 0x20;
  if (((int)param_2 < 1) && ((int)param_2 < 0)) {
    uVar3 = 0x2d;
  }
  *local_790 = uVar3;
  local_790[2] = local_764;
  __controlfp_s(&local_7a8,0,0);
  if (((uVar10 & 0x7ff00000) == 0) &&
     ((param_1 == (uint *******)0x0 && (uVar10 & 0xfffff) == 0 || ((local_7a8 & 0x1000000) != 0))))
  {
    pcVar25 = "0";
    local_790[1] = 0;
LAB_004c7b94:
    iVar5 = FUN_0047faad((char *)local_764,param_7,(int)pcVar25);
  }
  else {
    _Var4 = __acrt_fp_classify((double *)&param_1);
    if (_Var4 == 0) {
LAB_004c7bd7:
      param_2 = uVar10 & 0x7fffffff;
      local_794 = 0x8001f;
      __controlfp_s(&local_798,0,0);
      __controlfp_s((uint *)((int)&local_780 + 4),0x8001f,local_794);
      local_780 = CONCAT44(param_2,param_1);
      local_78c = param_3 + 1;
      bVar21 = (param_2 >> 0x14 & 0x7ff) != 0;
      if (bVar21) {
        iVar5 = 0x100000;
      }
      else {
        iVar5 = 0;
      }
      local_754 = (uint ************)(uint)!bVar21;
      local_774 = (uint *************)param_1;
      uVar10 = (param_2 & 0xfffff) + iVar5;
      local_750 = (uint *************)((int)local_754 + (param_2 >> 0x14 & 0x7ff));
      fVar22 = (float10)FUN_005012b0();
      FUN_0046a0e0((double)fVar22);
      local_788 = thunk_FUN_00469d60();
      if ((local_788 == 0x7fffffff) || (local_788 == 0x80000000)) {
        local_788 = 0;
      }
      local_1d4 = local_774;
      local_1d0[0] = uVar10;
      local_754 = (uint ************)((uVar10 != 0) + 1);
      local_1d8 = (uint ***********)local_754;
      if (local_750 < (uint *************)0x433) {
        if (local_750 == (uint *************)0x35) {
LAB_004c81ad:
          local_780 = local_780 & 0xffffffff;
          uVar10 = local_1d0[(uVar10 != 0) - 1];
          iVar5 = 0x1f;
          if (uVar10 != 0) {
            for (; uVar10 >> iVar5 == 0; iVar5 = iVar5 + -1) {
            }
          }
          if (uVar10 == 0) {
            iVar5 = 0;
          }
          else {
            iVar5 = iVar5 + 1;
          }
          pppppppppppuVar16 = (uint ***********)((int)local_754 + (uint)(iVar5 == 0x20));
          if (pppppppppppuVar16 < (uint *************)0x74) {
            if ((uint ***********)((int)pppppppppppuVar16 + -1) != (uint ***********)0xffffffff) {
              pppppppppppuVar14 = (uint ***********)((int)pppppppppppuVar16 + -2);
              pppppppppppuVar9 = (uint ***********)local_754;
              pppppppppppuVar12 = (uint ***********)((int)pppppppppppuVar16 + -1);
              do {
                if (pppppppppppuVar12 < pppppppppppuVar9) {
                  uVar10 = local_1d0[(int)((int)pppppppppppuVar12 + -1)];
                }
                else {
                  uVar10 = 0;
                }
                if (pppppppppppuVar14 < pppppppppppuVar9) {
                  pppppppppppuVar9 = (&local_1d8)[(int)pppppppppppuVar12];
                }
                else {
                  pppppppppppuVar9 = (uint ***********)0x0;
                }
                pppppppppppuVar13 = (uint ***********)((int)pppppppppppuVar12 + -1);
                pppppppppppuVar14 = (uint ***********)((int)pppppppppppuVar14 + -1);
                local_1d0[(int)((int)pppppppppppuVar12 + -1)] =
                     (uint)pppppppppppuVar9 >> 0x1f | uVar10 * 2;
                pppppppppppuVar9 = local_1d8;
                pppppppppppuVar12 = pppppppppppuVar13;
              } while (pppppppppppuVar13 != (uint ***********)0xffffffff);
            }
          }
          else {
            local_578 = (uint *************)0x0;
            local_1d8 = (uint ***********)0x0;
            _memcpy_s(&local_1d4,0x1cc,local_574,0);
            pppppppppppuVar16 = local_1d8;
          }
          local_1d8 = pppppppppppuVar16;
          uVar10 = 0x434 - (int)local_750;
          uVar18 = uVar10 >> 5;
          _memset(local_574,0,uVar18 * 4);
          local_574[uVar18] = (uint ***********)(1 << ((byte)uVar10 & 0x1f));
        }
        else {
          local_574[0] = (uint ***********)0x0;
          local_574[1] = (uint ***********)0x100000;
          local_578 = (uint *************)0x2;
          if (uVar10 == 0) goto LAB_004c81ad;
          iVar5 = 0;
          do {
            if (*(int *)((int)local_574 + iVar5) != *(int *)((int)local_1d0 + iVar5 + -4))
            goto LAB_004c81ad;
            iVar5 = iVar5 + 4;
          } while (iVar5 != 8);
          iVar5 = 0x1f;
          if (uVar10 != 0) {
            for (; uVar10 >> iVar5 == 0; iVar5 = iVar5 + -1) {
            }
          }
          local_780 = local_780 & 0xffffffff;
          if (uVar10 == 0) {
            iVar5 = 0;
          }
          else {
            iVar5 = iVar5 + 1;
          }
          pppppppppppuVar16 = (uint ***********)((int)local_754 + (uint)(0x20U - iVar5 < 2));
          if (pppppppppppuVar16 < (uint *************)0x74) {
            if ((uint ***********)((int)pppppppppppuVar16 + -1) != (uint ***********)0xffffffff) {
              pppppppppppuVar14 = (uint ***********)((int)pppppppppppuVar16 + -2);
              pppppppppppuVar9 = (uint ***********)local_754;
              pppppppppppuVar12 = (uint ***********)((int)pppppppppppuVar16 + -1);
              do {
                if (pppppppppppuVar12 < pppppppppppuVar9) {
                  uVar10 = local_1d0[(int)((int)pppppppppppuVar12 + -1)];
                }
                else {
                  uVar10 = 0;
                }
                if (pppppppppppuVar14 < pppppppppppuVar9) {
                  pppppppppppuVar9 = (&local_1d8)[(int)pppppppppppuVar12];
                }
                else {
                  pppppppppppuVar9 = (uint ***********)0x0;
                }
                pppppppppppuVar13 = (uint ***********)((int)pppppppppppuVar12 + -1);
                pppppppppppuVar14 = (uint ***********)((int)pppppppppppuVar14 + -1);
                local_1d0[(int)((int)pppppppppppuVar12 + -1)] =
                     (uint)pppppppppppuVar9 >> 0x1e | uVar10 << 2;
                pppppppppppuVar9 = local_1d8;
                pppppppppppuVar12 = pppppppppppuVar13;
              } while (pppppppppppuVar13 != (uint ***********)0xffffffff);
            }
          }
          else {
            local_578 = (uint *************)0x0;
            local_1d8 = (uint ***********)0x0;
            _memcpy_s(&local_1d4,0x1cc,local_574,0);
            pppppppppppuVar16 = local_1d8;
          }
          local_1d8 = pppppppppppuVar16;
          uVar10 = 0x435 - (int)local_750;
          uVar18 = uVar10 >> 5;
          _memset(local_574,0,uVar18 * 4);
          local_574[uVar18] = (uint ***********)(1 << ((byte)uVar10 & 0x1f));
        }
        local_578 = (uint *************)(uVar18 + 1);
        local_3a8 = (uint ***********)local_578;
        _memcpy_s(&local_3a4,0x1cc,local_574,(int)local_578 * 4);
      }
      else {
        local_574[0] = (uint ***********)0x0;
        local_574[1] = (uint ***********)0x100000;
        local_578 = (uint *************)0x2;
        if (uVar10 == 0) {
LAB_004c7ef6:
          local_75c = (uint *************)((uint)((int)local_750 + -0x432) & 0x1f);
          local_768 = (uint ************)((uint)((int)local_750 + -0x432) >> 5);
          local_758 = (uint *************)(0x20 - (int)local_75c);
          lVar23 = __allshl((byte)local_758,0);
          ppppppppppppuVar20 = local_754;
          local_770 = (uint *************)((int)lVar23 + -1);
          local_780 = local_780 & 0xffffffff;
          local_774 = (uint *************)~(uint)local_770;
          pppppppppppuVar16 = (&local_1d8)[(int)local_754];
          iVar5 = 0x1f;
          if (pppppppppppuVar16 != (uint ***********)0x0) {
            for (; (uint)pppppppppppuVar16 >> iVar5 == 0; iVar5 = iVar5 + -1) {
            }
          }
          if (pppppppppppuVar16 == (uint ***********)0x0) {
            local_754 = (uint ************)0x0;
          }
          else {
            local_754 = (uint ************)(iVar5 + 1);
          }
          if (((undefined1 *)((int)ppppppppppppuVar20 + (int)local_768) < (undefined1 *)0x74) &&
             (local_74c = (uint *************)
                          ((undefined1 *)
                           ((int)ppppppppppppuVar20 +
                           (uint)((uint *************)(0x20 - (int)local_754) < local_75c)) +
                          (int)local_768), local_74c < (uint *************)0x74)) {
            local_784 = (uint *************)((int)local_768 - 1);
            local_750 = (uint *************)((int)local_74c + -1);
            if (local_750 != local_784) {
              pppppppppppuVar16 = (uint ***********)((int)local_750 - (int)local_768);
              local_76c = (uint *************)(&local_1d8 + (int)pppppppppppuVar16);
              do {
                if (pppppppppppuVar16 < ppppppppppppuVar20) {
                  local_754 = local_76c[1];
                }
                else {
                  local_754 = (uint ************)0x0;
                }
                if ((uint ***********)((int)pppppppppppuVar16 + -1) < ppppppppppppuVar20) {
                  ppppppppppppuVar20 = *local_76c;
                }
                else {
                  ppppppppppppuVar20 = (uint ************)0x0;
                }
                local_1d0[(int)((int)local_750 + -1)] =
                     ((uint)ppppppppppppuVar20 & (uint)local_774) >> ((byte)local_758 & 0x1f) |
                     ((uint)local_754 & (uint)local_770) << ((byte)local_75c & 0x1f);
                local_750 = (uint *************)((int)local_750 + -1);
                local_76c = local_76c + -1;
                pppppppppppuVar16 = (uint ***********)((int)pppppppppppuVar16 + -1);
                ppppppppppppuVar20 = (uint ************)local_1d8;
              } while (local_750 != local_784);
            }
            local_1d8 = (uint ***********)local_74c;
            if (local_768 != (uint ************)0x0) {
              ppppppppppppuVar17 = (uint ************)&local_1d4;
              for (ppppppppppppuVar20 = local_768; ppppppppppppuVar20 != (uint ************)0x0;
                  ppppppppppppuVar20 = (uint ************)((int)ppppppppppppuVar20 - 1)) {
                *ppppppppppppuVar17 = (uint ***********)0x0;
                ppppppppppppuVar17 = ppppppppppppuVar17 + 1;
              }
            }
          }
          else {
            local_578 = (uint *************)0x0;
            local_1d8 = (uint ***********)0x0;
            _memcpy_s(&local_1d4,0x1cc,local_574,0);
          }
          local_574[0] = (uint ***********)0x2;
        }
        else {
          iVar5 = 0;
          do {
            if (*(int *)((int)local_574 + iVar5) != *(int *)((int)local_1d0 + iVar5 + -4))
            goto LAB_004c7ef6;
            iVar5 = iVar5 + 4;
          } while (iVar5 != 8);
          local_75c = (uint *************)((uint)((int)local_750 + -0x431) & 0x1f);
          local_768 = (uint ************)((uint)((int)local_750 + -0x431) >> 5);
          local_758 = (uint *************)(0x20 - (int)local_75c);
          lVar23 = __allshl((byte)local_758,0);
          ppppppppppppuVar20 = local_754;
          local_770 = (uint *************)((int)lVar23 + -1);
          local_780 = local_780 & 0xffffffff;
          local_774 = (uint *************)~(uint)local_770;
          pppppppppppuVar16 = (&local_1d8)[(int)local_754];
          iVar5 = 0x1f;
          if (pppppppppppuVar16 != (uint ***********)0x0) {
            for (; (uint)pppppppppppuVar16 >> iVar5 == 0; iVar5 = iVar5 + -1) {
            }
          }
          if (pppppppppppuVar16 == (uint ***********)0x0) {
            local_754 = (uint ************)0x0;
          }
          else {
            local_754 = (uint ************)(iVar5 + 1);
          }
          if (((undefined1 *)((int)ppppppppppppuVar20 + (int)local_768) < (undefined1 *)0x74) &&
             (local_74c = (uint *************)
                          ((undefined1 *)
                           ((int)ppppppppppppuVar20 +
                           (uint)((uint *************)(0x20 - (int)local_754) < local_75c)) +
                          (int)local_768), local_74c < (uint *************)0x74)) {
            local_784 = (uint *************)((int)local_768 - 1);
            local_750 = (uint *************)((int)local_74c + -1);
            if (local_750 != local_784) {
              pppppppppppuVar16 = (uint ***********)((int)local_750 - (int)local_768);
              local_76c = (uint *************)(&local_1d8 + (int)pppppppppppuVar16);
              do {
                if (pppppppppppuVar16 < ppppppppppppuVar20) {
                  local_754 = local_76c[1];
                }
                else {
                  local_754 = (uint ************)0x0;
                }
                if ((uint ***********)((int)pppppppppppuVar16 + -1) < ppppppppppppuVar20) {
                  ppppppppppppuVar20 = *local_76c;
                }
                else {
                  ppppppppppppuVar20 = (uint ************)0x0;
                }
                local_1d0[(int)((int)local_750 + -1)] =
                     ((uint)ppppppppppppuVar20 & (uint)local_774) >> ((byte)local_758 & 0x1f) |
                     ((uint)local_754 & (uint)local_770) << ((byte)local_75c & 0x1f);
                local_750 = (uint *************)((int)local_750 + -1);
                local_76c = local_76c + -1;
                pppppppppppuVar16 = (uint ***********)((int)pppppppppppuVar16 + -1);
                ppppppppppppuVar20 = (uint ************)local_1d8;
              } while (local_750 != local_784);
            }
            local_1d8 = (uint ***********)local_74c;
            if (local_768 != (uint ************)0x0) {
              ppppppppppppuVar17 = (uint ************)&local_1d4;
              for (ppppppppppppuVar20 = local_768; ppppppppppppuVar20 != (uint ************)0x0;
                  ppppppppppppuVar20 = (uint ************)((int)ppppppppppppuVar20 - 1)) {
                *ppppppppppppuVar17 = (uint ***********)0x0;
                ppppppppppppuVar17 = ppppppppppppuVar17 + 1;
              }
            }
          }
          else {
            local_578 = (uint *************)0x0;
            local_1d8 = (uint ***********)0x0;
            _memcpy_s(&local_1d4,0x1cc,local_574,0);
          }
          local_574[0] = (uint ***********)0x4;
        }
        local_574[1] = (uint ***********)0x0;
        local_3a8 = (uint ***********)0x1;
        local_578 = (uint *************)0x1;
        _memcpy_s(&local_3a4,0x1cc,local_574,4);
      }
      local_754 = (uint ************)0xa;
      if ((int)local_788 < 0) {
        local_780 = CONCAT44(-local_788,(undefined4)local_780);
        uVar24 = local_780;
        for (local_774 = (uint *************)(-local_788 / 10); local_780 = uVar24,
            local_774 != (uint *************)0x0;
            local_774 = (uint *************)((int)local_774 - (int)local_75c)) {
          local_75c = local_774;
          if ((uint *************)0x26 < local_774) {
            local_75c = (uint *************)0x26;
          }
          uVar10 = (uint)(byte)(&DAT_0050cd26)[(int)local_75c * 4];
          bVar1 = (&DAT_0050cd27)[(int)local_75c * 4];
          local_578 = (uint *************)(uVar10 + bVar1);
          _memset(local_574,0,uVar10 * 4);
          FUN_0044c490((uint *)(local_574 + uVar10),
                       (uint *)(&DAT_0050c420 +
                               (uint)*(ushort *)(&DAT_0050cd24 + (int)local_75c * 4) * 4),
                       (uint)bVar1 << 2);
          pppppppppppppuVar11 = local_1d4;
          local_770 = local_578;
          if (local_578 < (uint *************)0x2) {
            if (local_574[0] == (uint ***********)0x0) {
              local_1d8 = (uint ***********)0x0;
              _memcpy_s(&local_1d4,0x1cc,local_974,0);
            }
            else if ((local_574[0] != (uint ***********)0x1) &&
                    (local_1d8 != (uint *************)0x0)) {
              uVar10 = 0;
              local_758 = (uint *************)local_1d8;
              pppppppppppppuVar11 = (uint *************)0x0;
              do {
                lVar23 = ZEXT48(local_574[0]) *
                         (ulonglong)local_1d0[(int)((int)pppppppppppppuVar11 + -1)] +
                         (ulonglong)uVar10;
                local_1d0[(int)((int)pppppppppppppuVar11 + -1)] = (uint)lVar23;
                uVar10 = (uint)((ulonglong)lVar23 >> 0x20);
                pppppppppppppuVar11 = (uint *************)((int)pppppppppppppuVar11 + 1);
              } while (pppppppppppppuVar11 != (uint *************)local_1d8);
              if (uVar10 == 0) goto LAB_004c88b9;
              if (local_1d8 < (uint *************)0x73) {
                local_1d0[(int)((int)local_1d8 + -1)] = uVar10;
                local_1d8 = (uint ***********)((int)local_1d8 + 1);
                goto LAB_004c88b9;
              }
              local_1d8 = (uint ***********)0x0;
              _memcpy_s(&local_1d4,0x1cc,local_974,0);
              bVar21 = false;
              goto LAB_004c8bdc;
            }
LAB_004c88b9:
            bVar21 = true;
          }
          else {
            if (local_1d8 < (uint *************)0x2) {
              local_758 = local_1d4;
              local_1d8 = (uint ***********)local_578;
              _memcpy_s(&local_1d4,0x1cc,local_574,(int)local_578 << 2);
              if (pppppppppppppuVar11 == (uint *************)0x0) {
                local_1d8 = (uint ***********)0x0;
                rVar8 = 0;
                pppppppppppuVar16 = (uint ***********)local_974;
                goto LAB_004c8bc9;
              }
              if ((pppppppppppppuVar11 != (uint *************)0x1) &&
                 (local_1d8 != (uint *************)0x0)) {
                uVar10 = 0;
                local_770 = (uint *************)local_1d8;
                pppppppppppppuVar11 = (uint *************)0x0;
                do {
                  lVar23 = ZEXT48(local_758) *
                           (ulonglong)local_1d0[(int)((int)pppppppppppppuVar11 + -1)] +
                           (ulonglong)uVar10;
                  local_1d0[(int)((int)pppppppppppppuVar11 + -1)] = (uint)lVar23;
                  uVar10 = (uint)((ulonglong)lVar23 >> 0x20);
                  pppppppppppppuVar11 = (uint *************)((int)pppppppppppppuVar11 + 1);
                } while (pppppppppppppuVar11 != (uint *************)local_1d8);
                if (uVar10 != 0) {
                  if ((uint *************)0x72 < local_1d8) {
LAB_004c8c94:
                    local_1d8 = (uint ***********)0x0;
                    _memcpy_s(&local_1d4,0x1cc,local_974,0);
                    bVar21 = false;
                    goto LAB_004c8bdc;
                  }
                  local_1d0[(int)((int)local_1d8 + -1)] = uVar10;
                  local_1d8 = (uint ***********)((int)local_1d8 + 1);
                }
              }
            }
            else {
              local_768 = local_574;
              if (local_578 < local_1d8) {
                local_758 = (uint *************)&local_1d4;
                local_784 = local_578;
                local_770 = (uint *************)local_1d8;
              }
              else {
                local_768 = (uint ************)&local_1d4;
                local_758 = (uint *************)local_574;
                local_784 = (uint *************)local_1d8;
              }
              pppppppppppppuVar11 = (uint *************)0x0;
              local_1d8 = (uint ***********)0x0;
              local_748 = (uint *************)0x0;
              if (local_784 != (uint *************)0x0) {
                do {
                  if (local_768[(int)pppppppppppppuVar11] == (uint ***********)0x0) {
                    if (pppppppppppppuVar11 == (uint *************)local_1d8) {
                      local_744[(int)pppppppppppppuVar11] = (uint ***********)0x0;
                      local_1d8 = (uint ***********)((int)pppppppppppppuVar11 + 1);
                      local_748 = (uint *************)local_1d8;
                    }
                  }
                  else {
                    local_74c = (uint *************)0x0;
                    local_750 = (uint *************)0x0;
                    pppppppppppppuVar19 = pppppppppppppuVar11;
                    if (local_770 != (uint *************)0x0) {
                      do {
                        if (pppppppppppppuVar19 == (uint *************)0x73) break;
                        if (pppppppppppppuVar19 == (uint *************)local_1d8) {
                          local_744[(int)pppppppppppppuVar19] = (uint ***********)0x0;
                          local_748 = (uint *************)
                                      ((undefined1 *)((int)local_750 + 1) + (int)pppppppppppppuVar11
                                      );
                        }
                        ppppppppppppuVar17 = local_758[(int)local_750];
                        pppppppppppuVar14 = local_768[(int)pppppppppppppuVar11];
                        uVar10 = (uint)(ZEXT48(ppppppppppppuVar17) * ZEXT48(pppppppppppuVar14));
                        puVar6 = (undefined1 *)(uVar10 + (int)local_74c);
                        ppppppppppppuVar20 = local_744 + (int)pppppppppppppuVar19;
                        pppppppppppuVar16 = *ppppppppppppuVar20;
                        *ppppppppppppuVar20 = (uint ***********)(puVar6 + (int)*ppppppppppppuVar20);
                        local_74c = (uint *************)
                                    ((int)(ZEXT48(ppppppppppppuVar17) * ZEXT48(pppppppppppuVar14) >>
                                          0x20) + (uint)CARRY4(uVar10,(uint)local_74c) +
                                    (uint)CARRY4((uint)pppppppppppuVar16,(uint)puVar6));
                        local_750 = (uint *************)((int)local_750 + 1);
                        pppppppppppppuVar19 = (uint *************)((int)pppppppppppppuVar19 + 1);
                        local_1d8 = (uint ***********)local_748;
                      } while (local_750 != local_770);
                      if (local_74c != (uint *************)0x0) {
                        pppppppppppppuVar15 = pppppppppppppuVar19;
                        local_76c = (uint *************)(local_744 + (int)pppppppppppppuVar19);
                        do {
                          if (pppppppppppppuVar15 == (uint *************)0x73) goto LAB_004c8c94;
                          pppppppppppppuVar19 = (uint *************)((int)pppppppppppppuVar15 + 1);
                          if (pppppppppppppuVar15 == (uint *************)local_1d8) {
                            *local_76c = (uint ************)0x0;
                            local_748 = pppppppppppppuVar19;
                          }
                          pppppppppppppuVar7 = local_76c + 1;
                          ppppppppppppuVar20 = *local_76c;
                          *local_76c = (uint ************)((int)*local_76c + (int)local_74c);
                          local_74c = (uint *************)
                                      (uint)CARRY4((uint)ppppppppppppuVar20,(uint)local_74c);
                          local_1d8 = (uint ***********)local_748;
                          pppppppppppppuVar15 = pppppppppppppuVar19;
                          local_76c = pppppppppppppuVar7;
                        } while (local_74c != (uint *************)0x0);
                      }
                    }
                    if (pppppppppppppuVar19 == (uint *************)0x73) goto LAB_004c8c94;
                  }
                  pppppppppppppuVar11 = (uint *************)((int)pppppppppppppuVar11 + 1);
                } while (pppppppppppppuVar11 != local_784);
              }
              rVar8 = (int)local_1d8 << 2;
              pppppppppppuVar16 = (uint ***********)local_744;
LAB_004c8bc9:
              _memcpy_s(&local_1d4,0x1cc,pppppppppppuVar16,rVar8);
            }
            bVar21 = true;
          }
LAB_004c8bdc:
          if (!bVar21) goto LAB_004c8ce2;
          uVar24 = local_780;
        }
        local_780._4_4_ = (uint)(uVar24 >> 0x20);
        uVar10 = local_780._4_4_ % 10;
        if (uVar10 != 0) {
          uVar10 = *(uint *)(&DAT_0050cdbc + uVar10 * 2);
          local_780._0_4_ = (undefined4)uVar24;
          local_780 = CONCAT44(uVar10,(undefined4)local_780);
          if (uVar10 == 0) {
LAB_004c8ce2:
            local_1d8 = (uint ***********)0x0;
            pppppppppppppuVar11 = (uint *************)&local_1d4;
            goto LAB_004c8cef;
          }
          if ((uVar10 != 1) && (local_1d8 != (uint *************)0x0)) {
            local_774 = (uint *************)0x0;
            pppppppppppppuVar11 = (uint *************)0x0;
            do {
              lVar23 = (ulonglong)uVar10 *
                       (ulonglong)local_1d0[(int)((int)pppppppppppppuVar11 + -1)] +
                       ZEXT48(local_774);
              local_1d0[(int)((int)pppppppppppppuVar11 + -1)] = (uint)lVar23;
              local_774 = (uint *************)((ulonglong)lVar23 >> 0x20);
              pppppppppppppuVar11 = (uint *************)((int)pppppppppppppuVar11 + 1);
            } while (pppppppppppppuVar11 != (uint *************)local_1d8);
            if (local_774 != (uint *************)0x0) {
              if ((uint *************)0x72 < local_1d8) goto LAB_004c8ce2;
              local_1d0[(int)local_1d8 + -1] = (uint)local_774;
              local_1d8 = (uint ***********)((int)local_1d8 + 1);
            }
          }
        }
      }
      else {
        for (local_758 = (uint *************)(local_788 / 10); local_758 != (uint *************)0x0;
            local_758 = (uint *************)((int)local_758 - (int)local_76c)) {
          local_76c = local_758;
          if ((uint *************)0x26 < local_758) {
            local_76c = (uint *************)0x26;
          }
          uVar10 = (uint)(byte)(&DAT_0050cd26)[(int)local_76c * 4];
          bVar1 = (&DAT_0050cd27)[(int)local_76c * 4];
          local_578 = (uint *************)(uVar10 + bVar1);
          _memset(local_574,0,uVar10 * 4);
          FUN_0044c490((uint *)(local_574 + uVar10),
                       (uint *)(&DAT_0050c420 +
                               (uint)*(ushort *)(&DAT_0050cd24 + (int)local_76c * 4) * 4),
                       (uint)bVar1 << 2);
          pppppppppppppuVar11 = local_3a4;
          local_784 = local_578;
          if (local_578 < (uint *************)0x2) {
            if (local_574[0] == (uint ***********)0x0) {
              local_748 = (uint *************)0x0;
              local_3a8 = (uint ***********)0x0;
              _memcpy_s(&local_3a4,0x1cc,local_744,0);
            }
            else if ((local_574[0] != (uint ***********)0x1) &&
                    (local_3a8 != (uint *************)0x0)) {
              ppppppppppppuVar20 = (uint ************)0x0;
              local_774 = (uint *************)local_3a8;
              pppppppppppppuVar11 = (uint *************)0x0;
              do {
                lVar23 = ZEXT48(local_574[0]) * ZEXT48((&local_3a4)[(int)pppppppppppppuVar11]) +
                         ZEXT48(ppppppppppppuVar20);
                (&local_3a4)[(int)pppppppppppppuVar11] =
                     (uint *************)(uint ************)lVar23;
                ppppppppppppuVar20 = (uint ************)((ulonglong)lVar23 >> 0x20);
                pppppppppppppuVar11 = (uint *************)((int)pppppppppppppuVar11 + 1);
              } while (pppppppppppppuVar11 != (uint *************)local_3a8);
              if (ppppppppppppuVar20 == (uint ************)0x0) goto LAB_004c839d;
              if (local_3a8 < (uint *************)0x73) {
                (&local_3a4)[(int)local_3a8] = (uint *************)ppppppppppppuVar20;
                local_3a8 = (uint ***********)((int)local_3a8 + 1);
                goto LAB_004c839d;
              }
              local_578 = (uint *************)0x0;
              local_3a8 = (uint ***********)0x0;
              _memcpy_s(&local_3a4,0x1cc,local_574,0);
              bVar21 = false;
              goto LAB_004c86d6;
            }
LAB_004c839d:
            bVar21 = true;
          }
          else {
            if (local_3a8 < (uint *************)0x2) {
              local_774 = local_3a4;
              local_3a8 = (uint ***********)local_578;
              _memcpy_s(&local_3a4,0x1cc,local_574,(int)local_578 << 2);
              if (pppppppppppppuVar11 == (uint *************)0x0) {
                local_578 = (uint *************)0x0;
                local_3a8 = (uint ***********)0x0;
                rVar8 = 0;
                ppppppppppppuVar20 = local_574;
                goto LAB_004c86c3;
              }
              if ((pppppppppppppuVar11 != (uint *************)0x1) &&
                 (local_3a8 != (uint *************)0x0)) {
                ppppppppppppuVar20 = (uint ************)0x0;
                local_770 = (uint *************)local_3a8;
                pppppppppppppuVar11 = (uint *************)0x0;
                do {
                  lVar23 = ZEXT48(local_774) * ZEXT48((&local_3a4)[(int)pppppppppppppuVar11]) +
                           ZEXT48(ppppppppppppuVar20);
                  (&local_3a4)[(int)pppppppppppppuVar11] =
                       (uint *************)(uint ************)lVar23;
                  ppppppppppppuVar20 = (uint ************)((ulonglong)lVar23 >> 0x20);
                  pppppppppppppuVar11 = (uint *************)((int)pppppppppppppuVar11 + 1);
                } while (pppppppppppppuVar11 != (uint *************)local_3a8);
                if (ppppppppppppuVar20 != (uint ************)0x0) {
                  if ((uint *************)0x72 < local_3a8) {
                    local_578 = (uint *************)0x0;
                    ppppppppppppuVar20 = local_574;
LAB_004c8747:
                    local_3a8 = (uint ***********)0x0;
                    _memcpy_s(&local_3a4,0x1cc,ppppppppppppuVar20,0);
                    bVar21 = false;
                    goto LAB_004c86d6;
                  }
                  (&local_3a4)[(int)local_3a8] = (uint *************)ppppppppppppuVar20;
                  local_3a8 = (uint ***********)((int)local_3a8 + 1);
                }
              }
            }
            else {
              local_768 = local_574;
              if (local_578 < local_3a8) {
                local_75c = (uint *************)&local_3a4;
                local_770 = local_578;
                local_784 = (uint *************)local_3a8;
              }
              else {
                local_768 = (uint ************)&local_3a4;
                local_75c = (uint *************)local_574;
                local_770 = (uint *************)local_3a8;
              }
              pppppppppppppuVar11 = (uint *************)0x0;
              local_3a8 = (uint ***********)0x0;
              local_748 = (uint *************)0x0;
              if (local_770 != (uint *************)0x0) {
                do {
                  if (local_768[(int)pppppppppppppuVar11] == (uint ***********)0x0) {
                    if (pppppppppppppuVar11 == (uint *************)local_3a8) {
                      local_744[(int)pppppppppppppuVar11] = (uint ***********)0x0;
                      local_3a8 = (uint ***********)((int)pppppppppppppuVar11 + 1);
                      local_748 = (uint *************)local_3a8;
                    }
                  }
                  else {
                    local_74c = (uint *************)0x0;
                    local_750 = (uint *************)0x0;
                    pppppppppppppuVar19 = pppppppppppppuVar11;
                    if (local_784 != (uint *************)0x0) {
                      do {
                        if (pppppppppppppuVar19 == (uint *************)0x73) break;
                        if (pppppppppppppuVar19 == (uint *************)local_3a8) {
                          local_744[(int)pppppppppppppuVar19] = (uint ***********)0x0;
                          local_748 = (uint *************)
                                      ((undefined1 *)((int)local_750 + 1) + (int)pppppppppppppuVar11
                                      );
                        }
                        ppppppppppppuVar17 = local_75c[(int)local_750];
                        pppppppppppuVar14 = local_768[(int)pppppppppppppuVar11];
                        uVar10 = (uint)(ZEXT48(ppppppppppppuVar17) * ZEXT48(pppppppppppuVar14));
                        puVar6 = (undefined1 *)(uVar10 + (int)local_74c);
                        ppppppppppppuVar20 = local_744 + (int)pppppppppppppuVar19;
                        pppppppppppuVar16 = *ppppppppppppuVar20;
                        *ppppppppppppuVar20 = (uint ***********)(puVar6 + (int)*ppppppppppppuVar20);
                        local_74c = (uint *************)
                                    ((int)(ZEXT48(ppppppppppppuVar17) * ZEXT48(pppppppppppuVar14) >>
                                          0x20) + (uint)CARRY4(uVar10,(uint)local_74c) +
                                    (uint)CARRY4((uint)pppppppppppuVar16,(uint)puVar6));
                        local_750 = (uint *************)((int)local_750 + 1);
                        pppppppppppppuVar19 = (uint *************)((int)pppppppppppppuVar19 + 1);
                        local_3a8 = (uint ***********)local_748;
                      } while (local_750 != local_784);
                      if (local_74c != (uint *************)0x0) {
                        pppppppppppppuVar15 = pppppppppppppuVar19;
                        local_750 = (uint *************)(local_744 + (int)pppppppppppppuVar19);
                        do {
                          if (pppppppppppppuVar15 == (uint *************)0x73) goto LAB_004c872d;
                          pppppppppppppuVar19 = (uint *************)((int)pppppppppppppuVar15 + 1);
                          if (pppppppppppppuVar15 == (uint *************)local_3a8) {
                            *local_750 = (uint ************)0x0;
                            local_748 = pppppppppppppuVar19;
                          }
                          pppppppppppppuVar7 = local_750 + 1;
                          ppppppppppppuVar20 = *local_750;
                          *local_750 = (uint ************)((int)*local_750 + (int)local_74c);
                          local_74c = (uint *************)
                                      (uint)CARRY4((uint)ppppppppppppuVar20,(uint)local_74c);
                          local_3a8 = (uint ***********)local_748;
                          pppppppppppppuVar15 = pppppppppppppuVar19;
                          local_750 = pppppppppppppuVar7;
                        } while (local_74c != (uint *************)0x0);
                      }
                    }
                    if (pppppppppppppuVar19 == (uint *************)0x73) {
LAB_004c872d:
                      ppppppppppppuVar20 = local_974;
                      goto LAB_004c8747;
                    }
                  }
                  pppppppppppppuVar11 = (uint *************)((int)pppppppppppppuVar11 + 1);
                } while (pppppppppppppuVar11 != local_770);
              }
              rVar8 = (int)local_3a8 << 2;
              ppppppppppppuVar20 = local_744;
LAB_004c86c3:
              _memcpy_s(&local_3a4,0x1cc,ppppppppppppuVar20,rVar8);
            }
            bVar21 = true;
          }
LAB_004c86d6:
          if (!bVar21) goto LAB_004c876f;
        }
        if (local_788 % 10 != 0) {
          local_774 = *(uint **************)(&DAT_0050cdbc + (local_788 % 10) * 2);
          if (local_774 == (uint *************)0x0) {
LAB_004c876f:
            local_3a8 = (uint ***********)0x0;
            pppppppppppppuVar11 = (uint *************)&local_3a4;
LAB_004c8cef:
            _memcpy_s(pppppppppppppuVar11,0x1cc,local_974,0);
          }
          else if ((local_774 != (uint *************)0x1) && (local_3a8 != (uint *************)0x0))
          {
            local_758 = (uint *************)0x0;
            pppppppppppppuVar11 = (uint *************)0x0;
            do {
              lVar23 = ZEXT48(local_774) * ZEXT48((&local_3a4)[(int)pppppppppppppuVar11]) +
                       ZEXT48(local_758);
              (&local_3a4)[(int)pppppppppppppuVar11] = (uint *************)(uint ************)lVar23
              ;
              local_758 = (uint *************)((ulonglong)lVar23 >> 0x20);
              pppppppppppppuVar11 = (uint *************)((int)pppppppppppppuVar11 + 1);
            } while (pppppppppppppuVar11 != (uint *************)local_3a8);
            if (local_758 != (uint *************)0x0) {
              if ((uint *************)0x72 < local_3a8) goto LAB_004c876f;
              (&local_3a4)[(int)local_3a8] = local_758;
              local_3a8 = (uint ***********)((int)local_3a8 + 1);
            }
          }
        }
      }
      pppppppppppppuVar11 = local_764;
      local_74c = local_764;
      if (local_1d8 != (uint *************)0x0) {
        local_774 = (uint *************)0x0;
        pppppppppppppuVar19 = (uint *************)0x0;
        do {
          lVar23 = (ulonglong)local_1d0[(int)((int)pppppppppppppuVar19 + -1)] * 10 +
                   ZEXT48(local_774);
          local_1d0[(int)((int)pppppppppppppuVar19 + -1)] = (uint)lVar23;
          local_774 = (uint *************)((ulonglong)lVar23 >> 0x20);
          pppppppppppppuVar19 = (uint *************)((int)pppppppppppppuVar19 + 1);
        } while (pppppppppppppuVar19 != (uint *************)local_1d8);
        if (local_774 != (uint *************)0x0) {
          if (local_1d8 < (uint *************)0x73) {
            local_1d0[(int)((int)local_1d8 + -1)] = (uint)local_774;
            local_1d8 = (uint ***********)((int)local_1d8 + 1);
          }
          else {
            local_1d8 = (uint ***********)0x0;
            _memcpy_s(&local_1d4,0x1cc,local_974,0);
          }
        }
      }
      uVar24 = FUN_0044eae0((uint *)&local_1d8,(uint *)&local_3a8);
      if ((int)uVar24 == 10) {
        pppppppppppppuVar11 = (uint *************)((int)local_764 + 1);
        local_788 = local_788 + 1;
        *(undefined1 *)local_764 = 0x31;
        local_780 = CONCAT44(local_3a8,(undefined4)local_780);
        local_74c = pppppppppppppuVar11;
        if (local_3a8 != (uint *************)0x0) {
          ppppppppppppuVar20 = (uint ************)0x0;
          pppppppppppppuVar19 = (uint *************)0x0;
          do {
            lVar23 = ZEXT48((&local_3a4)[(int)pppppppppppppuVar19]) * 10 +
                     ZEXT48(ppppppppppppuVar20);
            (&local_3a4)[(int)pppppppppppppuVar19] = (uint *************)(uint ************)lVar23;
            ppppppppppppuVar20 = (uint ************)((ulonglong)lVar23 >> 0x20);
            pppppppppppppuVar19 = (uint *************)((int)pppppppppppppuVar19 + 1);
          } while (pppppppppppppuVar19 != (uint *************)local_3a8);
          local_780 = CONCAT44(ppppppppppppuVar20,(undefined4)local_780);
          if (ppppppppppppuVar20 != (uint ************)0x0) {
            if (local_3a8 < (uint *************)0x73) {
              (&local_3a4)[(int)local_3a8] = (uint *************)ppppppppppppuVar20;
              local_3a8 = (uint ***********)((int)local_3a8 + 1);
            }
            else {
              local_3a8 = (uint ***********)0x0;
              _memcpy_s(&local_3a4,0x1cc,local_974,0);
            }
          }
        }
      }
      else if ((int)uVar24 == 0) {
        local_788 = local_788 - 1;
      }
      else {
        pppppppppppppuVar11 = (uint *************)((int)local_764 + 1);
        *(char *)local_764 = (char)uVar24 + '0';
        local_74c = pppppppppppppuVar11;
      }
      local_790[1] = local_788;
      uVar10 = local_78c;
      if (((-1 < (int)local_788) && (local_78c < 0x80000000)) && (param_4 == 0)) {
        uVar10 = local_78c + local_788;
      }
      uVar18 = param_7 - 1U;
      if (uVar10 <= param_7 - 1U) {
        uVar18 = uVar10;
      }
      local_758 = (uint *************)(uVar18 + (int)local_764);
      local_75d = 0;
      if (pppppppppppppuVar11 != local_758) {
        do {
          pppppppppppppuVar19 = local_74c;
          local_780 = CONCAT44(local_1d8,(undefined4)local_780);
          if (local_1d8 == (uint *************)0x0) break;
          uVar10 = 0;
          pppppppppppppuVar11 = (uint *************)0x0;
          do {
            lVar23 = (ulonglong)local_1d0[(int)((int)pppppppppppppuVar11 + -1)] * 1000000000 +
                     (ulonglong)uVar10;
            local_1d0[(int)((int)pppppppppppppuVar11 + -1)] = (uint)lVar23;
            uVar10 = (uint)((ulonglong)lVar23 >> 0x20);
            pppppppppppppuVar11 = (uint *************)((int)pppppppppppppuVar11 + 1);
          } while (pppppppppppppuVar11 != (uint *************)local_1d8);
          local_780 = CONCAT44(uVar10,(undefined4)local_780);
          if (uVar10 != 0) {
            if (local_1d8 < (uint *************)0x73) {
              local_1d0[(int)((int)local_1d8 + -1)] = uVar10;
              local_1d8 = (uint ***********)((int)local_1d8 + 1);
            }
            else {
              local_1d8 = (uint ***********)0x0;
              _memcpy_s(&local_1d4,0x1cc,local_974,0);
            }
          }
          uVar24 = FUN_0044eae0((uint *)&local_1d8,(uint *)&local_3a8);
          local_75c = (uint *************)uVar24;
          uVar10 = (int)local_758 - (int)pppppppppppppuVar19;
          local_774 = (uint *************)0x8;
          do {
            uVar24 = (uVar24 & 0xffffffff) % ZEXT48(local_754);
            cVar2 = (char)uVar24 + '0';
            local_78c = CONCAT31((int3)(uVar24 >> 8),cVar2);
            local_75c = (uint *************)((uint)local_75c / (uint)local_754);
            if (local_774 < uVar10) {
              *(char *)((int)local_774 + (int)pppppppppppppuVar19) = cVar2;
            }
            else if (cVar2 != '0') {
              local_75d = 1;
            }
            local_774 = (uint *************)((int)local_774 - 1);
            uVar24 = (ulonglong)CONCAT14(local_75d,local_75c);
          } while (local_774 != (uint *************)0xffffffff);
          if (9 < uVar10) {
            uVar10 = 9;
          }
          pppppppppppppuVar11 = (uint *************)((int)pppppppppppppuVar19 + uVar10);
          local_774 = (uint *************)0xffffffff;
          local_74c = pppppppppppppuVar11;
        } while (pppppppppppppuVar11 != local_758);
      }
      *(undefined1 *)pppppppppppppuVar11 = 0;
      __controlfp_s((uint *)((int)&local_780 + 4),local_798,local_794);
      goto LAB_004c9030;
    }
    local_790[1] = 1;
    if (_Var4 != 1) {
      if (_Var4 == 2) {
        pcVar25 = "1#QNAN";
      }
      else if (_Var4 == 3) {
        pcVar25 = "1#SNAN";
      }
      else {
        if (_Var4 != 4) goto LAB_004c7bd7;
        pcVar25 = "1#IND";
      }
      goto LAB_004c7b94;
    }
    iVar5 = FUN_0047faad((char *)local_764,param_7,0x5292d4);
  }
  if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
    __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
LAB_004c9030:
  if (local_79c != '\0') {
    FUN_00501215((uint *)local_7a4);
  }
  FUN_004257be(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


