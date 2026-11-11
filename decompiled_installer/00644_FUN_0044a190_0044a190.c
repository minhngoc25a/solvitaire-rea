// Function: FUN_0044a190
// Entry: 0044a190
// Size: 187 bytes
// Thunk: false
// External: false


int __cdecl FUN_0044a190(int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  if (param_1 == 0) {
    FID_conflict___assert
              (L"pNodeBase != ((void *)0)",
               L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h",
               0x11895);
  }
  iVar6 = *(int *)(param_1 + 8);
  iVar8 = 0;
  iVar7 = 0;
  uVar1 = 0;
  if (param_2 < 2) {
    if (param_2 == 0) goto LAB_0044a231;
    iVar4 = *(int *)(param_1 + 0x38);
    uVar2 = (uint)*(ushort *)(param_1 + 0xc);
  }
  else {
    iVar4 = *(int *)(param_1 + 0x38);
    uVar2 = (uint)*(ushort *)(param_1 + 0xc);
    iVar5 = (param_2 - 2 >> 1) + 1;
    uVar1 = iVar5 * 2;
    pbVar3 = (byte *)(iVar4 + 100);
    do {
      iVar8 = iVar8 + pbVar3[-0x34] * uVar2 * 4;
      iVar7 = iVar7 + *pbVar3 * uVar2 * 4;
      iVar5 = iVar5 + -1;
      pbVar3 = pbVar3 + 0x68;
    } while (iVar5 != 0);
    if (param_2 <= uVar1) goto LAB_0044a231;
  }
  iVar6 = iVar6 + *(byte *)(uVar1 * 0x34 + 0x30 + iVar4) * uVar2 * 4;
LAB_0044a231:
  return iVar7 + iVar8 + iVar6;
}


