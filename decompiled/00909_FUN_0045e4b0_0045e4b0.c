// Function: FUN_0045e4b0
// Entry: 0045e4b0
// Size: 67 bytes
// Thunk: false
// External: false


void __cdecl FUN_0045e4b0(int *param_1,uint *param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  char local_4 [4];
  
  local_4[0] = '\0';
  puVar2 = (uint *)FUN_00460460(local_4,param_3,param_4);
  puVar3 = puVar2;
  do {
    uVar1 = *puVar3;
    puVar3 = (uint *)((int)puVar3 + 1);
  } while ((char)uVar1 != '\0');
  FUN_0045e3f0(param_1,param_2,puVar2,(int)puVar3 - ((int)puVar2 + 1));
  return;
}


