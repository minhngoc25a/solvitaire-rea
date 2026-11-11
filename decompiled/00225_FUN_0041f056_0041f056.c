// Function: FUN_0041f056
// Entry: 0041f056
// Size: 140 bytes
// Thunk: false
// External: false


void FUN_0041f056(uint *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  short sVar5;
  int iVar6;
  
  puVar3 = (uint *)0x0;
  puVar4 = (uint *)0x0;
  if (param_1 != (uint *)0x0) {
    sVar5 = (short)*param_1;
    if (sVar5 == 0x22) {
      puVar3 = (uint *)((int)param_1 + 2);
      puVar4 = (uint *)((int)param_1 + 2);
    }
    else {
      puVar3 = param_1;
      puVar4 = param_1;
      if (sVar5 == 0) goto LAB_0041f0a4;
    }
    do {
      if (sVar5 == 0x7c) break;
      if ((sVar5 == 0x2f) || (sVar5 == 0x5c)) {
        puVar3 = (uint *)((int)param_1 + 2);
      }
      param_1 = (uint *)((int)param_1 + 2);
      sVar5 = *(short *)param_1;
    } while (sVar5 != 0);
  }
LAB_0041f0a4:
  iVar2 = FUN_004542f0((uint)puVar4);
  iVar6 = (int)puVar3 - (int)puVar4 >> 1;
  puVar3 = (uint *)FUN_0044c3e0(iVar6,param_2);
  if (iVar2 != 0) {
    puVar4 = (uint *)FUN_004542d0(iVar2);
  }
  uVar1 = iVar6 * 2;
  FUN_0044c490(puVar3,puVar4,uVar1);
  *(undefined2 *)(uVar1 + (int)puVar3) = 0;
  return;
}


