// Function: FUN_004863a0
// Entry: 004863a0
// Size: 390 bytes
// Thunk: false
// External: false


uint __cdecl FUN_004863a0(int *param_1)

{
  int *piVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  
  piVar5 = param_1;
  param_1 = (int *)0x0;
  if (piVar5[0x12] <= piVar5[0x11]) {
    return piVar5[0x11] & 0xffffff00;
  }
  if (piVar5[1] == 2) {
    do {
      puVar6 = (undefined4 *)*piVar5;
      if (puVar6[1] == 0) break;
      uVar3 = piVar5[0xd];
      param_1 = (int *)0x1;
      param_1._0_1_ = 1;
      bVar2 = *(byte *)*puVar6;
      iVar4 = piVar5[0xe];
      if (bVar2 == uVar3) {
        if (iVar4 == 0xff) goto LAB_00486428;
        piVar5[0xe] = iVar4 + 1;
      }
      else {
        if (iVar4 == 1) {
          piVar5[0x98] = piVar5[0x98] << 8 ^
                         *(uint *)(&DAT_00541bd0 + ((uint)piVar5[0x98] >> 0x18 ^ uVar3 & 0xff) * 4);
          *(undefined1 *)(uVar3 + 0x58 + (int)piVar5) = 1;
          *(char *)(piVar5[9] + piVar5[0x11]) = (char)uVar3;
          piVar5[0x11] = piVar5[0x11] + 1;
        }
        else {
LAB_00486428:
          if (uVar3 < 0x100) {
            FUN_004862a0((int)piVar5);
          }
          piVar5[0xe] = 1;
        }
        piVar5[0xd] = (uint)bVar2;
      }
      *(int *)*piVar5 = *(int *)*piVar5 + 1;
      *(int *)(*piVar5 + 4) = *(int *)(*piVar5 + 4) + -1;
      puVar6 = (undefined4 *)*piVar5;
      puVar6[2] = puVar6[2] + 1;
      if (*(int *)(*piVar5 + 8) == 0) {
        piVar1 = (int *)(*piVar5 + 0xc);
        *piVar1 = *piVar1 + 1;
      }
    } while (piVar5[0x11] < piVar5[0x12]);
  }
  else {
    while ((puVar6 = (undefined4 *)*piVar5, puVar6[1] != 0 && (piVar5[3] != 0))) {
      uVar3 = piVar5[0xd];
      param_1 = (int *)0x1;
      bVar2 = *(byte *)*puVar6;
      iVar4 = piVar5[0xe];
      if (bVar2 == uVar3) {
        if (iVar4 == 0xff) goto LAB_004864d7;
        piVar5[0xe] = iVar4 + 1;
      }
      else {
        if (iVar4 == 1) {
          piVar5[0x98] = piVar5[0x98] << 8 ^
                         *(uint *)(&DAT_00541bd0 + ((uint)piVar5[0x98] >> 0x18 ^ uVar3 & 0xff) * 4);
          *(undefined1 *)(uVar3 + 0x58 + (int)piVar5) = 1;
          *(char *)(piVar5[9] + piVar5[0x11]) = (char)uVar3;
          piVar5[0x11] = piVar5[0x11] + 1;
        }
        else {
LAB_004864d7:
          if (uVar3 < 0x100) {
            FUN_004862a0((int)piVar5);
          }
          piVar5[0xe] = 1;
        }
        piVar5[0xd] = (uint)bVar2;
      }
      *(int *)*piVar5 = *(int *)*piVar5 + 1;
      *(int *)(*piVar5 + 4) = *(int *)(*piVar5 + 4) + -1;
      *(int *)(*piVar5 + 8) = *(int *)(*piVar5 + 8) + 1;
      if (*(int *)(*piVar5 + 8) == 0) {
        piVar1 = (int *)(*piVar5 + 0xc);
        *piVar1 = *piVar1 + 1;
      }
      piVar5[3] = piVar5[3] + -1;
      if (piVar5[0x12] <= piVar5[0x11]) {
        return CONCAT31((int3)((uint)piVar5[0x11] >> 8),1);
      }
    }
  }
  return CONCAT31((int3)((uint)puVar6 >> 8),param_1._0_1_);
}


