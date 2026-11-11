// Function: FUN_004713a0
// Entry: 004713a0
// Size: 674 bytes
// Thunk: false
// External: false


void __cdecl FUN_004713a0(uint *param_1,int param_2,undefined4 param_3,byte param_4)

{
  undefined1 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined1 uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 uVar7;
  int iVar8;
  
  uVar2 = *param_1;
  uVar7 = (undefined1)param_3;
  uVar4 = (undefined1)((uint)param_3 >> 8);
  if ((char)param_1[2] == '\0') {
    if (*(char *)((int)param_1 + 9) == '\b') {
      puVar5 = (undefined1 *)(param_2 + uVar2);
      puVar6 = puVar5 + uVar2;
      uVar3 = uVar2;
      if ((param_4 & 0x80) == 0) {
        for (; uVar3 != 0; uVar3 = uVar3 - 1) {
          puVar1 = puVar5 + -1;
          puVar5 = puVar5 + -1;
          puVar6[-1] = *puVar1;
          puVar6 = puVar6 + -2;
          *puVar6 = uVar7;
        }
        *(undefined2 *)((int)param_1 + 10) = 0x1002;
        param_1[1] = uVar2 * 2;
        return;
      }
      if (1 < uVar2) {
        iVar8 = uVar2 - 1;
        do {
          puVar6[-1] = uVar7;
          puVar5 = puVar5 + -1;
          puVar6 = puVar6 + -2;
          *puVar6 = *puVar5;
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
      }
      puVar6[-1] = uVar7;
      *(undefined2 *)((int)param_1 + 10) = 0x1002;
      param_1[1] = uVar2 * 2;
      return;
    }
    if (*(char *)((int)param_1 + 9) == '\x10') {
      puVar5 = (undefined1 *)(param_2 + uVar2 * 2);
      puVar6 = puVar5 + uVar2 * 2;
      uVar3 = uVar2;
      if ((param_4 & 0x80) == 0) {
        for (; uVar3 != 0; uVar3 = uVar3 - 1) {
          puVar1 = puVar5 + -1;
          puVar5 = puVar5 + -2;
          puVar6[-1] = *puVar1;
          puVar6[-2] = *puVar5;
          puVar6[-3] = uVar7;
          puVar6[-4] = uVar4;
          puVar6 = puVar6 + -4;
        }
        *(undefined2 *)((int)param_1 + 10) = 0x2002;
        param_1[1] = uVar2 * 4;
        return;
      }
      if (1 < uVar2) {
        iVar8 = uVar2 - 1;
        do {
          puVar6[-1] = uVar7;
          puVar6[-2] = uVar4;
          puVar6[-3] = puVar5[-1];
          puVar6 = puVar6 + -4;
          *puVar6 = puVar5[-2];
          iVar8 = iVar8 + -1;
          puVar5 = puVar5 + -2;
        } while (iVar8 != 0);
      }
      puVar6[-2] = uVar4;
      puVar6[-1] = uVar7;
      *(undefined2 *)((int)param_1 + 10) = 0x2002;
      param_1[1] = uVar2 * 4;
      return;
    }
  }
  else if ((char)param_1[2] == '\x02') {
    if (*(char *)((int)param_1 + 9) == '\b') {
      puVar5 = (undefined1 *)(param_2 + uVar2 * 3);
      puVar6 = puVar5 + uVar2;
      uVar3 = uVar2;
      if ((param_4 & 0x80) == 0) {
        for (; uVar3 != 0; uVar3 = uVar3 - 1) {
          puVar6[-1] = puVar5[-1];
          puVar6[-2] = puVar5[-2];
          puVar6[-3] = puVar5[-3];
          puVar6[-4] = uVar7;
          puVar5 = puVar5 + -3;
          puVar6 = puVar6 + -4;
        }
        *(undefined2 *)((int)param_1 + 10) = 0x2004;
        param_1[1] = uVar2 * 4;
        return;
      }
      if (1 < uVar2) {
        iVar8 = uVar2 - 1;
        do {
          puVar6[-1] = uVar7;
          puVar6[-2] = puVar5[-1];
          puVar6[-3] = puVar5[-2];
          puVar6 = puVar6 + -4;
          *puVar6 = puVar5[-3];
          iVar8 = iVar8 + -1;
          puVar5 = puVar5 + -3;
        } while (iVar8 != 0);
      }
      puVar6[-1] = uVar7;
      *(undefined2 *)((int)param_1 + 10) = 0x2004;
      param_1[1] = uVar2 * 4;
      return;
    }
    if (*(char *)((int)param_1 + 9) == '\x10') {
      puVar5 = (undefined1 *)(param_2 + uVar2 * 6);
      puVar6 = puVar5 + uVar2 * 2;
      uVar3 = uVar2;
      if ((param_4 & 0x80) == 0) {
        for (; uVar3 != 0; uVar3 = uVar3 - 1) {
          puVar6[-1] = puVar5[-1];
          puVar6[-2] = puVar5[-2];
          puVar6[-3] = puVar5[-3];
          puVar6[-4] = puVar5[-4];
          puVar6[-5] = puVar5[-5];
          puVar6[-6] = puVar5[-6];
          puVar6[-7] = uVar7;
          puVar6[-8] = uVar4;
          puVar5 = puVar5 + -6;
          puVar6 = puVar6 + -8;
        }
      }
      else {
        if (1 < uVar2) {
          iVar8 = uVar2 - 1;
          do {
            puVar6[-1] = uVar7;
            puVar6[-2] = uVar4;
            puVar6[-3] = puVar5[-1];
            puVar6[-4] = puVar5[-2];
            puVar6[-5] = puVar5[-3];
            puVar6[-6] = puVar5[-4];
            puVar6[-7] = puVar5[-5];
            puVar6 = puVar6 + -8;
            *puVar6 = puVar5[-6];
            iVar8 = iVar8 + -1;
            puVar5 = puVar5 + -6;
          } while (iVar8 != 0);
        }
        puVar6[-1] = uVar7;
        puVar6[-2] = uVar4;
      }
      *(undefined2 *)((int)param_1 + 10) = 0x4004;
      param_1[1] = uVar2 * 8;
    }
  }
  return;
}


