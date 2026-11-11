// Function: FUN_004023b8
// Entry: 004023b8
// Size: 488 bytes
// Thunk: false
// External: false


/* WARNING: Unable to track spacebase fully for stack */

void __cdecl FUN_004023b8(char *param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int extraout_ECX;
  int iVar5;
  char *pcVar6;
  size_t sStackY_40;
  uint local_30;
  undefined1 *local_2c;
  char *local_28;
  char *local_24;
  int local_20;
  
  sStackY_40 = 0x4023d4;
  strcpy(param_1,"");
  if ((param_2 != (char *)0x0) && (*param_2 != '\0')) {
    local_20 = 0;
    local_28 = param_2;
    while( true ) {
      sStackY_40 = 0x402402;
      iVar3 = FUN_00402356(local_28);
      if (iVar3 < 1) break;
      sStackY_40 = 0x40241d;
      local_2c = &stack0xffffffc4;
      uVar4 = FUN_0040b3d0();
      iVar2 = -uVar4;
      local_24 = (char *)((int)&local_30 + iVar2);
      pcVar6 = (char *)((int)&local_30 + iVar2);
      for (iVar5 = extraout_ECX; iVar5 != 0; iVar5 = iVar5 + -1) {
        *pcVar6 = '\0';
        pcVar6 = pcVar6 + 1;
      }
      *(int *)(&stack0xffffffcc + iVar2) = iVar3;
      *(char **)(&stack0xffffffc8 + iVar2) = local_28;
      *(char **)(&stack0xffffffc4 + iVar2) = local_24;
      *(undefined4 *)((int)&sStackY_40 + iVar2) = 0x402440;
      strncpy(*(char **)(&stack0xffffffc4 + iVar2),*(char **)(&stack0xffffffc8 + iVar2),
              *(size_t *)(&stack0xffffffcc + iVar2));
      if (local_20 != 0) {
        if (local_20 < 3) {
LAB_00402476:
          *(undefined **)(&stack0xffffffc8 + iVar2) = &DAT_0040d1cd;
          *(char **)(&stack0xffffffc4 + iVar2) = param_1;
          *(undefined4 *)((int)&sStackY_40 + iVar2) = 0x402486;
          strcat(*(char **)(&stack0xffffffc4 + iVar2),*(char **)(&stack0xffffffc8 + iVar2));
          uVar4 = 0;
          do {
            iVar5 = -1;
            pcVar6 = local_24;
            do {
              if (iVar5 == 0) break;
              iVar5 = iVar5 + -1;
              cVar1 = *pcVar6;
              pcVar6 = pcVar6 + 1;
            } while (cVar1 != '\0');
            if (iVar5 + 5U <= uVar4) goto LAB_004024f4;
            local_30 = uVar4;
            *(undefined **)(&stack0xffffffc8 + iVar2) = &DAT_0040d1cf;
            *(char **)(&stack0xffffffc4 + iVar2) = param_1;
            *(undefined4 *)((int)&sStackY_40 + iVar2) = 0x4024ac;
            strcat(*(char **)(&stack0xffffffc4 + iVar2),*(char **)(&stack0xffffffc8 + iVar2));
            uVar4 = local_30 + 1;
          } while( true );
        }
        if (local_20 == 3) {
          *(undefined **)(&stack0xffffffc8 + iVar2) = &DAT_0040d1d1;
          *(char **)(&stack0xffffffc4 + iVar2) = param_1;
          *(undefined4 *)((int)&sStackY_40 + iVar2) = 0x4024c8;
          strcat(*(char **)(&stack0xffffffc4 + iVar2),*(char **)(&stack0xffffffc8 + iVar2));
          uVar4 = 0;
          do {
            iVar5 = -1;
            pcVar6 = local_24;
            do {
              if (iVar5 == 0) break;
              iVar5 = iVar5 + -1;
              cVar1 = *pcVar6;
              pcVar6 = pcVar6 + 1;
            } while (cVar1 != '\0');
            if (iVar5 + 5U <= uVar4) goto LAB_004024f4;
            local_30 = uVar4;
            *(undefined **)(&stack0xffffffc8 + iVar2) = &DAT_0040d1cf;
            *(char **)(&stack0xffffffc4 + iVar2) = param_1;
            *(undefined4 *)((int)&sStackY_40 + iVar2) = 0x4024ee;
            strcat(*(char **)(&stack0xffffffc4 + iVar2),*(char **)(&stack0xffffffc8 + iVar2));
            uVar4 = local_30 + 1;
          } while( true );
        }
        if (DAT_00410a2c != 0) {
          *(int *)(&stack0xffffffc8 + iVar2) = DAT_00410a2c;
          *(char **)(&stack0xffffffc4 + iVar2) =
               "Warning:\tformatJavaVersion() too many parts added.\n";
          *(undefined4 *)((int)&sStackY_40 + iVar2) = 0x40254a;
          fputs(*(char **)(&stack0xffffffc4 + iVar2),*(FILE **)(&stack0xffffffc8 + iVar2));
        }
        break;
      }
      if ((iVar3 != 1) || (*local_24 != '1')) {
        *(undefined **)(&stack0xffffffc8 + iVar2) = &DAT_0040d1cb;
        *(char **)(&stack0xffffffc4 + iVar2) = param_1;
        *(undefined4 *)((int)&sStackY_40 + iVar2) = 0x402467;
        strcpy(*(char **)(&stack0xffffffc4 + iVar2),*(char **)(&stack0xffffffc8 + iVar2));
        local_20 = 1;
        goto LAB_00402476;
      }
LAB_004024f4:
      pcVar6 = local_24;
      *(char **)(&stack0xffffffc4 + iVar2) = param_1;
      *(char **)(&stack0xffffffc8 + iVar2) = pcVar6;
      *(undefined4 *)((int)&sStackY_40 + iVar2) = 0x402503;
      strcat(*(char **)(&stack0xffffffc4 + iVar2),*(char **)(&stack0xffffffc8 + iVar2));
      uVar4 = 0xffffffff;
      local_20 = local_20 + 1;
      local_28 = local_28 + iVar3 + 1;
      pcVar6 = param_2;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      if (param_2 + (~uVar4 - 1) <= local_28) break;
    }
    for (; local_20 < 3; local_20 = local_20 + 1) {
      sStackY_40 = 0x402563;
      strcat(param_1,".");
      sStackY_40 = 0x402573;
      strcat(param_1,"0");
      sStackY_40 = 0x402583;
      strcat(param_1,"0");
      sStackY_40 = 0x402593;
      strcat(param_1,"0");
    }
  }
  return;
}


