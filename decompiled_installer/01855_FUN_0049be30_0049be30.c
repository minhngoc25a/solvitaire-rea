// Function: FUN_0049be30
// Entry: 0049be30
// Size: 888 bytes
// Thunk: false
// External: false


void __cdecl FUN_0049be30(uint *param_1,uint *param_2,uint param_3)

{
  char cVar1;
  ushort uVar2;
  byte bVar3;
  ushort *puVar4;
  uint uVar5;
  byte *pbVar6;
  byte *pbVar7;
  uint uVar8;
  int iVar9;
  char *pcVar10;
  uint uVar11;
  ushort *local_10c;
  ushort *local_108;
  uint local_104;
  char local_100 [256];
  
  puVar4 = (ushort *)*param_1;
  if (*puVar4 == 1) {
    uVar8 = (uint)*(byte *)(*(byte *)param_1[2] + 0x388 + (int)param_1);
    local_10c = puVar4 + 1;
    param_1[7] = uVar8;
    uVar5 = param_2[2];
    puVar4 = (ushort *)
             ((int)param_1 +
             (((int)param_1[8] >> 0x1a & 0x20U) +
              *(byte *)(**(ushort **)(puVar4 + 4) + 0x287 + (int)param_1) + uVar8 +
              ((uint)*(byte *)((byte)*local_10c + 0x388 + (int)param_1) +
              (uint)*(byte *)((int)puVar4 + 3) * 0x20) * 2 + 0x526 + param_1[5]) * 2);
    if ((byte)*local_10c == param_3) {
      uVar5 = (uVar5 >> 0xe) * (uint)*puVar4;
      param_2[2] = uVar5;
      while (uVar5 < 0x1000000) {
        param_2[2] = uVar5 << 8;
        FUN_0049d0e0(param_2);
        uVar5 = param_2[2];
      }
      *puVar4 = (*puVar4 - (short)(*puVar4 + 0x20 >> 7)) + 0x80;
      param_1[2] = (uint)local_10c;
      FUN_0049c2a0(param_1);
      return;
    }
    uVar11 = (uVar5 >> 0xe) * (uint)*puVar4;
    uVar8 = *param_2;
    *param_2 = *param_2 + uVar11;
    param_2[1] = param_2[1] + (uint)CARRY4(uVar8,uVar11);
    uVar5 = uVar5 - uVar11;
    param_2[2] = uVar5;
    while (uVar5 < 0x1000000) {
      param_2[2] = uVar5 << 8;
      FUN_0049d0e0(param_2);
      uVar5 = param_2[2];
    }
    uVar5 = (uint)*puVar4 - (*puVar4 + 0x20 >> 7);
    *puVar4 = (ushort)uVar5;
    param_1[4] = (uint)(byte)(&DAT_00518f90)[(uVar5 & 0xffff) >> 10];
    pcVar10 = local_100;
    for (iVar9 = 0x40; iVar9 != 0; iVar9 = iVar9 + -1) {
      pcVar10[0] = -1;
      pcVar10[1] = -1;
      pcVar10[2] = -1;
      pcVar10[3] = -1;
      pcVar10 = pcVar10 + 4;
    }
    uVar2 = *local_10c;
    param_1[5] = 0;
    local_100[(byte)uVar2] = '\0';
  }
  else {
    pbVar6 = *(byte **)(puVar4 + 2);
    if (*pbVar6 == param_3) {
      FUN_0049d160(param_2,0,(uint)pbVar6[1],(uint)puVar4[1]);
      param_1[2] = (uint)pbVar6;
      FUN_0049c230(param_1);
      return;
    }
    param_1[5] = 0;
    uVar5 = (uint)pbVar6[1];
    iVar9 = *puVar4 - 1;
    do {
      pbVar7 = pbVar6 + 6;
      if (pbVar6[6] == param_3) {
        FUN_0049d160(param_2,uVar5,(uint)pbVar6[7],(uint)puVar4[1]);
        param_1[2] = (uint)pbVar7;
        FUN_0049c1b0(param_1);
        return;
      }
      uVar5 = uVar5 + pbVar6[7];
      iVar9 = iVar9 + -1;
      pbVar6 = pbVar7;
    } while (iVar9 != 0);
    param_1[7] = (uint)*(byte *)(*(byte *)param_1[2] + 0x388 + (int)param_1);
    pcVar10 = local_100;
    for (iVar9 = 0x40; iVar9 != 0; iVar9 = iVar9 + -1) {
      pcVar10[0] = -1;
      pcVar10[1] = -1;
      pcVar10[2] = -1;
      pcVar10[3] = -1;
      pcVar10 = pcVar10 + 4;
    }
    iVar9 = *puVar4 - 1;
    local_100[*pbVar7] = '\0';
    do {
      pbVar6 = pbVar7 + -6;
      pbVar7 = pbVar7 + -6;
      local_100[*pbVar6] = '\0';
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
    FUN_0049d160(param_2,uVar5,puVar4[1] - uVar5,(uint)puVar4[1]);
  }
  do {
    puVar4 = (ushort *)*param_1;
    uVar2 = *puVar4;
    do {
      param_1[3] = param_1[3] + 1;
      puVar4 = *(ushort **)(puVar4 + 4);
      if (puVar4 == (ushort *)0x0) {
        return;
      }
      *param_1 = (uint)puVar4;
    } while ((uint)*puVar4 == (uint)uVar2);
    local_108 = FUN_0049c2f0(param_1,(uint)uVar2,(int *)&local_10c);
    puVar4 = local_10c;
    local_104 = 0;
    pbVar6 = *(byte **)((ushort *)*param_1 + 2);
    uVar5 = (uint)*(ushort *)*param_1;
    do {
      uVar11 = (uint)*pbVar6;
      pbVar7 = pbVar6;
      uVar8 = local_104;
      if (uVar11 == param_3) {
        do {
          uVar8 = uVar8 + ((int)local_100[*pbVar7] & (uint)pbVar7[1]);
          uVar5 = uVar5 - 1;
          pbVar7 = pbVar7 + 6;
        } while (uVar5 != 0);
        FUN_0049d160(param_2,local_104,(uint)pbVar6[1],(uint)((int)local_10c + uVar8));
        bVar3 = (byte)local_108[1];
        if (bVar3 < 7) {
          pcVar10 = (char *)((int)local_108 + 3);
          *pcVar10 = *pcVar10 + -1;
          if (*pcVar10 == '\0') {
            *local_108 = *local_108 << 1;
            *(char *)((int)local_108 + 3) = '\x03' << (bVar3 & 0x1f);
            *(byte *)(local_108 + 1) = bVar3 + 1;
          }
        }
        param_1[2] = (uint)pbVar6;
        *(short *)(*param_1 + 2) = *(short *)(*param_1 + 2) + 4;
        bVar3 = *(char *)(param_1[2] + 1) + 4;
        *(byte *)(param_1[2] + 1) = bVar3;
        if (0x7c < bVar3) {
          FUN_0049ccd0((int *)param_1);
        }
        param_1[8] = param_1[9];
        FUN_0049c900((int *)param_1);
        return;
      }
      bVar3 = pbVar6[1];
      pbVar6 = pbVar6 + 6;
      cVar1 = local_100[uVar11];
      local_100[uVar11] = '\0';
      local_104 = local_104 + ((uint)bVar3 & (int)cVar1);
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
    FUN_0049d160(param_2,local_104,(int)local_10c,(uint)(local_104 + (int)local_10c));
    *local_108 = *local_108 + (short)puVar4 + (short)local_104;
  } while( true );
}


