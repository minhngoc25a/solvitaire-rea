// Function: FUN_004883b0
// Entry: 004883b0
// Size: 367 bytes
// Thunk: false
// External: false


uint * __cdecl FUN_004883b0(int param_1,uint *param_2,uint param_3,undefined4 param_4)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  int iVar6;
  uint _Size;
  uint uVar7;
  
  puVar4 = (uint *)0x0;
  while (param_3 != 0) {
    if (((*(int *)(param_1 + 0x40) == *(int *)(param_1 + 0x48)) &&
        (*(int *)(param_1 + 0x44) == *(int *)(param_1 + 0x4c))) && (*(int *)(param_1 + 0x50) == 0))
    {
      *(undefined1 *)(param_1 + 0x54) = 1;
      *(uint *)(param_1 + 0x58) = param_3;
      puVar5 = (uint *)FUN_0049a910(param_1);
      *(undefined4 *)(param_1 + 0x3c) = param_4;
      if (puVar5 == (uint *)0x1) {
        return param_2;
      }
      if ((int)puVar5 < 0) {
        return puVar5;
      }
    }
    iVar2 = *(int *)(param_1 + 0x44);
    uVar7 = *(uint *)(param_1 + 0x40);
    uVar3 = *(uint *)(param_1 + 0x48);
    if ((iVar2 < *(int *)(param_1 + 0x4c)) ||
       ((iVar2 <= *(int *)(param_1 + 0x4c) && (uVar7 < uVar3)))) {
      FUN_00487380(param_1,0x2a,0x524be0);
      return (uint *)0xfffffff6;
    }
    iVar6 = *(int *)(param_1 + 0x4c) + (uint)CARRY4(param_3,uVar3);
    if ((iVar2 < iVar6) || ((_Size = param_3, iVar2 <= iVar6 && (uVar7 <= param_3 + uVar3)))) {
      if ((iVar2 < *(int *)(param_1 + 0x4c)) ||
         ((iVar2 <= *(int *)(param_1 + 0x4c) && (uVar7 <= uVar3)))) {
        _Size = 0;
      }
      else {
        _Size = uVar7 - uVar3;
      }
    }
    _memset(param_2,0,_Size);
    puVar5 = (uint *)(param_1 + 0x48);
    uVar7 = *puVar5;
    *puVar5 = *puVar5 + _Size;
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + (uint)CARRY4(uVar7,_Size);
    param_2 = (uint *)((int)param_2 + _Size);
    puVar4 = (uint *)((int)puVar4 + _Size);
    param_3 = param_3 - _Size;
    if (param_3 == 0) break;
    puVar5 = (uint *)(param_1 + 0x50);
    uVar7 = param_3;
    if (*(uint *)(param_1 + 0x50) <= param_3) {
      uVar7 = *puVar5;
    }
    if (uVar7 != 0) {
      FUN_0044c490(param_2,*(uint **)(param_1 + 0x3c),uVar7);
      *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + uVar7;
      puVar1 = (uint *)(param_1 + 0x40);
      *puVar5 = *puVar5 - uVar7;
      param_3 = param_3 - uVar7;
      puVar5 = (uint *)(param_1 + 0x48);
      uVar3 = *puVar5;
      *puVar5 = *puVar5 + uVar7;
      *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + (uint)CARRY4(uVar3,uVar7);
      uVar3 = *puVar1;
      *puVar1 = *puVar1 + uVar7;
      *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + (uint)CARRY4(uVar3,uVar7);
      param_2 = (uint *)((int)param_2 + uVar7);
      puVar4 = (uint *)((int)puVar4 + uVar7);
    }
  }
  *(undefined1 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  return puVar4;
}


