// Function: FUN_004ee480
// Entry: 004ee480
// Size: 56 bytes
// Thunk: false
// External: false


ulonglong __cdecl FUN_004ee480(int *param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  
  puVar1 = (uint *)param_1[0xd];
  uVar3 = (*param_1 - (int)puVar1) - param_1[0x10];
  iVar2 = (uVar3 & 0x7f) + param_1[0x10];
  *param_1 = (int)puVar1 + iVar2;
  uVar4 = FUN_0044c490(puVar1,(uint *)((uVar3 & 0xffffff80) + (int)puVar1),
                       (param_1[3] - param_1[1]) + iVar2);
  return uVar4;
}


