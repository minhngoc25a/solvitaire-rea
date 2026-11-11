// Function: FUN_004034b3
// Entry: 004034b3
// Size: 1104 bytes
// Thunk: false
// External: false


/* WARNING: Unable to track spacebase fully for stack */

void __cdecl FUN_004034b3(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  undefined3 extraout_var;
  char *pcVar5;
  char *pcVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  int *piVar10;
  char acStack_10464 [260];
  char acStack_10360 [260];
  int iStack_1025c;
  int iStack_10258;
  int iStack_10254;
  int iStack_10250;
  undefined4 uStack_1024c;
  undefined1 auStack_10248 [260];
  int aiStack_10144 [4];
  int iStack_10134;
  int iStack_10130;
  int iStack_1012c;
  int iStack_10128;
  undefined4 uStack_10124;
  undefined1 auStack_10120 [260];
  undefined4 auStack_1001c [8192];
  undefined4 local_801c [8194];
  undefined4 uStack_14;
  
  uStack_14 = 0x4034c3;
  uVar4 = FUN_0040b3d0();
  iVar2 = -uVar4;
  puVar9 = auStack_1001c;
  for (iVar7 = 0x2000; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar9 = 0;
    puVar9 = puVar9 + 1;
  }
  puVar9 = local_801c;
  for (iVar7 = 0x2000; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar9 = 0;
    puVar9 = puVar9 + 1;
  }
  pcVar5 = acStack_10464;
  for (iVar7 = 0x41; iVar7 != 0; iVar7 = iVar7 + -1) {
    pcVar5[0] = '\0';
    pcVar5[1] = '\0';
    pcVar5[2] = '\0';
    pcVar5[3] = '\0';
    pcVar5 = pcVar5 + 4;
  }
  pcVar5 = acStack_10360;
  for (iVar7 = 0x41; iVar7 != 0; iVar7 = iVar7 + -1) {
    pcVar5[0] = '\0';
    pcVar5[1] = '\0';
    pcVar5[2] = '\0';
    pcVar5[3] = '\0';
    pcVar5 = pcVar5 + 4;
  }
  *(undefined4 *)(&stack0xfffffff0 + iVar2) = 0x11;
  *(undefined4 *)((int)&uStack_14 + iVar2) = 0x403518;
  bVar3 = FUN_00402168(*(uint *)(&stack0xfffffff0 + iVar2));
  *(char **)(&stack0xfffffff4 + iVar2) = acStack_10464;
  *(undefined4 *)(&stack0xfffffff0 + iVar2) = 0xe;
  *(undefined4 *)((int)&uStack_14 + iVar2) = 0x40352e;
  FUN_0040206e(*(uint *)(&stack0xfffffff0 + iVar2),*(undefined1 **)(&stack0xfffffff4 + iVar2));
  *(undefined **)(&stack0xfffffff4 + iVar2) = &DAT_00410a30;
  *(undefined4 *)(&stack0xfffffff0 + iVar2) = 0xf;
  *(undefined4 *)((int)&uStack_14 + iVar2) = 0x403542;
  iVar7 = FUN_0040206e(*(uint *)(&stack0xfffffff0 + iVar2),
                       *(undefined1 **)(&stack0xfffffff4 + iVar2));
  if (iVar7 == 0) {
    *(char **)(&stack0xfffffff4 + iVar2) = "-jar \"";
    *(undefined1 **)(&stack0xfffffff0 + iVar2) = &DAT_00410c38;
    if (CONCAT31(extraout_var,bVar3) == 0) {
      *(undefined4 *)((int)&uStack_14 + iVar2) = 0x4038bc;
      strcat(*(char **)(&stack0xfffffff0 + iVar2),*(char **)(&stack0xfffffff4 + iVar2));
      *(undefined4 *)(&stack0xfffffff4 + iVar2) = param_1;
      *(undefined1 **)(&stack0xfffffff0 + iVar2) = &DAT_00410c38;
      *(undefined4 *)(&stack0xfffffff8 + iVar2) = param_2;
      *(undefined4 *)((int)&uStack_14 + iVar2) = 0x4038d6;
      strncat(*(char **)(&stack0xfffffff0 + iVar2),*(char **)(&stack0xfffffff4 + iVar2),
              *(size_t *)(&stack0xfffffff8 + iVar2));
      *(char **)(&stack0xfffffff4 + iVar2) = acStack_10464;
      *(undefined1 **)(&stack0xfffffff0 + iVar2) = &DAT_00410c38;
      *(undefined4 *)((int)&uStack_14 + iVar2) = 0x4038e6;
      FUN_004025e6(*(char **)(&stack0xfffffff0 + iVar2),*(char **)(&stack0xfffffff4 + iVar2));
    }
    else {
      *(undefined4 *)((int)&uStack_14 + iVar2) = 0x4038a5;
      strcat(*(char **)(&stack0xfffffff0 + iVar2),*(char **)(&stack0xfffffff4 + iVar2));
      *(undefined4 *)(&stack0xfffffff4 + iVar2) = param_1;
      *(undefined1 **)(&stack0xfffffff0 + iVar2) = &DAT_00410c38;
      *(undefined4 *)((int)&uStack_14 + iVar2) = 0x4038b5;
      strcat(*(char **)(&stack0xfffffff0 + iVar2),*(char **)(&stack0xfffffff4 + iVar2));
    }
    goto LAB_004038ed;
  }
  if (DAT_00410a2c != 0) {
    *(undefined **)(&stack0xfffffff8 + iVar2) = &DAT_00410a30;
    *(char **)(&stack0xfffffff4 + iVar2) = "Main class:\t%s\n";
    *(int *)(&stack0xfffffff0 + iVar2) = DAT_00410a2c;
    *(undefined4 *)((int)&uStack_14 + iVar2) = 0x40356b;
    fprintf(*(FILE **)(&stack0xfffffff0 + iVar2),*(char **)(&stack0xfffffff4 + iVar2));
  }
  *(undefined4 **)(&stack0xfffffff4 + iVar2) = auStack_1001c;
  *(undefined4 *)(&stack0xfffffff0 + iVar2) = 0x10;
  *(undefined4 *)((int)&uStack_14 + iVar2) = 0x40357b;
  iVar7 = FUN_0040206e(*(uint *)(&stack0xfffffff0 + iVar2),
                       *(undefined1 **)(&stack0xfffffff4 + iVar2));
  if ((iVar7 == 0) && (DAT_00410a2c != 0)) {
    *(int *)(&stack0xfffffff4 + iVar2) = DAT_00410a2c;
    *(char **)(&stack0xfffffff0 + iVar2) = "Info:\t\tClasspath not defined.\n";
    *(undefined4 *)((int)&uStack_14 + iVar2) = 0x403598;
    fputs(*(char **)(&stack0xfffffff0 + iVar2),*(FILE **)(&stack0xfffffff4 + iVar2));
  }
  *(undefined4 *)(&stack0xfffffff8 + iVar2) = param_1;
  *(undefined4 **)(&stack0xfffffff4 + iVar2) = auStack_1001c;
  *(undefined4 *)(&stack0xfffffffc + iVar2) = param_2;
  *(undefined4 **)(&stack0xfffffff0 + iVar2) = local_801c;
  *(undefined4 *)((int)&uStack_14 + iVar2) = 0x4035b8;
  FUN_00402a7b(*(char **)(&stack0xfffffff0 + iVar2),*(char **)(&stack0xfffffff4 + iVar2),
               *(undefined1 **)(&stack0xfffffff8 + iVar2),*(undefined4 *)(&stack0xfffffffc + iVar2))
  ;
  *(char **)(&stack0xfffffff4 + iVar2) = "-classpath \"";
  *(undefined1 **)(&stack0xfffffff0 + iVar2) = &DAT_00410c38;
  *(undefined4 *)((int)&uStack_14 + iVar2) = 0x4035cc;
  strcat(*(char **)(&stack0xfffffff0 + iVar2),*(char **)(&stack0xfffffff4 + iVar2));
  if (CONCAT31(extraout_var,bVar3) == 0) {
    if (acStack_10464[0] != '\0') {
      *(char **)(&stack0xfffffff4 + iVar2) = acStack_10464;
      goto LAB_004035ee;
    }
  }
  else {
    *(undefined4 *)(&stack0xfffffff4 + iVar2) = param_1;
LAB_004035ee:
    *(undefined1 **)(&stack0xfffffff0 + iVar2) = &DAT_00410c38;
    *(undefined4 *)((int)&uStack_14 + iVar2) = 0x4035fa;
    FUN_00402a4e(*(char **)(&stack0xfffffff0 + iVar2),*(char **)(&stack0xfffffff4 + iVar2));
  }
  *(undefined **)(&stack0xfffffff4 + iVar2) = &DAT_0040d277;
  *(undefined4 **)(&stack0xfffffff0 + iVar2) = local_801c;
  while( true ) {
    *(undefined4 *)((int)&uStack_14 + iVar2) = 0x403610;
    pcVar5 = strtok(*(char **)(&stack0xfffffff0 + iVar2),*(char **)(&stack0xfffffff4 + iVar2));
    if (pcVar5 == (char *)0x0) break;
    if (DAT_00410a2c != 0) {
      *(char **)(&stack0xfffffff8 + iVar2) = pcVar5;
      *(char **)(&stack0xfffffff4 + iVar2) = "Add classpath:\t%s\n";
      *(int *)(&stack0xfffffff0 + iVar2) = DAT_00410a2c;
      *(undefined4 *)((int)&uStack_14 + iVar2) = 0x403637;
      fprintf(*(FILE **)(&stack0xfffffff0 + iVar2),*(char **)(&stack0xfffffff4 + iVar2));
    }
    *(undefined **)(&stack0xfffffff4 + iVar2) = &DAT_0040d431;
    *(char **)(&stack0xfffffff0 + iVar2) = pcVar5;
    *(undefined4 *)((int)&uStack_14 + iVar2) = 0x403647;
    pcVar6 = strpbrk(*(char **)(&stack0xfffffff0 + iVar2),*(char **)(&stack0xfffffff4 + iVar2));
    if (pcVar6 == (char *)0x0) {
      *(char **)(&stack0xfffffff4 + iVar2) = pcVar5;
      *(undefined1 **)(&stack0xfffffff0 + iVar2) = &DAT_00410c38;
      *(undefined4 *)((int)&uStack_14 + iVar2) = 0x403842;
      FUN_00402a4e(*(char **)(&stack0xfffffff0 + iVar2),*(char **)(&stack0xfffffff4 + iVar2));
    }
    else {
      *(undefined4 *)(&stack0xfffffff4 + iVar2) = 0x5c;
      *(char **)(&stack0xfffffff0 + iVar2) = pcVar5;
      *(undefined4 *)((int)&uStack_14 + iVar2) = 0x40365f;
      pcVar6 = strrchr(*(char **)(&stack0xfffffff0 + iVar2),*(int *)(&stack0xfffffff4 + iVar2));
      if (pcVar6 == (char *)0x0) {
        pcVar6 = (char *)0x0;
      }
      else {
        pcVar6 = pcVar6 + (1 - (int)pcVar5);
      }
      *(char **)(&stack0xfffffff4 + iVar2) = pcVar5;
      *(char **)(&stack0xfffffff8 + iVar2) = pcVar6;
      *(char **)(&stack0xfffffff0 + iVar2) = acStack_10360;
      acStack_10360[0] = '\0';
      *(undefined4 *)((int)&uStack_14 + iVar2) = 0x403689;
      strncpy(*(char **)(&stack0xfffffff0 + iVar2),*(char **)(&stack0xfffffff4 + iVar2),
              *(size_t *)(&stack0xfffffff8 + iVar2));
      acStack_10360[(int)pcVar6] = '\0';
      *(char **)(&stack0xfffffff0 + iVar2) = pcVar5;
      *(int **)(&stack0xfffffff4 + iVar2) = &iStack_1025c;
      *(undefined4 *)((int)&uStack_14 + iVar2) = 0x4036ac;
      iVar7 = findfirst();
      if (iVar7 == -1) {
        iVar8 = 0x46;
LAB_0040379b:
        piVar10 = aiStack_10144;
        for (; iVar8 != 0; iVar8 = iVar8 + -1) {
          *piVar10 = 0;
          piVar10 = piVar10 + 1;
        }
      }
      else {
        *(undefined4 *)(&stack0xfffffff8 + iVar2) = 0x104;
        *(undefined1 **)(&stack0xfffffff0 + iVar2) = auStack_10120;
        aiStack_10144[0] = iStack_1025c;
        aiStack_10144[3] = iStack_10258 >> 0x1f;
        aiStack_10144[2] = iStack_10258;
        iStack_10134 = iStack_10254;
        iStack_10130 = iStack_10254 >> 0x1f;
        iStack_1012c = iStack_10250;
        iStack_10128 = iStack_10250 >> 0x1f;
        uStack_10124 = uStack_1024c;
        *(undefined1 **)(&stack0xfffffff4 + iVar2) = auStack_10248;
        *(undefined4 *)((int)&uStack_14 + iVar2) = 0x40373a;
        strncpy(*(char **)(&stack0xfffffff0 + iVar2),*(char **)(&stack0xfffffff4 + iVar2),
                *(size_t *)(&stack0xfffffff8 + iVar2));
        do {
          *(undefined1 **)(&stack0xfffffff4 + iVar2) = auStack_10120;
          *(char **)(&stack0xfffffff0 + iVar2) = acStack_10360 + (int)pcVar6;
          *(undefined4 *)((int)&uStack_14 + iVar2) = 0x40374c;
          strcpy(*(char **)(&stack0xfffffff0 + iVar2),*(char **)(&stack0xfffffff4 + iVar2));
          *(char **)(&stack0xfffffff4 + iVar2) = acStack_10360;
          *(undefined1 **)(&stack0xfffffff0 + iVar2) = &DAT_00410c38;
          *(undefined4 *)((int)&uStack_14 + iVar2) = 0x40375c;
          FUN_00402a4e(*(char **)(&stack0xfffffff0 + iVar2),*(char **)(&stack0xfffffff4 + iVar2));
          if (DAT_00410a2c != 0) {
            *(char **)(&stack0xfffffff8 + iVar2) = acStack_10360;
            *(char **)(&stack0xfffffff4 + iVar2) = "      \"      :\t%s\n";
            *(int *)(&stack0xfffffff0 + iVar2) = DAT_00410a2c;
            *(undefined4 *)((int)&uStack_14 + iVar2) = 0x403779;
            fprintf(*(FILE **)(&stack0xfffffff0 + iVar2),*(char **)(&stack0xfffffff4 + iVar2));
          }
          *(int **)(&stack0xfffffff4 + iVar2) = &iStack_1025c;
          *(int *)(&stack0xfffffff0 + iVar2) = iVar7;
          *(undefined4 *)((int)&uStack_14 + iVar2) = 0x40378b;
          iVar8 = findnext();
          if (iVar8 == -1) {
            iVar8 = 0x4a;
            goto LAB_0040379b;
          }
          *(undefined4 *)(&stack0xfffffff8 + iVar2) = 0x104;
          *(undefined1 **)(&stack0xfffffff0 + iVar2) = auStack_10120;
          aiStack_10144[0] = iStack_1025c;
          aiStack_10144[3] = iStack_10258 >> 0x1f;
          aiStack_10144[2] = iStack_10258;
          iStack_10134 = iStack_10254;
          iStack_10130 = iStack_10254 >> 0x1f;
          iStack_1012c = iStack_10250;
          iStack_10128 = iStack_10250 >> 0x1f;
          uStack_10124 = uStack_1024c;
          *(undefined1 **)(&stack0xfffffff4 + iVar2) = auStack_10248;
          *(undefined4 *)((int)&uStack_14 + iVar2) = 0x40381f;
          strncpy(*(char **)(&stack0xfffffff0 + iVar2),*(char **)(&stack0xfffffff4 + iVar2),
                  *(size_t *)(&stack0xfffffff8 + iVar2));
        } while (iVar8 == 0);
      }
      *(int *)(&stack0xfffffff0 + iVar2) = iVar7;
      *(undefined4 *)((int)&uStack_14 + iVar2) = 0x4037a9;
      _findclose(*(intptr_t *)(&stack0xfffffff0 + iVar2));
    }
    *(undefined **)(&stack0xfffffff4 + iVar2) = &DAT_0040d277;
    *(undefined4 *)(&stack0xfffffff0 + iVar2) = 0;
  }
  uVar4 = 0xffffffff;
  pcVar5 = &DAT_00410c38;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  *(undefined **)(&stack0xfffffff4 + iVar2) = &DAT_0040d447;
  *(undefined1 **)(&stack0xfffffff0 + iVar2) = &DAT_00410c38;
  (&DAT_00410c36)[~uVar4] = 0;
  *(undefined4 *)((int)&uStack_14 + iVar2) = 0x40387f;
  strcat(*(char **)(&stack0xfffffff0 + iVar2),*(char **)(&stack0xfffffff4 + iVar2));
LAB_004038ed:
  strcat(*(char **)(&stack0x00010480 + iVar2),*(char **)(&stack0x00010484 + iVar2));
  return;
}


