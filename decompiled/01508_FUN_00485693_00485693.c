// Function: FUN_00485693
// Entry: 00485693
// Size: 150 bytes
// Thunk: false
// External: false


void __cdecl
FUN_00485693(undefined4 *param_1,char *param_2,uint param_3,uint *******param_4,int param_5,
            size_t param_6,int param_7,int *param_8)

{
  int iVar1;
  uint uVar2;
  int local_10;
  int local_c;
  undefined4 uStack_8;
  
  local_10 = 0;
  local_c = 0;
  uStack_8 = 0;
  iVar1 = FUN_004c7a7c((uint *******)*param_1,param_1[1],param_6,0,&local_10,param_4,param_5);
  uVar2 = 0xffffffff;
  if (param_3 != 0xffffffff) {
    uVar2 = param_3 - (local_10 == 0x2d);
  }
  iVar1 = FUN_004c78d1((uint *)(param_2 + (local_10 == 0x2d)),uVar2,local_c + param_6,&local_10,
                       iVar1,param_7,param_8);
  if (iVar1 == 0) {
    FUN_004855a5(param_2,param_3,param_6,&local_10,'\0',param_8);
  }
  else {
    *param_2 = '\0';
  }
  return;
}


