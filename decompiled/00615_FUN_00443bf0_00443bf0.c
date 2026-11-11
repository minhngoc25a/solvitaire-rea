// Function: FUN_00443bf0
// Entry: 00443bf0
// Size: 238 bytes
// Thunk: false
// External: false


void __cdecl FUN_00443bf0(int param_1,uint param_2)

{
  short sVar1;
  short sVar2;
  short *psVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  short *psVar7;
  uint uVar8;
  
  uVar5 = param_2;
  uVar8 = *(uint *)(param_1 + 4);
  if (param_2 == 0) {
    FID_conflict___assert
              (L"pFrameOut != ((void *)0)",
               L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h",
               0xc87c);
  }
  uVar6 = (uint)(*(int *)(param_1 + 0x2c) << 0xc) / *(uint *)(param_1 + 0xc);
  param_2 = 0;
  if (uVar8 != 0) {
    if (0x1000 < (int)uVar6) {
      do {
        sVar1 = *(short *)(*(int *)(param_1 + 0x34) + param_2 * 2);
        sVar2 = *(short *)(*(int *)(param_1 + 0x30) + param_2 * 2);
        FID_conflict___assert
                  (L"a <= (1<<shift)",
                   L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h"
                   ,0xc86b);
        *(short *)(uVar5 + param_2 * 2) =
             (short)((int)((int)sVar2 * (0x1000 - uVar6) + (int)sVar1 * uVar6) >> 0xc);
        param_2 = param_2 + 1;
      } while (param_2 < uVar8);
      return;
    }
    psVar3 = *(short **)(param_1 + 0x34);
    iVar4 = *(int *)(param_1 + 0x30);
    psVar7 = psVar3;
    do {
      *(short *)((int)psVar7 + (uVar5 - (int)psVar3)) =
           (short)((int)((int)*(short *)((iVar4 - (int)psVar3) + (int)psVar7) * (0x1000 - uVar6) +
                        (int)*psVar7 * uVar6) >> 0xc);
      uVar8 = uVar8 - 1;
      psVar7 = psVar7 + 1;
    } while (uVar8 != 0);
  }
  return;
}


