// Function: FUN_00401180
// Entry: 00401180
// Size: 991 bytes
// Thunk: false
// External: false


/* WARNING: Unable to track spacebase fully for stack */

void FUN_00401180(void)

{
  code *pcVar1;
  LPSTR pCVar2;
  uint uVar3;
  int *piVar4;
  UINT uExitCode;
  int iVar5;
  char *pcVar6;
  int iVar7;
  uint uVar8;
  char *pcVar9;
  char cVar11;
  char *pcVar12;
  byte bVar13;
  LPSTR pCVar14;
  undefined4 local_70;
  char acStack_58 [8];
  undefined1 *local_50;
  char *local_4c;
  uint local_48;
  int local_44;
  uint local_40;
  char **local_30;
  _startupinfo local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  char *pcVar10;
  
  if (PTR_tls_callback_0_0040d874 != (undefined *)0x0) {
    local_70 = 0x4011ab;
    (*(code *)PTR_tls_callback_0_0040d874)();
  }
  local_70 = 0x4011ba;
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)&LAB_00401000);
  local_70 = 0x4011c2;
  FUN_00404be0();
  local_70 = 0x4011c7;
  FUN_00404bd0();
  if ((DAT_0040c004 & 2) == 0) {
    local_2c.newmode = 0;
    local_70 = 0x401541;
    __getmainargs(&DAT_00410004,(char ***)&DAT_00410000,&local_30,DAT_0040c004 & 1,&local_2c);
  }
  else {
    local_70 = 0x4011d9;
    pCVar2 = GetCommandLineA();
    iVar7 = -1;
    pCVar14 = pCVar2;
    do {
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      cVar11 = *pCVar14;
      pCVar14 = pCVar14 + 1;
    } while (cVar11 != '\0');
    local_70 = 0x4011f5;
    local_50 = &stack0xffffff94;
    uVar3 = FUN_0040b3d0();
    iVar7 = -uVar3;
    local_4c = acStack_58 + iVar7;
    local_20 = 0;
    local_40 = 0;
    local_44 = 0;
    uVar3 = 0;
    local_48 = (-(uint)((DAT_0040c004 & 0x40) == 0) & 0xffffc000) + 0x4010;
    pcVar6 = acStack_58 + iVar7;
LAB_00401235:
    cVar11 = *pCVar2;
    uVar8 = (uint)cVar11;
    if (uVar8 != 0) {
LAB_00401247:
      pCVar2 = pCVar2 + 1;
      if (cVar11 == '?') {
LAB_00401500:
        bVar13 = 0;
        goto joined_r0x004012ec;
      }
      if ('?' < cVar11) {
        if (cVar11 == '\\') {
          uVar3 = uVar3 + 1;
          goto LAB_00401235;
        }
        if (cVar11 == '\x7f') goto LAB_00401500;
        if (cVar11 != '[') goto LAB_00401422;
        bVar13 = ((byte)(DAT_0040c004 >> 5) ^ 1) & 1;
joined_r0x004012ec:
        if (uVar3 != 0) {
          pcVar12 = pcVar6 + uVar3;
          pcVar10 = pcVar6;
          do {
            pcVar9 = pcVar10 + 1;
            *pcVar10 = '\\';
            pcVar6 = pcVar12;
            pcVar10 = pcVar9;
          } while (pcVar9 != pcVar12);
        }
        if (((local_40 != 0) || (bVar13 != 0)) || (uVar8 == 0x7f)) {
          *pcVar6 = '\x7f';
          pcVar6 = pcVar6 + 1;
        }
        *pcVar6 = cVar11;
        cVar11 = *pCVar2;
        pcVar6 = pcVar6 + 1;
        uVar3 = 0;
        uVar8 = (uint)cVar11;
        if (uVar8 == 0) goto LAB_00401336;
        goto LAB_00401247;
      }
      iVar5 = (int)uVar3 >> 1;
      if (cVar11 == '\'') {
        if ((DAT_0040c004 & 0x10) == 0) goto LAB_00401422;
        pcVar10 = pcVar6;
        if (iVar5 != 0) {
          pcVar12 = pcVar6;
          do {
            pcVar9 = pcVar12 + 1;
            *pcVar12 = '\\';
            pcVar12 = pcVar9;
            pcVar10 = pcVar6 + iVar5;
          } while (pcVar9 != pcVar6 + iVar5);
        }
        if (((uVar3 & 1) != 0) || (local_40 == 0x22)) {
          pcVar6 = pcVar10 + 1;
          uVar3 = 0;
          *pcVar10 = '\'';
          local_44 = 1;
          goto LAB_00401235;
        }
      }
      else {
        if (cVar11 == '*') goto LAB_00401500;
        if (cVar11 != '\"') goto LAB_00401422;
        if (iVar5 != 0) {
          pcVar12 = pcVar6 + iVar5;
          pcVar10 = pcVar6;
          do {
            pcVar9 = pcVar10 + 1;
            *pcVar10 = '\\';
            pcVar10 = pcVar9;
            pcVar6 = pcVar12;
          } while (pcVar9 != pcVar12);
        }
        if (((uVar3 & 1) != 0) || (pcVar10 = pcVar6, local_40 == 0x27)) {
          uVar3 = 0;
          *pcVar6 = '\"';
          local_44 = 1;
          pcVar6 = pcVar6 + 1;
          goto LAB_00401235;
        }
      }
      local_40 = local_40 ^ uVar8;
      uVar3 = 0;
      local_44 = 1;
      pcVar6 = pcVar10;
      goto LAB_00401235;
    }
LAB_00401336:
    if (uVar3 != 0) {
      pcVar12 = pcVar6 + uVar3;
      pcVar10 = pcVar6;
      do {
        pcVar9 = pcVar10 + 1;
        *pcVar10 = '\\';
        pcVar6 = pcVar12;
        pcVar10 = pcVar9;
      } while (pcVar9 != pcVar12);
    }
    if ((local_44 != 0) || (local_4c < pcVar6)) {
      *pcVar6 = '\0';
      *(_startupinfo **)(&stack0xffffffa0 + iVar7) = &local_2c;
      *(undefined4 *)(&stack0xffffff9c + iVar7) = 0;
      *(uint *)(&stack0xffffff98 + iVar7) = local_48;
      *(char **)(&stack0xffffff94 + iVar7) = local_4c;
      *(undefined4 *)((int)&local_70 + iVar7) = 0x40137a;
      FUN_00405e70(*(char **)(&stack0xffffff94 + iVar7),*(uint *)(&stack0xffffff98 + iVar7),
                   *(undefined4 *)(&stack0xffffff9c + iVar7),*(int **)(&stack0xffffffa0 + iVar7));
    }
    DAT_00410004 = local_28;
    DAT_00410000 = local_24;
  }
  pcVar1 = _iob_exref;
  if (DAT_00410038 != 0) {
    DAT_0040c008 = DAT_00410038;
    local_70 = 0x4013b0;
    _setmode(*(int *)(_iob_exref + 0x10),DAT_00410038);
    local_70 = 0x4013c4;
    _setmode(*(int *)(pcVar1 + 0x30),DAT_00410038);
    local_70 = 0x4013d8;
    _setmode(*(int *)(pcVar1 + 0x50),DAT_00410038);
  }
  local_70 = 0x4013dd;
  piVar4 = (int *)__p__fmode();
  *piVar4 = DAT_0040c008;
  local_70 = 0x4013ea;
  FUN_00404e00();
  local_70 = 0x4013f2;
  FUN_00405060();
  local_70 = 0x4013f7;
  __p__environ();
  local_70 = 0x401413;
  uExitCode = FUN_0040ba30();
  local_70 = 0x40141a;
  _cexit();
                    /* WARNING: Subroutine does not return */
  local_70 = 0x401422;
  ExitProcess(uExitCode);
LAB_00401422:
  pcVar10 = pcVar6 + uVar3;
  pcVar12 = pcVar6;
  if (uVar3 != 0) {
    do {
      pcVar9 = pcVar6 + 1;
      *pcVar6 = '\\';
      pcVar6 = pcVar9;
      pcVar12 = pcVar10;
    } while (pcVar9 != pcVar10);
  }
  if (local_40 == 0) {
    *(uint *)(&stack0xffffff94 + iVar7) = uVar8;
    *(undefined4 *)((int)&local_70 + iVar7) = 0x40144a;
    iVar5 = isspace(*(int *)(&stack0xffffff94 + iVar7));
    if (iVar5 != 0) {
      if ((local_44 == 0) && (pcVar12 <= local_4c)) {
        uVar3 = 0;
        pcVar6 = pcVar12;
      }
      else {
        *pcVar12 = '\0';
        *(_startupinfo **)(&stack0xffffffa0 + iVar7) = &local_2c;
        *(undefined4 *)(&stack0xffffff9c + iVar7) = 0;
        *(uint *)(&stack0xffffff98 + iVar7) = local_48;
        pcVar6 = local_4c;
        *(char **)(&stack0xffffff94 + iVar7) = local_4c;
        *(undefined4 *)((int)&local_70 + iVar7) = 0x401481;
        FUN_00405e70(*(char **)(&stack0xffffff94 + iVar7),*(uint *)(&stack0xffffff98 + iVar7),
                     *(undefined4 *)(&stack0xffffff9c + iVar7),*(int **)(&stack0xffffffa0 + iVar7));
        uVar3 = 0;
        local_48 = local_48 | 1;
        local_44 = 0;
      }
      goto LAB_00401235;
    }
  }
  pcVar6 = pcVar12 + 1;
  uVar3 = 0;
  *pcVar12 = cVar11;
  goto LAB_00401235;
}


