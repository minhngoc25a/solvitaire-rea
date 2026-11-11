// Function: FUN_00402a7b
// Entry: 00402a7b
// Size: 595 bytes
// Thunk: false
// External: false


/* WARNING: Unable to track spacebase fully for stack */

undefined4 __cdecl FUN_00402a7b(char *param_1,char *param_2,undefined1 *param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  DWORD DVar6;
  char *pcVar7;
  undefined1 *puVar8;
  int iVar9;
  char local_809b [128];
  undefined1 local_801b [32775];
  undefined4 uStack_14;
  
  uStack_14 = 0x402a8b;
  uVar3 = FUN_0040b3d0();
  iVar2 = -uVar3;
  pcVar4 = local_809b;
  for (iVar9 = 0x20; iVar9 != 0; iVar9 = iVar9 + -1) {
    pcVar4[0] = '\0';
    pcVar4[1] = '\0';
    pcVar4[2] = '\0';
    pcVar4[3] = '\0';
    pcVar4 = pcVar4 + 4;
  }
  puVar8 = local_801b;
  for (iVar9 = 0x7fff; iVar9 != 0; iVar9 = iVar9 + -1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  do {
    if (*param_2 == '\0') {
      return 1;
    }
    *(char **)(&stack0xfffffff0 + iVar2) = param_2;
    *(undefined4 *)(&stack0xfffffff4 + iVar2) = 0x25;
    *(undefined4 *)((int)&uStack_14 + iVar2) = 0x402ad3;
    pcVar4 = strchr(*(char **)(&stack0xfffffff0 + iVar2),*(int *)(&stack0xfffffff4 + iVar2));
    if (pcVar4 == (char *)0x0) {
      *(char **)(&stack0xfffffff4 + iVar2) = param_2;
      *(char **)(&stack0xfffffff0 + iVar2) = param_1;
      *(undefined4 *)((int)&uStack_14 + iVar2) = 0x402cbd;
      strcat(*(char **)(&stack0xfffffff0 + iVar2),*(char **)(&stack0xfffffff4 + iVar2));
      return 1;
    }
    *(undefined4 *)(&stack0xfffffff4 + iVar2) = 0x25;
    *(char **)(&stack0xfffffff0 + iVar2) = pcVar4 + 1;
    *(undefined4 *)((int)&uStack_14 + iVar2) = 0x402b02;
    pcVar5 = strchr(*(char **)(&stack0xfffffff0 + iVar2),*(int *)(&stack0xfffffff4 + iVar2));
    if (pcVar5 == (char *)0x0) {
      return 0;
    }
    *(char **)(&stack0xfffffff0 + iVar2) = param_1;
    *(int *)(&stack0xfffffff8 + iVar2) = (int)pcVar4 - (int)param_2;
    *(char **)(&stack0xfffffff4 + iVar2) = param_2;
    *(undefined4 *)((int)&uStack_14 + iVar2) = 0x402b2a;
    strncat(*(char **)(&stack0xfffffff0 + iVar2),*(char **)(&stack0xfffffff4 + iVar2),
            *(size_t *)(&stack0xfffffff8 + iVar2));
    *(char **)(&stack0xfffffff0 + iVar2) = local_809b;
    local_809b[0] = '\0';
    *(char **)(&stack0xfffffff8 + iVar2) = pcVar5 + (-1 - (int)pcVar4);
    *(char **)(&stack0xfffffff4 + iVar2) = pcVar4 + 1;
    *(undefined4 *)((int)&uStack_14 + iVar2) = 0x402b52;
    strncat(*(char **)(&stack0xfffffff0 + iVar2),*(char **)(&stack0xfffffff4 + iVar2),
            *(size_t *)(&stack0xfffffff8 + iVar2));
    uVar3 = 0xffffffff;
    pcVar4 = param_1;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    *(char **)(&stack0xfffffff4 + iVar2) = "EXEDIR";
    *(char **)(&stack0xfffffff0 + iVar2) = local_809b;
    pcVar4 = param_1 + (~uVar3 - 1);
    *(undefined4 *)((int)&uStack_14 + iVar2) = 0x402b6f;
    iVar9 = strcmp(*(char **)(&stack0xfffffff0 + iVar2),*(char **)(&stack0xfffffff4 + iVar2));
    if (iVar9 == 0) {
      *(char **)(&stack0xfffffff0 + iVar2) = param_1;
      *(undefined4 *)(&stack0xfffffff8 + iVar2) = param_4;
      *(undefined1 **)(&stack0xfffffff4 + iVar2) = param_3;
      *(undefined4 *)((int)&uStack_14 + iVar2) = 0x402b89;
      strncat(*(char **)(&stack0xfffffff0 + iVar2),*(char **)(&stack0xfffffff4 + iVar2),
              *(size_t *)(&stack0xfffffff8 + iVar2));
    }
    else {
      *(char **)(&stack0xfffffff4 + iVar2) = "EXEFILE";
      *(char **)(&stack0xfffffff0 + iVar2) = local_809b;
      *(undefined4 *)((int)&uStack_14 + iVar2) = 0x402b9e;
      iVar9 = strcmp(*(char **)(&stack0xfffffff0 + iVar2),*(char **)(&stack0xfffffff4 + iVar2));
      puVar8 = param_3;
      if (iVar9 == 0) {
LAB_00402c78:
        *(undefined1 **)(&stack0xfffffff4 + iVar2) = puVar8;
      }
      else {
        *(undefined **)(&stack0xfffffff4 + iVar2) = &DAT_0040d288;
        *(char **)(&stack0xfffffff0 + iVar2) = local_809b;
        *(undefined4 *)((int)&uStack_14 + iVar2) = 0x402bba;
        iVar9 = strcmp(*(char **)(&stack0xfffffff0 + iVar2),*(char **)(&stack0xfffffff4 + iVar2));
        if (iVar9 == 0) {
          *(char **)(&stack0xfffffff4 + iVar2) = pcVar4;
          *(undefined4 *)(&stack0xfffffff0 + iVar2) = 0x104;
          *(undefined4 *)((int)&uStack_14 + iVar2) = 0x402bce;
          DVar6 = GetCurrentDirectoryA
                            (*(DWORD *)(&stack0xfffffff0 + iVar2),
                             *(LPSTR *)(&stack0xfffffff4 + iVar2));
          *(DWORD *)(&stack0xfffffff4 + iVar2) = DVar6;
          *(DWORD *)(&stack0xfffffff0 + iVar2) = DVar6;
          goto LAB_00402c84;
        }
        *(char **)(&stack0xfffffff4 + iVar2) = "OLDPWD";
        *(char **)(&stack0xfffffff0 + iVar2) = local_809b;
        *(undefined4 *)((int)&uStack_14 + iVar2) = 0x402be5;
        iVar9 = strcmp(*(char **)(&stack0xfffffff0 + iVar2),*(char **)(&stack0xfffffff4 + iVar2));
        if (iVar9 == 0) {
          *(undefined **)(&stack0xfffffff4 + iVar2) = &DAT_00418fe0;
        }
        else {
          *(char **)(&stack0xfffffff4 + iVar2) = "JREHOMEDIR";
          *(char **)(&stack0xfffffff0 + iVar2) = local_809b;
          *(undefined4 *)((int)&uStack_14 + iVar2) = 0x402c06;
          iVar9 = strcmp(*(char **)(&stack0xfffffff0 + iVar2),*(char **)(&stack0xfffffff4 + iVar2));
          if (iVar9 != 0) {
            *(undefined **)(&stack0xfffffff4 + iVar2) = &DAT_0040d29e;
            *(char **)(&stack0xfffffff0 + iVar2) = local_809b;
            *(undefined4 *)((int)&uStack_14 + iVar2) = 0x402c24;
            pcVar7 = strstr(*(char **)(&stack0xfffffff0 + iVar2),
                            *(char **)(&stack0xfffffff4 + iVar2));
            if (pcVar7 == local_809b) {
              *(undefined4 *)(&stack0xfffffff8 + iVar2) = 0x400;
              *(char **)(&stack0xfffffff4 + iVar2) = pcVar4;
              *(char **)(&stack0xfffffff0 + iVar2) = local_809b;
              *(undefined4 *)((int)&uStack_14 + iVar2) = 0x402c3c;
              FUN_004021de(*(char **)(&stack0xfffffff0 + iVar2),
                           *(LPBYTE *)(&stack0xfffffff4 + iVar2));
            }
            else {
              if (local_809b[0] == '\0') {
                *(undefined **)(&stack0xfffffff4 + iVar2) = &DAT_0040d2a3;
                goto LAB_00402c7c;
              }
              *(undefined4 *)(&stack0xfffffff8 + iVar2) = 0x7fff;
              *(undefined1 **)(&stack0xfffffff4 + iVar2) = local_801b;
              *(char **)(&stack0xfffffff0 + iVar2) = local_809b;
              *(undefined4 *)((int)&uStack_14 + iVar2) = 0x402c6b;
              DVar6 = GetEnvironmentVariableA
                                (*(LPCSTR *)(&stack0xfffffff0 + iVar2),
                                 *(LPSTR *)(&stack0xfffffff4 + iVar2),
                                 *(DWORD *)(&stack0xfffffff8 + iVar2));
              if (DVar6 != 0) {
                puVar8 = local_801b;
                goto LAB_00402c78;
              }
            }
            goto LAB_00402c84;
          }
          *(undefined **)(&stack0xfffffff4 + iVar2) = &DAT_00418edc;
        }
      }
LAB_00402c7c:
      *(char **)(&stack0xfffffff0 + iVar2) = param_1;
      *(undefined4 *)((int)&uStack_14 + iVar2) = 0x402c84;
      strcat(*(char **)(&stack0xfffffff0 + iVar2),*(char **)(&stack0xfffffff4 + iVar2));
    }
LAB_00402c84:
    if (DAT_00410a2c != 0) {
      *(char **)(&stack0xfffffffc + iVar2) = pcVar4;
      *(char **)(&stack0xfffffff8 + iVar2) = local_809b;
      *(char **)(&stack0xfffffff4 + iVar2) = "Substitute:\t%s = %s\n";
      *(int *)(&stack0xfffffff0 + iVar2) = DAT_00410a2c;
      *(undefined4 *)((int)&uStack_14 + iVar2) = 0x402ca5;
      fprintf(*(FILE **)(&stack0xfffffff0 + iVar2),*(char **)(&stack0xfffffff4 + iVar2));
    }
    param_2 = pcVar5 + 1;
  } while( true );
}


