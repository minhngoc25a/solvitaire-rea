// Function: FUN_004a9520
// Entry: 004a9520
// Size: 604 bytes
// Thunk: false
// External: false


void __cdecl FUN_004a9520(uint *param_1,int param_2,uint param_3)

{
  char cVar1;
  uint uVar2;
  undefined2 uVar3;
  int iVar4;
  byte local_108;
  byte bStack_107;
  byte bStack_104;
  byte bStack_103;
  byte bStack_102;
  byte bStack_101;
  byte local_100;
  byte bStack_ff;
  uint auStack_fc [63];
  
  uVar2 = param_1[0x1d];
  if ((uVar2 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0046f190((int)param_1);
  }
  if ((uVar2 & 4) != 0) {
LAB_004a9751:
    FUN_004a5f90((int)param_1,param_3);
    FUN_0046f3d0((int)param_1,0x5279c0);
    return;
  }
  if ((param_2 != 0) && ((*(byte *)(param_2 + 8) & 0x10) != 0)) {
    FUN_004a5f90((int)param_1,param_3);
    FUN_0046f3d0((int)param_1,0x526b9c);
    return;
  }
  cVar1 = *(char *)((int)param_1 + 0x14f);
  if (cVar1 == '\0') {
    if (param_3 != 2) {
LAB_004a958f:
      FUN_004a5f90((int)param_1,param_3);
      FUN_0046f3d0((int)param_1,0x527b5c);
      return;
    }
    FUN_00474230((int)param_1);
    FUN_0046bd70((int)param_1,(uint *)&local_108,2);
    uVar3 = 1;
    *(ushort *)(param_1 + 0x6f) = (ushort)local_108 * 0x100 + (ushort)bStack_107;
  }
  else if (cVar1 == '\x02') {
    if (param_3 != 6) goto LAB_004a958f;
    FUN_00474230((int)param_1);
    FUN_0046bd70((int)param_1,(uint *)&bStack_104,6);
    *(ushort *)((int)param_1 + 0x1b6) = (ushort)bStack_104 * 0x100 + (ushort)bStack_103;
    *(ushort *)(param_1 + 0x6e) = (ushort)bStack_102 * 0x100 + (ushort)bStack_101;
    uVar3 = 1;
    *(ushort *)((int)param_1 + 0x1ba) = (ushort)local_100 * 0x100 + (ushort)bStack_ff;
  }
  else {
    if (cVar1 != '\x03') {
      FUN_004a5f90((int)param_1,param_3);
      FUN_0046f3d0((int)param_1,0x5261cc);
      return;
    }
    if ((uVar2 & 2) == 0) goto LAB_004a9751;
    if ((((ushort)param_1[0x50] < param_3) || (0x100 < param_3)) || (param_3 == 0)) {
      FUN_004a5f90((int)param_1,param_3);
      FUN_0046f3d0((int)param_1,0x527b5c);
      return;
    }
    FUN_00474230((int)param_1);
    FUN_0046bd70((int)param_1,auStack_fc,param_3);
    uVar3 = (undefined2)param_3;
  }
  *(undefined2 *)(param_1 + 0x52) = uVar3;
  iVar4 = FUN_004a5f90((int)param_1,0);
  if (iVar4 != 0) {
    *(undefined2 *)(param_1 + 0x52) = 0;
    return;
  }
  FUN_004a5690(param_1,param_2,auStack_fc,(uint)(ushort)param_1[0x52],(undefined8 *)(param_1 + 0x6d)
              );
  return;
}


