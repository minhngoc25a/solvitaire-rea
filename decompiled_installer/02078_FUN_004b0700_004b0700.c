// Function: FUN_004b0700
// Entry: 004b0700
// Size: 676 bytes
// Thunk: false
// External: false


void __cdecl FUN_004b0700(uint *param_1,char param_2,int param_3,int *param_4)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  undefined1 *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  uint uVar12;
  undefined1 *puVar13;
  int iStack_51c;
  int iStack_514;
  byte abStack_508 [256];
  int aiStack_408 [258];
  
  if ((param_3 < 0) || (3 < param_3)) {
    *(undefined4 *)(*param_1 + 0x14) = 0x34;
    *(int *)(*param_1 + 0x18) = param_3;
    (**(code **)*param_1)(param_1);
  }
  if (param_2 == '\0') {
    puVar1 = (undefined4 *)param_1[param_3 + 0x2c];
  }
  else {
    puVar1 = (undefined4 *)param_1[param_3 + 0x28];
  }
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = FUN_004aabc0(param_1,param_2,param_3);
  }
  iVar2 = *param_4;
  if (iVar2 == 0) {
    iVar2 = (**(code **)param_1[1])(param_1,1,0x590);
    *param_4 = iVar2;
  }
  *(undefined4 **)(iVar2 + 0x8c) = puVar1;
  iVar9 = 1;
  iVar3 = 0;
  iStack_514 = 0;
  do {
    uVar12 = (uint)*(byte *)(iVar9 + (int)puVar1);
    iVar7 = uVar12 + iVar3;
    if (0x100 < iVar7) {
      *(undefined4 *)(*param_1 + 0x14) = 9;
      (**(code **)*param_1)(param_1);
      iVar3 = iStack_514;
    }
    if (uVar12 != 0) {
      _memset(abStack_508 + iVar3,iVar9,uVar12);
      iVar3 = iVar7;
      iStack_514 = iVar7;
    }
    iVar9 = iVar9 + 1;
  } while (iVar9 < 0x11);
  abStack_508[iVar3] = 0;
  iVar3 = 0;
  iVar9 = 0;
  iVar7 = (int)(char)abStack_508[0];
  if (abStack_508[0] != 0) {
    uVar12 = 1 << (abStack_508[0] & 0x1f) | 1U >> 0x20 - (abStack_508[0] & 0x1f);
    do {
      while ((char)abStack_508[0] == iVar7) {
        abStack_508[0] = abStack_508[iVar9 + 1];
        aiStack_408[iVar9 + 1] = iVar3;
        iVar9 = iVar9 + 1;
        iVar3 = iVar3 + 1;
      }
      if ((int)uVar12 <= iVar3) {
        *(undefined4 *)(*param_1 + 0x14) = 9;
        (**(code **)*param_1)(param_1);
      }
      abStack_508[0] = abStack_508[iVar9];
      iVar3 = iVar3 * 2;
      uVar12 = uVar12 << 1 | (uint)((int)uVar12 < 0);
      iVar7 = iVar7 + 1;
    } while (abStack_508[0] != 0);
  }
  iVar9 = 0;
  iVar3 = 1;
  do {
    if (*(char *)(iVar3 + (int)puVar1) == '\0') {
      iVar7 = -1;
    }
    else {
      *(int *)(iVar2 + 0x48 + iVar3 * 4) = iVar9 - aiStack_408[iVar9 + 1];
      iVar9 = iVar9 + (uint)*(byte *)(iVar3 + (int)puVar1);
      iVar7 = aiStack_408[iVar9];
    }
    *(int *)(iVar2 + iVar3 * 4) = iVar7;
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x11);
  *(undefined4 *)(iVar2 + 0x44) = 0xfffff;
  _memset((void *)(iVar2 + 0x90),0,0x400);
  iVar9 = 1;
  iVar3 = 0;
  iStack_51c = 0;
  do {
    if (*(char *)(iVar9 + (int)puVar1) != '\0') {
      bVar5 = 8 - (char)iVar9;
      iVar7 = 1 << (bVar5 & 0x1f);
      puVar13 = (undefined1 *)((int)puVar1 + iVar3 + 0x11);
      iVar8 = 1;
      do {
        iVar10 = aiStack_408[iVar3 + 1] << (bVar5 & 0x1f);
        if (0 < iVar7) {
          piVar11 = (int *)(iVar2 + (iVar10 + 0x24) * 4);
          iVar4 = iVar7;
          puVar6 = (undefined1 *)(iVar2 + 0x490 + iVar10);
          do {
            *piVar11 = iVar9;
            piVar11 = piVar11 + 1;
            iVar4 = iVar4 + -1;
            *puVar6 = *puVar13;
            iVar3 = iStack_51c;
            puVar6 = puVar6 + 1;
          } while (0 < iVar4);
        }
        iVar3 = iVar3 + 1;
        iVar8 = iVar8 + 1;
        puVar13 = puVar13 + 1;
        iStack_51c = iVar3;
      } while (iVar8 <= (int)(uint)*(byte *)(iVar9 + (int)puVar1));
    }
    iVar9 = iVar9 + 1;
  } while (iVar9 < 9);
  if ((param_2 != '\0') && (iVar2 = 0, 0 < iStack_514)) {
    do {
      if (0xf < *(byte *)(iVar2 + 0x11 + (int)puVar1)) {
        *(undefined4 *)(*param_1 + 0x14) = 9;
        (**(code **)*param_1)(param_1);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < iStack_514);
  }
  return;
}


