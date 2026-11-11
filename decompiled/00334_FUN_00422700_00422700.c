// Function: FUN_00422700
// Entry: 00422700
// Size: 103 bytes
// Thunk: false
// External: false


void FUN_00422700(short *param_1,uint param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  undefined2 *puVar3;
  uint uVar4;
  
  uVar1 = FUN_00422770(param_1);
  uVar4 = ((int)param_2 < 0) - 1 & param_2;
  if ((int)uVar4 < (int)uVar1) {
    uVar1 = uVar4;
  }
  iVar2 = FUN_004542f0((uint)param_1);
  puVar3 = (undefined2 *)FUN_0044c3e0(uVar1,param_3);
  if (iVar2 != 0) {
    param_1 = (short *)FUN_004542d0(iVar2);
  }
  if ((param_1 != (short *)0x0) && (0 < (int)uVar1)) {
    FUN_0047d0c0((int)puVar3,(undefined4 *)param_1,uVar1);
    return;
  }
  *puVar3 = 0;
  return;
}


