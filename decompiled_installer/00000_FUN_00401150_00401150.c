// Function: FUN_00401150
// Entry: 00401150
// Size: 769 bytes
// Thunk: false
// External: false


int FUN_00401150(wchar_t *param_1,undefined4 param_2)

{
  int iVar1;
  uint *puVar2;
  SIZE_T SVar3;
  int iVar4;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_EDX;
  undefined8 uVar5;
  short *local_24;
  short *local_20 [4];
  
  FUN_004242b0(param_2);
  FUN_00423f50();
  FUN_00424040(&param_1,param_1);
  local_24 = (short *)0x0;
  local_20[0] = (short *)0x0;
  FUN_00424090(&local_24,(short *)&DAT_00542460);
  FUN_00424090(local_20,(short *)&DAT_00542460);
  FUN_004241c0();
  FUN_004241c0();
  iVar1 = FUN_004241e0();
  FUN_00422e20(param_1,(short *)&DAT_00537ea8,(short *)&DAT_00537c30,iVar1);
  iVar1 = FUN_004241e0();
  FUN_00423e40(&param_1,iVar1);
  iVar1 = 1;
  while( true ) {
    iVar4 = FUN_00422530(param_1,(short *)&DAT_00537c30);
    if (iVar4 + 1 < iVar1) break;
    FUN_004241c0();
    FUN_004241c0();
    iVar4 = FUN_004241e0();
    FUN_00423280(param_1,iVar1,(wchar_t *)&DAT_00537c30,iVar4);
    iVar4 = FUN_004241e0();
    FUN_00423e40(local_20,iVar4);
    FUN_004241c0();
    FUN_004241c0();
    iVar4 = FUN_004241e0();
    FUN_00422e20(local_20[0],(short *)&DAT_00537fb8,(short *)&DAT_00537ea8,iVar4);
    iVar4 = FUN_004241e0();
    FUN_00423e40(local_20,iVar4);
    FUN_004241c0();
    FUN_004241c0();
    iVar4 = FUN_004241e0();
    FUN_00422e20(local_20[0],(short *)&DAT_00537fbc,(short *)&DAT_00537c30,iVar4);
    iVar4 = FUN_004241e0();
    FUN_00423e40(local_20,iVar4);
    puVar2 = FUN_004235c0(0x400);
    SVar3 = FUN_00423700(puVar2);
    FUN_00420130(local_20[0],(byte *)puVar2,SVar3);
    FUN_004241c0();
    FUN_00423ff0(local_24);
    FUN_004241c0();
    FUN_004241c0();
    iVar4 = FUN_004241e0();
    FUN_00423750(puVar2,0xffffffff,iVar4);
    FUN_004241e0();
    FUN_00423ff0((short *)&DAT_00537c30);
    iVar4 = FUN_004241e0();
    FUN_00423e40(&local_24,iVar4);
    FUN_004236b0(puVar2);
    iVar1 = iVar1 + 1;
  }
  FUN_004241c0();
  FUN_004241c0();
  iVar1 = FUN_00422770(local_24);
  iVar4 = FUN_004241e0();
  FUN_004227a0(local_24,1,iVar1 - 1,iVar4);
  iVar1 = FUN_004241e0();
  FUN_00423e40(&local_24,iVar1);
  FUN_004241c0();
  FUN_00423ff0(local_24);
  iVar1 = FUN_00424280();
  uVar5 = FUN_00424120(extraout_ECX,extraout_EDX,param_1);
  uVar5 = FUN_00424120(extraout_ECX_00,(int)((ulonglong)uVar5 >> 0x20),local_24);
  FUN_00424120(extraout_ECX_01,(int)((ulonglong)uVar5 >> 0x20),local_20[0]);
  return iVar1;
}


