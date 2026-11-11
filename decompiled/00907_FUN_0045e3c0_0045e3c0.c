// Function: FUN_0045e3c0
// Entry: 0045e3c0
// Size: 45 bytes
// Thunk: false
// External: false


void __cdecl FUN_0045e3c0(int *param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  uint *puVar2;
  
  puVar2 = param_3;
  do {
    uVar1 = *puVar2;
    puVar2 = (uint *)((int)puVar2 + 1);
  } while ((char)uVar1 != '\0');
  FUN_0045e3f0(param_1,param_2,param_3,(int)puVar2 - ((int)param_3 + 1));
  return;
}


