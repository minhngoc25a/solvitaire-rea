// Function: FUN_0046c140
// Entry: 0046c140
// Size: 96 bytes
// Thunk: false
// External: false


undefined4 __cdecl FUN_0046c140(int param_1,int param_2,char *param_3,uint param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_4 < 0x84) {
    iVar1 = FUN_0046e040(param_1,param_2,param_3,param_4,"too short");
    if (iVar1 == 0) {
      return 0;
    }
  }
  if ((*(uint *)(param_1 + 0x284) != 0) && (*(uint *)(param_1 + 0x284) < param_4)) {
    uVar2 = FUN_0046e040(param_1,param_2,param_3,param_4,"exceeds application limits");
    return uVar2;
  }
  return 1;
}


