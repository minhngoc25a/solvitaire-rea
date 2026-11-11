// Function: FUN_0047a01e
// Entry: 0047a01e
// Size: 373 bytes
// Thunk: false
// External: false


void FUN_0047a01e(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  iVar7 = *param_2;
  while (iVar7 != -1) {
    piVar6 = param_2 + 1;
    if (iVar7 == -7) {
      iVar7 = *piVar6;
      iVar1 = param_2[2];
      iVar8 = param_2[3];
      iVar3 = param_2[4];
      iVar4 = param_2[5];
      piVar6 = param_2 + 6;
      iVar9 = iVar1;
      piVar2 = (int *)(iVar7 + param_1);
      if (0 < iVar1) {
        do {
          iVar5 = *piVar6;
          piVar6 = piVar6 + 1;
          piVar2[1] = iVar5;
          iVar9 = iVar9 + -1;
          piVar2 = piVar2 + 1;
        } while (iVar9 != 0);
      }
      (*DAT_00544140)(iVar1,iVar8,iVar3,iVar4,(int *)(iVar7 + param_1));
    }
    else if (iVar7 == -6) {
      iVar7 = *piVar6;
      piVar6 = param_2 + 6;
      (*DAT_0054414c)(param_2[2],param_2[3],param_2[4],iVar7 + param_1,param_2[5]);
    }
    else if (iVar7 == -5) {
      iVar7 = *piVar6;
      piVar6 = param_2 + 5;
      (*DAT_00544148)(param_2[2],iVar7 + param_1,param_2[3],param_2[4]);
    }
    else if (iVar7 == -4) {
      iVar7 = *piVar6;
      piVar6 = param_2 + 6;
      (*DAT_00544144)(param_2[2],param_2[3],param_2[4],param_2[5],iVar7 + param_1);
    }
    else if (iVar7 == -3) {
      iVar7 = *piVar6;
      piVar6 = param_2 + 4;
      FUN_0047a01e(iVar7 + param_1,(int *)param_2[3]);
    }
    else if (iVar7 == -2) {
      iVar7 = *piVar6;
      iVar1 = param_2[3];
      piVar2 = (int *)param_2[4];
      piVar6 = param_2 + 5;
      if (0 < iVar7) {
        iVar8 = param_2[2] + param_1;
        do {
          FUN_0047a01e(iVar8,piVar2);
          iVar8 = iVar8 + iVar1;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
    }
    param_2 = piVar6;
    iVar7 = *piVar6;
  }
  return;
}


