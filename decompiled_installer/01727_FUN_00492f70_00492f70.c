// Function: FUN_00492f70
// Entry: 00492f70
// Size: 529 bytes
// Thunk: false
// External: false


int __cdecl
FUN_00492f70(short *param_1,uint param_2,uint param_3,int param_4,int param_5,UINT param_6)

{
  short sVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  __acrt_ptd *p_Var5;
  short *psVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int local_8;
  int local_4;
  
  uVar3 = param_2;
  puVar2 = *(undefined4 **)(param_1 + 2);
  iVar8 = 0;
  iVar9 = 0;
  do {
    if (puVar2 == (undefined4 *)0x0) {
      if ((uVar3 & 0x100) == 0) {
        if (iVar8 == 0) {
          return 0;
        }
      }
      else {
        iVar9 = iVar9 + (0x20 - (uint)((param_3 & 4) != 0));
      }
      return iVar9;
    }
    uVar7 = puVar2[1];
    if (((uVar3 & uVar7) == 0) ||
       ((uVar7 == 0x100 &&
        (((iVar4 = puVar2[2], iVar4 == 0x2712 || (iVar4 == 0x2714)) || (iVar4 == 0x2716))))))
    goto LAB_00493145;
    iVar8 = iVar8 + 1;
    if (((uVar3 & 0x200) != 0) && ((uVar7 & 0x200) != 0)) {
      iVar9 = iVar9 + 8;
    }
    iVar4 = puVar2[2];
    switch(iVar4) {
    case 0x2711:
    case 0x2715:
switchD_00492ff0_caseD_2711:
      iVar9 = iVar9 + 4;
      break;
    case 0x2712:
      if (uVar3 != 0x3c00) goto switchD_00492ff0_caseD_2711;
      iVar10 = iVar9 + 7;
      goto LAB_00493097;
    case 0x2714:
      if (uVar3 == 0x3c00) {
        iVar10 = iVar9 + 7;
        goto LAB_00493097;
      }
    case 0x2713:
    case 0x2716:
      iVar9 = iVar9 + 5;
      break;
    case 0x277b:
      iVar10 = iVar9 + 10;
      goto LAB_0049301b;
    }
    iVar10 = iVar9 + 1;
    if ((iVar4 == 0x2711) || (iVar4 == 0x2713)) {
      if (param_4 == 0) {
        iVar4 = FUN_0048dba0(param_5,puVar2 + 5,&local_4,&local_8,param_6);
        if (iVar4 != 0) {
          return 0;
        }
        if ((local_8 != 0) && (local_4 != 0)) {
          iVar10 = iVar10 + local_8;
          goto LAB_00493096;
        }
      }
      else {
        iVar4 = FUN_0048db20(param_5,puVar2 + 5,(int *)&param_1);
        if (iVar4 == 0) {
          if (param_1 != (short *)0x0) {
            psVar6 = param_1;
            do {
              sVar1 = *psVar6;
              psVar6 = psVar6 + 1;
            } while (sVar1 != 0);
            iVar10 = iVar10 + ((int)psVar6 - (int)(param_1 + 1) >> 1);
            goto LAB_00493096;
          }
        }
        else if ((iVar4 < 0) && (p_Var5 = FUN_0042470e(), *(int *)p_Var5 == 0xc)) {
          return 0;
        }
      }
      iVar10 = iVar9 + 8;
LAB_00493096:
      iVar10 = iVar10 + 1;
    }
    else {
LAB_0049301b:
      if (uVar3 != 0x3c00) goto LAB_00493096;
    }
LAB_00493097:
    if ((((param_3 & 4) != 0) && ((uVar3 & 0x300) != 0)) &&
       ((puVar2[2] == 0x2716 || (puVar2[2] == 0x2715)))) {
      iVar10 = iVar10 + -1;
    }
    if (uVar3 == 0x3c00) {
      iVar10 = iVar10 + (0x1c - (uint)((puVar2[1] & 0x800) != 0));
    }
    else {
      iVar10 = iVar10 + 3;
    }
    if (((puVar2[2] == 0x2711) || (puVar2[2] == 0x2713)) && ((param_3 & 1) != 0)) {
      uVar7 = puVar2[4];
      iVar9 = 1;
      if (9 < (int)uVar7) {
        do {
          iVar9 = iVar9 + 1;
          uVar7 = uVar7 / 10;
        } while (9 < uVar7);
      }
      iVar10 = iVar10 + 1 + iVar9;
    }
    iVar9 = iVar10 + 1;
LAB_00493145:
    puVar2 = (undefined4 *)*puVar2;
  } while( true );
}


