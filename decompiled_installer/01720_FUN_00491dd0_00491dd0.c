// Function: FUN_00491dd0
// Entry: 00491dd0
// Size: 184 bytes
// Thunk: false
// External: false


undefined4 __cdecl
FUN_00491dd0(int *param_1,undefined1 *param_2,undefined1 *param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  undefined1 *puVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined4 uVar8;
  
  puVar6 = param_3;
  puVar7 = param_2;
  uVar8 = 0;
  piVar3 = FUN_0048d4d0(param_1,param_3 + param_1[1] + 1);
  if (piVar3 == (int *)0x0) {
    return 0xffffffff;
  }
  iVar5 = *param_1;
  iVar1 = param_1[1];
  iVar4 = FUN_0048f250((uint *)&param_2,puVar7,(uint)puVar6,param_5);
  puVar2 = (undefined1 *)(iVar5 + iVar1);
  while (iVar4 != 0) {
    if (iVar4 < 0) {
      uVar8 = 0xffffffff;
    }
    iVar5 = -iVar4;
    if (-1 < iVar4) {
      iVar5 = iVar4;
    }
    puVar6 = puVar6 + -iVar5;
    puVar7 = puVar7 + iVar5;
    param_3 = puVar2 + 1;
    if (param_2 < (undefined1 *)0x80) {
      *puVar2 = (char)param_2;
    }
    else {
      *puVar2 = 0x3f;
      uVar8 = 0xffffffff;
    }
    iVar4 = FUN_0048f250((uint *)&param_2,puVar7,(uint)puVar6,param_5);
    puVar2 = param_3;
  }
  param_1[1] = (int)puVar2 - *param_1;
  *puVar2 = 0;
  return uVar8;
}


