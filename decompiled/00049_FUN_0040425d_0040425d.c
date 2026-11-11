// Function: FUN_0040425d
// Entry: 0040425d
// Size: 578 bytes
// Thunk: false
// External: false


/* WARNING: Unable to track spacebase fully for stack */

bool __cdecl FUN_0040425d(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  BOOL BVar4;
  undefined4 uVar5;
  int iVar6;
  char *pcVar7;
  undefined4 *puVar8;
  undefined4 local_8234;
  undefined4 local_8230;
  undefined4 local_822c;
  undefined4 local_8228;
  undefined4 local_8224;
  char local_8220 [128];
  undefined4 local_81a0 [32];
  undefined4 local_8120 [65];
  undefined4 local_801c [8194];
  undefined4 uStack_14;
  
  uStack_14 = 0x40426d;
  uVar3 = FUN_0040b3d0();
  iVar1 = -uVar3;
  local_8234 = 0;
  local_8230 = 0;
  if ((DAT_00410024 != 0) && (DAT_00410a2c != 0)) {
    *(undefined1 **)(&stack0x00000000 + iVar1) = &DAT_00418ddc;
    *(undefined1 **)(&stack0xfffffffc + iVar1) = &DAT_00418d5c;
    *(undefined4 *)(&stack0xfffffff8 + iVar1) = param_1;
    *(char **)(&stack0xfffffff4 + iVar1) = "Check Java Version: %s min=%s max=%s\n";
    *(int *)(&stack0xfffffff0 + iVar1) = DAT_00410a2c;
    *(undefined4 *)((int)&uStack_14 + iVar1) = 0x4042bf;
    fprintf(*(FILE **)(&stack0xfffffff0 + iVar1),*(char **)(&stack0xfffffff4 + iVar1));
  }
  *(undefined4 **)(&stack0xfffffff8 + iVar1) = &local_822c;
  *(undefined4 **)(&stack0xfffffff4 + iVar1) = &local_8230;
  *(undefined4 *)(&stack0xfffffffc + iVar1) = 0;
  *(undefined4 **)(&stack0xfffffff0 + iVar1) = &local_8234;
  local_822c = 0xc;
  local_8224 = 1;
  local_8228 = 0;
  *(undefined4 *)((int)&uStack_14 + iVar1) = 0x404307;
  BVar4 = CreatePipe(*(PHANDLE *)(&stack0xfffffff0 + iVar1),*(PHANDLE *)(&stack0xfffffff4 + iVar1),
                     *(LPSECURITY_ATTRIBUTES *)(&stack0xfffffff8 + iVar1),
                     *(DWORD *)(&stack0xfffffffc + iVar1));
  if (BVar4 == 0) {
    if (DAT_00410a2c != 0) {
      *(int *)(&stack0xfffffff4 + iVar1) = DAT_00410a2c;
      *(char **)(&stack0xfffffff0 + iVar1) = "Cannot create pipe\n";
      *(undefined4 *)((int)&uStack_14 + iVar1) = 0x404327;
      fputs(*(char **)(&stack0xfffffff0 + iVar1),*(FILE **)(&stack0xfffffff4 + iVar1));
    }
  }
  else {
    *(undefined4 *)(&stack0xfffffff8 + iVar1) = 0;
    *(undefined4 *)(&stack0xfffffff4 + iVar1) = 1;
    *(undefined4 *)(&stack0xfffffff0 + iVar1) = local_8234;
    *(undefined4 *)((int)&uStack_14 + iVar1) = 0x40434c;
    BVar4 = SetHandleInformation
                      (*(HANDLE *)(&stack0xfffffff0 + iVar1),*(DWORD *)(&stack0xfffffff4 + iVar1),
                       *(DWORD *)(&stack0xfffffff8 + iVar1));
    if (BVar4 == 0) {
      if (DAT_00410a2c != 0) {
        *(int *)(&stack0xfffffff4 + iVar1) = DAT_00410a2c;
        *(char **)(&stack0xfffffff0 + iVar1) = "Cannot set handle information\n";
        *(undefined4 *)((int)&uStack_14 + iVar1) = 0x40436c;
        fputs(*(char **)(&stack0xfffffff0 + iVar1),*(FILE **)(&stack0xfffffff4 + iVar1));
      }
      *(undefined4 *)(&stack0xfffffff0 + iVar1) = local_8234;
      *(undefined4 *)((int)&uStack_14 + iVar1) = 0x40437a;
      BVar4 = CloseHandle(*(HANDLE *)(&stack0xfffffff0 + iVar1));
      *(BOOL *)(&stack0xfffffff0 + iVar1) = BVar4;
      uVar5 = local_8230;
    }
    else {
      puVar8 = local_801c;
      for (iVar6 = 0x2000; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar8 = 0;
        puVar8 = puVar8 + 1;
      }
      puVar8 = local_8120;
      for (iVar6 = 0x41; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar8 = 0;
        puVar8 = puVar8 + 1;
      }
      *(undefined4 *)(&stack0xfffffff4 + iVar1) = param_1;
      *(undefined4 **)(&stack0xfffffff0 + iVar1) = local_8120;
      *(undefined4 *)((int)&uStack_14 + iVar1) = 0x4043b1;
      strcpy(*(char **)(&stack0xfffffff0 + iVar1),*(char **)(&stack0xfffffff4 + iVar1));
      *(undefined4 **)(&stack0xfffffff0 + iVar1) = local_8120;
      *(undefined4 *)((int)&uStack_14 + iVar1) = 0x4043b9;
      FUN_00402629(*(char **)(&stack0xfffffff0 + iVar1));
      *(undefined4 **)(&stack0xfffffffc + iVar1) = local_8120;
      *(char **)(&stack0xfffffff8 + iVar1) = "\"%s\" -version";
      *(undefined4 *)(&stack0xfffffff4 + iVar1) = 0x8000;
      *(undefined4 **)(&stack0xfffffff0 + iVar1) = local_801c;
      *(undefined4 *)((int)&uStack_14 + iVar1) = 0x4043db;
      FUN_00405f50(*(int *)(&stack0xfffffff0 + iVar1),*(int *)(&stack0xfffffff4 + iVar1),
                   *(char **)(&stack0xfffffff8 + iVar1));
      *(undefined4 **)(&stack0xfffffff0 + iVar1) = local_801c;
      *(undefined4 *)(&stack0xfffffff4 + iVar1) = local_8230;
      *(undefined4 *)((int)&uStack_14 + iVar1) = 0x4043ed;
      BVar4 = FUN_00403cc0(*(LPSTR *)(&stack0xfffffff0 + iVar1),
                           *(HANDLE *)(&stack0xfffffff4 + iVar1));
      if (BVar4 != 0) {
        pcVar7 = local_8220;
        for (iVar6 = 0x20; iVar6 != 0; iVar6 = iVar6 + -1) {
          pcVar7[0] = '\0';
          pcVar7[1] = '\0';
          pcVar7[2] = '\0';
          pcVar7[3] = '\0';
          pcVar7 = pcVar7 + 4;
        }
        puVar8 = local_81a0;
        for (iVar6 = 0x20; iVar6 != 0; iVar6 = iVar6 + -1) {
          *puVar8 = 0;
          puVar8 = puVar8 + 1;
        }
        *(undefined4 **)(&stack0xfffffffc + iVar1) = param_2;
        *(undefined4 *)(&stack0xfffffff8 + iVar1) = 0x80;
        *(char **)(&stack0xfffffff4 + iVar1) = local_8220;
        *(undefined4 *)(&stack0xfffffff0 + iVar1) = local_8234;
        *(undefined4 *)((int)&uStack_14 + iVar1) = 0x40445b;
        FUN_00403b64(*(HANDLE *)(&stack0xfffffff0 + iVar1),*(char **)(&stack0xfffffff4 + iVar1),
                     *(uint *)(&stack0xfffffff8 + iVar1),*(uint **)(&stack0xfffffffc + iVar1));
        *(undefined4 *)(&stack0xfffffff0 + iVar1) = local_8234;
        *(undefined4 *)((int)&uStack_14 + iVar1) = 0x404469;
        CloseHandle(*(HANDLE *)(&stack0xfffffff0 + iVar1));
        *(undefined4 **)(&stack0xfffffff0 + iVar1) = puVar8;
        if (local_8220[0] == '\0') {
          return false;
        }
        *(char **)(&stack0xfffffff4 + iVar1) = local_8220;
        *(undefined4 **)(&stack0xfffffff0 + iVar1) = local_81a0;
        *(undefined4 *)((int)&uStack_14 + iVar1) = 0x404489;
        FUN_004023b8(*(char **)(&stack0xfffffff0 + iVar1),*(char **)(&stack0xfffffff4 + iVar1));
        uVar5 = *param_2;
        *(undefined4 **)(&stack0xfffffff0 + iVar1) = local_81a0;
        *(undefined4 *)(&stack0xfffffff4 + iVar1) = uVar5;
        *(undefined4 *)((int)&uStack_14 + iVar1) = 0x404497;
        bVar2 = FUN_00403dc7(*(char **)(&stack0xfffffff0 + iVar1),*(int *)(&stack0xfffffff4 + iVar1)
                            );
        return bVar2;
      }
      uVar5 = local_8234;
      if (DAT_00410a2c != 0) {
        *(int *)(&stack0xfffffff4 + iVar1) = DAT_00410a2c;
        *(char **)(&stack0xfffffff0 + iVar1) = "Cannot run java(w) -version\n";
        *(undefined4 *)((int)&uStack_14 + iVar1) = 0x40440a;
        fputs(*(char **)(&stack0xfffffff0 + iVar1),*(FILE **)(&stack0xfffffff4 + iVar1));
        uVar5 = local_8234;
      }
    }
    *(undefined4 *)(&stack0xfffffff0 + iVar1) = uVar5;
    *(undefined4 *)((int)&uStack_14 + iVar1) = 0x404418;
    BVar4 = CloseHandle(*(HANDLE *)(&stack0xfffffff0 + iVar1));
    *(BOOL *)(&stack0xfffffff0 + iVar1) = BVar4;
  }
  return false;
}


