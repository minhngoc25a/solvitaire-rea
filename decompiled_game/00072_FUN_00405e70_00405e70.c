// Function: FUN_00405e70
// Entry: 00405e70
// Size: 175 bytes
// Thunk: false
// External: false


/* WARNING: Unable to track spacebase fully for stack */

int __cdecl FUN_00405e70(char *param_1,uint param_2,undefined4 param_3,int *param_4)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined4 extraout_ECX;
  char *pcVar4;
  undefined4 uStackY_30;
  char acStack_28 [8];
  undefined1 *local_20;
  
  if ((char *)*param_4 != "glob-1.0-mingw32") {
    uStackY_30 = 0x405e8e;
    FUN_004054d0();
    *param_4 = (int)"glob-1.0-mingw32";
  }
  uStackY_30 = 0x405ea4;
  iVar2 = FUN_00405880(param_3,param_2,(int)param_4);
  if ((iVar2 != 2) || ((param_2 & 0x10) == 0)) {
    return iVar2;
  }
  uStackY_30 = 0x405ec6;
  local_20 = &stack0xffffffd4;
  strlen(param_1);
  uStackY_30 = 0x405ed1;
  uVar3 = FUN_0040b3d0();
  iVar2 = -uVar3;
  pcVar4 = acStack_28 + iVar2;
  do {
    while (cVar1 = *param_1, cVar1 == '\x7f') {
      cVar1 = param_1[1];
      param_1 = param_1 + 2;
      *pcVar4 = cVar1;
      pcVar4 = pcVar4 + 1;
      if (cVar1 == '\0') goto LAB_00405f08;
    }
    param_1 = param_1 + 1;
    *pcVar4 = cVar1;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
LAB_00405f08:
  *(char **)(&stack0xffffffd4 + iVar2) = acStack_28 + iVar2;
  *(undefined4 *)((int)&uStackY_30 + iVar2) = 0x405f10;
  _strdup(*(char **)(&stack0xffffffd4 + iVar2));
  *(undefined4 *)(local_20 + -4) = 0x405f1a;
  FUN_00405820(extraout_ECX,(int)param_4);
  return 2;
}


