// Function: FUN_00422aa0
// Entry: 00422aa0
// Size: 854 bytes
// Thunk: false
// External: false


void FUN_00422aa0(short *param_1,short *param_2,short *param_3,uint param_4,uint param_5,int param_6
                 ,int param_7)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  code *pcVar6;
  int iVar7;
  int iVar8;
  short *psVar9;
  int iVar10;
  uint uVar11;
  short *psVar12;
  short *psVar13;
  int local_20;
  
  iVar8 = 0;
  local_20 = 0;
  if (param_1 == (short *)0x0) {
    param_1 = &DAT_0052ef5c;
  }
  if (param_2 == (short *)0x0) {
    param_2 = &DAT_0052ef5c;
  }
  if (param_3 == (short *)0x0) {
    param_3 = &DAT_0052ef5c;
  }
  pcVar6 = __wcsnicmp;
  uVar2 = param_4 & 1;
  if (uVar2 == 0) {
    pcVar6 = _wcsncmp;
  }
  if ((int)param_5 < 1) {
    param_5 = 1;
  }
  psVar12 = param_2;
  do {
    sVar1 = *psVar12;
    psVar12 = psVar12 + 1;
  } while (sVar1 != 0);
  iVar10 = (int)psVar12 - (int)(param_2 + 1) >> 1;
  psVar12 = param_3;
  do {
    sVar1 = *psVar12;
    psVar12 = psVar12 + 1;
  } while (sVar1 != 0);
  uVar11 = (int)psVar12 - (int)(param_3 + 1) >> 1;
  if ((param_4 & 2) == 0) {
    iVar3 = FUN_004542f0((uint)param_1);
    if (iVar3 != 0) {
      param_1 = FUN_0047d0f8(param_1);
    }
    iVar5 = FUN_004542f0((uint)param_2);
    if (iVar5 != 0) {
      param_2 = FUN_0047d0f8(param_2);
    }
    iVar4 = FUN_004542f0((uint)param_3);
    if (iVar4 != 0) {
      param_3 = FUN_0047d0f8(param_3);
    }
    psVar12 = param_1 + (param_5 - 1);
    if ((iVar10 != 0) && (param_6 != 0)) {
      sVar1 = *psVar12;
      local_20 = iVar8;
      psVar13 = psVar12;
      while (sVar1 != 0) {
        if (uVar2 == 0) {
          if ((*psVar13 != *param_2) || (iVar8 = (*pcVar6)(psVar13,param_2,iVar10), iVar8 != 0))
          goto LAB_00422c7e;
LAB_00422cf3:
          iVar8 = iVar10 * 2;
          local_20 = local_20 + 1;
          if ((param_6 != -1) && (param_6 <= local_20)) break;
        }
        else {
          iVar8 = (*pcVar6)(psVar13,param_2,iVar10);
          if (iVar8 == 0) goto LAB_00422cf3;
LAB_00422c7e:
          iVar8 = 2;
        }
        psVar13 = (short *)((int)psVar13 + iVar8);
        sVar1 = *psVar13;
      }
    }
    psVar13 = param_1;
    do {
      sVar1 = *psVar13;
      psVar13 = psVar13 + 1;
    } while (sVar1 != 0);
    psVar13 = (short *)FUN_0044c3e0((uVar11 - iVar10) * local_20 +
                                    ((int)psVar13 - (int)(param_1 + 1) >> 1),param_7);
    if (local_20 == 0) {
      psVar12 = param_1;
      do {
        sVar1 = *psVar12;
        psVar12 = psVar12 + 1;
        *(short *)((int)psVar13 + (-2 - (int)param_1) + (int)psVar12) = sVar1;
      } while (sVar1 != 0);
    }
    else {
      psVar9 = param_1;
      if (1 < param_5) {
        FUN_0044c204(psVar13,(int)param_1,param_5);
        psVar13 = psVar13 + (param_5 - 1);
        psVar9 = psVar12;
      }
      sVar1 = *psVar9;
      while (sVar1 != 0) {
        if (local_20 < 1) {
LAB_00422d62:
          iVar8 = 2;
          *psVar13 = *psVar9;
          iVar7 = 2;
        }
        else {
          if (uVar2 == 0) {
            if (*psVar9 != *param_2) goto LAB_00422d62;
            iVar8 = (*pcVar6)(psVar9,param_2,iVar10);
          }
          else {
            iVar8 = (*pcVar6)(psVar9,param_2,iVar10);
          }
          if (iVar8 != 0) goto LAB_00422d62;
          FUN_0044c204(psVar13,(int)param_3,uVar11);
          iVar7 = iVar10 * 2;
          local_20 = local_20 + -1;
          iVar8 = uVar11 * 2;
        }
        psVar9 = (short *)((int)psVar9 + iVar7);
        psVar13 = (short *)((int)psVar13 + iVar8);
        sVar1 = *psVar9;
      }
      *psVar13 = 0;
    }
    if (iVar3 != 0) {
      FUN_0047d191(param_1);
    }
    if (iVar5 != 0) {
      FUN_0047d191(param_2);
    }
    if (iVar4 != 0) {
      FUN_0047d191(param_3);
    }
  }
  else if (((iVar10 != 0) && (param_6 != 0)) &&
          (psVar12 = param_1 + (param_5 - 1), param_1 = psVar12, *psVar12 != 0)) {
    while ((param_6 == -1 || (iVar8 < param_6))) {
      iVar3 = (*pcVar6)(psVar12,param_2,iVar10);
      if (iVar3 == 0) {
        FUN_0044c204(psVar12,(int)param_3,uVar11);
        iVar5 = iVar10 * 2;
        iVar8 = iVar8 + 1;
        iVar3 = uVar11 * 2;
      }
      else {
        iVar3 = 2;
        iVar5 = 2;
      }
      psVar12 = (short *)((int)psVar12 + iVar3);
      param_1 = (short *)((int)param_1 + iVar5);
      if (*param_1 == 0) {
        return;
      }
    }
  }
  return;
}


