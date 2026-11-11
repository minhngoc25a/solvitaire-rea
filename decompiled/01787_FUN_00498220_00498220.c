// Function: FUN_00498220
// Entry: 00498220
// Size: 148 bytes
// Thunk: false
// External: false


undefined4 __cdecl FUN_00498220(int *param_1,uint *param_2)

{
  short *psVar1;
  short sVar2;
  ushort *puVar3;
  int iVar4;
  short *psVar5;
  uint *puVar6;
  uint uVar7;
  
  if ((param_2 == (uint *)0x0) ||
     (puVar3 = FUN_004811eb((ushort *)param_2,0x5c), puVar3 == (ushort *)0x0)) {
    return 0;
  }
  puVar6 = param_2;
  do {
    uVar7 = *puVar6;
    puVar6 = (uint *)((int)puVar6 + 2);
  } while ((short)uVar7 != 0);
  uVar7 = (int)puVar6 - ((int)param_2 + 2) >> 1;
  iVar4 = FUN_0048d560(param_1,uVar7);
  if (iVar4 == 0) {
    return 0xffffffff;
  }
  param_1[1] = 0;
  FUN_0048d5e0(param_1,param_2,uVar7);
  psVar5 = (short *)*param_1;
  sVar2 = *psVar5;
  while (sVar2 != 0) {
    if (sVar2 == 0x5c) {
      *psVar5 = 0x2f;
    }
    psVar1 = psVar5 + 1;
    psVar5 = psVar5 + 1;
    sVar2 = *psVar1;
  }
  return 1;
}


