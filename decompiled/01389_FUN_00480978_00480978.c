// Function: FUN_00480978
// Entry: 00480978
// Size: 710 bytes
// Thunk: false
// External: false


void __cdecl FUN_00480978(int *param_1,undefined4 *param_2)

{
  char cVar1;
  wchar_t wVar2;
  errno_t eVar3;
  uint *puVar4;
  int *piVar5;
  __acrt_ptd *p_Var6;
  int iVar7;
  wchar_t *pwVar8;
  char *pcVar9;
  uint *puVar10;
  uint *puVar11;
  char *pcVar12;
  uint uVar13;
  uint *puVar14;
  int *local_28;
  wchar_t *local_24;
  char *local_20;
  char *local_1c;
  char local_15;
  undefined2 local_14;
  undefined4 local_10;
  undefined2 local_c;
  undefined1 local_a;
  uint local_8;
  
  local_8 = DAT_0053fbc0 ^ (uint)&stack0xfffffffc;
  local_28 = param_1;
  *param_2 = 0;
  if (param_1 != (int *)0x0) {
    _local_14 = 0x74737953;
    local_10 = 0x6f526d65;
    local_c = 0x746f;
    local_a = 0;
    local_24 = (wchar_t *)0x0;
    eVar3 = FID_conflict___dupenv_s(&local_24,(size_t *)0x0,&local_14);
    if (eVar3 == 0) {
      if (local_24 == (wchar_t *)0x0) {
        local_20 = (char *)0xb;
      }
      else {
        pwVar8 = local_24;
        do {
          wVar2 = *pwVar8;
          pwVar8 = (wchar_t *)((int)pwVar8 + 1);
        } while ((char)wVar2 != '\0');
        local_20 = (char *)((int)pwVar8 + (0xc - (int)((int)local_24 + 1)));
      }
      local_1c = (char *)0x2;
      iVar7 = *param_1;
      piVar5 = param_1;
      while (iVar7 != 0) {
        pcVar9 = (char *)*piVar5;
        piVar5 = piVar5 + 1;
        pcVar12 = pcVar9 + 1;
        do {
          cVar1 = *pcVar9;
          pcVar9 = pcVar9 + 1;
        } while (cVar1 != '\0');
        local_1c = pcVar9 + (int)(local_1c + (1 - (int)pcVar12));
        iVar7 = *piVar5;
      }
      puVar4 = (uint *)FUN_004c43a0();
      if (puVar4 == (uint *)0x0) {
        FUN_004247be((LPVOID)0x0);
      }
      else {
        cVar1 = (char)*puVar4;
        puVar10 = puVar4;
        while (puVar11 = puVar10, cVar1 != '=') {
          do {
            uVar13 = *puVar10;
            puVar10 = (uint *)((int)puVar10 + 1);
          } while ((char)uVar13 != '\0');
          cVar1 = *(char *)puVar10;
        }
        do {
          if (((*(char *)((int)puVar11 + 1) == '\0') || (*(char *)((int)puVar11 + 2) != ':')) ||
             (*(char *)((int)puVar11 + 3) != '=')) break;
          puVar11 = puVar11 + 1;
          do {
            uVar13 = *puVar11;
            puVar11 = (uint *)((int)puVar11 + 1);
          } while ((char)uVar13 != '\0');
        } while (*(char *)puVar11 == '=');
        uVar13 = (int)puVar11 - (int)puVar10;
        for (piVar5 = param_1; (char *)*piVar5 != (char *)0x0; piVar5 = piVar5 + 1) {
          pcVar12 = (char *)&local_14;
          do {
            cVar1 = *pcVar12;
            pcVar12 = pcVar12 + 1;
          } while (cVar1 != '\0');
          iVar7 = __strnicmp((char *)*piVar5,(char *)&local_14,(int)pcVar12 - ((int)&local_14 + 1));
          if (iVar7 == 0) {
            local_15 = '\x01';
            local_1c = local_1c + uVar13;
            goto LAB_00480aed;
          }
        }
        local_15 = '\0';
        local_1c = local_1c + uVar13 + (int)local_20;
LAB_00480aed:
        puVar11 = __calloc_base((uint)local_1c,1);
        if (puVar11 != (uint *)0x0) {
          puVar14 = puVar11;
          if (uVar13 != 0) {
            FUN_0044c490(puVar11,puVar10,uVar13);
            local_1c = local_1c + -uVar13;
            puVar14 = (uint *)((int)puVar11 + uVar13);
          }
          iVar7 = *param_1;
          while (iVar7 != 0) {
            iVar7 = FUN_0047faad((char *)puVar14,(int)local_1c,iVar7);
            if (iVar7 != 0) goto LAB_00480c32;
            pcVar9 = (char *)*local_28;
            pcVar12 = pcVar9 + 1;
            do {
              cVar1 = *pcVar9;
              pcVar9 = pcVar9 + 1;
            } while (cVar1 != '\0');
            local_1c = local_1c + -(int)(pcVar9 + (1 - (int)pcVar12));
            puVar14 = (uint *)((int)puVar14 + (int)(pcVar9 + (1 - (int)pcVar12)));
            local_28 = local_28 + 1;
            iVar7 = *local_28;
          }
          if (local_15 == '\0') {
            iVar7 = FUN_0047faad((char *)puVar14,(int)local_20,(int)&local_14);
            if (((iVar7 != 0) ||
                (iVar7 = FUN_004807b7((char *)puVar14,(int)local_20,0x50e34c), iVar7 != 0)) ||
               ((local_24 != (wchar_t *)0x0 &&
                (iVar7 = FUN_004807b7((char *)puVar14,(int)local_20,(int)local_24), iVar7 != 0))))
            goto LAB_00480c32;
            puVar14 = (uint *)((int)puVar14 + (int)local_20);
          }
          if (puVar14 == puVar11) {
            *(char *)puVar14 = '\0';
            puVar14 = (uint *)((int)puVar14 + 1);
          }
          *(char *)puVar14 = '\0';
          *param_2 = puVar11;
          FUN_004247be((LPVOID)0x0);
          FUN_004247be(puVar4);
          FUN_004247be(local_24);
          goto LAB_00480c25;
        }
        ___acrt_errno_map_os_error(0xe);
        p_Var6 = FUN_0042470e();
        *(undefined4 *)p_Var6 = 0xc;
        FUN_004247be((LPVOID)0x0);
        FUN_004247be(puVar4);
      }
    }
    else {
      if (eVar3 == 0x16) {
LAB_00480c32:
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      FUN_0042470e();
    }
    FUN_004247be(local_24);
  }
LAB_00480c25:
  FUN_004257be(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


