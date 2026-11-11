// Function: FUN_0046bf90
// Entry: 0046bf90
// Size: 170 bytes
// Thunk: false
// External: false


undefined4 __cdecl FUN_0046bf90(int param_1,int param_2,uint *param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined4 uVar3;
  int local_44 [8];
  int local_24 [9];
  
  iVar2 = FUN_0046db30(local_24,param_3);
  if (iVar2 == 0) {
    bVar1 = FUN_0046d890(local_44,local_24);
    iVar2 = CONCAT31(extraout_var,bVar1);
    if (iVar2 == 0) {
      bVar1 = FUN_0046de50((int *)param_3,local_44,5);
      if (CONCAT31(extraout_var_00,bVar1) != 0) goto LAB_0046bfe0;
      goto LAB_0046bfff;
    }
  }
  if (iVar2 == 0) {
LAB_0046bfe0:
    uVar3 = FUN_0046df30(param_1,param_2,(int *)param_3,local_24,param_4);
    return uVar3;
  }
  if (iVar2 != 1) {
    *(ushort *)(param_2 + 0x4a) = *(ushort *)(param_2 + 0x4a) | 0x8000;
                    /* WARNING: Subroutine does not return */
    FUN_0046f190(param_1);
  }
LAB_0046bfff:
  *(ushort *)(param_2 + 0x4a) = *(ushort *)(param_2 + 0x4a) | 0x8000;
  FUN_0046f360(param_1,"invalid chromaticities");
  return 0;
}


