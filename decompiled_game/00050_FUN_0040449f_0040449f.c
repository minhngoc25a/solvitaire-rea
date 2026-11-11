// Function: FUN_0040449f
// Entry: 0040449f
// Size: 647 bytes
// Thunk: false
// External: false


/* WARNING: Unable to track spacebase fully for stack */

undefined4 __cdecl FUN_0040449f(undefined4 param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  undefined3 extraout_var;
  int iVar7;
  undefined4 *puVar8;
  int local_8228;
  undefined4 local_8224 [65];
  char local_8120;
  char local_811f;
  undefined4 local_801c [8194];
  undefined4 uStack_14;
  
  uStack_14 = 0x4044af;
  uVar3 = FUN_0040b3d0();
  iVar1 = -uVar3;
  if ((DAT_00410024 != 0) && (DAT_00410a2c != 0)) {
    *(int *)(&stack0xfffffff4 + iVar1) = DAT_00410a2c;
    *(char **)(&stack0xfffffff0 + iVar1) = "pathJreSearch()\n";
    *(undefined4 *)((int)&uStack_14 + iVar1) = 0x4044d3;
    fputs(*(char **)(&stack0xfffffff0 + iVar1),*(FILE **)(&stack0xfffffff4 + iVar1));
  }
  puVar8 = local_8224;
  for (iVar7 = 0x41; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  if ((DAT_0041001c == 0) && (DAT_00418c54 != 0)) {
    if (DAT_00410a2c != 0) {
      *(int *)(&stack0xfffffff4 + iVar1) = DAT_00410a2c;
      *(char **)(&stack0xfffffff0 + iVar1) = "JRE:\t\tCannot use 64-bit runtime on 32-bit OS.\n";
      *(undefined4 *)((int)&uStack_14 + iVar1) = 0x404517;
      fputs(*(char **)(&stack0xfffffff0 + iVar1),*(FILE **)(&stack0xfffffff4 + iVar1));
    }
  }
  else {
    *(undefined4 **)(&stack0xfffffff4 + iVar1) = local_8224;
    *(undefined4 *)(&stack0xfffffff0 + iVar1) = 1;
    *(undefined4 *)((int)&uStack_14 + iVar1) = 0x40452c;
    iVar7 = FUN_0040206e(*(uint *)(&stack0xfffffff0 + iVar1),
                         *(undefined1 **)(&stack0xfffffff4 + iVar1));
    if (iVar7 != 0) {
      puVar8 = local_801c;
      for (iVar7 = 0x2000; iVar7 != 0; iVar7 = iVar7 + -1) {
        *puVar8 = 0;
        puVar8 = puVar8 + 1;
      }
      *(undefined4 **)(&stack0xfffffff4 + iVar1) = local_8224;
      *(undefined4 **)(&stack0xfffffff0 + iVar1) = local_801c;
      *(int *)(&stack0xfffffffc + iVar1) = param_2;
      *(undefined4 *)(&stack0xfffffff8 + iVar1) = param_1;
      *(undefined4 *)((int)&uStack_14 + iVar1) = 0x404563;
      FUN_00402a7b(*(char **)(&stack0xfffffff0 + iVar1),*(char **)(&stack0xfffffff4 + iVar1),
                   *(undefined1 **)(&stack0xfffffff8 + iVar1),
                   *(undefined4 *)(&stack0xfffffffc + iVar1));
      if (DAT_00410a2c != 0) {
        *(undefined4 **)(&stack0xfffffff8 + iVar1) = local_801c;
        *(char **)(&stack0xfffffff4 + iVar1) = "JRE paths:\t%s\n";
        *(int *)(&stack0xfffffff0 + iVar1) = DAT_00410a2c;
        *(undefined4 *)((int)&uStack_14 + iVar1) = 0x404580;
        fprintf(*(FILE **)(&stack0xfffffff0 + iVar1),*(char **)(&stack0xfffffff4 + iVar1));
      }
      *(undefined4 **)(&stack0xfffffff0 + iVar1) = local_801c;
      *(undefined **)(&stack0xfffffff4 + iVar1) = &DAT_0040d277;
      *(undefined4 *)((int)&uStack_14 + iVar1) = 0x404596;
      pcVar4 = strtok(*(char **)(&stack0xfffffff0 + iVar1),*(char **)(&stack0xfffffff4 + iVar1));
      while (pcVar4 != (char *)0x0) {
        pcVar5 = &local_8120;
        for (iVar7 = 0x41; iVar7 != 0; iVar7 = iVar7 + -1) {
          pcVar5[0] = '\0';
          pcVar5[1] = '\0';
          pcVar5[2] = '\0';
          pcVar5[3] = '\0';
          pcVar5 = pcVar5 + 4;
        }
        *(undefined4 *)(&stack0xfffffff4 + iVar1) = 0x5c;
        *(char **)(&stack0xfffffff0 + iVar1) = pcVar4;
        *(undefined4 *)((int)&uStack_14 + iVar1) = 0x4045bb;
        pcVar5 = strrchr(*(char **)(&stack0xfffffff0 + iVar1),*(int *)(&stack0xfffffff4 + iVar1));
        *(undefined4 *)(&stack0xfffffff4 + iVar1) = 0x2f;
        *(char **)(&stack0xfffffff0 + iVar1) = pcVar4;
        *(undefined4 *)((int)&uStack_14 + iVar1) = 0x4045cd;
        pcVar6 = strrchr(*(char **)(&stack0xfffffff0 + iVar1),*(int *)(&stack0xfffffff4 + iVar1));
        if (pcVar5 == (char *)0x0) {
LAB_004045f3:
          if (pcVar6 != (char *)0x0) {
            *(undefined **)(&stack0xfffffff4 + iVar1) = &DAT_0040d7ab;
            *(char **)(&stack0xfffffff0 + iVar1) = pcVar6;
            *(undefined4 *)((int)&uStack_14 + iVar1) = 0x40460d;
            iVar7 = _stricmp(*(char **)(&stack0xfffffff0 + iVar1),
                             *(char **)(&stack0xfffffff4 + iVar1));
            if (iVar7 == 0) {
              *(int *)(&stack0xfffffff8 + iVar1) = (int)pcVar6 - (int)pcVar4;
              goto LAB_0040461d;
            }
          }
          *(char **)(&stack0xfffffff4 + iVar1) = pcVar4;
          *(char **)(&stack0xfffffff0 + iVar1) = &local_8120;
          *(undefined4 *)((int)&uStack_14 + iVar1) = 0x404637;
          strcpy(*(char **)(&stack0xfffffff0 + iVar1),*(char **)(&stack0xfffffff4 + iVar1));
        }
        else {
          *(undefined **)(&stack0xfffffff4 + iVar1) = &DAT_0040d3b1;
          *(char **)(&stack0xfffffff0 + iVar1) = pcVar5;
          *(undefined4 *)((int)&uStack_14 + iVar1) = 0x4045e7;
          iVar7 = _stricmp(*(char **)(&stack0xfffffff0 + iVar1),*(char **)(&stack0xfffffff4 + iVar1)
                          );
          if (iVar7 != 0) goto LAB_004045f3;
          *(int *)(&stack0xfffffff8 + iVar1) = (int)pcVar5 - (int)pcVar4;
LAB_0040461d:
          *(char **)(&stack0xfffffff4 + iVar1) = pcVar4;
          *(char **)(&stack0xfffffff0 + iVar1) = &local_8120;
          *(undefined4 *)((int)&uStack_14 + iVar1) = 0x404629;
          strncpy(*(char **)(&stack0xfffffff0 + iVar1),*(char **)(&stack0xfffffff4 + iVar1),
                  *(size_t *)(&stack0xfffffff8 + iVar1));
        }
        *(undefined4 *)(&stack0xfffffff4 + iVar1) = 0x22;
        *(char **)(&stack0xfffffff0 + iVar1) = &local_8120;
        *(undefined4 *)((int)&uStack_14 + iVar1) = 0x404647;
        FUN_0040317d(*(char **)(&stack0xfffffff0 + iVar1),(&stack0xfffffff4)[iVar1]);
        if ((local_8120 == '\\') || ((local_8120 != '\0' && (local_811f == ':')))) {
          *(char **)(&stack0xfffffff4 + iVar1) = &local_8120;
          *(undefined **)(&stack0xfffffff0 + iVar1) = &DAT_00410b34;
          *(undefined4 *)((int)&uStack_14 + iVar1) = 0x40466e;
          strcpy(*(char **)(&stack0xfffffff0 + iVar1),*(char **)(&stack0xfffffff4 + iVar1));
        }
        else {
          *(undefined **)(&stack0xfffffff0 + iVar1) = &DAT_00410b34;
          *(int *)(&stack0xfffffff8 + iVar1) = param_2;
          *(undefined4 *)(&stack0xfffffff4 + iVar1) = param_1;
          *(undefined4 *)((int)&uStack_14 + iVar1) = 0x40468a;
          strncpy(*(char **)(&stack0xfffffff0 + iVar1),*(char **)(&stack0xfffffff4 + iVar1),
                  *(size_t *)(&stack0xfffffff8 + iVar1));
          *(char **)(&stack0xfffffff4 + iVar1) = &local_8120;
          *(undefined **)(&stack0xfffffff0 + iVar1) = &DAT_00410b34;
          (&DAT_00410b34)[param_2] = 0;
          *(undefined4 *)((int)&uStack_14 + iVar1) = 0x4046a4;
          FUN_004025e6(*(char **)(&stack0xfffffff0 + iVar1),*(char **)(&stack0xfffffff4 + iVar1));
        }
        *(undefined **)(&stack0xfffffff0 + iVar1) = &DAT_00410b34;
        *(undefined4 *)((int)&uStack_14 + iVar1) = 0x4046b0;
        iVar7 = FUN_00402657(*(char **)(&stack0xfffffff0 + iVar1));
        if (iVar7 != 0) {
          *(int **)(&stack0xfffffff4 + iVar1) = &local_8228;
          *(undefined **)(&stack0xfffffff0 + iVar1) = &DAT_00410b34;
          *(undefined4 *)((int)&uStack_14 + iVar1) = 0x4046ca;
          bVar2 = FUN_0040425d(*(undefined4 *)(&stack0xfffffff0 + iVar1),
                               *(undefined4 **)(&stack0xfffffff4 + iVar1));
          if (CONCAT31(extraout_var,bVar2) != 0) {
            *(undefined **)(&stack0xfffffff4 + iVar1) = &DAT_00410b34;
            *(undefined **)(&stack0xfffffff0 + iVar1) = &DAT_00418edc;
            DAT_00418c4c = (-(uint)(local_8228 == 0) & 0xffffff00) + 0x101;
            *(undefined4 *)((int)&uStack_14 + iVar1) = 0x4046f7;
            strcpy(*(char **)(&stack0xfffffff0 + iVar1),*(char **)(&stack0xfffffff4 + iVar1));
            return 1;
          }
        }
        *(undefined **)(&stack0xfffffff4 + iVar1) = &DAT_0040d277;
        *(undefined4 *)(&stack0xfffffff0 + iVar1) = 0;
        *(undefined4 *)((int)&uStack_14 + iVar1) = 0x404712;
        pcVar4 = strtok(*(char **)(&stack0xfffffff0 + iVar1),*(char **)(&stack0xfffffff4 + iVar1));
      }
    }
  }
  return 0;
}


