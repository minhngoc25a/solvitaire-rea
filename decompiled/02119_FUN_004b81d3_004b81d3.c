// Function: FUN_004b81d3
// Entry: 004b81d3
// Size: 205 bytes
// Thunk: false
// External: false


void FUN_004b81d3(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x94);
  if (param_2 < 0) {
    param_4 = param_4 + param_2;
    param_2 = 0;
  }
  else if (iVar2 < param_2) {
    param_2 = iVar2;
  }
  piVar1 = (int *)(param_1 + 0x98);
  if (param_3 < 0) {
    param_5 = param_5 + param_3;
    param_3 = 0;
  }
  else if (*piVar1 < param_3) {
    param_3 = *piVar1;
  }
  if (iVar2 < param_2 + param_4) {
    param_4 = iVar2 - param_2;
  }
  iVar2 = *piVar1;
  if (iVar2 < param_3 + param_5) {
    param_5 = iVar2 - param_3;
  }
  if (*(int *)(param_1 + 0xe8) == 0) {
    iVar2 = *(int *)(param_1 + 0xcc) * param_3;
  }
  else {
    iVar2 = ((iVar2 - param_3) - param_5) * *(int *)(param_1 + 0xcc);
  }
  *(int *)(param_1 + 200) = iVar2 + *(int *)(param_1 + 0xd4) * param_2 + *(int *)(param_1 + 0xec);
  *(int *)(param_1 + 0x80) = param_4;
  *(int *)(param_1 + 0x8c) = *(int *)(param_1 + 0x9c) - param_2;
  *(int *)(param_1 + 0x84) = param_5;
  *(int *)(param_1 + 0x90) = *(int *)(param_1 + 0xa0) - param_3;
  return;
}


