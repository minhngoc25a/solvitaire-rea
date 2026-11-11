// Function: FUN_00463050
// Entry: 00463050
// Size: 254 bytes
// Thunk: false
// External: false


uint __cdecl FUN_00463050(uint param_1,undefined4 *param_2,uint param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  uint unaff_ESI;
  uint unaff_EDI;
  
  uVar2 = param_1;
  iVar1 = **(int **)(param_1 + 0x440);
  if ((*(int *)(iVar1 + 0xe4) == 0) && (*(int *)(iVar1 + 0xe8) == -1)) {
    uVar3 = FUN_00488710(param_1,param_4,&param_1);
    *param_2 = uVar3;
    if ((int)param_1 < 1) {
      FUN_00487380(uVar2,0x2a,0x5288dc);
      return 0xffffffe2;
    }
    if (*(uint *)(iVar1 + 0xb4) < param_1) {
      param_1 = *(uint *)(iVar1 + 0xb4);
    }
    if (param_3 < param_1) {
      param_1 = param_3;
    }
    *(uint *)(iVar1 + 0xe0) = param_1;
    *(int *)(iVar1 + 0xb4) = *(int *)(iVar1 + 0xb4) - param_1;
    return param_1;
  }
  if (*(int *)(iVar1 + 0xac) == 0) {
    FUN_00487380(param_1,0xffffffff,0x526a40);
    return 0xffffffe2;
  }
  if ((*(uint *)(iVar1 + 0xb4) < param_4) &&
     (iVar4 = FUN_00462a40(param_1,param_4,unaff_EDI,unaff_ESI), iVar4 < 0)) {
    return 0xffffffe2;
  }
  if (*(uint *)(iVar1 + 0xb4) < param_3) {
    param_3 = *(uint *)(iVar1 + 0xb4);
  }
  *param_2 = *(undefined4 *)(iVar1 + 0xac);
  *(int *)(iVar1 + 0xac) = *(int *)(iVar1 + 0xac) + param_3;
  *(int *)(iVar1 + 0xb4) = *(int *)(iVar1 + 0xb4) - param_3;
  return param_3;
}


