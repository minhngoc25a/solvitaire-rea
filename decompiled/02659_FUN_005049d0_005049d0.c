// Function: FUN_005049d0
// Entry: 005049d0
// Size: 496 bytes
// Thunk: false
// External: false


int __cdecl FUN_005049d0(int *param_1,undefined4 *param_2,int param_3,undefined *param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint local_3c;
  int iStack_38;
  uint uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 local_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  if (*param_1 == 0) {
    puVar2 = (undefined4 *)FUN_0049b270(0x1070,param_2);
    *param_1 = (int)puVar2;
    if (puVar2 == (undefined4 *)0x0) {
      return 5;
    }
    param_1[5] = (int)&DAT_00504ca0;
    param_1[6] = (int)&LAB_00504dd0;
    *puVar2 = 0;
    *(undefined4 *)(*param_1 + 0x10) = 0;
    iVar3 = *param_1;
    *(undefined4 *)(iVar3 + 0x18) = 0;
    *(undefined4 *)(iVar3 + 0x1c) = 0;
    *(undefined4 *)(iVar3 + 0x20) = 0;
    *(undefined4 *)(iVar3 + 0x24) = 0;
    *(undefined4 *)(iVar3 + 0x28) = 0;
    iVar3 = *param_1;
    local_30 = 0;
    uStack_28 = 0xffffffff;
    uStack_24 = 0xffffffff;
    local_20 = 0;
    uStack_1c = 0;
    *(undefined4 *)(iVar3 + 0x30) = 0;
    *(undefined4 *)(iVar3 + 0x34) = uStack_2c;
    *(undefined4 *)(iVar3 + 0x38) = 0xffffffff;
    *(undefined4 *)(iVar3 + 0x3c) = 0xffffffff;
    uStack_18 = 0;
    uStack_14 = 0;
    local_10 = 0;
    uStack_c = 0;
    *(undefined4 *)(iVar3 + 0x40) = 0;
    *(undefined4 *)(iVar3 + 0x44) = 0;
    *(undefined4 *)(iVar3 + 0x48) = 0;
    *(undefined4 *)(iVar3 + 0x4c) = 0;
    uStack_8 = 0;
    *(undefined4 *)(iVar3 + 0x50) = 0;
    *(undefined4 *)(iVar3 + 0x54) = 0;
    *(undefined4 *)(iVar3 + 0x58) = 0;
    *(undefined4 *)(iVar3 + 0x5c) = uStack_4;
  }
  iVar3 = (*(code *)param_4)(*param_1 + 0x18,param_2,*(undefined4 *)(param_3 + 0xc),&local_3c);
  if (iVar3 == 0) {
    if (local_3c < 0x1000) {
      local_3c = 0x1000;
    }
    else if (0xfffffff0 < local_3c) {
      return 5;
    }
    local_3c = local_3c + 0xf & 0xfffffff0;
    if (((undefined4 *)*param_1)[4] != local_3c) {
      FUN_0049b300(*(LPVOID *)*param_1,(int)param_2);
      uVar4 = FUN_0049b270(local_3c,param_2);
      *(undefined4 *)*param_1 = uVar4;
      if (*(int *)*param_1 == 0) {
        return 5;
      }
      ((int *)*param_1)[4] = local_3c;
    }
    piVar1 = (int *)*param_1;
    piVar1[1] = 0;
    piVar1[2] = 0;
    *(undefined1 *)(piVar1[4] + -1 + *piVar1) = 0;
    *(undefined1 *)(piVar1 + 5) = 0;
    if ((iStack_38 != 0) && (uStack_34 != 0)) {
      uVar5 = local_3c;
      if (uStack_34 < local_3c) {
        uVar5 = uStack_34;
      }
      FUN_0044c490(*(uint **)*param_1,(uint *)((uStack_34 - uVar5) + iStack_38),uVar5);
      *(uint *)(*param_1 + 4) = uVar5;
      *(uint *)(*param_1 + 8) = uVar5;
    }
    *(undefined1 *)(*param_1 + 0x60) = 0;
    *(undefined1 *)(*param_1 + 0x61) = 0;
    *(undefined4 *)(*param_1 + 100) = 0;
    *(undefined4 *)(*param_1 + 0x68) = 0;
    iVar3 = FUN_0049b430((undefined4 *)(*param_1 + 0x30),(int)param_2,(undefined4 *)(param_3 + 0x10)
                        );
    return iVar3;
  }
  return iVar3;
}


