// Function: FUN_00408e10
// Entry: 00408e10
// Size: 1107 bytes
// Thunk: false
// External: false


bool FUN_00408e10(uint *param_1,short *param_2,ushort *param_3,short *param_4)

{
  bool bVar1;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  HRESULT HVar2;
  int iVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_ECX_04;
  undefined4 extraout_EDX;
  undefined8 uVar4;
  ushort *in_stack_00000020;
  undefined1 auStack_7c [4];
  undefined4 uStack_78;
  int *piStack_74;
  short *psStack_70;
  int *piVar5;
  int *piVar6;
  IID *riid;
  int **ppv;
  int *piStack_54;
  int *piStack_4c;
  short *local_48;
  int *local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  IID local_2c;
  IID local_1c;
  int *piStack_c;
  
  local_48 = (short *)&DAT_00542460;
  psStack_70 = (short *)0x408e22;
  FUN_00423f50();
  psStack_70 = (short *)0x408e36;
  FUN_00424040(&param_1,(short *)param_1);
  psStack_70 = (short *)0x408e4d;
  FUN_00424040(&param_2,param_2);
  psStack_70 = (short *)0x408e64;
  FUN_00424040(&param_3,(short *)param_3);
  psStack_70 = (short *)0x408e7b;
  FUN_00424040(&param_4,param_4);
  psStack_70 = (short *)0x408e92;
  FUN_00424040(&local_48,local_48);
  psStack_70 = (short *)0x408eaf;
  FUN_00424040(&stack0x00000020,(short *)in_stack_00000020);
  local_44 = (int *)0x0;
  local_40 = 0;
  local_1c.Data1 = 0x21401;
  local_1c.Data2 = 0;
  local_1c.Data3 = 0;
  local_1c.Data4[0] = 0xc0;
  local_1c.Data4[1] = '\0';
  local_1c.Data4[2] = '\0';
  local_1c.Data4[3] = '\0';
  local_1c.Data4[4] = '\0';
  local_1c.Data4[5] = '\0';
  local_1c.Data4[6] = '\0';
  local_1c.Data4[7] = 'F';
  local_2c.Data1 = 0x214f9;
  local_2c.Data2 = 0;
  local_2c.Data3 = 0;
  local_2c.Data4[0] = 0xc0;
  local_2c.Data4[1] = '\0';
  local_2c.Data4[2] = '\0';
  local_2c.Data4[3] = '\0';
  local_2c.Data4[4] = '\0';
  local_2c.Data4[5] = '\0';
  local_2c.Data4[6] = '\0';
  local_2c.Data4[7] = 'F';
  local_3c = 0x10b;
  local_38 = 0;
  local_34 = 0xc0;
  local_30 = 0x46000000;
  psStack_70 = (short *)0x408ff3;
  bVar1 = FUN_004242e0((ushort *)&DAT_00537a40,in_stack_00000020);
  if (CONCAT31(extraout_var,bVar1) != 0) {
    psStack_70 = (short *)0x4091fd;
    FUN_004241c0();
    psStack_70 = (short *)0x409209;
    FUN_00423ff0((short *)param_1);
    psStack_70 = (short *)0x409211;
    iVar3 = FUN_004241e0();
    psStack_70 = (short *)0x40921d;
    FUN_00423e40(&stack0x00000020,iVar3);
  }
  psStack_70 = (short *)0x40900f;
  bVar1 = FUN_004242e0((ushort *)&DAT_00542460,param_3);
  if (CONCAT31(extraout_var_00,bVar1) == 0) {
    psStack_70 = (short *)0x40922d;
    FUN_004241c0();
    psStack_70 = (short *)0x409232;
    FUN_004241c0();
    psStack_70 = (short *)0x409237;
    iVar3 = FUN_004241e0();
    psStack_70 = (short *)0x409247;
    FUN_0041f056(param_1,iVar3);
    psStack_70 = (short *)0x40924f;
    iVar3 = FUN_004241e0();
    psStack_70 = (short *)0x40925b;
    FUN_00423e40(&param_3,iVar3);
  }
  psStack_70 = (short *)0x409023;
  CoInitialize((LPVOID)0x0);
  ppv = &local_44;
  riid = &local_2c;
  piVar6 = (int *)0x1;
  psStack_70 = (short *)0x409052;
  HVar2 = CoCreateInstance(&local_1c,(LPUNKNOWN)0x0,1,riid,ppv);
  if (HVar2 == 0) {
    psStack_70 = (short *)0x409075;
    piVar5 = local_44;
    (**(code **)(*local_44 + 0x50))();
    psStack_70 = param_2;
    piStack_74 = piStack_4c;
    uStack_78 = 0x40908e;
    (**(code **)(*piStack_4c + 0x2c))();
    (**(code **)(*piStack_54 + 0x24))();
    (*(code *)(*ppv)[7])(ppv);
    (**(code **)(*piVar6 + 0x3c))();
    (**(code **)(*piVar5 + 0x34))(piVar5,0);
    (**(code **)(*piStack_74 + 0x44))(piStack_74,local_1c.Data4._4_4_);
    iVar3 = (**(code **)riid->Data1)(riid,&uStack_78,auStack_7c);
    bVar1 = iVar3 == 0;
    if (bVar1) {
      (**(code **)(iRam00000001 + 0x18))(1,local_40,1);
      (**(code **)(*piStack_c + 8))(piStack_c);
    }
    (**(code **)(*piVar6 + 8))(piVar6);
  }
  else {
    bVar1 = false;
  }
  psStack_70 = (short *)0x40918d;
  CoUninitialize();
  psStack_70 = (short *)0x409199;
  uVar4 = FUN_00424120(extraout_ECX,extraout_EDX,param_2);
  psStack_70 = (short *)0x4091a8;
  uVar4 = FUN_00424120(extraout_ECX_00,(int)((ulonglong)uVar4 >> 0x20),param_1);
  psStack_70 = (short *)0x4091b7;
  uVar4 = FUN_00424120(extraout_ECX_01,(int)((ulonglong)uVar4 >> 0x20),param_4);
  psStack_70 = (short *)0x4091c6;
  uVar4 = FUN_00424120(extraout_ECX_02,(int)((ulonglong)uVar4 >> 0x20),param_3);
  psStack_70 = (short *)0x4091d5;
  uVar4 = FUN_00424120(extraout_ECX_03,(int)((ulonglong)uVar4 >> 0x20),local_48);
  psStack_70 = (short *)0x4091e7;
  FUN_00424120(extraout_ECX_04,(int)((ulonglong)uVar4 >> 0x20),in_stack_00000020);
  return bVar1;
}


