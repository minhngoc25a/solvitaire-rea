// Function: FUN_0044a250
// Entry: 0044a250
// Size: 218 bytes
// Thunk: false
// External: false


int __cdecl FUN_0044a250(int param_1,uint param_2)

{
  uint uVar1;
  byte *pbVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  if (param_1 == 0) {
    FID_conflict___assert
              (L"pNodeBase != ((void *)0)",
               L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h",
               0x118a7);
  }
  iVar7 = *(int *)(param_1 + 8);
  iVar8 = 0;
  for (uVar4 = 0; uVar4 < *(uint *)(param_1 + 0x30); uVar4 = uVar4 + 1) {
    iVar6 = iVar8 + 0x30;
    iVar8 = iVar8 + 0x34;
    iVar7 = iVar7 + (uint)*(byte *)(iVar6 + *(int *)(param_1 + 0x38)) *
                    (uint)*(ushort *)(param_1 + 0xc) * 4;
  }
  iVar8 = 0;
  iVar6 = 0;
  uVar4 = 0;
  if (param_2 < 2) {
    if (param_2 == 0) goto LAB_0044a310;
    iVar3 = *(int *)(param_1 + 0x3c);
    uVar1 = (uint)*(ushort *)(param_1 + 0xc);
  }
  else {
    iVar3 = *(int *)(param_1 + 0x3c);
    uVar1 = (uint)*(ushort *)(param_1 + 0xc);
    iVar5 = (param_2 - 2 >> 1) + 1;
    uVar4 = iVar5 * 2;
    pbVar2 = (byte *)(iVar3 + 0x2d);
    do {
      iVar8 = iVar8 + pbVar2[-0x28] * uVar1 * 4;
      iVar6 = iVar6 + *pbVar2 * uVar1 * 4;
      iVar5 = iVar5 + -1;
      pbVar2 = pbVar2 + 0x50;
    } while (iVar5 != 0);
    if (param_2 <= uVar4) goto LAB_0044a310;
  }
  iVar7 = iVar7 + *(byte *)(iVar3 + 5 + uVar4 * 0x28) * uVar1 * 4;
LAB_0044a310:
  return iVar6 + iVar8 + iVar7;
}


