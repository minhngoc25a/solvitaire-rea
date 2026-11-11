// Function: FUN_004bd8f6
// Entry: 004bd8f6
// Size: 292 bytes
// Thunk: false
// External: false


void FUN_004bd8f6(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7,int param_8,int param_9,int param_10)

{
  undefined1 uVar1;
  byte bVar2;
  undefined1 *puVar3;
  byte *pbVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  byte *pbVar7;
  int iVar8;
  
  if (param_9 != 0) {
    iVar8 = param_3 * param_7 + param_2 + param_6 * 4;
    if (param_10 == 0xff) {
      puVar3 = (undefined1 *)(iVar8 + 3);
      do {
        if (0 < param_8) {
          puVar5 = (undefined1 *)
                   (*(int *)(param_1 + 0xcc) * param_5 + 3 + *(int *)(param_1 + 200) + param_4 * 4);
          puVar6 = puVar3;
          iVar8 = param_8;
          do {
            uVar1 = *puVar6;
            puVar6 = puVar6 + 4;
            *puVar5 = uVar1;
            puVar5 = puVar5 + 4;
            iVar8 = iVar8 + -1;
          } while (iVar8 != 0);
        }
        param_9 = param_9 + -1;
        param_5 = param_5 + 1;
        iVar8 = param_3;
        if (*(int *)(param_1 + 0xe8) == 0) {
          iVar8 = -param_3;
        }
        puVar3 = puVar3 + iVar8;
      } while (param_9 != 0);
    }
    else {
      pbVar4 = (byte *)(iVar8 + 3);
      do {
        if (0 < param_8) {
          puVar3 = (undefined1 *)
                   (*(int *)(param_1 + 0xcc) * param_5 + 3 + *(int *)(param_1 + 200) + param_4 * 4);
          pbVar7 = pbVar4;
          iVar8 = param_8;
          do {
            bVar2 = *pbVar7;
            pbVar7 = pbVar7 + 4;
            *puVar3 = (char)((int)((uint)bVar2 * param_10) / 0xff);
            puVar3 = puVar3 + 4;
            iVar8 = iVar8 + -1;
          } while (iVar8 != 0);
        }
        param_9 = param_9 + -1;
        param_5 = param_5 + 1;
        iVar8 = param_3;
        if (*(int *)(param_1 + 0xe8) == 0) {
          iVar8 = -param_3;
        }
        pbVar4 = pbVar4 + iVar8;
      } while (param_9 != 0);
    }
  }
  return;
}


