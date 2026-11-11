// Function: FUN_004032b9
// Entry: 004032b9
// Size: 153 bytes
// Thunk: false
// External: false


/* WARNING: Unable to track spacebase fully for stack */

BOOL __cdecl FUN_004032b9(char *param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  DWORD DVar4;
  BOOL BVar5;
  int iVar6;
  uint uVar7;
  undefined1 *puVar8;
  char *pcVar9;
  undefined1 local_801b [32775];
  undefined4 uStack_14;
  
  uStack_14 = 0x4032c9;
  uVar3 = FUN_0040b3d0();
  iVar2 = -uVar3;
  puVar8 = local_801b;
  for (iVar6 = 0x7fff; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  *(undefined4 *)(&stack0xfffffff8 + iVar2) = 0x7fff;
  *(undefined1 **)(&stack0xfffffff4 + iVar2) = local_801b;
  *(undefined **)(&stack0xfffffff0 + iVar2) = &DAT_0040d3ac;
  *(undefined4 *)((int)&uStack_14 + iVar2) = 0x4032fa;
  DVar4 = GetEnvironmentVariableA
                    (*(LPCSTR *)(&stack0xfffffff0 + iVar2),*(LPSTR *)(&stack0xfffffff4 + iVar2),
                     *(DWORD *)(&stack0xfffffff8 + iVar2));
  uVar3 = 0xffffffff;
  pcVar9 = param_1;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  uVar7 = 0x7ffe - DVar4;
  BVar5 = 0;
  if (~uVar3 - 1 <= uVar7) {
    *(undefined **)(&stack0xfffffff4 + iVar2) = &DAT_0040d277;
    *(undefined1 **)(&stack0xfffffff0 + iVar2) = local_801b;
    *(undefined4 *)((int)&uStack_14 + iVar2) = 0x403329;
    strcat(*(char **)(&stack0xfffffff0 + iVar2),*(char **)(&stack0xfffffff4 + iVar2));
    *(undefined1 **)(&stack0xfffffff0 + iVar2) = local_801b;
    *(char **)(&stack0xfffffff4 + iVar2) = param_1;
    *(undefined4 *)((int)&uStack_14 + iVar2) = 0x403338;
    strcat(*(char **)(&stack0xfffffff0 + iVar2),*(char **)(&stack0xfffffff4 + iVar2));
    *(undefined1 **)(&stack0xfffffff4 + iVar2) = local_801b;
    *(undefined **)(&stack0xfffffff0 + iVar2) = &DAT_0040d3ac;
    *(undefined4 *)((int)&uStack_14 + iVar2) = 0x403348;
    BVar5 = SetEnvironmentVariableA
                      (*(LPCSTR *)(&stack0xfffffff0 + iVar2),*(LPCSTR *)(&stack0xfffffff4 + iVar2));
    *(uint *)(&stack0xfffffff4 + iVar2) = uVar7;
    *(uint *)(&stack0xfffffff0 + iVar2) = uVar7;
  }
  return BVar5;
}


