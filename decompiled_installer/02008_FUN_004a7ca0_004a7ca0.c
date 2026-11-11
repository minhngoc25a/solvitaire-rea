// Function: FUN_004a7ca0
// Entry: 004a7ca0
// Size: 319 bytes
// Thunk: false
// External: false


void __cdecl FUN_004a7ca0(uint *param_1,uint param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uStack_200;
  short asStack_1fc [254];
  
  uVar3 = param_1[0x1d];
  if ((uVar3 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0046f190((int)param_1);
  }
  if (((uVar3 & 4) != 0) || ((uVar3 & 2) == 0)) {
    FUN_004a5f90((int)param_1,param_3);
    FUN_0046f3d0((int)param_1,0x5279c0);
    return;
  }
  if ((param_2 != 0) && ((*(byte *)(param_2 + 8) & 0x40) != 0)) {
    FUN_004a5f90((int)param_1,param_3);
    FUN_0046f3d0((int)param_1,0x526b9c);
    return;
  }
  uVar3 = param_3 >> 1;
  if ((uVar3 == (ushort)param_1[0x50]) && (uVar3 < 0x101)) {
    uVar2 = 0;
    if (uVar3 != 0) {
      do {
        FUN_00474230((int)param_1);
        FUN_0046bd70((int)param_1,&uStack_200,2);
        asStack_1fc[uVar2] = (ushort)(byte)uStack_200 * 0x100 + (ushort)uStack_200._1_1_;
        uVar2 = uVar2 + 1;
        param_2 = param_3;
      } while (uVar2 < uVar3);
    }
    iVar1 = FUN_004a5f90((int)param_1,0);
    if (iVar1 == 0) {
      FUN_004a4f20(param_1,param_2,(int)&uStack_200);
    }
    return;
  }
  FUN_004a5f90((int)param_1,param_3);
  FUN_0046f3d0((int)param_1,0x527b5c);
  return;
}


