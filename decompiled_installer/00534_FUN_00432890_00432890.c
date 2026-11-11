// Function: FUN_00432890
// Entry: 00432890
// Size: 1318 bytes
// Thunk: false
// External: false


/* WARNING: Removing unreachable block (ram,0x00432b9f) */
/* WARNING: Removing unreachable block (ram,0x00432cbf) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FUN_00432890(void *param_1,int param_2,uint param_3,int param_4,int param_5,uint param_6,
            float param_7)

{
  ulonglong uVar1;
  float fVar2;
  short sVar3;
  undefined2 uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  short sVar9;
  int iVar10;
  int iVar11;
  float fVar12;
  bool bVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  longlong lVar17;
  uint local_10;
  float fStack_c;
  uint local_8;
  float fStack_4;
  
  if (param_1 == (void *)0x0) {
    FID_conflict___assert
              (L"pDst != ((void *)0)",
               L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h",
               0xa80f);
  }
  if (param_2 == 0) {
    FID_conflict___assert
              (L"pSrc != ((void *)0)",
               L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h",
               0xa810);
  }
  if (param_7 == DAT_0050c314) {
    FUN_004320b0((uint)param_1,param_2,CONCAT44(param_4,param_3),param_5,param_6);
    return;
  }
  if (param_7 == _DAT_0050c0b0) {
    FUN_00431f80(param_1,param_3,param_4,param_5,param_6);
    return;
  }
  uVar5 = (uint)((ulonglong)param_3 * (ulonglong)param_6);
  fVar12 = (float)(param_4 * param_6 + (int)((ulonglong)param_3 * (ulonglong)param_6 >> 0x20));
  switch(param_5) {
  case 1:
    if (param_1 == (void *)0x0) {
      FID_conflict___assert
                (L"pDst != ((void *)0)",
                 L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h",
                 0xa7c5);
    }
    if (param_2 == 0) {
      FID_conflict___assert
                (L"pSrc != ((void *)0)",
                 L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h",
                 0xa7c6);
    }
    fVar14 = param_7 * _DAT_0050c36c;
    if ((fVar12 != 0.0) || (uVar5 != 0)) {
      local_10 = 0;
      param_7 = 0.0;
      while( true ) {
        do {
          sVar3 = (short)((uint)((int)*(short *)(param_2 + local_10 * 2) * (int)(short)(int)fVar14)
                         >> 8);
          sVar9 = 0x7f;
          if (sVar3 < 0x7f) {
            sVar9 = sVar3;
          }
          if (sVar9 < -0x80) {
            sVar9 = -0x80;
          }
          *(char *)(local_10 + (int)param_1) = (char)sVar9 + -0x80;
          bVar13 = 0xfffffffe < local_10;
          local_10 = local_10 + 1;
          param_7 = (float)((int)param_7 + (uint)bVar13);
        } while ((uint)param_7 < (uint)fVar12);
        if ((uint)fVar12 < (uint)param_7) break;
        if (uVar5 <= local_10) {
          return;
        }
      }
    }
    break;
  case 2:
    if (param_1 == (void *)0x0) {
      FID_conflict___assert
                (L"pDst != ((void *)0)",
                 L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h",
                 0xa7d4);
    }
    if (param_2 == 0) {
      FID_conflict___assert
                (L"pSrc != ((void *)0)",
                 L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h",
                 0xa7d5);
    }
    fVar14 = param_7 * _DAT_0050c36c;
    if ((fVar12 != 0.0) || (uVar5 != 0)) {
      fStack_c = 0.0;
      local_10 = 0;
      while( true ) {
        do {
          iVar10 = *(int *)(param_2 + local_10 * 4) * (int)(short)(int)fVar14;
          iVar11 = iVar10 >> 8;
          iVar6 = 0x7fff;
          if (iVar11 < 0x7fff) {
            iVar6 = iVar11;
          }
          if (iVar6 < -0x8000) {
            uVar4 = 0x8000;
          }
          else {
            uVar4 = 0x7fff;
            if (iVar11 < 0x7fff) {
              uVar4 = (short)((uint)iVar10 >> 8);
            }
          }
          *(undefined2 *)((int)param_1 + local_10 * 2) = uVar4;
          bVar13 = 0xfffffffe < local_10;
          local_10 = local_10 + 1;
          fStack_c = (float)((int)fStack_c + (uint)bVar13);
        } while ((uint)fStack_c < (uint)fVar12);
        if ((uint)fVar12 < (uint)fStack_c) break;
        if (uVar5 <= local_10) {
          return;
        }
      }
    }
    break;
  case 3:
    if (param_1 == (void *)0x0) {
      FID_conflict___assert
                (L"pDst != ((void *)0)",
                 L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h",
                 0xa7e3);
    }
    if (param_2 == 0) {
      FID_conflict___assert
                (L"pSrc != ((void *)0)",
                 L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h",
                 0xa7e4);
    }
    if ((fVar12 != 0.0) || (uVar5 != 0)) {
      local_8 = 0;
      uVar7 = (uint)(short)(int)(param_7 * _DAT_0050c36c);
      param_7 = 0.0;
      while( true ) {
        do {
          lVar17 = __allmul(*(uint *)(param_2 + local_8 * 8),*(int *)(param_2 + 4 + local_8 * 8),
                            uVar7,(int)uVar7 >> 0x1f);
          uVar1 = lVar17 >> 8;
          if ((longlong)uVar1 < 0x7fffff) {
            if ((0x7fffffffffffffff < uVar1) &&
               (((longlong)uVar1 < -0x100000000 || ((uint)uVar1 < 0xff800000)))) {
              uVar1 = 0xffffffffff800000;
            }
          }
          else {
            uVar1 = 0x7fffff;
          }
          *(char *)((int)param_1 + local_8 * 3) = (char)uVar1;
          *(char *)((int)param_1 + local_8 * 3 + 1) = (char)(uVar1 >> 8);
          *(char *)((int)param_1 + local_8 * 3 + 2) = (char)(uVar1 >> 0x10);
          bVar13 = 0xfffffffe < local_8;
          local_8 = local_8 + 1;
          param_7 = (float)((int)param_7 + (uint)bVar13);
        } while ((uint)param_7 < (uint)fVar12);
        if ((uint)fVar12 < (uint)param_7) break;
        if (uVar5 <= local_8) {
          return;
        }
      }
    }
    break;
  case 4:
    if (param_1 == (void *)0x0) {
      FID_conflict___assert
                (L"pDst != ((void *)0)",
                 L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h",
                 0xa7f5);
    }
    if (param_2 == 0) {
      FID_conflict___assert
                (L"pSrc != ((void *)0)",
                 L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h",
                 0xa7f6);
    }
    if ((fVar12 != 0.0) || (uVar5 != 0)) {
      fStack_4 = 0.0;
      local_8 = 0;
      uVar7 = (uint)(short)(int)(param_7 * _DAT_0050c36c);
      while( true ) {
        do {
          lVar17 = __allmul(*(uint *)(param_2 + local_8 * 8),*(int *)(param_2 + 4 + local_8 * 8),
                            uVar7,(int)uVar7 >> 0x1f);
          uVar1 = lVar17 >> 8;
          uVar8 = (uint)uVar1;
          if ((longlong)uVar1 < 0x7fffffff) {
            if ((0x7fffffffffffffff < uVar1) &&
               (((longlong)uVar1 < -0x100000000 || (uVar8 < 0x80000000)))) {
              uVar8 = 0x80000000;
            }
          }
          else {
            uVar8 = 0x7fffffff;
          }
          *(uint *)((int)param_1 + local_8 * 4) = uVar8;
          bVar13 = 0xfffffffe < local_8;
          local_8 = local_8 + 1;
          fStack_4 = (float)((int)fStack_4 + (uint)bVar13);
        } while ((uint)fStack_4 < (uint)fVar12);
        if ((uint)fVar12 < (uint)fStack_4) break;
        if (uVar5 <= local_8) {
          return;
        }
      }
    }
    break;
  case 5:
    if (param_1 == (void *)0x0) {
      FID_conflict___assert
                (L"pDst != ((void *)0)",
                 L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h",
                 0xa803);
    }
    if (param_2 == 0) {
      FID_conflict___assert
                (L"pSrc != ((void *)0)",
                 L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h",
                 0xa804);
    }
    fVar2 = DAT_0050c38c;
    fVar14 = DAT_0050c314;
    if ((fVar12 != 0.0) || (uVar5 != 0)) {
      fStack_4 = 0.0;
      local_8 = 0;
      do {
        fVar16 = param_7 * *(float *)(param_2 + local_8 * 4);
        fVar15 = fVar2;
        if ((fVar2 <= fVar16) && (fVar15 = fVar14, fVar16 <= fVar14)) {
          fVar15 = fVar16;
        }
        *(float *)((int)param_1 + local_8 * 4) = fVar15;
        bVar13 = 0xfffffffe < local_8;
        local_8 = local_8 + 1;
        fStack_4 = (float)((int)fStack_4 + (uint)bVar13);
      } while (((uint)fStack_4 < (uint)fVar12) ||
              (((uint)fStack_4 <= (uint)fVar12 && (local_8 < uVar5))));
    }
  }
  return;
}


