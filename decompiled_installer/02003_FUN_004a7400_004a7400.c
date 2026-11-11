// Function: FUN_004a7400
// Entry: 004a7400
// Size: 515 bytes
// Thunk: false
// External: false


void __cdecl FUN_004a7400(uint *param_1,uint param_2,uint param_3,uint param_4)

{
  undefined1 *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined1 local_300;
  undefined1 local_2ff;
  undefined1 local_2fe [766];
  
  uVar2 = param_1[0x1d];
  if (((uVar2 & 1) == 0) || ((uVar2 & 2) != 0)) {
LAB_004a75fd:
                    /* WARNING: Subroutine does not return */
    FUN_0046f190((int)param_1);
  }
  if ((uVar2 & 4) != 0) {
    FUN_004a5f90((int)param_1,param_3);
    FUN_0046f3d0((int)param_1,0x5279c0);
    return;
  }
  param_1[0x1d] = uVar2 | 2;
  if ((*(byte *)((int)param_1 + 0x14f) & 2) == 0) {
    FUN_004a5f90((int)param_1,param_3);
    FUN_0046f3d0((int)param_1,0x5291c8);
    return;
  }
  if ((0x300 < param_3) || (param_3 != (param_3 / 3) * 3)) {
    FUN_004a5f90((int)param_1,param_3);
    if (*(char *)((int)param_1 + 0x14f) != '\x03') {
      FUN_0046f3d0((int)param_1,0x527b5c);
      return;
    }
    goto LAB_004a75fd;
  }
  if (*(byte *)((int)param_1 + 0x14f) == 3) {
    iVar4 = 1 << ((byte)param_1[0x54] & 0x1f);
  }
  else {
    iVar4 = 0x100;
  }
  if ((int)param_3 / 3 <= iVar4) {
    iVar4 = (int)param_3 / 3;
  }
  uVar2 = param_3;
  if (0 < iVar4) {
    puVar1 = local_2fe;
    iVar3 = iVar4;
    do {
      FUN_00474230((int)param_1);
      FUN_0046bd70((int)param_1,(uint *)&local_300,3);
      puVar1[-2] = local_300;
      puVar1[-1] = local_2ff;
      *puVar1 = local_2fe[0];
      iVar3 = iVar3 + -1;
      uVar2 = param_4;
      puVar1 = puVar1 + 3;
      param_2 = param_3;
    } while (iVar3 != 0);
  }
  FUN_004a5f90((int)param_1,uVar2 + iVar4 * -3);
  FUN_004a5380(param_1,param_2,(uint *)&local_300,iVar4);
  if ((short)param_1[0x52] == 0) {
    if (param_2 == 0) {
      return;
    }
    if ((*(byte *)(param_2 + 8) & 0x10) == 0) goto LAB_004a759d;
    *(undefined2 *)(param_1 + 0x52) = 0;
LAB_004a7589:
    *(undefined2 *)(param_2 + 0x16) = 0;
  }
  else {
    *(undefined2 *)(param_1 + 0x52) = 0;
    if (param_2 != 0) goto LAB_004a7589;
  }
  FUN_0046f3d0((int)param_1,0x52531c);
LAB_004a759d:
  if (param_2 != 0) {
    if ((*(byte *)(param_2 + 8) & 0x40) != 0) {
      FUN_0046f3d0((int)param_1,0x525308);
    }
    if ((*(byte *)(param_2 + 8) & 0x20) != 0) {
      FUN_0046f3d0((int)param_1,0x525330);
    }
  }
  return;
}


