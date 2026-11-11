// Function: FUN_0041ef7f
// Entry: 0041ef7f
// Size: 215 bytes
// Thunk: false
// External: false


void FUN_0041ef7f(uint *param_1,byte param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  short sVar5;
  int iVar6;
  uint *puVar7;
  
  puVar7 = (uint *)0x0;
  puVar3 = (uint *)0x0;
  if (param_1 != (uint *)0x0) {
    sVar5 = (short)*param_1;
    puVar3 = (uint *)((int)param_1 + 2);
    puVar4 = puVar3;
    puVar7 = param_1;
    if (sVar5 == 0x22) goto LAB_0041efb0;
    while (puVar4 = puVar7, sVar5 != 0) {
LAB_0041efb0:
      if ((sVar5 == 0x2f) || (sVar5 == 0x5c)) {
        puVar4 = puVar3;
      }
      param_1 = (uint *)((int)param_1 + 2);
      puVar3 = (uint *)((int)puVar3 + 2);
      puVar7 = puVar4;
      sVar5 = *(short *)param_1;
    }
    sVar5 = (short)*puVar7;
    puVar3 = puVar7;
    while ((sVar5 != 0 && (sVar5 != 0x22))) {
      puVar3 = (uint *)((int)puVar3 + 2);
      sVar5 = *(short *)puVar3;
    }
    if (((param_2 & 1) != 0) && (puVar4 = puVar3, puVar7 < puVar3)) {
      while ((short)*puVar4 != 0x20) {
        if ((short)*puVar4 == 0x2e) {
          if (puVar4 < (uint *)((int)puVar3 - 2U)) {
            puVar3 = puVar4;
          }
          break;
        }
        puVar4 = (uint *)((int)puVar4 + -2);
        if (puVar4 <= puVar7) break;
      }
    }
  }
  iVar2 = FUN_004542f0((uint)puVar7);
  iVar6 = (int)puVar3 - (int)puVar7 >> 1;
  puVar3 = (uint *)FUN_0044c3e0(iVar6,param_3);
  if (iVar2 != 0) {
    puVar7 = (uint *)FUN_004542d0(iVar2);
  }
  uVar1 = iVar6 * 2;
  FUN_0044c490(puVar3,puVar7,uVar1);
  *(undefined2 *)(uVar1 + (int)puVar3) = 0;
  return;
}


