// Function: FUN_004a8a20
// Entry: 004a8a20
// Size: 274 bytes
// Thunk: false
// External: false


void __cdecl FUN_004a8a20(int param_1,int param_2,uint param_3)

{
  int iVar1;
  undefined1 unaff_retaddr;
  undefined1 uStack_8;
  undefined1 uStack_7;
  undefined1 uStack_6;
  undefined1 uStack_5;
  undefined1 uStack_4;
  undefined1 uStack_3;
  undefined1 uStack_2;
  undefined1 uStack_1;
  
  if ((*(uint *)(param_1 + 0x74) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0046f190(param_1);
  }
  if ((*(uint *)(param_1 + 0x74) & 4) != 0) {
    FUN_004a5f90(param_1,param_3);
    FUN_0046f3d0(param_1,0x5279c0);
    return;
  }
  if ((param_2 != 0) && ((*(byte *)(param_2 + 8) & 0x80) != 0)) {
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
  FUN_0046bd70(param_1,(uint *)&uStack_8,9);
  iVar1 = FUN_004a5f90(param_1,0);
  if (iVar1 == 0) {
    FUN_004a5340(param_1,param_2,CONCAT31(CONCAT21(CONCAT11(uStack_8,uStack_7),uStack_6),uStack_5),
                 CONCAT31(CONCAT21(CONCAT11(uStack_4,uStack_3),uStack_2),uStack_1),unaff_retaddr);
  }
  return;
}


