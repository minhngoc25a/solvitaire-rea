// Function: FUN_0044ba10
// Entry: 0044ba10
// Size: 610 bytes
// Thunk: false
// External: false


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

SIZE_T * FUN_0044ba10(int param_1,int *param_2,uint param_3,int *param_4)

{
  ushort uVar1;
  undefined8 uVar2;
  int *piVar3;
  uint *puVar4;
  SIZE_T *pSVar5;
  SIZE_T *pSVar6;
  int iVar7;
  SIZE_T dwBytes;
  int *piVar8;
  SIZE_T *pSVar9;
  int *local_3c;
  int local_38;
  undefined4 local_30 [12];
  
  if (DAT_005424ac == 0) {
    return (SIZE_T *)0x0;
  }
  if (param_2 == (int *)0x0) {
    return (SIZE_T *)0x0;
  }
  if (*param_2 == 0x46464952) {
    if (param_2[3] != 0x20746d66) {
      return (SIZE_T *)0x0;
    }
    piVar8 = (int *)(param_2[4] + 0x14 + (int)param_2);
    iVar7 = *piVar8;
    while (iVar7 != 0x61746164) {
      piVar8 = (int *)((int)piVar8 + piVar8[1] + 8);
      iVar7 = *piVar8;
    }
    uVar1 = *(ushort *)((int)param_2 + 0x22);
    piVar3 = (int *)(uint)uVar1;
    if (((short)param_2[5] != 1) ||
       ((((piVar3 != (int *)0x8 && (piVar3 != (int *)0x10)) && (piVar3 != (int *)0x18)) &&
        (piVar3 != (int *)0x20)))) {
      if ((short)param_2[5] != 3) {
        return (SIZE_T *)0x0;
      }
      if (piVar3 != (int *)0x20) {
        return (SIZE_T *)0x0;
      }
    }
    dwBytes = piVar8[1];
    puVar4 = HeapAlloc(DAT_00542264,0,dwBytes);
    if (puVar4 == (uint *)0x0) {
      return (SIZE_T *)0x0;
    }
    FUN_0044c490(puVar4,(uint *)(piVar8 + 2),dwBytes);
    param_4 = (int *)param_2[6];
    param_3 = (uint)*(ushort *)((int)param_2 + 0x16);
    local_38 = ((int)dwBytes / (int)param_3) / (int)(uint)(uVar1 >> 3);
    local_3c = (int *)(uint)*(ushort *)(param_2 + 5);
    param_2 = piVar3;
  }
  else {
    piVar8 = FUN_0044b939((wchar_t *)0x0,param_2,param_3,param_4);
    if (piVar8 == (int *)0x0) {
      return (SIZE_T *)0x0;
    }
    param_3 = FUN_00425a60(piVar8);
    local_38 = FUN_00425a6d(piVar8);
    dwBytes = local_38 * param_3 * 2;
    puVar4 = HeapAlloc(DAT_00542264,0,dwBytes);
    if (puVar4 == (uint *)0x0) {
      param_4 = param_2;
      local_3c = param_2;
    }
    else {
      FUN_00425aa1(piVar8,puVar4,dwBytes,0,0);
      param_2 = (int *)0x10;
      param_4 = (int *)FUN_00425a7a(piVar8);
      local_3c = (int *)0x1;
    }
    FUN_00425a87(piVar8);
    if (puVar4 == (uint *)0x0) {
      return (SIZE_T *)0x0;
    }
  }
  pSVar5 = (SIZE_T *)FUN_0042583b(DAT_005424a8,param_1);
  uVar2 = _DAT_0050c070;
  *(short *)((int)pSVar5 + 0x62) = (short)param_3;
  *(short *)(pSVar5 + 0x18) = (short)param_2;
  *pSVar5 = dwBytes;
  pSVar5[0xf] = (SIZE_T)puVar4;
  pSVar5[0x14] = (SIZE_T)param_4;
  pSVar5[0xe] = 0;
  pSVar5[0x12] = 0;
  pSVar5[0x13] = (SIZE_T)param_4;
  pSVar5[0x16] = 0;
  pSVar5[0x17] = 0;
  *(undefined8 *)(pSVar5 + 0x10) = uVar2;
  switch((short)param_2) {
  case 8:
    param_2 = (int *)0x1;
    break;
  default:
    break;
  case 0x10:
    param_2 = (int *)0x2;
    break;
  case 0x18:
    param_2 = (int *)0x3;
    break;
  case 0x20:
    param_2 = (int *)((local_3c == (int *)0x3) + 4);
  }
  pSVar6 = FUN_0042f350(local_30,param_2,param_3,local_38,local_38 >> 0x1f,puVar4,(int *)0x0);
  pSVar9 = pSVar5 + 2;
  for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
    *pSVar9 = *pSVar6;
    pSVar6 = pSVar6 + 1;
    pSVar9 = pSVar9 + 1;
  }
  pSVar5[4] = (SIZE_T)param_4;
  return pSVar5;
}


