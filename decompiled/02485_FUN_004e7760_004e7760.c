// Function: FUN_004e7760
// Entry: 004e7760
// Size: 143 bytes
// Thunk: false
// External: false


int __cdecl
FUN_004e7760(undefined4 param_1,undefined4 param_2,uint *param_3,int param_4,int param_5)

{
  int *piVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  undefined1 *puVar5;
  
  piVar1 = (int *)FUN_0047f911(1,0x10);
  if (piVar1 == (int *)0x0) {
    FUN_00487380((int)param_3,0xc,0x5237ac);
    return -0x1e;
  }
  piVar1[1] = param_4;
  *piVar1 = param_4;
  piVar1[2] = param_4 + param_5;
  piVar1[3] = param_5;
  FUN_00487d30(param_3,0x42ebe0);
  FUN_00487d60(param_3,0x4e78c0);
  FUN_00487d90(param_3,0x4e7800);
  FUN_00487dc0(param_3,0x4e7870);
  puVar5 = &LAB_004e77f0;
  puVar4 = param_3;
  FUN_00487df0(param_3,0x4e77f0);
  puVar3 = param_3;
  FUN_00487e50(param_3,piVar1,puVar4,puVar5);
  iVar2 = FUN_00488040(param_3,puVar3,(uint)piVar1);
  return iVar2;
}


