// Function: FUN_004a3aa0
// Entry: 004a3aa0
// Size: 147 bytes
// Thunk: false
// External: false


void FUN_004a3aa0(int *param_1)

{
  int *piVar1;
  uint uVar2;
  int extraout_ECX;
  int extraout_ECX_00;
  int iVar3;
  int extraout_ECX_01;
  int extraout_EDX;
  int extraout_EDX_00;
  int iVar4;
  int extraout_EDX_01;
  undefined4 local_8 [2];
  
  piVar1 = (int *)param_1[4];
  FUN_0046a600(param_1);
  uVar2 = FUN_0046a560(param_1);
  iVar3 = extraout_ECX;
  iVar4 = extraout_EDX;
  while (uVar2 != 0) {
    if ((*(byte *)(param_1 + 0xb) & 4) == 0) {
      HeapFree(DAT_00542264,0,*(LPVOID *)(uVar2 - 4));
      iVar3 = extraout_ECX_00;
      iVar4 = extraout_EDX_00;
    }
    if (piVar1 != (int *)0x0) {
      FUN_004a3931(iVar3,iVar4,uVar2,piVar1);
    }
    local_8[0] = *(undefined4 *)(uVar2 - 8);
    *param_1 = (int)local_8;
    FUN_00478c4a((int *)param_1[0xe],(int)(uVar2 - 8));
    uVar2 = FUN_0046a560(param_1);
    iVar3 = extraout_ECX_01;
    iVar4 = extraout_EDX_01;
  }
  _memset((void *)param_1[1],0,param_1[9] << 2);
  FUN_0046a600(param_1);
  param_1[10] = 0;
  return;
}


