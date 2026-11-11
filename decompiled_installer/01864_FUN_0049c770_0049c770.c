// Function: FUN_0049c770
// Entry: 0049c770
// Size: 391 bytes
// Thunk: false
// External: false


ushort * __cdecl FUN_0049c770(undefined4 *param_1,int param_2)

{
  ushort *puVar1;
  ushort *puVar2;
  char *pcVar3;
  uint uVar4;
  int iVar5;
  ushort *puVar6;
  uint uVar7;
  ushort *puVar8;
  char cVar9;
  undefined4 local_10c;
  char *local_100 [64];
  
  pcVar3 = (char *)param_1[2];
  puVar1 = *(ushort **)(pcVar3 + 2);
  if (param_2 == 0) {
    local_100[0] = pcVar3;
  }
  uVar7 = (uint)(param_2 == 0);
  iVar5 = *(int *)((ushort *)*param_1 + 4);
  puVar8 = (ushort *)*param_1;
  do {
    if (iVar5 == 0) {
LAB_0049c7f1:
      if (*puVar8 == 1) {
        cVar9 = *(char *)((int)puVar8 + 3);
      }
      else {
        pcVar3 = *(char **)(puVar8 + 2);
        cVar9 = *pcVar3;
        while (cVar9 != (char)*puVar1) {
          pcVar3 = pcVar3 + 6;
          cVar9 = *pcVar3;
        }
        iVar5 = (byte)pcVar3[1] - 1;
        uVar4 = ((uint)puVar8[1] - (uint)*puVar8) - iVar5;
        if (uVar4 < (uint)(iVar5 * 2)) {
          cVar9 = (char)(((iVar5 * 2 + uVar4 * 3) - 1) / (uVar4 * 2));
        }
        else {
          cVar9 = uVar4 < (uint)(iVar5 * 5);
        }
        cVar9 = cVar9 + '\x01';
      }
      local_10c._2_2_ = SUB42((char *)((int)puVar1 + 1),0);
      local_10c._0_2_ = CONCAT11(cVar9,(char)*puVar1);
      do {
        if (uVar7 == 0) {
          return puVar8;
        }
        if (param_1[0xe] == param_1[0xd]) {
          puVar6 = (ushort *)param_1[0x3c];
          if (puVar6 == (ushort *)0x0) {
            puVar6 = (ushort *)FUN_0049c570((int)param_1,0);
            if (puVar6 == (ushort *)0x0) {
              return (ushort *)0x0;
            }
          }
          else {
            param_1[0x3c] = *(undefined4 *)puVar6;
          }
        }
        else {
          puVar6 = (ushort *)(param_1[0xe] + -0xc);
          param_1[0xe] = puVar6;
        }
        uVar7 = uVar7 - 1;
        *puVar6 = 1;
        *(undefined4 *)(puVar6 + 1) = local_10c;
        *(ushort **)(puVar6 + 4) = puVar8;
        pcVar3 = local_100[uVar7];
        puVar6[3] = (ushort)((uint)((int)puVar1 + 1) >> 0x10);
        *(short *)(pcVar3 + 2) = (short)puVar6;
        *(short *)(pcVar3 + 4) = (short)((uint)puVar6 >> 0x10);
        puVar8 = puVar6;
      } while( true );
    }
    puVar6 = *(ushort **)(puVar8 + 4);
    if (*puVar6 == 1) {
      puVar2 = puVar6 + 1;
    }
    else {
      puVar2 = *(ushort **)(puVar6 + 2);
      cVar9 = (char)*puVar2;
      while (cVar9 != *pcVar3) {
        puVar2 = puVar2 + 3;
        cVar9 = (char)*puVar2;
      }
    }
    puVar8 = *(ushort **)(puVar2 + 1);
    if (puVar8 != puVar1) {
      if (uVar7 == 0) {
        return puVar8;
      }
      goto LAB_0049c7f1;
    }
    pcVar3 = (char *)param_1[2];
    local_100[uVar7] = (char *)puVar2;
    uVar7 = uVar7 + 1;
    iVar5 = *(int *)(puVar6 + 4);
    puVar8 = puVar6;
  } while( true );
}


