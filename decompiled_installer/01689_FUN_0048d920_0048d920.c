// Function: FUN_0048d920
// Entry: 0048d920
// Size: 262 bytes
// Thunk: false
// External: false


undefined4 __cdecl FUN_0048d920(int param_1,int *param_2,int *param_3)

{
  byte *pbVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  UINT UVar5;
  int *piVar6;
  byte *pbVar7;
  
  uVar2 = 0;
  if ((*(byte *)(param_2 + 0xc) & 1) != 0) {
    *param_3 = *param_2;
    return 0;
  }
  *param_3 = 0;
  if ((*(byte *)(param_2 + 0xc) & 4) != 0) {
    param_2[1] = 0;
    iVar3 = FUN_0048e8e0(param_2,(LPCWSTR)param_2[6],param_2[7],0);
    *param_3 = *param_2;
    if (iVar3 == 0) {
      param_2[0xc] = param_2[0xc] | 1;
      return 0;
    }
    uVar2 = 0xffffffff;
  }
  if ((*(byte *)(param_2 + 0xc) & 2) != 0) {
    param_2[1] = 0;
    if (param_1 == 0) {
      pbVar7 = &DAT_005236fc;
    }
    else {
      pbVar1 = *(byte **)(param_1 + 0x2c);
      if (((pbVar1 == (byte *)0x0) || (pbVar7 = pbVar1, *pbVar1 == 0)) &&
         (pbVar7 = &DAT_005236fc, pbVar1 == (byte *)0x0)) {
        pcVar4 = FUN_004894ef("");
        *(char **)(param_1 + 0x2c) = pcVar4;
        UVar5 = FUN_0048e4b0();
        *(UINT *)(param_1 + 0x30) = UVar5;
        UVar5 = FUN_0048e540();
        *(UINT *)(param_1 + 0x34) = UVar5;
      }
    }
    piVar6 = FUN_0048e150(param_1,&DAT_005297a0,pbVar7,(byte *)0x6);
    if (piVar6 != (int *)0x0) {
      param_2[1] = 0;
      iVar3 = FUN_0048d340(param_2,(uint *)param_2[3],param_2[4],(int)piVar6);
      if (param_1 == 0) {
        FUN_0048e110(piVar6);
      }
      *param_3 = *param_2;
      if (iVar3 == 0) {
        param_2[0xc] = param_2[0xc] | 1;
        return 0;
      }
    }
    uVar2 = 0xffffffff;
  }
  return uVar2;
}


