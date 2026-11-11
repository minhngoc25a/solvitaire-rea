// Function: FUN_00422ec0
// Entry: 00422ec0
// Size: 78 bytes
// Thunk: false
// External: false


void FUN_00422ec0(uint param_1,int param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  uVar3 = ((int)param_1 < 0) - 1 & param_1;
  puVar1 = (undefined4 *)FUN_0044c3e0(uVar3,param_2);
  if (uVar3 != 0) {
    puVar4 = puVar1;
    for (uVar2 = (uVar3 & 0x7fffffff) >> 1; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar4 = 0x200020;
      puVar4 = puVar4 + 1;
    }
    for (uVar2 = (uint)((uVar3 & 1) != 0); uVar2 != 0; uVar2 = uVar2 - 1) {
      *(undefined2 *)puVar4 = 0x20;
      puVar4 = (undefined4 *)((int)puVar4 + 2);
    }
    *(undefined2 *)((int)puVar1 + uVar3 * 2) = 0;
    return;
  }
  *(undefined2 *)puVar1 = 0;
  return;
}


