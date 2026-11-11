// Function: FUN_00445d20
// Entry: 00445d20
// Size: 323 bytes
// Thunk: false
// External: false


undefined4 __cdecl FUN_00445d20(int param_1)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  uint uVar4;
  bool bVar5;
  char cVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  
  uVar9 = *(uint *)(param_1 + 4);
  iVar1 = *(int *)(param_1 + 0x14);
  pcVar2 = *(char **)(param_1 + 0x10);
  pcVar3 = *(char **)(param_1 + 0xc);
  uVar4 = *(uint *)(param_1 + 8);
  if (uVar4 == uVar9) {
    if ((pcVar2 != pcVar3) && (uVar8 = 0, uVar4 != 0)) {
      do {
        if (pcVar2 == (char *)0x0) {
          param_1._0_1_ = FUN_00448a20(0,uVar4,uVar8);
        }
        else if (uVar8 < uVar4) {
          param_1._0_1_ = pcVar2[uVar8];
        }
        else {
          param_1._0_1_ = '\0';
        }
        if (pcVar3 == (char *)0x0) {
          cVar6 = FUN_00448a20(0,uVar4,uVar8);
        }
        else if (uVar8 < uVar4) {
          cVar6 = pcVar3[uVar8];
        }
        else {
          cVar6 = '\0';
        }
        if ((char)param_1 != cVar6) {
          bVar5 = false;
          goto LAB_00445d9f;
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 < uVar4);
    }
    bVar5 = true;
LAB_00445d9f:
    if (bVar5) {
      return 1;
    }
  }
  if ((uVar4 == 1) && ((pcVar2 == (char *)0x0 || (*pcVar2 == '\x01')))) {
    return 2;
  }
  if ((uVar9 == 1) && ((pcVar3 == (char *)0x0 || (*pcVar3 == '\x01')))) {
    return 3;
  }
  if ((iVar1 != 2) && (uVar9 == uVar4)) {
    if (uVar9 == 0) {
      return 4;
    }
    if (pcVar3 == (char *)0x0) {
      cVar6 = FUN_00448a20(0,uVar9,0);
    }
    else {
      cVar6 = *pcVar3;
    }
    uVar9 = 0;
    if (uVar4 != 0) {
      do {
        if (pcVar2 == (char *)0x0) {
          cVar7 = FUN_00448a20(0,uVar4,uVar9);
        }
        else if (uVar9 < uVar4) {
          cVar7 = pcVar2[uVar9];
        }
        else {
          cVar7 = '\0';
        }
        if (cVar7 == cVar6) {
          return 4;
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 < uVar4);
    }
  }
  return 5;
}


