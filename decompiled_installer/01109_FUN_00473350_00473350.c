// Function: FUN_00473350
// Entry: 00473350
// Size: 704 bytes
// Thunk: false
// External: false


void __cdecl
FUN_00473350(undefined4 param_1,uint *param_2,int param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  byte bVar2;
  byte *pbVar3;
  undefined1 uVar4;
  byte *pbVar5;
  int iVar6;
  undefined1 *puVar7;
  uint uVar8;
  byte *pbVar9;
  uint uVar10;
  bool bVar11;
  undefined1 *local_14;
  
  uVar10 = *param_2;
  if ((char)param_2[2] == '\x03') {
    bVar2 = *(byte *)((int)param_2 + 9);
    if (bVar2 < 8) {
      if (bVar2 == 1) {
        iVar6 = 7 - (uVar10 - 1 & 7);
        pbVar9 = (byte *)((uVar10 - 1 >> 3) + param_3);
        pbVar3 = (byte *)(param_3 + -1 + uVar10);
        for (uVar8 = uVar10; uVar8 != 0; uVar8 = uVar8 - 1) {
          *pbVar3 = *pbVar9 >> ((byte)iVar6 & 0x1f) & 1;
          pbVar5 = pbVar9 + -1;
          if (iVar6 != 7) {
            pbVar5 = pbVar9;
          }
          iVar1 = iVar6 + 1;
          bVar11 = iVar6 != 7;
          iVar6 = 0;
          if (bVar11) {
            iVar6 = iVar1;
          }
          pbVar9 = pbVar5;
          pbVar3 = pbVar3 + -1;
        }
      }
      else if (bVar2 == 2) {
        iVar6 = (3 - (uVar10 - 1 & 3)) * 2;
        pbVar9 = (byte *)((uVar10 - 1 >> 2) + param_3);
        pbVar3 = (byte *)(param_3 + -1 + uVar10);
        for (uVar8 = uVar10; uVar8 != 0; uVar8 = uVar8 - 1) {
          *pbVar3 = *pbVar9 >> ((byte)iVar6 & 0x1f) & 3;
          pbVar5 = pbVar9 + -1;
          if (iVar6 != 6) {
            pbVar5 = pbVar9;
          }
          bVar11 = iVar6 != 6;
          iVar1 = iVar6 + 2;
          iVar6 = 0;
          if (bVar11) {
            iVar6 = iVar1;
          }
          pbVar9 = pbVar5;
          pbVar3 = pbVar3 + -1;
        }
      }
      else if (bVar2 == 4) {
        iVar6 = (uVar10 & 1) << 2;
        pbVar9 = (byte *)((uVar10 - 1 >> 1) + param_3);
        pbVar3 = (byte *)(param_3 + -1 + uVar10);
        for (uVar8 = uVar10; uVar8 != 0; uVar8 = uVar8 - 1) {
          *pbVar3 = *pbVar9 >> ((byte)iVar6 & 0x1f) & 0xf;
          pbVar5 = pbVar9 + -1;
          if (iVar6 != 4) {
            pbVar5 = pbVar9;
          }
          bVar11 = iVar6 != 4;
          iVar1 = iVar6 + 4;
          iVar6 = 0;
          if (bVar11) {
            iVar6 = iVar1;
          }
          pbVar9 = pbVar5;
          pbVar3 = pbVar3 + -1;
        }
      }
      *(undefined1 *)((int)param_2 + 9) = 8;
      *(undefined1 *)((int)param_2 + 0xb) = 8;
      param_2[1] = uVar10;
    }
    else if (bVar2 != 8) {
      return;
    }
    pbVar9 = (byte *)(param_3 + -1 + uVar10);
    if (0 < param_6) {
      uVar8 = uVar10 * 4;
      puVar7 = (undefined1 *)((uVar8 - 1) + param_3);
      for (; uVar10 != 0; uVar10 = uVar10 - 1) {
        if ((int)(uint)*pbVar9 < param_6) {
          uVar4 = *(undefined1 *)((uint)*pbVar9 + param_5);
        }
        else {
          uVar4 = 0xff;
        }
        *puVar7 = uVar4;
        puVar7[-1] = *(undefined1 *)((uint)*pbVar9 * 3 + 2 + param_4);
        puVar7[-2] = *(undefined1 *)((uint)*pbVar9 * 3 + 1 + param_4);
        bVar2 = *pbVar9;
        pbVar9 = pbVar9 + -1;
        puVar7[-3] = *(undefined1 *)(param_4 + (uint)bVar2 * 3);
        puVar7 = puVar7 + -4;
      }
      *(undefined1 *)((int)param_2 + 0xb) = 0x20;
      *(undefined2 *)((int)param_2 + 9) = 0x408;
      param_2[1] = uVar8;
      *(undefined1 *)(param_2 + 2) = 6;
      return;
    }
    uVar8 = uVar10 * 3;
    puVar7 = (undefined1 *)(param_3 + -1 + uVar8);
    for (; uVar10 != 0; uVar10 = uVar10 - 1) {
      *puVar7 = *(undefined1 *)((uint)*pbVar9 * 3 + 2 + param_4);
      puVar7[-1] = *(undefined1 *)((uint)*pbVar9 * 3 + 1 + param_4);
      puVar7[-2] = *(undefined1 *)(param_4 + (uint)*pbVar9 * 3);
      pbVar9 = pbVar9 + -1;
      puVar7 = puVar7 + -3;
    }
    local_14 = (undefined1 *)((int)param_2 + 9);
    *(undefined1 *)((int)param_2 + 0xb) = 0x18;
    *(undefined1 *)(param_2 + 2) = 2;
    *(undefined1 *)((int)param_2 + 10) = 3;
    *local_14 = 8;
    param_2[1] = uVar8;
  }
  return;
}


