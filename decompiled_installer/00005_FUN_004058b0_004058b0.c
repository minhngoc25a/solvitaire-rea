// Function: FUN_004058b0
// Entry: 004058b0
// Size: 478 bytes
// Thunk: false
// External: false


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004058b0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  float fVar1;
  bool bVar2;
  int iVar3;
  short *psVar4;
  ushort *puVar5;
  undefined3 extraout_var;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  short *local_10;
  
  FUN_004242b0(param_3);
  FUN_00423f50();
  local_10 = (short *)0x0;
  fVar1 = (float)CONCAT44(param_2,param_1);
  FUN_00424090(&local_10,u_Byte_0053687c);
  if (_DAT_0050c048 <= fVar1) {
    fVar1 = fVar1 * _DAT_0050c04c;
    FUN_00424090(&local_10,(short *)&DAT_00536148);
  }
  if (_DAT_0050c048 <= fVar1) {
    fVar1 = fVar1 * _DAT_0050c04c;
    FUN_00424090(&local_10,(short *)&DAT_00535a78);
  }
  if (_DAT_0050c048 <= fVar1) {
    fVar1 = fVar1 * _DAT_0050c04c;
    FUN_00424090(&local_10,(short *)&DAT_00536b78);
  }
  FUN_004241c0();
  FUN_004241c0();
  FUN_004241c0();
  FUN_004241c0();
  iVar3 = FUN_004241e0();
  FUN_00423070(fVar1,1,iVar3);
  psVar4 = (short *)FUN_00424280();
  iVar3 = FUN_004241e0();
  FUN_00422e40(psVar4,1,iVar3);
  FUN_00424170();
  puVar5 = (ushort *)FUN_00424250();
  bVar2 = FUN_004242e0((ushort *)&DAT_00537ea4,puVar5);
  FUN_004241c0();
  FUN_004241c0();
  iVar3 = FUN_004241e0();
  FUN_00423070(fVar1,(uint)(CONCAT31(extraout_var,bVar2) == 0),iVar3);
  FUN_00423ff0((short *)&DAT_00537fc0);
  FUN_00423ff0(local_10);
  iVar3 = FUN_00424280();
  FUN_00424120(extraout_ECX,extraout_EDX,local_10);
  return iVar3;
}


