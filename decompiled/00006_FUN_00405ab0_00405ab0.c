// Function: FUN_00405ab0
// Entry: 00405ab0
// Size: 568 bytes
// Thunk: false
// External: false


int FUN_00405ab0(LPCWSTR param_1,undefined4 param_2)

{
  bool bVar1;
  int iVar2;
  short *psVar3;
  ushort *puVar4;
  undefined3 extraout_var;
  BOOL BVar5;
  undefined4 uVar6;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar7;
  undefined4 extraout_ECX_01;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar8;
  undefined4 extraout_EDX_01;
  LPCWSTR local_18;
  ULARGE_INTEGER local_14;
  
  FUN_004242b0(param_2);
  FUN_00423f50();
  FUN_00424040(&param_1,param_1);
  local_18 = param_1;
  FUN_00423f50();
  FUN_00424040(&local_18,local_18);
  local_14.s.LowPart = 0;
  local_14.s.HighPart = 0;
  FUN_004241c0();
  FUN_004241c0();
  iVar2 = FUN_004241e0();
  FUN_00422e20(local_18,(short *)&DAT_00537ea8,(short *)&DAT_00537c30,iVar2);
  iVar2 = FUN_004241e0();
  FUN_00423e40(&local_18,iVar2);
  FUN_004241c0();
  FUN_004241c0();
  FUN_004241c0();
  FUN_004241c0();
  iVar2 = FUN_004241e0();
  FUN_00422700(local_18,3,iVar2);
  psVar3 = (short *)FUN_00424280();
  iVar2 = FUN_004241e0();
  FUN_00422e40(psVar3,2,iVar2);
  FUN_00424170();
  puVar4 = (ushort *)FUN_00424250();
  bVar1 = FUN_004242e0((ushort *)&DAT_005361c8,puVar4);
  if (CONCAT31(extraout_var,bVar1) != 0) {
    FUN_004241c0();
    FUN_004241c0();
    iVar2 = FUN_004241e0();
    FUN_00422700(local_18,3,iVar2);
    iVar2 = FUN_004241e0();
    FUN_00423e40(&local_18,iVar2);
  }
  BVar5 = GetDiskFreeSpaceExW(local_18,(PULARGE_INTEGER)0x0,(PULARGE_INTEGER)0x0,&local_14);
  uVar8 = local_14.s.HighPart;
  uVar7 = local_14.s.LowPart;
  if (BVar5 == 0) {
    FUN_00424120(extraout_ECX,extraout_EDX,local_18);
  }
  else {
    FUN_00424120(extraout_ECX,extraout_EDX,local_18);
    if (uVar8 != 0xffffffff || uVar7 != 0xffffffff) {
      FUN_004241c0();
      FUN_004241c0();
      uVar6 = FUN_004241e0();
      FUN_004058b0(uVar7,uVar8,uVar6);
      iVar2 = FUN_00424280();
      uVar7 = extraout_ECX_00;
      uVar8 = extraout_EDX_00;
      goto LAB_00405c53;
    }
  }
  FUN_004241c0();
  FUN_00423ff0((short *)&DAT_00537a18);
  iVar2 = FUN_00424280();
  uVar7 = extraout_ECX_01;
  uVar8 = extraout_EDX_01;
LAB_00405c53:
  FUN_00424120(uVar7,uVar8,param_1);
  return iVar2;
}


