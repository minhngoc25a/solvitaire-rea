// Function: FUN_00406aa0
// Entry: 00406aa0
// Size: 246 bytes
// Thunk: false
// External: false


void __cdecl
FUN_00406aa0(undefined4 param_1,undefined4 param_2,uint param_3,undefined4 param_4,uint param_5,
            int *param_6,uint *param_7)

{
  float10 fVar1;
  float10 fVar2;
  uint in_EAX;
  int iVar3;
  uint uVar4;
  undefined4 local_2c;
  undefined4 uStack_28;
  uint uStack_24;
  undefined4 local_20;
  uint local_14;
  undefined4 local_10 [3];
  
  local_2c = param_1;
  uStack_28 = param_2;
  uStack_24._0_2_ = (undefined2)param_3;
  fVar2 = (float10)CONCAT28((undefined2)uStack_24,CONCAT44(param_2,param_1));
  local_20 = param_4;
  fVar1 = (float10)0;
  if (NAN(fVar2)) {
    if (fVar2 == fVar1) {
      local_14 = 4;
      iVar3 = 0;
      uVar4 = 0;
      goto LAB_00406b0a;
    }
    local_14 = 3;
    iVar3 = 0;
  }
  else if (fVar2 != fVar1) {
    if (fVar2 == fVar1) {
      local_14 = 2;
      iVar3 = -0x403d;
    }
    else {
      local_14 = 1;
      iVar3 = (param_3 & 0x7fff) - 0x403e;
    }
  }
  else {
    iVar3 = 0;
    local_14 = 0;
  }
  uVar4 = param_3 & 0x8000;
LAB_00406b0a:
  *param_7 = uVar4;
  uStack_24 = param_3;
  FUN_00408950((int *)&DAT_0040c010,iVar3,(byte *)&local_2c,&local_14,in_EAX,param_5,param_6,
               local_10);
  return;
}


