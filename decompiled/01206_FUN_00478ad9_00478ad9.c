// Function: FUN_00478ad9
// Entry: 00478ad9
// Size: 369 bytes
// Thunk: false
// External: false


int * FUN_00478ad9(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  
  piVar3 = param_1;
  if (param_1[7] != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  }
  piVar1 = param_1 + 1;
  piVar4 = (int *)*piVar1;
  if (piVar4 == (int *)0x0) {
    uVar7 = param_1[3] >> 4 & 0xfffffff0;
    if ((int)uVar7 < param_1[5]) {
      uVar7 = param_1[5];
    }
    else if (param_1[6] < (int)uVar7) {
      uVar7 = param_1[6];
    }
    piVar4 = HeapAlloc(DAT_00542264,0,param_1[4] * uVar7 + 0x18);
    if (piVar4 == (int *)0x0) {
      piVar4 = HeapAlloc(DAT_00542264,0,param_1[4] + 0x18);
      piVar5 = (int *)0x0;
      if (piVar4 == (int *)0x0) goto LAB_00478c26;
      piVar4[3] = 1;
    }
    else {
      piVar4[3] = uVar7;
    }
    param_1[3] = param_1[3] + piVar4[3];
    piVar4[4] = 1;
    piVar4[5] = 0;
    piVar4[2] = 0;
    if (piVar4[3] < 2) {
      *piVar4 = *param_1;
      piVar4[1] = 0;
      *param_1 = (int)piVar4;
    }
    else {
      *piVar4 = param_1[1];
      piVar4[1] = 0;
      param_1[1] = (int)piVar4;
    }
    if (*piVar4 != 0) {
      *(int **)(*piVar4 + 4) = piVar4;
    }
    piVar5 = piVar4 + 6;
  }
  else {
    iVar6 = piVar4[5];
    piVar2 = piVar4 + 4;
    if (iVar6 < 1) {
      param_1 = (int *)(param_1[4] * *piVar2 + 0x18 + (int)piVar4);
      *piVar2 = *piVar2 + 1;
    }
    else {
      param_1 = (int *)piVar4[2];
      iVar6 = iVar6 + -1;
      piVar4[2] = *param_1;
      piVar4[5] = iVar6;
    }
    piVar5 = param_1;
    if ((iVar6 == 0) && (piVar4[3] <= *piVar2)) {
      if (*piVar4 != 0) {
        *(int *)(*piVar4 + 4) = piVar4[1];
      }
      if (piVar4 == (int *)*piVar1) {
        *piVar1 = *piVar4;
      }
      else {
        *(int *)piVar4[1] = *piVar4;
      }
      iVar6 = *piVar3;
      piVar4[1] = 0;
      *piVar4 = iVar6;
      *piVar3 = (int)piVar4;
      if (*piVar4 != 0) {
        *(int **)(*piVar4 + 4) = piVar4;
      }
    }
  }
LAB_00478c26:
  if (piVar3[7] != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(piVar3 + 8));
  }
  if (piVar5 == (int *)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    *piVar5 = (int)piVar4;
    piVar5 = piVar5 + 1;
  }
  return piVar5;
}


