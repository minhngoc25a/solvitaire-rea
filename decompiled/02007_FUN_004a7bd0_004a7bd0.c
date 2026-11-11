// Function: FUN_004a7bd0
// Entry: 004a7bd0
// Size: 201 bytes
// Thunk: false
// External: false


void __cdecl FUN_004a7bd0(uint *param_1,uint param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  if ((param_1[0x1d] & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0046f190((int)param_1);
  }
  if ((param_1[0x1d] & 6) != 0) {
    FUN_004a5f90((int)param_1,param_3);
    FUN_0046f3d0((int)param_1,0x5279c0);
    return;
  }
  if (param_3 != 4) {
    FUN_004a5f90((int)param_1,param_3);
    FUN_0046f3d0((int)param_1,0x527b5c);
    return;
  }
  FUN_00474230((int)param_1);
  FUN_0046bd70((int)param_1,&param_2,4);
  iVar1 = FUN_004a5f90((int)param_1,0);
  if (iVar1 == 0) {
    uVar3 = CONCAT31(CONCAT21(CONCAT11((undefined1)param_2,param_2._1_1_),param_2._2_1_),
                     param_2._3_1_);
    uVar2 = 0xffffffff;
    if (uVar3 < 0x80000000) {
      uVar2 = uVar3;
    }
    FUN_0046be50((int)param_1,(int *)(param_1 + 0xb1),uVar2);
    FUN_0046bed0(param_1,param_3);
  }
  return;
}


