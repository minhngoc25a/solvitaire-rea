// Function: FUN_0048b220
// Entry: 0048b220
// Size: 240 bytes
// Thunk: false
// External: false


ulonglong __cdecl FUN_0048b220(int param_1,int param_2,uint param_3)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  
  iVar1 = *(int *)(param_1 + 0x1c);
  puVar2 = *(uint **)(iVar1 + 0x38);
  if (puVar2 == (uint *)0x0) {
    puVar2 = (uint *)(**(code **)(param_1 + 0x20))
                               (*(undefined4 *)(param_1 + 0x28),
                                1 << ((byte)*(undefined4 *)(iVar1 + 0x28) & 0x1f),1);
    *(uint **)(iVar1 + 0x38) = puVar2;
    if (puVar2 == (uint *)0x0) {
      return 1;
    }
  }
  uVar4 = *(uint *)(iVar1 + 0x2c);
  if (uVar4 == 0) {
    uVar4 = 1 << ((byte)*(undefined4 *)(iVar1 + 0x28) & 0x1f);
    *(uint *)(iVar1 + 0x2c) = uVar4;
    *(undefined4 *)(iVar1 + 0x34) = 0;
    *(undefined4 *)(iVar1 + 0x30) = 0;
  }
  if (uVar4 <= param_3) {
    uVar5 = FUN_0044c490(puVar2,(uint *)(param_2 - uVar4),uVar4);
    *(undefined4 *)(iVar1 + 0x30) = *(undefined4 *)(iVar1 + 0x2c);
    *(undefined4 *)(iVar1 + 0x34) = 0;
    return uVar5 & 0xffffffff00000000;
  }
  uVar4 = uVar4 - *(int *)(iVar1 + 0x34);
  if (param_3 < uVar4) {
    uVar4 = param_3;
  }
  uVar5 = FUN_0044c490((uint *)(*(int *)(iVar1 + 0x34) + (int)puVar2),(uint *)(param_2 - param_3),
                       uVar4);
  uVar3 = param_3 - uVar4;
  if (uVar3 != 0) {
    uVar5 = FUN_0044c490(*(uint **)(iVar1 + 0x38),(uint *)(param_2 - uVar3),uVar3);
    *(uint *)(iVar1 + 0x34) = uVar3;
    *(undefined4 *)(iVar1 + 0x30) = *(undefined4 *)(iVar1 + 0x2c);
    return uVar5 & 0xffffffff00000000;
  }
  *(int *)(iVar1 + 0x34) = *(int *)(iVar1 + 0x34) + uVar4;
  if (*(uint *)(iVar1 + 0x34) == *(uint *)(iVar1 + 0x2c)) {
    *(undefined4 *)(iVar1 + 0x34) = 0;
  }
  if (*(uint *)(iVar1 + 0x30) < *(uint *)(iVar1 + 0x2c)) {
    *(uint *)(iVar1 + 0x30) = *(uint *)(iVar1 + 0x30) + uVar4;
  }
  return uVar5 & 0xffffffff00000000;
}


