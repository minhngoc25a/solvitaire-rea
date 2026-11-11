// Function: FUN_00435300
// Entry: 00435300
// Size: 49 bytes
// Thunk: false
// External: false


int __cdecl FUN_00435300(undefined1 ****param_1,int param_2,int param_3,undefined4 param_4)

{
  uint *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar3 = (undefined4 *)0x0;
  puVar1 = (uint *)FUN_00417ffc();
  iVar2 = FUN_004544af(*puVar1 | 2,puVar1[1],param_1,param_2,param_3,puVar3,param_4);
  if (iVar2 < 0) {
    iVar2 = -1;
  }
  return iVar2;
}


