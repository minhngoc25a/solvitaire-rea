// Function: FUN_00489460
// Entry: 00489460
// Size: 143 bytes
// Thunk: false
// External: false


int __cdecl FUN_00489460(int param_1,int param_2)

{
  undefined4 uVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  if (*(int *)(*(int *)(param_1 + 0x10) + 0x94) == param_2) {
    return 0;
  }
  *(int *)(*(int *)(param_1 + 0x10) + 0x94) = param_2;
  iVar3 = *(int *)(param_1 + 0x10);
  uVar1 = *(undefined4 *)(*(int *)(iVar3 + 0xa0) + 0x10 + *(int *)(iVar3 + 0x94) * 0x18);
  if (*(code **)(iVar3 + 0x8c) != (code *)0x0) {
    iVar4 = (**(code **)(iVar3 + 0x8c))(iVar3,*(undefined4 *)(param_1 + 0x18),uVar1);
    *(undefined4 *)(param_1 + 0x18) = uVar1;
    return iVar4;
  }
  if (*(code **)(iVar3 + 0x88) != (code *)0x0) {
    iVar4 = (**(code **)(iVar3 + 0x88))(iVar3,*(undefined4 *)(param_1 + 0x18));
  }
  iVar3 = 0;
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  pcVar2 = *(code **)(*(int *)(param_1 + 0x10) + 0x78);
  if (pcVar2 != (code *)0x0) {
    iVar3 = (*pcVar2)(*(int *)(param_1 + 0x10),uVar1);
  }
  if (iVar4 < iVar3) {
    iVar3 = iVar4;
  }
  return iVar3;
}


