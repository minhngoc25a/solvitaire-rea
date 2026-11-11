// Function: FUN_00406130
// Entry: 00406130
// Size: 849 bytes
// Thunk: false
// External: false


DWORD FUN_00406130(HKEY param_1,LPCWSTR param_2,LPCWSTR param_3,ushort *param_4,DWORD param_5)

{
  bool bVar1;
  int iVar2;
  ushort *puVar3;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  LSTATUS LVar4;
  int iVar5;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar6;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_ECX_04;
  undefined4 extraout_ECX_05;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar7;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  DWORD DVar8;
  undefined8 uVar9;
  DWORD local_20;
  HKEY local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  FUN_00423f50();
  FUN_00424040(&param_2,param_2);
  FUN_00424040(&param_3,param_3);
  FUN_00424040(&param_4,(short *)param_4);
  local_20 = 0;
  local_1c = (HKEY)0x0;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  FUN_004241c0();
  FUN_004241c0();
  iVar2 = FUN_004241e0();
  FUN_00422700(param_2,1,iVar2);
  FUN_00424170();
  puVar3 = (ushort *)FUN_00424250();
  bVar1 = FUN_004242e0((ushort *)&DAT_00537c30,puVar3);
  if (CONCAT31(extraout_var,bVar1) != 0) {
    FUN_004241c0();
    FUN_004241c0();
    iVar2 = FUN_00422770(param_2);
    iVar5 = FUN_004241e0();
    FUN_00422e40(param_2,iVar2 - 1,iVar5);
    iVar2 = FUN_004241e0();
    FUN_00423e40(&param_2,iVar2);
  }
  FUN_004241c0();
  FUN_004241c0();
  iVar2 = FUN_004241e0();
  FUN_00422e40(param_2,1,iVar2);
  FUN_00424170();
  puVar3 = (ushort *)FUN_00424250();
  bVar1 = FUN_004242e0((ushort *)&DAT_00537c30,puVar3);
  if (CONCAT31(extraout_var_00,bVar1) != 0) {
    FUN_004241c0();
    FUN_004241c0();
    iVar2 = FUN_00422770(param_2);
    iVar5 = FUN_004241e0();
    FUN_00422700(param_2,iVar2 - 1,iVar5);
    iVar2 = FUN_004241e0();
    FUN_00423e40(&param_2,iVar2);
  }
  LVar4 = RegCreateKeyExW(param_1,param_2,0,(LPWSTR)0x0,0,0x20006,(LPSECURITY_ATTRIBUTES)0x0,
                          &local_1c,&local_20);
  if (LVar4 == 0) {
    if (param_5 == 4) {
      uVar9 = FUN_00423480(param_4);
      local_18 = (undefined4)uVar9;
      LVar4 = RegSetValueExW(local_1c,param_3,0,4,(BYTE *)&local_18,4);
    }
    else {
      if (1 < param_5 - 1) {
        RegCloseKey(local_1c);
        uVar6 = extraout_ECX_00;
        uVar7 = extraout_EDX_00;
        DVar8 = local_20;
        goto LAB_0040638a;
      }
      iVar2 = FUN_00423250((short *)param_4);
      LVar4 = RegSetValueExW(local_1c,param_3,0,param_5,(BYTE *)param_4,iVar2 + 2);
    }
    RegCloseKey(local_1c);
    uVar6 = extraout_ECX_05;
    uVar7 = extraout_EDX_02;
    DVar8 = local_20;
    if (LVar4 == 0) goto LAB_0040638a;
  }
  else {
    uVar6 = extraout_ECX;
    uVar7 = extraout_EDX;
    if (local_1c != (HKEY)0x0) {
      RegCloseKey(local_1c);
      uVar6 = extraout_ECX_04;
      uVar7 = extraout_EDX_01;
    }
  }
  DVar8 = 0;
LAB_0040638a:
  uVar9 = FUN_00424120(uVar6,uVar7,(LPVOID)0x0);
  uVar9 = FUN_00424120(extraout_ECX_01,(int)((ulonglong)uVar9 >> 0x20),param_2);
  uVar9 = FUN_00424120(extraout_ECX_02,(int)((ulonglong)uVar9 >> 0x20),param_4);
  FUN_00424120(extraout_ECX_03,(int)((ulonglong)uVar9 >> 0x20),param_3);
  return DVar8;
}


