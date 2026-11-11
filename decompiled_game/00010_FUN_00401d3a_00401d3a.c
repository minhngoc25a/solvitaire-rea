// Function: FUN_00401d3a
// Entry: 00401d3a
// Size: 275 bytes
// Thunk: false
// External: false


/* WARNING: Unable to track spacebase fully for stack */

undefined4 __cdecl FUN_00401d3a(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined1 local_801b [32775];
  undefined4 uStack_14;
  
  uStack_14 = 0x401d4a;
  uVar2 = FUN_0040b3d0();
  iVar1 = -uVar2;
  puVar5 = local_801b;
  for (iVar4 = 0x7fff; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  *(undefined4 *)(&stack0xfffffff8 + iVar1) = 0x7fff;
  *(undefined1 **)(&stack0xfffffff4 + iVar1) = local_801b;
  *(char **)(&stack0xfffffff0 + iVar1) = "Launch4j";
  *(undefined4 *)((int)&uStack_14 + iVar1) = 0x401d7f;
  GetEnvironmentVariableA
            (*(LPCSTR *)(&stack0xfffffff0 + iVar1),*(LPSTR *)(&stack0xfffffff4 + iVar1),
             *(DWORD *)(&stack0xfffffff8 + iVar1));
  *(char **)(&stack0xfffffff4 + iVar1) = "--l4j-debug";
  *(undefined4 *)(&stack0xfffffff0 + iVar1) = param_1;
  *(undefined4 *)((int)&uStack_14 + iVar1) = 0x401d92;
  pcVar3 = strstr(*(char **)(&stack0xfffffff0 + iVar1),*(char **)(&stack0xfffffff4 + iVar1));
  if (pcVar3 == (char *)0x0) {
    *(char **)(&stack0xfffffff4 + iVar1) = "debug";
    *(undefined1 **)(&stack0xfffffff0 + iVar1) = local_801b;
    *(undefined4 *)((int)&uStack_14 + iVar1) = 0x401da6;
    pcVar3 = strstr(*(char **)(&stack0xfffffff0 + iVar1),*(char **)(&stack0xfffffff4 + iVar1));
    uVar2 = DAT_00410024;
    if (pcVar3 == (char *)0x0) goto LAB_00401df8;
  }
  *(undefined4 *)(&stack0xfffffff0 + iVar1) = param_2;
  *(undefined4 *)(&stack0xfffffff4 + iVar1) = param_3;
  *(undefined4 *)((int)&uStack_14 + iVar1) = 0x401db9;
  DAT_00410a2c = FUN_00401cc3(*(char **)(&stack0xfffffff0 + iVar1),
                              *(size_t *)(&stack0xfffffff4 + iVar1));
  if (DAT_00410a2c == 0) {
    return 0;
  }
  *(char **)(&stack0xfffffff4 + iVar1) = "--l4j-debug-all";
  *(undefined4 *)(&stack0xfffffff0 + iVar1) = param_1;
  *(undefined4 *)((int)&uStack_14 + iVar1) = 0x401dd2;
  pcVar3 = strstr(*(char **)(&stack0xfffffff0 + iVar1),*(char **)(&stack0xfffffff4 + iVar1));
  uVar2 = 1;
  if (pcVar3 == (char *)0x0) {
    *(char **)(&stack0xfffffff4 + iVar1) = "debug-all";
    *(undefined1 **)(&stack0xfffffff0 + iVar1) = local_801b;
    *(undefined4 *)((int)&uStack_14 + iVar1) = 0x401deb;
    pcVar3 = strstr(*(char **)(&stack0xfffffff0 + iVar1),*(char **)(&stack0xfffffff4 + iVar1));
    uVar2 = (uint)(pcVar3 != (char *)0x0);
  }
LAB_00401df8:
  DAT_00410024 = uVar2;
  if (DAT_00410a2c != 0) {
    *(undefined **)(&stack0xfffffff8 + iVar1) = &DAT_0040d0cd;
    *(char **)(&stack0xfffffff4 + iVar1) = "\n\nVersion:\t%s\n";
    *(int *)(&stack0xfffffff0 + iVar1) = DAT_00410a2c;
    *(undefined4 *)((int)&uStack_14 + iVar1) = 0x401e19;
    fprintf(*(FILE **)(&stack0xfffffff0 + iVar1),*(char **)(&stack0xfffffff4 + iVar1));
  }
  if (DAT_00410a2c != 0) {
    *(undefined4 *)(&stack0xfffffffc + iVar1) = param_1;
    *(undefined4 *)(&stack0xfffffff8 + iVar1) = param_2;
    *(char **)(&stack0xfffffff4 + iVar1) = "CmdLine:\t%s %s\n";
    *(int *)(&stack0xfffffff0 + iVar1) = DAT_00410a2c;
    *(undefined4 *)((int)&uStack_14 + iVar1) = 0x401e3a;
    fprintf(*(FILE **)(&stack0xfffffff0 + iVar1),*(char **)(&stack0xfffffff4 + iVar1));
  }
  return 1;
}


