// Function: FUN_00485729
// Entry: 00485729
// Size: 207 bytes
// Thunk: false
// External: false


void __cdecl
FUN_00485729(undefined4 *param_1,char *param_2,uint param_3,uint *******param_4,int param_5,
            size_t param_6,char param_7,int param_8,int param_9,int *param_10)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  bool bVar5;
  int local_18;
  int local_14;
  undefined4 uStack_10;
  int local_c;
  int local_8;
  
  local_18 = 0;
  local_14 = 0;
  uStack_10 = 0;
  local_8 = FUN_004c7a7c((uint *******)*param_1,param_1[1],param_6,0,&local_18,param_4,param_5);
  bVar5 = local_18 == 0x2d;
  local_c = local_14 + -1;
  uVar2 = 0xffffffff;
  if (param_3 != 0xffffffff) {
    uVar2 = param_3 - bVar5;
  }
  iVar3 = FUN_004c78d1((uint *)(param_2 + bVar5),uVar2,param_6,&local_18,local_8,param_9,param_10);
  if (iVar3 == 0) {
    iVar3 = local_14 + -1;
    if ((iVar3 < -4) || ((int)param_6 <= iVar3)) {
      FUN_00484f4b(param_2,param_3,param_6,param_7,param_8,&local_18,1,param_10);
    }
    else {
      puVar1 = (uint *)(param_2 + bVar5);
      if (local_c < iVar3) {
        do {
          puVar4 = puVar1;
          puVar1 = (uint *)((int)puVar4 + 1);
        } while ((char)*puVar4 != '\0');
        *(undefined1 *)((int)puVar4 + -1) = 0;
      }
      FUN_004855a5(param_2,param_3,param_6,&local_18,'\x01',param_10);
    }
  }
  else {
    *param_2 = '\0';
  }
  return;
}


