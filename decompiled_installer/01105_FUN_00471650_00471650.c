// Function: FUN_00471650
// Entry: 00471650
// Size: 415 bytes
// Thunk: false
// External: false


void __cdecl FUN_00471650(int *param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  int iVar6;
  
  bVar1 = *(byte *)((int)param_1 + 9);
  iVar3 = *param_1;
  if ((7 < bVar1) && (bVar2 = *(byte *)(param_1 + 2), (bVar2 & 2) == 0)) {
    if (bVar2 == 0) {
      if (bVar1 == 8) {
        puVar5 = (undefined1 *)(param_2 + -1 + iVar3);
        puVar4 = puVar5 + iVar3 * 2;
        for (iVar6 = iVar3; iVar6 != 0; iVar6 = iVar6 + -1) {
          *puVar4 = *puVar5;
          puVar4[-1] = *puVar5;
          puVar4[-2] = *puVar5;
          puVar5 = puVar5 + -1;
          puVar4 = puVar4 + -3;
        }
      }
      else {
        puVar5 = (undefined1 *)(param_2 + -1 + iVar3 * 2);
        puVar4 = puVar5 + iVar3 * 4;
        for (iVar6 = iVar3; iVar6 != 0; iVar6 = iVar6 + -1) {
          *puVar4 = *puVar5;
          puVar4[-1] = puVar5[-1];
          puVar4[-2] = *puVar5;
          puVar4[-3] = puVar5[-1];
          puVar4[-4] = *puVar5;
          puVar4[-5] = puVar5[-1];
          puVar5 = puVar5 + -2;
          puVar4 = puVar4 + -6;
        }
      }
    }
    else if (bVar2 == 4) {
      if (bVar1 == 8) {
        puVar5 = (undefined1 *)(param_2 + -1 + iVar3 * 2);
        puVar4 = puVar5 + iVar3 * 2;
        for (iVar6 = iVar3; iVar6 != 0; iVar6 = iVar6 + -1) {
          *puVar4 = *puVar5;
          puVar4[-1] = puVar5[-1];
          puVar4[-2] = puVar5[-1];
          puVar4[-3] = puVar5[-1];
          puVar5 = puVar5 + -2;
          puVar4 = puVar4 + -4;
        }
      }
      else {
        puVar5 = (undefined1 *)(param_2 + -1 + iVar3 * 4);
        puVar4 = puVar5 + iVar3 * 4;
        for (iVar6 = iVar3; iVar6 != 0; iVar6 = iVar6 + -1) {
          *puVar4 = *puVar5;
          puVar4[-1] = puVar5[-1];
          puVar4[-2] = puVar5[-2];
          puVar4[-3] = puVar5[-3];
          puVar4[-4] = puVar5[-2];
          puVar4[-5] = puVar5[-3];
          puVar4[-6] = puVar5[-2];
          puVar4[-7] = puVar5[-3];
          puVar5 = puVar5 + -4;
          puVar4 = puVar4 + -8;
        }
      }
    }
    *(char *)((int)param_1 + 10) = *(char *)((int)param_1 + 10) + '\x02';
    *(byte *)(param_1 + 2) = *(byte *)(param_1 + 2) | 2;
    bVar1 = *(char *)((int)param_1 + 9) * *(char *)((int)param_1 + 10);
    *(byte *)((int)param_1 + 0xb) = bVar1;
    if (7 < bVar1) {
      param_1[1] = (uint)(bVar1 >> 3) * iVar3;
      return;
    }
    param_1[1] = (uint)bVar1 * iVar3 + 7 >> 3;
  }
  return;
}


