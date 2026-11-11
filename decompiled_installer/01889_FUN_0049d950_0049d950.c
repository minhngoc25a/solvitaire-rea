// Function: FUN_0049d950
// Entry: 0049d950
// Size: 171 bytes
// Thunk: false
// External: false


undefined4 __cdecl FUN_0049d950(uint *param_1,uint *param_2)

{
  code *pcVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  uVar6 = 0;
  pcVar1 = *(code **)param_1[1];
  puVar4 = (uint *)*param_1;
  puVar3 = param_1;
  while (puVar2 = puVar4, puVar2 != (uint *)0x0) {
    iVar5 = (*pcVar1)(puVar2,param_2);
    if (iVar5 == 0) {
      return 0;
    }
    uVar6 = (uint)(0 < iVar5);
    puVar3 = puVar2;
    puVar4 = (uint *)puVar2[uVar6];
  }
  uVar7 = param_2[2] & 3 | (uint)puVar3;
  uVar8 = uVar7 | 2;
  if (uVar6 == 0) {
    uVar8 = uVar7 & 0xfffffffd;
  }
  if (puVar3 == param_1) {
    param_2[2] = uVar8 & 0xfffffffe;
  }
  else {
    param_2[2] = uVar8 | 1;
    if ((puVar3 != (uint *)0x0) && ((puVar3[2] & 1) != 0)) {
      *param_2 = puVar3[uVar6];
      param_2[1] = puVar3[uVar6];
      puVar3[uVar6] = (uint)param_2;
      FUN_0049dbf0(param_1,(uint)param_2);
      return 1;
    }
  }
  *param_2 = puVar3[uVar6];
  param_2[1] = puVar3[uVar6];
  puVar3[uVar6] = (uint)param_2;
  return 1;
}


