// Function: FUN_0045e500
// Entry: 0045e500
// Size: 154 bytes
// Thunk: false
// External: false


void __cdecl FUN_0045e500(int *param_1,uint *param_2,uint param_3,uint param_4,uint param_5)

{
  uint *puVar1;
  uint uVar2;
  uint *puVar3;
  char *pcVar4;
  char *pcVar5;
  int iVar6;
  char acStack_5 [5];
  
  uVar2 = 0;
  acStack_5[2] = 0;
  pcVar5 = acStack_5 + 2;
  iVar6 = 10;
  do {
    if (uVar2 != 0) goto LAB_0045e540;
    iVar6 = iVar6 + -1;
    uVar2 = param_5 % 10;
    param_5 = param_5 / 10;
  } while (0 < iVar6);
LAB_0045e567:
  puVar1 = (uint *)FUN_00460460(pcVar5,param_3,param_4);
  puVar3 = puVar1;
  do {
    uVar2 = *puVar3;
    puVar3 = (uint *)((int)puVar3 + 1);
  } while ((char)uVar2 != '\0');
  FUN_0045e3f0(param_1,param_2,puVar1,(int)puVar3 - ((int)puVar1 + 1));
  return;
LAB_0045e540:
  do {
    pcVar4 = pcVar5;
    pcVar5 = pcVar4 + -1;
    iVar6 = iVar6 + -1;
    *pcVar5 = "0123456789"[uVar2];
    uVar2 = param_5 % 10;
    param_5 = param_5 / 10;
  } while (0 < iVar6);
  pcVar5 = pcVar4 + -2;
  *pcVar5 = '.';
  goto LAB_0045e567;
}


