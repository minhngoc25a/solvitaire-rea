// Function: FUN_004a9190
// Entry: 004a9190
// Size: 213 bytes
// Thunk: false
// External: false


void __cdecl FUN_004a9190(uint *param_1,byte param_2,uint param_3)

{
  ushort uVar1;
  int iVar2;
  
  if ((param_1[0x1d] & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0046f190((int)param_1);
  }
  if ((param_1[0x1d] & 6) != 0) {
    FUN_004a5f90((int)param_1,param_3);
    FUN_0046f3d0((int)param_1,0x5279c0);
    return;
  }
  if (param_3 != 1) {
    FUN_004a5f90((int)param_1,param_3);
    FUN_0046f3d0((int)param_1,0x527b5c);
    return;
  }
  FUN_00474230((int)param_1);
  FUN_0046bd70((int)param_1,(uint *)&param_2,1);
  iVar2 = FUN_004a5f90((int)param_1,0);
  if ((iVar2 == 0) && (uVar1 = *(ushort *)((int)param_1 + 0x30e), -1 < (short)uVar1)) {
    if ((uVar1 & 4) != 0) {
      *(ushort *)((int)param_1 + 0x30e) = uVar1 | 0x8000;
      FUN_0046bed0(param_1,param_3);
      FUN_0046f3d0((int)param_1,0x524d60);
      return;
    }
    FUN_0046c040((int)param_1,(int *)(param_1 + 0xb1),(uint)param_2);
    FUN_0046bed0(param_1,param_3);
  }
  return;
}


