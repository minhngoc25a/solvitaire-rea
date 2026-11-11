// Function: FUN_0049ecb0
// Entry: 0049ecb0
// Size: 166 bytes
// Thunk: false
// External: false


int __cdecl FUN_0049ecb0(undefined4 *param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  
  param_1[0xd] = param_1[0xd] + 1;
  uVar2 = (*(code *)param_1[2])(*param_1);
  param_1[10] = uVar2;
  iVar3 = (*(code *)param_1[4])(*param_1,param_1 + 0x1d2);
  iVar3 = iVar3 + (-0x748 - (int)param_1) >> 2;
  *param_2 = iVar3;
  if (iVar3 == 0) {
    return 0;
  }
  iVar1 = param_1[iVar3 + 0x1d0];
  if (iVar1 == param_1[0xc]) {
    uVar6 = param_1[10];
    if (0x111 < uVar6) {
      uVar6 = 0x111;
    }
    iVar4 = (*(code *)param_1[3])(*param_1);
    iVar4 = iVar4 + -1;
    for (pcVar5 = (char *)(iVar4 + iVar1);
        (pcVar5 != (char *)(iVar4 + uVar6) && (*pcVar5 == pcVar5[~param_1[iVar3 + 0x1d1]]));
        pcVar5 = pcVar5 + 1) {
    }
    return (int)pcVar5 - iVar4;
  }
  return iVar1;
}


