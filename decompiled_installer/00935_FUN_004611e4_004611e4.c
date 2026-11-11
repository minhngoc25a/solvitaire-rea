// Function: FUN_004611e4
// Entry: 004611e4
// Size: 256 bytes
// Thunk: false
// External: false


bool FUN_004611e4(int *param_1,undefined4 param_2,undefined4 param_3,LPCWSTR param_4,int param_5,
                 undefined4 param_6,int param_7)

{
  void *pvVar1;
  uint *puVar2;
  int iVar3;
  bool bVar4;
  uint unaff_retaddr;
  
  bVar4 = false;
  if ((param_1[4] == 1) && (pvVar1 = (void *)FUN_0048bb50(), pvVar1 != (void *)0x0)) {
    if ((*(int *)(param_1[10] + 8) == 1) || (*(int *)(param_1[10] + 8) == 3)) {
      puVar2 = (uint *)FUN_0044e6a0(param_4);
      FUN_0048c710((int)pvVar1,puVar2);
      FUN_0044e5a0(puVar2);
    }
    else {
      FUN_0048c720((int)pvVar1,(uint *)param_4);
    }
    FUN_00494e0a((longlong *)&stack0x00000000);
    FUN_0048c2a0((int)pvVar1,unaff_retaddr,(int)param_1,0);
    FUN_0048c340((int)pvVar1,unaff_retaddr,(int)param_1,0);
    FUN_0048c3e0((int)pvVar1,unaff_retaddr,(int)param_1,0);
    FUN_0048c650((int)pvVar1,unaff_retaddr,(int)param_1,0);
    FUN_0048c7c0((int)pvVar1,param_5,param_5 >> 0x1f);
    FUN_0048c4b0((int)pvVar1,0x8000);
    FUN_0048c730((int)pvVar1,0x1a4);
    FUN_0049a950(*param_1);
    iVar3 = FUN_0049a970(*param_1);
    FUN_0048ba90(pvVar1);
    bVar4 = iVar3 == param_7;
  }
  return bVar4;
}


