// Function: FUN_0046d890
// Entry: 0046d890
// Size: 659 bytes
// Thunk: false
// External: false


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl FUN_0046d890(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  float10 fVar11;
  
  iVar8 = *param_2;
  iVar10 = param_2[2] + iVar8 + param_2[1];
  if (iVar10 != 0) {
    if (iVar8 == 0) {
      iVar8 = 0;
    }
    else {
      fVar11 = FUN_0046a200(((double)iVar8 * DAT_0050db20) / (double)iVar10 + DAT_0050c088);
      if (DAT_0050c360 < (double)fVar11) {
        return true;
      }
      if ((double)fVar11 < _DAT_0050db38) {
        return true;
      }
      iVar8 = (int)fVar11;
    }
    dVar4 = DAT_0050db20;
    dVar3 = DAT_0050c088;
    *param_1 = iVar8;
    if (param_2[1] == 0) {
      iVar8 = 0;
    }
    else {
      fVar11 = FUN_0046a200(((double)param_2[1] * dVar4) / (double)iVar10 + dVar3);
      if (DAT_0050c360 < (double)fVar11) {
        return true;
      }
      if ((double)fVar11 < _DAT_0050db38) {
        return true;
      }
      iVar8 = (int)fVar11;
    }
    param_1[1] = iVar8;
    iVar8 = *param_2;
    iVar6 = param_2[3];
    iVar1 = param_2[1];
    iVar5 = param_2[5] + param_2[4] + iVar6;
    if (iVar5 != 0) {
      if (iVar6 == 0) {
        iVar6 = 0;
      }
      else {
        fVar11 = FUN_0046a200(((double)iVar6 * DAT_0050db20) / (double)iVar5 + DAT_0050c088);
        if (DAT_0050c360 < (double)fVar11) {
          return true;
        }
        if ((double)fVar11 < _DAT_0050db38) {
          return true;
        }
        iVar6 = (int)fVar11;
      }
      param_1[2] = iVar6;
      iVar6 = FUN_0046cd90(param_1 + 3,param_2[4],100000,iVar5);
      if (iVar6 != 0) {
        iVar6 = param_2[3];
        iVar2 = param_2[4];
        iVar9 = param_2[8] + param_2[6] + param_2[7];
        iVar7 = FUN_0046cd90(param_1 + 4,param_2[6],100000,iVar9);
        if ((iVar7 != 0) && (iVar7 = FUN_0046cd90(param_1 + 5,param_2[7],100000,iVar9), iVar7 != 0))
        {
          iVar9 = iVar10 + iVar5 + iVar9;
          iVar10 = param_2[7];
          iVar8 = FUN_0046cd90(param_1 + 6,iVar8 + iVar6 + param_2[6],100000,iVar9);
          if (iVar8 != 0) {
            iVar8 = FUN_0046cd90(param_1 + 7,iVar1 + iVar2 + iVar10,100000,iVar9);
            return (bool)('\x01' - (iVar8 != 0));
          }
        }
      }
    }
  }
  return true;
}


