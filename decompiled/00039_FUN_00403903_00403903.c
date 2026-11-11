// Function: FUN_00403903
// Entry: 00403903
// Size: 234 bytes
// Thunk: false
// External: false


/* WARNING: Unable to track spacebase fully for stack */

void __cdecl FUN_00403903(char *param_1)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  char local_801c [32776];
  undefined4 uStack_14;
  
  uStack_14 = 0x403913;
  uVar2 = FUN_0040b3d0();
  iVar1 = -uVar2;
  pcVar3 = local_801c;
  for (iVar5 = 0x2000; iVar5 != 0; iVar5 = iVar5 + -1) {
    pcVar3[0] = '\0';
    pcVar3[1] = '\0';
    pcVar3[2] = '\0';
    pcVar3[3] = '\0';
    pcVar3 = pcVar3 + 4;
  }
  *(char **)(&stack0xfffffff4 + iVar1) = local_801c;
  *(undefined4 *)(&stack0xfffffff0 + iVar1) = 0xd;
  *(undefined4 *)((int)&uStack_14 + iVar1) = 0x40393d;
  iVar5 = FUN_0040206e(*(uint *)(&stack0xfffffff0 + iVar1),
                       *(undefined1 **)(&stack0xfffffff4 + iVar1));
  if (iVar5 != 0) {
    *(undefined **)(&stack0xfffffff4 + iVar1) = &DAT_0040d349;
    *(undefined1 **)(&stack0xfffffff0 + iVar1) = &DAT_00410c38;
    *(undefined4 *)((int)&uStack_14 + iVar1) = 0x403955;
    strcat(*(char **)(&stack0xfffffff0 + iVar1),*(char **)(&stack0xfffffff4 + iVar1));
    *(char **)(&stack0xfffffff4 + iVar1) = local_801c;
    *(undefined1 **)(&stack0xfffffff0 + iVar1) = &DAT_00410c38;
    *(undefined4 *)((int)&uStack_14 + iVar1) = 0x403965;
    strcat(*(char **)(&stack0xfffffff0 + iVar1),*(char **)(&stack0xfffffff4 + iVar1));
  }
  if (*param_1 == '\0') {
    return;
  }
  *(char **)(&stack0xfffffff4 + iVar1) = param_1;
  *(char **)(&stack0xfffffff0 + iVar1) = local_801c;
  do {
    *(undefined4 *)((int)&uStack_14 + iVar1) = 0x403976;
    strcpy(*(char **)(&stack0xfffffff0 + iVar1),*(char **)(&stack0xfffffff4 + iVar1));
    while( true ) {
      *(char **)(&stack0xfffffff4 + iVar1) = "--l4j-";
      *(char **)(&stack0xfffffff0 + iVar1) = local_801c;
      *(undefined4 *)((int)&uStack_14 + iVar1) = 0x403986;
      pcVar3 = strstr(*(char **)(&stack0xfffffff0 + iVar1),*(char **)(&stack0xfffffff4 + iVar1));
      if (pcVar3 == (char *)0x0) {
        if (local_801c[0] == '\0') {
          return;
        }
        *(undefined **)(&stack0xfffffff4 + iVar1) = &DAT_0040d349;
        *(undefined1 **)(&stack0xfffffff0 + iVar1) = &DAT_00410c38;
        *(undefined4 *)((int)&uStack_14 + iVar1) = 0x4039d2;
        strcat(*(char **)(&stack0xfffffff0 + iVar1),*(char **)(&stack0xfffffff4 + iVar1));
        *(char **)(&stack0xfffffff4 + iVar1) = local_801c;
        *(undefined1 **)(&stack0xfffffff0 + iVar1) = &DAT_00410c38;
        *(undefined4 *)((int)&uStack_14 + iVar1) = 0x4039e2;
        strcat(*(char **)(&stack0xfffffff0 + iVar1),*(char **)(&stack0xfffffff4 + iVar1));
        return;
      }
      *(undefined4 *)(&stack0xfffffff4 + iVar1) = 0x20;
      *(char **)(&stack0xfffffff0 + iVar1) = pcVar3;
      *(undefined4 *)((int)&uStack_14 + iVar1) = 0x40399c;
      pcVar4 = strchr(*(char **)(&stack0xfffffff0 + iVar1),*(int *)(&stack0xfffffff4 + iVar1));
      if ((pcVar4 != (char *)0x0) && (pcVar4[1] != '\0')) break;
      *pcVar3 = '\0';
    }
    *(char **)(&stack0xfffffff4 + iVar1) = pcVar4 + 1;
    *(char **)(&stack0xfffffff0 + iVar1) = pcVar3;
  } while( true );
}


