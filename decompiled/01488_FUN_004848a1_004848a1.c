// Function: FUN_004848a1
// Entry: 004848a1
// Size: 76 bytes
// Thunk: false
// External: false


int __cdecl FUN_004848a1(byte *param_1,WCHAR param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int local_30 [10];
  int local_8;
  
  FUN_004245c7(local_30,(undefined4 *)0x0);
  local_8 = 0;
  piVar4 = local_30;
  uVar1 = ____mb_cur_max_func();
  iVar2 = FUN_004848ed(&local_8,param_1,uVar1,param_2,piVar4);
  iVar3 = local_8;
  if (iVar2 != 0) {
    iVar3 = -1;
  }
  FUN_0042460f(local_30);
  return iVar3;
}


