// Function: FUN_004033d0
// Entry: 004033d0
// Size: 227 bytes
// Thunk: false
// External: false


/* WARNING: Unable to track spacebase fully for stack */

void __cdecl FUN_004033d0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined1 *puVar7;
  undefined1 auStack_1001b [32767];
  undefined4 local_801c [8194];
  undefined4 uStack_14;
  
  uStack_14 = 0x4033e0;
  uVar2 = FUN_0040b3d0();
  iVar1 = -uVar2;
  puVar6 = local_801c;
  for (iVar5 = 0x2000; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  puVar7 = auStack_1001b;
  for (iVar5 = 0x7fff; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  *(undefined1 **)(&stack0xfffffff4 + iVar1) = auStack_1001b;
  *(undefined4 *)(&stack0xfffffff0 + iVar1) = 0x13;
  *(undefined4 *)((int)&uStack_14 + iVar1) = 0x403413;
  FUN_0040206e(*(uint *)(&stack0xfffffff0 + iVar1),*(undefined1 **)(&stack0xfffffff4 + iVar1));
  *(undefined1 **)(&stack0xfffffff0 + iVar1) = auStack_1001b;
  *(undefined **)(&stack0xfffffff4 + iVar1) = &DAT_0040d3ce;
  *(undefined4 *)((int)&uStack_14 + iVar1) = 0x403429;
  pcVar3 = strtok(*(char **)(&stack0xfffffff0 + iVar1),*(char **)(&stack0xfffffff4 + iVar1));
  while (pcVar3 != (char *)0x0) {
    *(undefined4 *)(&stack0xfffffff4 + iVar1) = 0x3d;
    *(char **)(&stack0xfffffff0 + iVar1) = pcVar3;
    *(undefined4 *)((int)&uStack_14 + iVar1) = 0x40343f;
    pcVar4 = strchr(*(char **)(&stack0xfffffff0 + iVar1),*(int *)(&stack0xfffffff4 + iVar1));
    *pcVar4 = '\0';
    *(undefined4 *)(&stack0xfffffffc + iVar1) = param_2;
    *(char **)(&stack0xfffffff4 + iVar1) = pcVar4 + 1;
    *(undefined4 **)(&stack0xfffffff0 + iVar1) = local_801c;
    local_801c[0]._0_1_ = 0;
    *(undefined4 *)(&stack0xfffffff8 + iVar1) = param_1;
    *(undefined4 *)((int)&uStack_14 + iVar1) = 0x403464;
    FUN_00402a7b(*(char **)(&stack0xfffffff0 + iVar1),*(char **)(&stack0xfffffff4 + iVar1),
                 *(undefined1 **)(&stack0xfffffff8 + iVar1),
                 *(undefined4 *)(&stack0xfffffffc + iVar1));
    if (DAT_00410a2c != 0) {
      *(undefined4 **)(&stack0xfffffffc + iVar1) = local_801c;
      *(char **)(&stack0xfffffff8 + iVar1) = pcVar3;
      *(char **)(&stack0xfffffff4 + iVar1) = "Set var:\t%s = %s\n";
      *(int *)(&stack0xfffffff0 + iVar1) = DAT_00410a2c;
      *(undefined4 *)((int)&uStack_14 + iVar1) = 0x403485;
      fprintf(*(FILE **)(&stack0xfffffff0 + iVar1),*(char **)(&stack0xfffffff4 + iVar1));
    }
    *(char **)(&stack0xfffffff0 + iVar1) = pcVar3;
    *(undefined4 **)(&stack0xfffffff4 + iVar1) = local_801c;
    *(undefined4 *)((int)&uStack_14 + iVar1) = 0x403491;
    SetEnvironmentVariableA
              (*(LPCSTR *)(&stack0xfffffff0 + iVar1),*(LPCSTR *)(&stack0xfffffff4 + iVar1));
    *(undefined1 **)(&stack0xfffffff4 + iVar1) = puVar7;
    *(undefined1 **)(&stack0xfffffff0 + iVar1) = puVar7;
    *(undefined **)(&stack0xfffffff4 + iVar1) = &DAT_0040d3ce;
    *(undefined4 *)(&stack0xfffffff0 + iVar1) = 0;
    *(undefined4 *)((int)&uStack_14 + iVar1) = 0x4034a7;
    pcVar3 = strtok(*(char **)(&stack0xfffffff0 + iVar1),*(char **)(&stack0xfffffff4 + iVar1));
  }
  return;
}


