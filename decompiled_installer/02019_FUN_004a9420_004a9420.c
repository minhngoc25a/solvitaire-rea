// Function: FUN_004a9420
// Entry: 004a9420
// Size: 252 bytes
// Thunk: false
// External: false


void __cdecl FUN_004a9420(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  byte bStack_c;
  byte bStack_b;
  undefined1 uStack_a;
  undefined1 uStack_9;
  short sStack_4;
  undefined1 uStack_2;
  undefined1 uStack_1;
  
  uVar1 = *(uint *)(param_1 + 0x74);
  if ((uVar1 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0046f190(param_1);
  }
  if ((param_2 != 0) && ((*(uint *)(param_2 + 8) & 0x200) != 0)) {
    FUN_004a5f90(param_1,param_3);
    FUN_0046f3d0(param_1,0x526b9c);
    return;
  }
  if ((uVar1 & 4) != 0) {
    *(uint *)(param_1 + 0x74) = uVar1 | 8;
  }
  if (param_3 != 7) {
    FUN_004a5f90(param_1,param_3);
    FUN_0046f3d0(param_1,0x527b5c);
    return;
  }
  FUN_00474230(param_1);
  FUN_0046bd70(param_1,(uint *)&bStack_c,7);
  iVar2 = FUN_004a5f90(param_1,0);
  if (iVar2 == 0) {
    uStack_1 = uStack_9;
    uStack_2 = uStack_a;
    sStack_4 = (ushort)bStack_c * 0x100 + (ushort)bStack_b;
    FUN_004a5610(param_1,param_2,(undefined4 *)&sStack_4);
  }
  return;
}


