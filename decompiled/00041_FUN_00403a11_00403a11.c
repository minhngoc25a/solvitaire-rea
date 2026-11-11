// Function: FUN_00403a11
// Entry: 00403a11
// Size: 309 bytes
// Thunk: false
// External: false


/* WARNING: Unable to track spacebase fully for stack */

undefined4 __cdecl FUN_00403a11(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  BOOL BVar4;
  DWORD DVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 local_8060 [17];
  undefined4 local_801c [8194];
  undefined4 uStack_14;
  
  uStack_14 = 0x403a21;
  uVar3 = FUN_0040b3d0();
  puVar2 = param_2;
  iVar1 = -uVar3;
  puVar8 = &DAT_00418c38;
  for (iVar7 = 4; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  puVar8 = local_8060;
  for (iVar7 = 0x11; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  local_8060[0] = 0x44;
  puVar8 = local_801c;
  for (iVar7 = 0x2000; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  *(undefined **)(&stack0xfffffff4 + iVar1) = &DAT_0040d451;
  *(undefined4 **)(&stack0xfffffff0 + iVar1) = local_801c;
  *(undefined4 *)((int)&uStack_14 + iVar1) = 0x403a6e;
  strcpy(*(char **)(&stack0xfffffff0 + iVar1),*(char **)(&stack0xfffffff4 + iVar1));
  *(undefined **)(&stack0xfffffff4 + iVar1) = &DAT_00410b34;
  *(undefined4 **)(&stack0xfffffff0 + iVar1) = local_801c;
  *(undefined4 *)((int)&uStack_14 + iVar1) = 0x403a7e;
  strcat(*(char **)(&stack0xfffffff0 + iVar1),*(char **)(&stack0xfffffff4 + iVar1));
  *(undefined **)(&stack0xfffffff4 + iVar1) = &DAT_0040d447;
  *(undefined4 **)(&stack0xfffffff0 + iVar1) = local_801c;
  *(undefined4 *)((int)&uStack_14 + iVar1) = 0x403a8e;
  strcat(*(char **)(&stack0xfffffff0 + iVar1),*(char **)(&stack0xfffffff4 + iVar1));
  *(undefined1 **)(&stack0xfffffff4 + iVar1) = &DAT_00410c38;
  *(undefined4 **)(&stack0xfffffff0 + iVar1) = local_801c;
  *(undefined4 *)((int)&uStack_14 + iVar1) = 0x403a9e;
  strcat(*(char **)(&stack0xfffffff0 + iVar1),*(char **)(&stack0xfffffff4 + iVar1));
  *(undefined4 **)(&stack0x00000014 + iVar1) = &DAT_00418c38;
  *(undefined4 **)(&stack0x00000010 + iVar1) = local_8060;
  *(undefined4 *)(&stack0x0000000c + iVar1) = 0;
  *(undefined4 *)((int)&param_2 + iVar1) = 0;
  *(undefined4 *)((int)&param_1 + iVar1) = DAT_00418c48;
  *(undefined4 *)(&stack0x00000000 + iVar1) = 1;
  *(undefined4 *)(&stack0xfffffffc + iVar1) = 0;
  *(undefined4 *)(&stack0xfffffff8 + iVar1) = 0;
  *(undefined4 **)(&stack0xfffffff4 + iVar1) = local_801c;
  *(undefined4 *)(&stack0xfffffff0 + iVar1) = 0;
  *(undefined4 *)((int)&uStack_14 + iVar1) = 0x403aeb;
  BVar4 = CreateProcessA(*(LPCSTR *)(&stack0xfffffff0 + iVar1),*(LPSTR *)(&stack0xfffffff4 + iVar1),
                         *(LPSECURITY_ATTRIBUTES *)(&stack0xfffffff8 + iVar1),
                         *(LPSECURITY_ATTRIBUTES *)(&stack0xfffffffc + iVar1),
                         *(BOOL *)(&stack0x00000000 + iVar1),*(DWORD *)((int)&param_1 + iVar1),
                         *(LPVOID *)((int)&param_2 + iVar1),*(LPCSTR *)(&stack0x0000000c + iVar1),
                         *(LPSTARTUPINFOA *)(&stack0x00000010 + iVar1),
                         *(LPPROCESS_INFORMATION *)(&stack0x00000014 + iVar1));
  if (BVar4 == 0) {
    *puVar2 = 0xffffffff;
    uVar6 = 0;
  }
  else {
    if (param_1 == 0) {
      *puVar2 = 0;
    }
    else {
      *(undefined4 *)(&stack0xfffffff4 + iVar1) = 0xffffffff;
      *(undefined4 *)(&stack0xfffffff0 + iVar1) = DAT_00418c38;
      *(undefined4 *)((int)&uStack_14 + iVar1) = 0x403b0d;
      DVar5 = WaitForSingleObject(*(HANDLE *)(&stack0xfffffff0 + iVar1),
                                  *(DWORD *)(&stack0xfffffff4 + iVar1));
      *(DWORD *)(&stack0xfffffff4 + iVar1) = DVar5;
      *(DWORD *)(&stack0xfffffff0 + iVar1) = DVar5;
      *(undefined4 **)(&stack0xfffffff4 + iVar1) = puVar2;
      *(undefined4 *)(&stack0xfffffff0 + iVar1) = DAT_00418c38;
      *(undefined4 *)((int)&uStack_14 + iVar1) = 0x403b20;
      BVar4 = GetExitCodeProcess(*(HANDLE *)(&stack0xfffffff0 + iVar1),
                                 *(LPDWORD *)(&stack0xfffffff4 + iVar1));
      *(BOOL *)(&stack0xfffffff4 + iVar1) = BVar4;
      *(BOOL *)(&stack0xfffffff0 + iVar1) = BVar4;
      *(undefined4 *)((int)&uStack_14 + iVar1) = 0x403b27;
      FUN_004039ed();
    }
    uVar6 = 1;
  }
  return uVar6;
}


