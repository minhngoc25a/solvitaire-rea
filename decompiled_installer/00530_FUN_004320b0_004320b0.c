// Function: FUN_004320b0
// Entry: 004320b0
// Size: 1028 bytes
// Thunk: false
// External: false


void __cdecl
FUN_004320b0(uint param_1,int param_2,ulonglong param_3,undefined4 param_4,uint param_5)

{
  int iVar1;
  float fVar2;
  short sVar3;
  uint uVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  undefined2 uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  short sVar12;
  uint uVar13;
  bool bVar14;
  float fVar15;
  uint local_8;
  
  uVar4 = param_1;
  if (param_1 == 0) {
    FID_conflict___assert
              (L"pDst != ((void *)0)",
               L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h",
               0xa6ca);
  }
  if (param_2 == 0) {
    FID_conflict___assert
              (L"pSrc != ((void *)0)",
               L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h",
               0xa6cb);
  }
  lVar5 = (param_3 & 0xffffffff) * (ulonglong)param_5;
  uVar9 = (uint)lVar5;
  uVar13 = param_3._4_4_ * param_5 + (int)((ulonglong)lVar5 >> 0x20);
  switch(param_4) {
  case 1:
    if (param_1 == 0) {
      FID_conflict___assert
                (L"pDst != ((void *)0)",
                 L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h",
                 0xa68b);
    }
    if (param_2 == 0) {
      FID_conflict___assert
                (L"pSrc != ((void *)0)",
                 L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h",
                 0xa68c);
    }
    if ((uVar13 != 0) || (uVar9 != 0)) {
      param_3._0_4_ = 0;
      param_1 = 0;
      while( true ) {
        do {
          sVar3 = *(short *)(param_2 + (uint)param_3 * 2);
          sVar12 = 0x7f;
          if (sVar3 < 0x7f) {
            sVar12 = sVar3;
          }
          if (sVar12 < -0x80) {
            sVar12 = -0x80;
          }
          *(char *)((uint)param_3 + uVar4) = (char)sVar12 + -0x80;
          bVar14 = 0xfffffffe < (uint)param_3;
          param_3._0_4_ = (uint)param_3 + 1;
          param_1 = param_1 + bVar14;
        } while (param_1 < uVar13);
        if (uVar13 < param_1) break;
        if (uVar9 <= (uint)param_3) {
          return;
        }
      }
    }
    break;
  case 2:
    if (param_1 == 0) {
      FID_conflict___assert
                (L"pDst != ((void *)0)",
                 L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h",
                 0xa697);
    }
    if (param_2 == 0) {
      FID_conflict___assert
                (L"pSrc != ((void *)0)",
                 L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h",
                 0xa698);
    }
    if ((uVar13 != 0) || (uVar9 != 0)) {
      param_3._4_4_ = 0;
      param_3._0_4_ = 0;
      while( true ) {
        do {
          iVar1 = *(int *)(param_2 + (uint)param_3 * 4);
          iVar10 = 0x7fff;
          if (iVar1 < 0x7fff) {
            iVar10 = iVar1;
          }
          if (iVar10 < -0x8000) {
            uVar8 = 0x8000;
          }
          else {
            uVar8 = 0x7fff;
            if (iVar1 < 0x7fff) {
              uVar8 = (short)iVar1;
            }
          }
          *(undefined2 *)(param_1 + (uint)param_3 * 2) = uVar8;
          bVar14 = 0xfffffffe < (uint)param_3;
          param_3._0_4_ = (uint)param_3 + 1;
          param_3._4_4_ = param_3._4_4_ + bVar14;
        } while (param_3._4_4_ < uVar13);
        if (uVar13 < param_3._4_4_) break;
        if (uVar9 <= (uint)param_3) {
          return;
        }
      }
    }
    break;
  case 3:
    if (param_1 == 0) {
      FID_conflict___assert
                (L"pDst != ((void *)0)",
                 L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h",
                 0xa6a3);
    }
    if (param_2 == 0) {
      FID_conflict___assert
                (L"pSrc != ((void *)0)",
                 L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h",
                 0xa6a4);
    }
    if ((uVar13 != 0) || (uVar9 != 0)) {
      local_8 = 0;
      param_5 = 0;
      while( true ) {
        do {
          uVar4 = *(uint *)(param_2 + 4 + local_8 * 8);
          uVar11 = *(uint *)(param_2 + local_8 * 8);
          if (((int)uVar4 < 1) && (((int)uVar4 < 0 || (uVar11 < 0x7fffff)))) {
            if ((0x7fffffff < uVar4) && (((int)uVar4 < -1 || (uVar11 < 0xff800000)))) {
              uVar11 = 0xff800000;
            }
          }
          else {
            uVar11 = 0x7fffff;
          }
          iVar1 = param_1 + local_8 * 2;
          *(char *)(local_8 + iVar1) = (char)uVar11;
          *(char *)(local_8 + 1 + iVar1) = (char)(uVar11 >> 8);
          *(char *)(local_8 + 2 + iVar1) = (char)(uVar11 >> 0x10);
          bVar14 = 0xfffffffe < local_8;
          local_8 = local_8 + 1;
          param_5 = param_5 + bVar14;
        } while (param_5 < uVar13);
        if (uVar13 < param_5) break;
        if (uVar9 <= local_8) {
          return;
        }
      }
    }
    break;
  case 4:
    if (param_1 == 0) {
      FID_conflict___assert
                (L"pDst != ((void *)0)",
                 L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h",
                 0xa6b2);
    }
    if (param_2 == 0) {
      FID_conflict___assert
                (L"pSrc != ((void *)0)",
                 L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h",
                 0xa6b3);
    }
    if ((uVar13 != 0) || (uVar9 != 0)) {
      param_3._4_4_ = 0;
      param_3._0_4_ = 0;
      while( true ) {
        do {
          uVar4 = *(uint *)(param_2 + 4 + (uint)param_3 * 8);
          uVar11 = *(uint *)(param_2 + (uint)param_3 * 8);
          if (((int)uVar4 < 1) && (((int)uVar4 < 0 || (uVar11 < 0x7fffffff)))) {
            if ((0x7fffffff < uVar4) && (((int)uVar4 < -1 || (uVar11 < 0x80000000)))) {
              uVar11 = 0x80000000;
            }
          }
          else {
            uVar11 = 0x7fffffff;
          }
          *(uint *)(param_1 + (uint)param_3 * 4) = uVar11;
          bVar14 = 0xfffffffe < (uint)param_3;
          param_3._0_4_ = (uint)param_3 + 1;
          param_3._4_4_ = param_3._4_4_ + bVar14;
        } while (param_3._4_4_ < uVar13);
        if (uVar13 < param_3._4_4_) break;
        if (uVar9 <= (uint)param_3) {
          return;
        }
      }
    }
    break;
  case 5:
    if (param_1 == 0) {
      FID_conflict___assert
                (L"pDst != ((void *)0)",
                 L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h",
                 0xa6be);
    }
    if (param_2 == 0) {
      FID_conflict___assert
                (L"pSrc != ((void *)0)",
                 L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h",
                 0xa6bf);
    }
    fVar7 = DAT_0050c38c;
    fVar6 = DAT_0050c314;
    if ((uVar13 != 0) || (uVar9 != 0)) {
      param_3._4_4_ = 0;
      param_3._0_4_ = 0;
      do {
        fVar2 = *(float *)(param_2 + (uint)param_3 * 4);
        fVar15 = fVar7;
        if ((fVar7 <= fVar2) && (fVar15 = fVar6, fVar2 <= fVar6)) {
          fVar15 = fVar2;
        }
        *(float *)(param_1 + (uint)param_3 * 4) = fVar15;
        bVar14 = 0xfffffffe < (uint)param_3;
        param_3._0_4_ = (uint)param_3 + 1;
        param_3._4_4_ = param_3._4_4_ + bVar14;
      } while ((param_3._4_4_ < uVar13) || ((param_3._4_4_ <= uVar13 && ((uint)param_3 < uVar9))));
    }
  }
  return;
}


