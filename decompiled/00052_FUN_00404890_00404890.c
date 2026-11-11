// Function: FUN_00404890
// Entry: 00404890
// Size: 587 bytes
// Thunk: false
// External: false


/* WARNING: Unable to track spacebase fully for stack */

undefined4 __cdecl FUN_00404890(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  undefined3 extraout_var;
  int iVar5;
  undefined *puVar6;
  int iVar7;
  undefined4 *puVar8;
  char *pcVar9;
  undefined4 local_8120 [65];
  undefined4 local_801c [8194];
  undefined4 uStack_14;
  
  uStack_14 = 0x4048a0;
  uVar4 = FUN_0040b3d0();
  iVar2 = -uVar4;
  *(undefined4 *)(&stack0xfffffff0 + iVar2) = param_2;
  *(undefined4 *)((int)&uStack_14 + iVar2) = 0x4048ad;
  bVar3 = FUN_00401c58(*(undefined4 *)(&stack0xfffffff0 + iVar2));
  if (CONCAT31(extraout_var,bVar3) != 0) {
    puVar8 = local_8120;
    for (iVar7 = 0x41; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar8 = 0;
      puVar8 = puVar8 + 1;
    }
    *(undefined4 **)(&stack0xfffffff0 + iVar2) = local_8120;
    *(undefined4 *)((int)&uStack_14 + iVar2) = 0x4048d5;
    iVar7 = FUN_004025a0(*(char **)(&stack0xfffffff0 + iVar2));
    if (iVar7 != -1) {
      *(int *)(&stack0xfffffff8 + iVar2) = iVar7;
      *(undefined4 **)(&stack0xfffffff4 + iVar2) = local_8120;
      *(undefined4 *)(&stack0xfffffff0 + iVar2) = param_1;
      *(undefined4 *)((int)&uStack_14 + iVar2) = 0x4048ef;
      iVar5 = FUN_00401d3a(*(undefined4 *)(&stack0xfffffff0 + iVar2),
                           *(undefined4 *)(&stack0xfffffff4 + iVar2),
                           *(undefined4 *)(&stack0xfffffff8 + iVar2));
      if (iVar5 != 0) {
        if (DAT_00410a2c != 0) {
          puVar6 = &DAT_0040d0f1;
          *(char **)(&stack0xfffffff4 + iVar2) = "JNI:\t\t%s\n";
          if (DAT_00410018 == 0) {
            puVar6 = &DAT_0040d0f5;
          }
          *(undefined **)(&stack0xfffffff8 + iVar2) = puVar6;
          *(int *)(&stack0xfffffff0 + iVar2) = DAT_00410a2c;
          *(undefined4 *)((int)&uStack_14 + iVar2) = 0x404925;
          fprintf(*(FILE **)(&stack0xfffffff0 + iVar2),*(char **)(&stack0xfffffff4 + iVar2));
        }
        *(undefined4 *)((int)&uStack_14 + iVar2) = 0x40492a;
        FUN_00401e4d();
        *(undefined1 **)(&stack0xfffffff4 + iVar2) = &DAT_004190e8;
        *(undefined4 *)(&stack0xfffffff0 + iVar2) = 10;
        *(undefined4 *)((int)&uStack_14 + iVar2) = 0x40493e;
        FUN_0040206e(*(uint *)(&stack0xfffffff0 + iVar2),*(undefined1 **)(&stack0xfffffff4 + iVar2))
        ;
        *(undefined1 **)(&stack0xfffffff4 + iVar2) = &DAT_00419568;
        *(undefined4 *)(&stack0xfffffff0 + iVar2) = 0x16;
        *(undefined4 *)((int)&uStack_14 + iVar2) = 0x404952;
        FUN_0040206e(*(uint *)(&stack0xfffffff0 + iVar2),*(undefined1 **)(&stack0xfffffff4 + iVar2))
        ;
        *(undefined **)(&stack0xfffffff4 + iVar2) = &DAT_00419168;
        *(undefined4 *)(&stack0xfffffff0 + iVar2) = 0x65;
        *(undefined4 *)((int)&uStack_14 + iVar2) = 0x404966;
        iVar5 = FUN_0040206e(*(uint *)(&stack0xfffffff0 + iVar2),
                             *(undefined1 **)(&stack0xfffffff4 + iVar2));
        if (iVar5 == 0) {
          if (DAT_00410a2c != 0) {
            *(char **)(&stack0xfffffff8 + iVar2) = "Startup error message not defined.";
            *(char **)(&stack0xfffffff4 + iVar2) = "Error:\t\t%s\n";
            *(int *)(&stack0xfffffff0 + iVar2) = DAT_00410a2c;
            *(undefined4 *)((int)&uStack_14 + iVar2) = 0x404991;
            fprintf(*(FILE **)(&stack0xfffffff0 + iVar2),*(char **)(&stack0xfffffff4 + iVar2));
            return 0;
          }
        }
        else {
          *(undefined4 *)((int)&uStack_14 + iVar2) = 0x40499b;
          iVar5 = FUN_00403001();
          if (iVar5 == 0) {
            return 0xb7;
          }
          *(int *)(&stack0xfffffff4 + iVar2) = iVar7;
          *(undefined4 **)(&stack0xfffffff0 + iVar2) = local_8120;
          *(undefined4 *)((int)&uStack_14 + iVar2) = 0x4049b4;
          FUN_004030d5(*(char **)(&stack0xfffffff0 + iVar2),*(size_t *)(&stack0xfffffff4 + iVar2));
          *(int *)(&stack0xfffffff4 + iVar2) = iVar7;
          *(undefined4 **)(&stack0xfffffff0 + iVar2) = local_8120;
          *(undefined4 *)((int)&uStack_14 + iVar2) = 0x4049c0;
          iVar5 = FUN_00404726(*(undefined4 *)(&stack0xfffffff0 + iVar2),
                               *(int *)(&stack0xfffffff4 + iVar2));
          if (iVar5 != 0) {
            *(undefined4 *)((int)&uStack_14 + iVar2) = 0x4049cd;
            iVar5 = FUN_00403352();
            if (iVar5 != 0) {
              *(int *)(&stack0xfffffff4 + iVar2) = iVar7;
              *(undefined4 **)(&stack0xfffffff0 + iVar2) = local_8120;
              *(undefined4 *)((int)&uStack_14 + iVar2) = 0x4049e7;
              FUN_004033d0(*(undefined4 *)(&stack0xfffffff0 + iVar2),
                           *(undefined4 *)(&stack0xfffffff4 + iVar2));
              *(undefined4 *)(&stack0xfffffff0 + iVar2) = 0x14;
              *(undefined4 *)((int)&uStack_14 + iVar2) = 0x4049f3;
              DAT_00418c48 = FUN_004021ab(*(uint *)(&stack0xfffffff0 + iVar2));
              *(undefined **)(&stack0xfffffff0 + iVar2) = &DAT_00410b34;
              *(undefined4 *)((int)&uStack_14 + iVar2) = 0x404a04;
              FUN_00402629(*(char **)(&stack0xfffffff0 + iVar2));
              *(undefined1 **)(&stack0xfffffff0 + iVar2) = &DAT_00410c38;
              *(undefined4 *)((int)&uStack_14 + iVar2) = 0x404a10;
              FUN_00402e1f(*(char **)(&stack0xfffffff0 + iVar2));
              puVar8 = local_801c;
              for (iVar5 = 0x2000; iVar5 != 0; iVar5 = iVar5 + -1) {
                *puVar8 = 0;
                puVar8 = puVar8 + 1;
              }
              *(undefined4 **)(&stack0xfffffff4 + iVar2) = local_8120;
              *(undefined4 **)(&stack0xfffffff0 + iVar2) = local_801c;
              *(undefined4 *)((int)&uStack_14 + iVar2) = 0x404a2b;
              FUN_00402e9d(*(char **)(&stack0xfffffff0 + iVar2),*(char **)(&stack0xfffffff4 + iVar2)
                          );
              *(int *)(&stack0xfffffffc + iVar2) = iVar7;
              *(undefined4 **)(&stack0xfffffff8 + iVar2) = local_8120;
              *(undefined4 **)(&stack0xfffffff4 + iVar2) = local_801c;
              *(undefined1 **)(&stack0xfffffff0 + iVar2) = &DAT_00410c38;
              *(undefined4 *)((int)&uStack_14 + iVar2) = 0x404a43;
              FUN_00402a7b(*(char **)(&stack0xfffffff0 + iVar2),*(char **)(&stack0xfffffff4 + iVar2)
                           ,*(undefined1 **)(&stack0xfffffff8 + iVar2),
                           *(undefined4 *)(&stack0xfffffffc + iVar2));
              *(int *)(&stack0xfffffff4 + iVar2) = iVar7;
              *(undefined4 **)(&stack0xfffffff0 + iVar2) = local_8120;
              *(undefined4 *)((int)&uStack_14 + iVar2) = 0x404a4f;
              FUN_004034b3(*(undefined4 *)(&stack0xfffffff0 + iVar2),
                           *(undefined4 *)(&stack0xfffffff4 + iVar2));
              *(undefined4 *)(&stack0xfffffff0 + iVar2) = param_1;
              *(undefined4 *)((int)&uStack_14 + iVar2) = 0x404a5a;
              FUN_00403903(*(char **)(&stack0xfffffff0 + iVar2));
              if (DAT_00410a2c != 0) {
                *(undefined **)(&stack0xfffffff8 + iVar2) = &DAT_00410b34;
                *(char **)(&stack0xfffffff4 + iVar2) = "Launcher:\t%s\n";
                *(int *)(&stack0xfffffff0 + iVar2) = DAT_00410a2c;
                *(undefined4 *)((int)&uStack_14 + iVar2) = 0x404a7b;
                fprintf(*(FILE **)(&stack0xfffffff0 + iVar2),*(char **)(&stack0xfffffff4 + iVar2));
              }
              if (DAT_00410a2c != 0) {
                *(undefined1 **)(&stack0xfffffff8 + iVar2) = &DAT_00410c38;
                *(char **)(&stack0xfffffff4 + iVar2) = "Launcher args:\t%s\n";
                *(int *)(&stack0xfffffff0 + iVar2) = DAT_00410a2c;
                *(undefined4 *)((int)&uStack_14 + iVar2) = 0x404a9c;
                fprintf(*(FILE **)(&stack0xfffffff0 + iVar2),*(char **)(&stack0xfffffff4 + iVar2));
              }
              if (DAT_00410a2c != 0) {
                uVar4 = 0xffffffff;
                pcVar9 = &DAT_00410c38;
                do {
                  if (uVar4 == 0) break;
                  uVar4 = uVar4 - 1;
                  cVar1 = *pcVar9;
                  pcVar9 = pcVar9 + 1;
                } while (cVar1 != '\0');
                *(char **)(&stack0xfffffff4 + iVar2) = "Args length:\t%d/32768 chars\n";
                *(int *)(&stack0xfffffff0 + iVar2) = DAT_00410a2c;
                *(uint *)(&stack0xfffffff8 + iVar2) = ~uVar4 - 1;
                *(undefined4 *)((int)&uStack_14 + iVar2) = 0x404ac9;
                fprintf(*(FILE **)(&stack0xfffffff0 + iVar2),*(char **)(&stack0xfffffff4 + iVar2));
              }
              return 1;
            }
          }
        }
      }
    }
  }
  return 0;
}


