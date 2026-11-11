// Function: FUN_0042fba0
// Entry: 0042fba0
// Size: 1345 bytes
// Thunk: false
// External: false


/* WARNING: Removing unreachable block (ram,0x00430049) */
/* WARNING: Removing unreachable block (ram,0x00430026) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl FUN_0042fba0(uint *param_1,uint param_2,undefined4 *param_3,int *param_4)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  HANDLE pvVar8;
  DWORD DVar9;
  int iVar10;
  uint *puVar11;
  char *pcVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  uint local_15c;
  uint local_134 [15];
  undefined4 local_f8 [31];
  undefined4 local_7c [31];
  
  if (param_4 == (int *)0x0) {
    return -2;
  }
  _memset(param_4,0,0x170);
  if (param_3 == (undefined4 *)0x0) {
    _memset(local_f8,0,0x7c);
    puVar13 = local_f8;
    puVar14 = local_7c;
    for (iVar10 = 0x1f; iVar10 != 0; iVar10 = iVar10 + -1) {
      *puVar14 = *puVar13;
      puVar13 = puVar13 + 1;
      puVar14 = puVar14 + 1;
    }
    param_3 = local_7c;
  }
  piVar2 = param_4 + 0x20;
  piVar6 = param_3 + 4;
  if (piVar2 == (int *)0x0) {
    return -2;
  }
  if (piVar6 == (int *)0x0) {
LAB_0042fc5a:
    param_4[0x21] = (int)FUN_00435570;
    param_4[0x22] = (int)&LAB_00435580;
    param_4[0x23] = (int)FUN_004355a0;
  }
  else {
    if (*piVar6 == 0) {
      if (param_3[7] == 0) {
        if ((param_3[5] == 0) && (param_3[6] == 0)) goto LAB_0042fc5a;
        goto LAB_0042fc31;
      }
    }
    else {
LAB_0042fc31:
      if (param_3[7] == 0) {
        return -2;
      }
    }
    if ((param_3[5] == 0) && (param_3[6] == 0)) {
      return -2;
    }
    iVar10 = param_3[5];
    iVar4 = param_3[6];
    iVar5 = param_3[7];
    *piVar2 = *piVar6;
    param_4[0x21] = iVar10;
    param_4[0x22] = iVar4;
    param_4[0x23] = iVar5;
  }
  piVar6 = (int *)*param_3;
  if (piVar6 != (int *)0x0) goto LAB_0042fd1f;
  piVar6 = param_4 + 0xf;
  if (piVar6 != (int *)0x0) {
    _memset(piVar6,0,0x38);
    piVar1 = param_4 + 0x18;
    if (piVar1 != (int *)0x0) {
      if (*piVar2 == 0) {
        if (param_4[0x23] == 0) {
          if ((param_4[0x21] == 0) && (param_4[0x22] == 0)) {
            *piVar1 = 0;
            param_4[0x19] = (int)FUN_00435570;
            param_4[0x1a] = (int)&LAB_00435580;
            param_4[0x1b] = (int)FUN_004355a0;
            goto LAB_0042fcfd;
          }
          goto LAB_0042fce5;
        }
      }
      else {
LAB_0042fce5:
        if (param_4[0x23] == 0) goto LAB_0042fcfd;
      }
      if ((param_4[0x21] != 0) || (param_4[0x22] != 0)) {
        *piVar1 = *piVar2;
        param_4[0x19] = param_4[0x21];
        param_4[0x1a] = param_4[0x22];
        param_4[0x1b] = param_4[0x23];
      }
    }
LAB_0042fcfd:
    if (param_4 + 0x1c == (int *)0x0) {
      FID_conflict___assert
                (L"0",
                 L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h",
                 0x40bc);
    }
    else {
      pvVar8 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,0,1,(LPCSTR)0x0);
      param_4[0x1c] = (int)pvVar8;
      if (pvVar8 == (HANDLE)0x0) {
        DVar9 = GetLastError();
        iVar10 = FUN_00435680(DVar9);
      }
      else {
        iVar10 = 0;
      }
      if (iVar10 == 0) goto LAB_0042fd1f;
    }
  }
  piVar6 = (int *)0x0;
LAB_0042fd1f:
  param_4[0xe] = (int)piVar6;
  param_4[0x1d] = param_3[1];
  param_4[0x1e] = param_3[2];
  param_4[0x1f] = param_3[3];
  iVar10 = FUN_00441870((int)param_4);
  if (iVar10 == 0) {
    uVar7 = 0;
    do {
      local_134[uVar7] = uVar7 + _DAT_0050c3a0;
      local_134[uVar7 + 1] = uVar7 + _UNK_0050c3a4;
      local_134[uVar7 + 2] = uVar7 + _UNK_0050c3a8;
      local_134[uVar7 + 3] = uVar7 + _UNK_0050c3ac;
      uVar7 = uVar7 + 4;
    } while (uVar7 < 0xc);
    for (; uVar7 < 0xf; uVar7 = uVar7 + 1) {
      local_134[uVar7] = uVar7;
    }
    puVar11 = local_134;
    uVar7 = 0xf;
    if (param_1 != (uint *)0x0) {
      puVar11 = param_1;
      uVar7 = param_2;
    }
    if (puVar11 == (uint *)0x0) {
      FID_conflict___assert
                (L"pBackendsToIterate != ((void *)0)",
                 L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h",
                 0xa137);
    }
    local_15c = 0;
    if (uVar7 != 0) {
      do {
        uVar3 = puVar11[local_15c];
        _memset(param_4,0,0x34);
        switch(uVar3) {
        case 0:
          *param_4 = (int)&LAB_0043cfe0;
          break;
        case 1:
          *param_4 = (int)&LAB_0043f990;
          break;
        case 9:
          *param_4 = (int)&LAB_00440f60;
          break;
        case 0xd:
          iVar10 = param_3[0x13];
          iVar4 = param_3[0x14];
          iVar5 = param_3[0x15];
          *param_4 = param_3[0x12];
          param_4[1] = iVar10;
          param_4[2] = iVar4;
          param_4[3] = iVar5;
          iVar10 = param_3[0x17];
          iVar4 = param_3[0x18];
          iVar5 = param_3[0x19];
          param_4[4] = param_3[0x16];
          param_4[5] = iVar10;
          param_4[6] = iVar4;
          param_4[7] = iVar5;
          iVar10 = param_3[0x1b];
          iVar4 = param_3[0x1c];
          iVar5 = param_3[0x1d];
          param_4[8] = param_3[0x1a];
          param_4[9] = iVar10;
          param_4[10] = iVar4;
          param_4[0xb] = iVar5;
          param_4[0xc] = param_3[0x1e];
          break;
        case 0xe:
          *param_4 = (int)FUN_00439040;
        }
        if (*param_4 == 0) {
          if (uVar3 == 0xd) {
LAB_0042fed3:
            pcVar12 = "Failed to initialize %s backend.\n";
          }
          else {
LAB_0042fee1:
            pcVar12 = "%s backend is disabled.\n";
          }
        }
        else {
          FUN_004277a0(param_4[0xe],4,0x52b858);
          if ((code *)*param_4 == FUN_00439040) {
            iVar10 = FUN_00439040((int)param_4,param_3,param_4);
          }
          else {
            iVar10 = (*(code *)*param_4)();
          }
          if (iVar10 == 0) {
            if (param_4 + 0x24 == (int *)0x0) {
              FID_conflict___assert
                        (L"0",
                         L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h"
                         ,0x40bc);
LAB_0042ff6c:
              FUN_004277a0(param_4[0xe],2,0x530248);
            }
            else {
              pvVar8 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,0,1,(LPCSTR)0x0);
              param_4[0x24] = (int)pvVar8;
              if (pvVar8 == (HANDLE)0x0) {
                DVar9 = GetLastError();
                iVar10 = FUN_00435680(DVar9);
                if (iVar10 != 0) goto LAB_0042ff6c;
              }
            }
            if (param_4 + 0x25 == (int *)0x0) {
              FID_conflict___assert
                        (L"0",
                         L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h"
                         ,0x40bc);
              iVar10 = -2;
            }
            else {
              pvVar8 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,0,1,(LPCSTR)0x0);
              param_4[0x25] = (int)pvVar8;
              if (pvVar8 == (HANDLE)0x0) {
                DVar9 = GetLastError();
                iVar10 = FUN_00435680(DVar9);
              }
              else {
                iVar10 = 0;
              }
              if (iVar10 == 0) goto LAB_0042ffe1;
            }
            FUN_004277a0(param_4[0xe],2,0x5302b0);
LAB_0042ffe1:
            FUN_004277a0(param_4[0xe],4,0x52b690);
            FUN_004277a0(param_4[0xe],4,0x52b400);
            FUN_004277a0(param_4[0xe],4,0x52b48c);
            iVar4 = cpuid_Version_info(1);
            iVar5 = cpuid_Extended_Feature_Enumeration_info(7);
            if (((*(uint *)(iVar4 + 0xc) & 0x8000000) != 0) && ((*(uint *)(iVar5 + 4) & 0x20) != 0))
            {
              xinuse(0);
            }
            FUN_004277a0(param_4[0xe],4,0x52b47c);
            FUN_004277a0(param_4[0xe],4,0x52b46c);
            param_4[0xd] = uVar3;
            return iVar10;
          }
          if (iVar10 == -0xd0) goto LAB_0042fee1;
          if (uVar3 < 0xf) goto LAB_0042fed3;
          pcVar12 = "Failed to initialize %s backend.\n";
        }
        FUN_004277a0(param_4[0xe],4,(int)pcVar12);
        local_15c = local_15c + 1;
      } while (local_15c < uVar7);
    }
    _memset(param_4,0,0x170);
    iVar10 = -0xcb;
  }
  return iVar10;
}


