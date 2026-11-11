// Function: FUN_0041eb2b
// Entry: 0041eb2b
// Size: 49 bytes
// Thunk: false
// External: false


int __cdecl
FUN_0041eb2b(undefined2 ****param_1,int param_2,int param_3,undefined4 *param_4,undefined4 param_5)

{
  uint *puVar1;
  int iVar2;
  
  puVar1 = (uint *)FUN_00417ffc();
  iVar2 = FUN_004543ca(*puVar1 | 1,puVar1[1],param_1,param_2,param_3,param_4,param_5);
  if (iVar2 < 0) {
    iVar2 = -1;
  }
  return iVar2;
}


