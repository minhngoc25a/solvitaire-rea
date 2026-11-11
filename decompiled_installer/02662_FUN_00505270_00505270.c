// Function: FUN_00505270
// Entry: 00505270
// Size: 384 bytes
// Thunk: false
// External: false


int __cdecl FUN_00505270(int *param_1,undefined4 *param_2,int param_3,undefined *param_4)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int local_54 [9];
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
  
  FUN_0050a350();
  if (*param_1 == 0) {
    puVar1 = (undefined4 *)FUN_0049b270(0xa0,param_2);
    *param_1 = (int)puVar1;
    if (puVar1 == (undefined4 *)0x0) {
      return 5;
    }
    param_1[5] = (int)&LAB_00505500;
    param_1[6] = (int)&LAB_005059f0;
    param_1[10] = (int)&LAB_00505a60;
    *puVar1 = 0;
    local_30 = 0;
    uStack_28 = 0xffffffff;
    uStack_24 = 0xffffffff;
    *(undefined4 *)(*param_1 + 4) = 0;
    local_20 = 0;
    uStack_1c = 0;
    *(undefined4 *)(*param_1 + 8) = 0;
    uStack_18 = 0;
    uStack_14 = 0;
    local_10 = 0;
    *(undefined4 *)(*param_1 + 0x10) = 0;
    uStack_c = 0;
    uStack_8 = 0;
    *(undefined4 *)(*param_1 + 0x40) = 0;
    *(undefined4 *)(*param_1 + 0x44) = 0;
    *(undefined4 *)(*param_1 + 100) = 0;
    *(undefined4 *)(*param_1 + 0x68) = 0;
    iVar2 = *param_1;
    *(undefined4 *)(iVar2 + 0x70) = 0;
    *(undefined4 *)(iVar2 + 0x74) = uStack_2c;
    *(undefined4 *)(iVar2 + 0x78) = 0xffffffff;
    *(undefined4 *)(iVar2 + 0x7c) = 0xffffffff;
    *(undefined4 *)(iVar2 + 0x80) = 0;
    *(undefined4 *)(iVar2 + 0x84) = 0;
    *(undefined4 *)(iVar2 + 0x88) = 0;
    *(undefined4 *)(iVar2 + 0x8c) = 0;
    *(undefined4 *)(iVar2 + 0x90) = 0;
    *(undefined4 *)(iVar2 + 0x94) = 0;
    *(undefined4 *)(iVar2 + 0x98) = 0;
    *(undefined4 *)(iVar2 + 0x9c) = uStack_4;
  }
  iVar2 = (*(code *)param_4)(*param_1,param_2,*(undefined4 *)(param_3 + 0xc),local_54);
  if (iVar2 == 0) {
    uVar3 = FUN_00505690((undefined4 *)(*param_1 + 0x10),(int)param_2,local_54);
    if ((char)uVar3 != '\0') {
      return 8;
    }
    uVar4 = FUN_005058c0((int *)(*param_1 + 0x10),param_2,(int)local_54);
    if ((char)uVar4 != '\0') {
      return 5;
    }
    iVar2 = FUN_0049b430((undefined4 *)(*param_1 + 0x70),(int)param_2,(undefined4 *)(param_3 + 0x10)
                        );
  }
  return iVar2;
}


