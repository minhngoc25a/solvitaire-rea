// Function: FUN_0048da30
// Entry: 0048da30
// Size: 239 bytes
// Thunk: false
// External: false


undefined4 __cdecl FUN_0048da30(int param_1,int *param_2,int *param_3)

{
  byte *pbVar1;
  int *piVar2;
  int *piVar3;
  char *pcVar4;
  UINT UVar5;
  int *piVar6;
  byte *pbVar7;
  
  piVar3 = param_3;
  piVar2 = param_2;
  if ((*(byte *)(param_2 + 0xc) & 2) != 0) {
    *param_3 = param_2[3];
    return 0;
  }
  *param_3 = 0;
  if ((*(byte *)(param_2 + 0xc) & 1) == 0) {
    FUN_0048d920(param_1,param_2,(int *)&param_2);
    if ((*(byte *)(piVar2 + 0xc) & 1) == 0) {
      return 0;
    }
  }
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
  piVar6 = FUN_0048e150(param_1,pbVar7,&DAT_005297a0,(byte *)0x5);
  if (piVar6 != (int *)0x0) {
    piVar2[4] = 0;
    param_2 = (int *)FUN_0048d340(piVar2 + 3,(uint *)*piVar2,piVar2[1],(int)piVar6);
    if (param_1 == 0) {
      FUN_0048e110(piVar6);
    }
    if (param_2 == (int *)0x0) {
      piVar2[0xc] = piVar2[0xc] | 2;
      *piVar3 = piVar2[3];
      return 0;
    }
  }
  return 0xffffffff;
}


