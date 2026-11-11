// Function: FUN_0049b9e0
// Entry: 0049b9e0
// Size: 889 bytes
// Thunk: false
// External: false


/* WARNING: Type propagation algorithm not settling */

uint __cdecl FUN_0049b9e0(uint *param_1,undefined4 *param_2)

{
  byte *pbVar1;
  byte bVar2;
  short *psVar3;
  byte **ppbVar4;
  byte bVar5;
  ushort uVar6;
  uint uVar7;
  int iVar8;
  ushort *puVar9;
  uint uVar10;
  uint uVar11;
  byte *pbVar12;
  char *pcVar13;
  uint uStack_504;
  char acStack_500 [252];
  byte *apbStack_404 [257];
  
  psVar3 = (short *)*param_1;
  if (*psVar3 == 1) {
    uVar10 = (uint)*(byte *)(*(byte *)param_1[2] + 0x388 + (int)param_1);
    param_1[7] = uVar10;
    puVar9 = (ushort *)
             ((((int)param_1[8] >> 0x1a & 0x20U) +
               *(byte *)(**(ushort **)(psVar3 + 4) + 0x287 + (int)param_1) + uVar10 +
               ((uint)*(byte *)(*(byte *)(psVar3 + 1) + 0x388 + (int)param_1) +
               (uint)*(byte *)((int)psVar3 + 3) * 0x20) * 2 + 0x526 + param_1[5]) * 2 + (int)param_1
             );
    iVar8 = (*(code *)param_2[2])(param_2,*puVar9);
    uVar10 = (uint)*puVar9 - (*puVar9 + 0x20 >> 7);
    uVar6 = (ushort)uVar10;
    if (iVar8 == 0) {
      *puVar9 = uVar6 + 0x80;
      param_1[2] = *param_1 + 2;
      bVar2 = *(byte *)(*param_1 + 2);
      FUN_0049c2a0(param_1);
      return (uint)bVar2;
    }
    *puVar9 = uVar6;
    param_1[4] = (uint)(byte)(&DAT_00518f90)[(uVar10 & 0xffff) >> 10];
    pcVar13 = acStack_500;
    for (iVar8 = 0x40; iVar8 != 0; iVar8 = iVar8 + -1) {
      pcVar13[0] = -1;
      pcVar13[1] = -1;
      pcVar13[2] = -1;
      pcVar13[3] = -1;
      pcVar13 = pcVar13 + 4;
    }
    bVar2 = *(byte *)(*param_1 + 2);
    param_1[5] = 0;
    acStack_500[bVar2] = '\0';
  }
  else {
    pbVar12 = *(byte **)(psVar3 + 2);
    uVar7 = (*(code *)*param_2)(param_2,psVar3[1]);
    uVar10 = (uint)pbVar12[1];
    if (uVar7 < uVar10) {
      (*(code *)param_2[1])(param_2,0,uVar10);
      param_1[2] = (uint)pbVar12;
      bVar2 = *pbVar12;
      FUN_0049c230(param_1);
      return (uint)bVar2;
    }
    param_1[5] = 0;
    iVar8 = *(ushort *)*param_1 - 1;
    do {
      pbVar1 = pbVar12 + 7;
      pbVar12 = pbVar12 + 6;
      uVar11 = uVar10 + *pbVar1;
      if (uVar7 < uVar11) {
        (*(code *)param_2[1])(param_2,uVar10,(uint)*pbVar1);
        param_1[2] = (uint)pbVar12;
        bVar2 = *pbVar12;
        FUN_0049c1b0(param_1);
        return (uint)bVar2;
      }
      iVar8 = iVar8 + -1;
      uVar10 = uVar11;
    } while (iVar8 != 0);
    if (*(ushort *)(*param_1 + 2) <= uVar7) {
      return 0xfffffffe;
    }
    param_1[7] = (uint)*(byte *)(*(byte *)param_1[2] + 0x388 + (int)param_1);
    (*(code *)param_2[1])(param_2,uVar11,*(ushort *)(*param_1 + 2) - uVar11);
    pcVar13 = acStack_500;
    for (iVar8 = 0x40; iVar8 != 0; iVar8 = iVar8 + -1) {
      pcVar13[0] = -1;
      pcVar13[1] = -1;
      pcVar13[2] = -1;
      pcVar13[3] = -1;
      pcVar13 = pcVar13 + 4;
    }
    acStack_500[*pbVar12] = '\0';
    iVar8 = *(ushort *)*param_1 - 1;
    do {
      pbVar1 = pbVar12 + -6;
      pbVar12 = pbVar12 + -6;
      acStack_500[*pbVar1] = '\0';
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  while( true ) {
    puVar9 = (ushort *)*param_1;
    uVar10 = (uint)*puVar9;
    do {
      param_1[3] = param_1[3] + 1;
      puVar9 = *(ushort **)(puVar9 + 4);
      if (puVar9 == (ushort *)0x0) {
        return 0xffffffff;
      }
      *param_1 = (uint)puVar9;
      uVar6 = *puVar9;
    } while (uVar6 == uVar10);
    pbVar12 = *(byte **)(puVar9 + 2);
    uVar7 = 0;
    iVar8 = 0;
    do {
      bVar2 = *pbVar12;
      apbStack_404[iVar8 + 1] = pbVar12;
      pbVar1 = pbVar12 + 1;
      iVar8 = iVar8 - acStack_500[bVar2];
      pbVar12 = pbVar12 + 6;
      uVar7 = uVar7 + ((uint)*pbVar1 & (int)acStack_500[bVar2]);
    } while (iVar8 != uVar6 - uVar10);
    puVar9 = FUN_0049c2f0(param_1,uVar10,(int *)&uStack_504);
    uVar11 = uStack_504 + uVar7;
    uStack_504 = uVar11;
    uVar10 = (*(code *)*param_2)(param_2,uVar11);
    if (uVar10 < uVar7) break;
    if (uVar11 <= uVar10) {
      return 0xfffffffe;
    }
    (*(code *)param_2[1])(param_2,uVar7,uVar11 - uVar7);
    *puVar9 = *puVar9 + (short)uVar11;
    do {
      acStack_500[*apbStack_404[iVar8]] = '\0';
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  ppbVar4 = apbStack_404;
  pbVar12 = apbStack_404[1];
  for (uVar7 = (uint)apbStack_404[1][1]; ppbVar4 = (byte **)((int)ppbVar4 + 4), uVar7 <= uVar10;
      uVar7 = uVar7 + pbVar12[1]) {
    pbVar12 = ppbVar4[1];
  }
  (*(code *)param_2[1])(param_2,uVar7 - pbVar12[1],(uint)pbVar12[1]);
  bVar2 = (byte)puVar9[1];
  if (bVar2 < 7) {
    pcVar13 = (char *)((int)puVar9 + 3);
    *pcVar13 = *pcVar13 + -1;
    if (*pcVar13 == '\0') {
      *puVar9 = *puVar9 << 1;
      *(char *)((int)puVar9 + 3) = '\x03' << (bVar2 & 0x1f);
      *(byte *)(puVar9 + 1) = bVar2 + 1;
    }
  }
  param_1[2] = (uint)pbVar12;
  bVar2 = *pbVar12;
  *(short *)(*param_1 + 2) = *(short *)(*param_1 + 2) + 4;
  bVar5 = *(char *)(param_1[2] + 1) + 4;
  *(byte *)(param_1[2] + 1) = bVar5;
  if (0x7c < bVar5) {
    FUN_0049ccd0((int *)param_1);
  }
  param_1[8] = param_1[9];
  FUN_0049c900((int *)param_1);
  return (uint)bVar2;
}


