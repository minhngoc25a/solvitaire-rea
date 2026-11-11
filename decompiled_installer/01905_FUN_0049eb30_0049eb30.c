// Function: FUN_0049eb30
// Entry: 0049eb30
// Size: 380 bytes
// Thunk: false
// External: false


uint __fastcall FUN_0049eb30(uint *param_1,uint param_2,ushort *param_3,int param_4)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  ushort *puVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  
  iVar9 = *(int *)(param_4 + (uint)(*param_3 >> 4) * 4);
  iVar2 = *(int *)(param_4 + ((*param_3 ^ 0x7f0) >> 4) * 4);
  uVar3 = *(int *)(param_4 + (uint)(param_3[8] >> 4) * 4) + iVar2;
  uVar4 = uVar3;
  if (param_2 != 0) {
    puVar5 = param_1 + 1;
    uVar6 = param_2;
    puVar7 = param_3;
    do {
      FUN_0049eaa0((int)puVar7,iVar9,(int)puVar5,param_4);
      uVar4 = FUN_0049eaa0((int)(puVar7 + 8),uVar3,(int)(puVar5 + 8),param_4);
      puVar5 = puVar5 + 0x110;
      puVar7 = puVar7 + 0x10;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  if (0x10 < *param_1) {
    uVar4 = *param_1 - 0xf >> 1;
    iVar9 = *(int *)(param_4 + ((param_3[8] ^ 0x7f0) >> 4) * 4);
    puVar7 = param_3 + uVar4 + 0x180;
    do {
      uVar3 = uVar4 - 1;
      puVar7 = puVar7 + -1;
      uVar4 = uVar4 + 0x7f;
      iVar8 = iVar2 + iVar9;
      do {
        uVar6 = uVar4 >> 1;
        iVar8 = iVar8 + *(int *)(param_4 +
                                ((uint)(param_3[uVar6 + 0x100] >> 4) ^ -(uVar4 & 1) >> 4 & 0x7f) * 4
                                );
        uVar4 = uVar6;
      } while (1 < uVar6);
      uVar1 = *puVar7;
      (param_1 + 0x11)[uVar3 * 2] = *(int *)(param_4 + (uint)(uVar1 >> 4) * 4) + iVar8;
      param_1[uVar3 * 2 + 0x12] = *(int *)(param_4 + ((uVar1 ^ 0x7f0) >> 4) * 4) + iVar8;
      uVar4 = uVar3;
    } while (uVar3 != 0);
    uVar3 = *param_1;
    uVar4 = param_2;
    if (1 < param_2) {
      puVar5 = param_1 + 0x121;
      iVar9 = param_2 - 1;
      do {
        uVar10 = FUN_0044c490(puVar5,param_1 + 0x11,uVar3 * 4 - 0x40);
        uVar4 = (uint)uVar10;
        puVar5 = puVar5 + 0x110;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
    }
  }
  return uVar4;
}


