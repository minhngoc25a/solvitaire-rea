// Function: FUN_004a8600
// Entry: 004a8600
// Size: 385 bytes
// Thunk: false
// External: false


void __cdecl FUN_004a8600(int param_1,int param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  undefined1 unaff_retaddr;
  char cStack_8;
  undefined1 uStack_7;
  undefined1 uStack_6;
  byte bStack_5;
  char cStack_4;
  undefined1 uStack_3;
  undefined1 uStack_2;
  byte bStack_1;
  
  if ((*(uint *)(param_1 + 0x74) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0046f190(param_1);
  }
  if ((*(uint *)(param_1 + 0x74) & 4) != 0) {
    FUN_004a5f90(param_1,param_3);
    FUN_0046f3d0(param_1,0x5279c0);
    return;
  }
  if ((param_2 != 0) && ((*(uint *)(param_2 + 8) & 0x100) != 0)) {
    FUN_004a5f90(param_1,param_3);
    FUN_0046f3d0(param_1,0x526b9c);
    return;
  }
  if (param_3 != 9) {
    FUN_004a5f90(param_1,param_3);
    FUN_0046f3d0(param_1,0x527b5c);
    return;
  }
  FUN_00474230(param_1);
  FUN_0046bd70(param_1,(uint *)&cStack_8,9);
  iVar1 = FUN_004a5f90(param_1,0);
  if (iVar1 == 0) {
    if (cStack_8 < '\0') {
      iVar1 = -((uint)CONCAT21(CONCAT11(cStack_8,uStack_7),uStack_6) * -0x100 - (uint)bStack_5 &
               0x7fffffff);
    }
    else {
      iVar1 = CONCAT31(CONCAT21(CONCAT11(cStack_8,uStack_7),uStack_6),bStack_5);
    }
    if (cStack_4 < '\0') {
      iVar2 = -((uint)CONCAT21(CONCAT11(cStack_4,uStack_3),uStack_2) * -0x100 - (uint)bStack_1 &
               0x7fffffff);
    }
    else {
      iVar2 = CONCAT31(CONCAT21(CONCAT11(cStack_4,uStack_3),uStack_2),bStack_1);
    }
    FUN_004a5090(param_1,param_2,iVar1,iVar2,unaff_retaddr);
  }
  return;
}


