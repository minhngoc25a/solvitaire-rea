// Function: FUN_00460e84
// Entry: 00460e84
// Size: 100 bytes
// Thunk: false
// External: false


uint * FUN_00460e84(int *param_1,uint *param_2,uint param_3,LPCWSTR param_4)

{
  int *piVar1;
  uint uVar2;
  uint *puVar3;
  undefined4 unaff_EDI;
  uint *puVar4;
  
  if ((param_4 == (LPCWSTR)0x0) || (*param_4 == L'\0')) {
    if (param_1[5] == 0) {
      return (uint *)0xffffffff;
    }
    uVar2 = FUN_0048bcc0(param_1[5]);
    if ((short)uVar2 == 0x4000) {
      return (uint *)0xffffffff;
    }
    piVar1 = (int *)param_1[5];
  }
  else {
    piVar1 = FUN_00461336(param_1,param_4);
  }
  puVar4 = (uint *)0xffffffff;
  if ((piVar1 != (int *)0x0) &&
     (puVar3 = FUN_004883b0(*param_1,param_2,param_3,unaff_EDI), puVar3 != (uint *)0xffffffff)) {
    puVar4 = puVar3;
  }
  return puVar4;
}


