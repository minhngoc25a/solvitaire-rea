// Function: FUN_0045a540
// Entry: 0045a540
// Size: 367 bytes
// Thunk: false
// External: false


int __cdecl FUN_0045a540(int param_1)

{
  char cVar1;
  bool bVar2;
  char *pcVar3;
  undefined3 extraout_var;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  int iVar7;
  
  pcVar3 = (char *)FUN_00488710(param_1,0x200,(uint *)0x0);
  if (pcVar3 == (char *)0x0) {
    return -1;
  }
  if (*pcVar3 == '\0') {
    uVar5 = 0;
    pcVar6 = pcVar3;
    while (cVar1 = *pcVar6, pcVar6 = pcVar6 + 1, cVar1 == '\0') {
      uVar5 = uVar5 + 1;
      if (0x1ff < uVar5) {
        return 10;
      }
    }
  }
  bVar2 = FUN_0045aea0(param_1,(int)pcVar3);
  if (CONCAT31(extraout_var,bVar2) == 0) {
    return 0;
  }
  iVar7 = 0x30;
  if (*(int *)(pcVar3 + 0x101) == 0x61747375) {
    if ((*(short *)(pcVar3 + 0x105) == 0x72) && (*(short *)(pcVar3 + 0x107) == 0x3030)) {
      iVar7 = 0x68;
    }
    if (((*(int *)(pcVar3 + 0x101) == 0x61747375) && (*(short *)(pcVar3 + 0x105) == 0x2072)) &&
       (*(short *)(pcVar3 + 0x107) == 0x20)) {
      iVar7 = iVar7 + 0x38;
    }
  }
  cVar1 = pcVar3[0x9c];
  if (((cVar1 != '\0') && ((cVar1 < '0' || ('9' < cVar1)))) && ((cVar1 < 'A' || ('Z' < cVar1)))) {
    if (cVar1 < 'a') {
      return 0;
    }
    if ('z' < cVar1) {
      return 0;
    }
  }
  iVar4 = FUN_0045d490(pcVar3 + 100,8);
  if ((((iVar4 != 0) && (iVar4 = FUN_0045d490(pcVar3 + 0x6c,8), iVar4 != 0)) &&
      ((iVar4 = FUN_0045d490(pcVar3 + 0x74,8), iVar4 != 0 &&
       (((iVar4 = FUN_0045d490(pcVar3 + 0x88,0xc), iVar4 != 0 &&
         (iVar4 = FUN_0045d490(pcVar3 + 0x7c,0xc), iVar4 != 0)) &&
        (iVar4 = FUN_0045d490(pcVar3 + 0x149,8), iVar4 != 0)))))) &&
     (iVar4 = FUN_0045d490(pcVar3 + 0x151,8), iVar4 != 0)) {
    return iVar7 + 2;
  }
  return 0;
}


