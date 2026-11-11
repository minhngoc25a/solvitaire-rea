// Function: FUN_0048509e
// Entry: 0048509e
// Size: 164 bytes
// Thunk: false
// External: false


void __cdecl
FUN_0048509e(undefined4 *param_1,char *param_2,uint param_3,uint *******param_4,int param_5,
            int param_6,char param_7,int param_8,int param_9,int *param_10)

{
  int iVar1;
  uint uVar2;
  int local_10 [3];
  
  iVar1 = FUN_004c7a7c((uint *******)*param_1,param_1[1],param_6 + 1,1,local_10,param_4,param_5);
  uVar2 = 0xffffffff;
  if (param_3 != 0xffffffff) {
    uVar2 = (param_3 - (local_10[0] == 0x2d)) - (uint)(0 < param_6);
  }
  iVar1 = FUN_004c78d1((uint *)(param_2 + (uint)(0 < param_6) + (uint)(local_10[0] == 0x2d)),uVar2,
                       param_6 + 1,local_10,iVar1,param_9,param_10);
  if (iVar1 == 0) {
    FUN_00484f4b(param_2,param_3,param_6,param_7,param_8,local_10,0,param_10);
  }
  else {
    *param_2 = '\0';
  }
  return;
}


