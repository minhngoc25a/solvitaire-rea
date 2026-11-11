// Function: FUN_0045e3f0
// Entry: 0045e3f0
// Size: 177 bytes
// Thunk: false
// External: false


void __cdecl FUN_0045e3f0(int *param_1,uint *param_2,uint *param_3,uint param_4)

{
  char *pcVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  char local_4 [4];
  
  puVar3 = param_2;
  do {
    uVar2 = *puVar3;
    puVar3 = (uint *)((int)puVar3 + 1);
  } while ((char)uVar2 != '\0');
  iVar6 = 1;
  iVar7 = 0;
  pcVar5 = (char *)((int)puVar3 + ((param_4 + 3) - ((int)param_2 + 1)));
  for (pcVar1 = pcVar5; 0 < (int)pcVar1; pcVar1 = (char *)((int)pcVar1 / 10)) {
    iVar7 = iVar7 + 1;
    iVar6 = iVar6 * 10;
  }
  local_4[0] = '\0';
  iVar4 = iVar7 + 1;
  if ((int)(pcVar5 + iVar7) < iVar6) {
    iVar4 = iVar7;
  }
  puVar3 = (uint *)FUN_00460460(local_4,(uint)(pcVar5 + iVar4),(int)(pcVar5 + iVar4) >> 0x1f);
  FUN_0048d660(param_1,puVar3);
  FUN_0048cf00(param_1,0x20);
  FUN_0048d660(param_1,param_2);
  FUN_0048cf00(param_1,0x3d);
  FUN_0048cfb0(param_1,param_3,param_4);
  FUN_0048cf00(param_1,10);
  return;
}


