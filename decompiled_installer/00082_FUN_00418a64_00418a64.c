// Function: FUN_00418a64
// Entry: 00418a64
// Size: 103 bytes
// Thunk: false
// External: false


uint * FUN_00418a64(uint *param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  int iVar4;
  uint *puVar5;
  
  puVar5 = (uint *)0x0;
  puVar2 = (uint *)FUN_0042583b(DAT_00542930,(int)param_1);
  if (puVar2 != (uint *)0x0) {
    puVar3 = FUN_00418903(param_3);
    if ((puVar3 == (uint *)0x0) ||
       (iVar4 = (**(code **)(puVar3[1] + 4))(puVar2,param_2), iVar4 == 0)) {
      if (param_1 != (uint *)0xffffffff) {
        puVar2 = param_1;
      }
      FUN_00425965(DAT_00542930,(int)puVar2);
    }
    else {
      *puVar2 = puVar3[1];
      uVar1 = *puVar3;
      puVar2[3] = 0;
      puVar2[2] = uVar1;
      puVar5 = puVar2;
    }
  }
  return puVar5;
}


